/*
INSERT INTO `creature_template` (`entry`,`difficulty_entry_1`,`difficulty_entry_2`,`difficulty_entry_3`,`KillCredit1`,`KillCredit2`,`modelid1`,`modelid2`,`modelid3`,`modelid4`,`name`,`subname`,`IconName`,`gossip_menu_id`,`minlevel`,`maxlevel`,`exp`,`faction`,`npcflag`,`speed_walk`,`speed_run`,`scale`,`rank`,`mindmg`,`maxdmg`,`dmgschool`,`attackpower`,`dmg_multiplier`,`baseattacktime`,`rangeattacktime`,`unit_class`,`unit_flags`,`unit_flags2`,`dynamicflags`,`family`,`trainer_type`,`trainer_spell`,`trainer_class`,`trainer_race`,`minrangedmg`,`maxrangedmg`,`rangedattackpower`,`type`,`type_flags`,`lootid`,`pickpocketloot`,`skinloot`,`resistance1`,`resistance2`,`resistance3`,`resistance4`,`resistance5`,`resistance6`,`spell1`,`spell2`,`spell3`,`spell4`,`spell5`,`spell6`,`spell7`,`spell8`,`PetSpellDataId`,`VehicleId`,`mingold`,`maxgold`,`AIName`,`MovementType`,`InhabitType`,`HoverHeight`,`Health_mod`,`Mana_mod`,`Armor_mod`,`RacialLeader`,`questItem1`,`questItem2`,`questItem3`,`questItem4`,`questItem5`,`questItem6`,`movementId`,`RegenHealth`,`mechanic_immune_mask`,`flags_extra`,`ScriptName`,`VerifiedBuild`) VALUES (151516, 0, 0, 0, 0, 0, 23445, 0, 0, 0, 'Name', 'Subname', '', 0, 80, 80, 0, 35, 129, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2000, 2000, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 'hk_kills_shop', 1);
*/

class honorable_kills_shop : public CreatureScript
{
public:
	honorable_kills_shop() : CreatureScript("hk_kills_shop") { }

	bool OnGossipHello(Player* player, Creature* creature)
	{
		player->ADD_GOSSIP_ITEM(4, "[Lifetime Kills are required in order to view my goods. Make sure you have it, or you won't be able to view nor purchase anything!]", GOSSIP_SENDER_MAIN, 1001);
		player->ADD_GOSSIP_ITEM(4, "[5k kills] Show me what you got!", GOSSIP_SENDER_MAIN, 1002);
		player->ADD_GOSSIP_ITEM(4, "[1k kills] Show me what you got!", GOSSIP_SENDER_MAIN, 1003);
		player->SEND_GOSSIP_MENU(1, creature->GetGUID());
		return true;
	}

	bool OnGossipSelect(Player* player, Creature* pCreature, uint32 /*uiSender*/, uint32 action)
	{
		char allow[500]; //have enough kills, can view shop
		sprintf(allow, "You have enough kills, therefore you may view my goods.");
		char deny[500]; //does not have enough kills, may not view shop
		sprintf(deny, "I'm sorry, %s, but you do not have enough Lifetime Kills, therefore I cannot allow you to view my goods.", player->GetSession()->GetPlayerName().c_str());
		player->PlayerTalkClass->ClearMenus();
		switch (action)
		{
			///////////START ACTIONS//////////////////


		case 1002:
			if (player->GetUInt32Value(PLAYER_FIELD_LIFETIME_HONORABLE_KILLS) >= 5000) //more or equal kills (5000) acá el honor
			{
				player->GetSession()->SendListInventory(pCreature->GetGUID(), 1);
				pCreature->Whisper(allow, LANG_UNIVERSAL, player, true);
					player->CLOSE_GOSSIP_MENU();
			}
			else
			{
				pCreature->Whisper(deny, LANG_UNIVERSAL, player, true);
				player->CLOSE_GOSSIP_MENU();
			}
			break;

		case 1001:
			player->CLOSE_GOSSIP_MENU();
			break;

		case 1003:
			if (player->GetUInt32Value(PLAYER_FIELD_LIFETIME_HONORABLE_KILLS) >= 1000) //more or equal kills (1000)
			{
				player->GetSession()->SendListInventory(pCreature->GetGUID(), 2);
				pCreature->Whisper(allow, LANG_UNIVERSAL, player, true);
				player->CLOSE_GOSSIP_MENU();
			}
			else
			{
				pCreature->Whisper(deny, LANG_UNIVERSAL, player, true);
				player->CLOSE_GOSSIP_MENU();
			}
			break;
		}
		return true;
	}
};

void AddSC_Honorable_Kills_Shopz()
{
	new honorable_kills_shop();
}