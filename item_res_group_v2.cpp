	/*---------------------------------------------*\
	|				Coded By Obitus					|
	|				April 02, 2016					|
	|			Tested on TrinityCore 3.3.5			|
	|   	Added distance check (Thanks to Phil)	|
	|	 This is the 2nd version - without gossip	|
	\*---------------------------------------------*/

//I was insipired by http://www.wowhead.com/spell=83968/mass-resurrection

/*
-- Execute this query in WORLD DATABASE
INSERT INTO `item_template` (`entry`, `class`, `SoundOverrideSubclass`, `name`, `displayid`, `Quality`, `Flags`, `FlagsExtra`, `BuyCount`, `BuyPrice`, `SellPrice`, `AllowableClass`, `AllowableRace`, `RequiredLevel`, `maxcount`, `stackable`, `delay`, `spellid_1`, `spellcooldown_1`, `spellcategorycooldown_1`, `spellcooldown_2`, `spellcategorycooldown_2`, `spellcooldown_3`, `spellcategorycooldown_3`, `spellcooldown_4`, `spellcategorycooldown_4`, `spellcooldown_5`, `spellcategorycooldown_5`, `description`, `RequiredDisenchantSkill`, `ScriptName`)
VALUES (192000, 15, -1, 'Mass Resurrection', 67105, 7, 0, 0, 1, 228800000, 34, -1, -1, 28, 1, 1, 1000, 14093, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, '|cffffffff100 yd range\r\n|cffffd400Brings all dead party and raid members back to life with 35% health and 35% mana. Cannot be cast in combat or while in a battleground or arena.\r\nYou can use this item once every 15 minutes.', -1, 'item_res_group');

*/


#include "ScriptMgr.h"
#include "Player.h"
#include "Group.h"
#include "ObjectAccessor.h"
#include "ScriptedGossip.h"
#include "WorldSession.h"

class item_res_group : public ItemScript
{
public:
	item_res_group() : ItemScript("item_res_group") { }

	bool DistanceIsValid(Position* playerWhoUsesTheItem, Position* deadPlayersInGroup)
	{
		if (std::abs(deadPlayersInGroup->GetPositionX() - playerWhoUsesTheItem->GetPositionX()) <= 91.44) //91.44 meters = 100 yards
			return true;
		return false;
	}

	bool OnUse(Player* playerWhoUsesTheItem, Item* item, SpellCastTargets const& /*targets*/)
	{
		Group* group = playerWhoUsesTheItem->GetGroup();
		Group::MemberSlotList const &members = group->GetMemberSlots();

		if (playerWhoUsesTheItem->HasAura(38910)) //Fel Weakness 
		{
			playerWhoUsesTheItem->GetSession()->SendNotification("Usted debe esperar 15 minutos para usar este objeto otra vez");
			return false;
		}

		if (!playerWhoUsesTheItem->GetGroup())
		{
			playerWhoUsesTheItem->GetSession()->SendNotification("Usted no está en un grupo!");
			return false;
		}
		/* //What if the leader is dead?
		if (playerWhoUsesTheItem->GetGroup()->GetLeaderGUID() != playerWhoUsesTheItem->GetGUID())
		{
			playerWhoUsesTheItem->GetSession()->SendNotification("You are not the group leader!");
			return false;
		}
		*/
		if (playerWhoUsesTheItem->InBattleground())
		{
			playerWhoUsesTheItem->GetSession()->SendNotification("Usted no puede usar este objeto en un campo de batalla!");
			return false;
		}

		if (playerWhoUsesTheItem->InArena())
		{
			playerWhoUsesTheItem->GetSession()->SendNotification("Usted no puede usar este objeto en una Arena!");
			return false;
		}

		if (playerWhoUsesTheItem->IsInCombat())
		{
			playerWhoUsesTheItem->GetSession()->SendNotification("Usted no puede usar este objeto en combate!");
			return false;
		}
		
		else
		{
			for (Group::MemberSlotList::const_iterator itr = members.begin(); itr != members.end(); ++itr)
			{
				Group::MemberSlot const &slot = *itr;
				Player* deadPlayersInGroup = ObjectAccessor::FindPlayer((*itr).guid);

				//skip if player/s is/are offline //--This check is mandatory. the server will crash without it
				if (!deadPlayersInGroup || deadPlayersInGroup->GetSession()->PlayerDisconnected())
				{
					playerWhoUsesTheItem->CLOSE_GOSSIP_MENU();
				}

				if (deadPlayersInGroup && deadPlayersInGroup->GetSession() && deadPlayersInGroup->isDead() && playerWhoUsesTheItem->GetSession() && DistanceIsValid(playerWhoUsesTheItem, deadPlayersInGroup))
				{
					deadPlayersInGroup->ResurrectPlayer(0.35f, false); //35% hp and mana, don't apply Resurrection Sickness
					deadPlayersInGroup->CastSpell(deadPlayersInGroup, 48171, true); //Visual Spell Resurrect (priest)
					deadPlayersInGroup->DurabilityRepairAll(0, 0, false); //Repair All - upon resurrection
					playerWhoUsesTheItem->CastSpell(playerWhoUsesTheItem, 38910, true); //Fel Weakness //Cast a debuff on player To prevent the item being used over and over again	
				}
			}
		}
		return true;
	}
};

void AddSC_item_res_group()
{
	new item_res_group;
}
