/*
  _______        _         ______                 
 |__   __|      | |       |  ____|                
    | | __ _ ___| |_ _   _| |__   _ __ ___  _   _ 
    | |/ _` / __| __| | | |  __| | '_ ` _ \| | | |
    | | (_| \__ \ |_| |_| | |____| | | | | | |_| |
    |_|\__,_|___/\__|\__, |______|_| |_| |_|\__,_|
                      __/ |                       
                     |___/        
					 
Script Made By Sinistah
Special Thanks To LilleCarl For The Code Snippet

Legend
------
item_id = the item id of the item ur using. 
max_lvl = the max lvl the script will allow players to use the item. 
lvl = how many levels the item will grant upon used
*/
#include "ScriptMgr.h"
#include "Player.h"
#include "WorldSession.h"

enum
{
	item_id = 90001,
	max_lvl = 80,
	lvl = 1
};

class item_level : public ItemScript
{
public:
    item_level() : ItemScript("item_level") { }
 
    bool OnUse(Player* player, Item* item, const SpellCastTargets &)
    {
		if(player->IsInCombat() || player->IsInFlight() || player->InBattleground() || player->InArena())
		{
			player->GetSession()->SendNotification("No puedes usar Piedra de la Verguenza!");
			return false;
		}
		if(player->getLevel() == max_lvl)
		{
			player->GetSession()->SendNotification("Estas en el maximo nivel.");
			return false;
		}
		player->SetLevel(player->getLevel() == max_lvl ? max_lvl : player->getLevel() + lvl);
		player->DestroyItemCount(item_id, 1, true);
		player->GetSession()->SendNotification("Usaste una Piedra de la Verguenza.");
		return true;
		}
};

void AddSC_item_level()
{
    new item_level();
}
