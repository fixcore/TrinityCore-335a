#include "ScriptPCH.h"

using namespace std;

#define DEFAULT_MESSAGE 907

struct VisualData
{
	uint32 Menu;
	uint32 Submenu;
	uint32 Icon;
	uint32 Id;
	string Name;
};

VisualData vData[] =
{
	{ 1, 0, GOSSIP_ICON_BATTLE, 3789, "Rabiar" },
	{ 1, 0, GOSSIP_ICON_BATTLE, 3854, "Poder con hechizos" },
	{ 1, 0, GOSSIP_ICON_BATTLE, 3273, "Verdugo Deathfrost" },
	{ 1, 0, GOSSIP_ICON_BATTLE, 3225, "verdugo" },
	{ 1, 0, GOSSIP_ICON_BATTLE, 3870, "El drenaje de la sangre"},
	{ 1, 0, GOSSIP_ICON_BATTLE, 1899, "Arma profano"},
	{ 1, 0, GOSSIP_ICON_BATTLE, 2674, "Erupción de hechizo"},
	{ 1, 0, GOSSIP_ICON_BATTLE, 2675, "Batalla"},
	{ 1, 0, GOSSIP_ICON_BATTLE, 2671, "Arcane y fuego el poder con hechizos"},
	{ 1, 0, GOSSIP_ICON_BATTLE, 2672, "La sombra y el poder con hechizos de Escarcha"},
	{ 1, 0, GOSSIP_ICON_BATTLE, 3365, "Runa de Swordshattering"},
	{ 1, 0, GOSSIP_ICON_BATTLE, 2673, "Mangosta"},
	{ 1, 0, GOSSIP_ICON_BATTLE, 2343, "el poder con hechizos"},
	{ 1, 2, GOSSIP_ICON_TALK, 0, "Siguiente.." },

	{ 2, 0, GOSSIP_ICON_BATTLE, 425, "Negro Templo Maniquí"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 3855, "Spell Power III"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 1894, "Icy Weapon"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 1103, "agilidad"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 1898, "Lifestealing"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 3345, "Vida terrestre I"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 1743, "MHTest02"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 3093, "poder de ataque contra muertos vivientes y demonios"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 1900, "Crusader"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 3846, "Spell Power II"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 1606, "Poder de Ataque"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 283, "Windfury I"},
	{ 2, 0, GOSSIP_ICON_BATTLE, 1, "Muerdepiedras III"},
	{ 2, 3, GOSSIP_ICON_TALK, 0, "Siguiente .."},
	{ 2, 1, GOSSIP_ICON_TALK, 0, "..Atras"},

	{ 3, 0, GOSSIP_ICON_BATTLE, 3265, "Bienaventurados Arma Coating"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 2, "Estigma de Escarcha I"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 3, "Lengua de Fuego III"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 3266, "Justos Arma Coating"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 1903, "Espíritu"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 13, "afilado"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 26, "Frost Petróleo"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 7, "Veneno mortal"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 803, "Fiery Weapon"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 1896, "El daño Weapon"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 2666, "Intelecto"},
	{ 3, 0, GOSSIP_ICON_BATTLE, 25, "La sombra del aceite"},
	{ 3, 2, GOSSIP_ICON_TALK, 0, "..Atras"},
};

class NPC_VisualWeapon : public CreatureScript
{
public:
	NPC_VisualWeapon() : CreatureScript("NPC_VisualWeapon") { }

	bool MainHand;

	void SetVisual(Player* player, uint32 visual)
	{
		uint8 slot = MainHand ? EQUIPMENT_SLOT_MAINHAND : EQUIPMENT_SLOT_OFFHAND;

		Item* item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, slot);

		if (!item)
		{
			ChatHandler(player->GetSession()).PSendSysMessage("No hay armaduras disponibles para cambiar el Visual.");
			return;
		}

		const ItemTemplate* itemTemplate = item->GetTemplate();

		if (itemTemplate->SubClass == ITEM_SUBCLASS_ARMOR_SHIELD ||
			itemTemplate->SubClass == ITEM_SUBCLASS_ARMOR_BUCKLER ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_SPEAR ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_BOW ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_GUN ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_obsolete ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_EXOTIC ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_EXOTIC2 ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_MISC ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_THROWN ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_CROSSBOW ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_WAND ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_FISHING_POLE ||
			itemTemplate->SubClass == ITEM_SUBCLASS_WEAPON_obsolete)
			return;

		player->SetUInt16Value(PLAYER_VISIBLE_ITEM_1_ENCHANTMENT + (item->GetSlot() * 2), 0, visual);
	}

	void GetMenu(Player* player, Creature* creature, uint32 menuId)
	{
		for (uint8 i = 0; i < (sizeof(vData) / sizeof(*vData)); i++)
		{
			if (vData[i].Menu == menuId)
				player->ADD_GOSSIP_ITEM(vData[i].Icon, vData[i].Name, GOSSIP_SENDER_MAIN, i);
		}

		player->SEND_GOSSIP_MENU(DEFAULT_MESSAGE, creature->GetGUID());
	}

	bool OnGossipHello(Player* player, Creature* creature)
	{
		player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "|TInterface/ICONS/inv_misc_tournaments_symbol_draenei:30|t Una Mano", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);
		player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "|TInterface/ICONS/inv_misc_tournaments_symbol_draenei:30|t Mano Izquierda", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 2);
		player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "|TInterface/ICONS/INV_Misc_Coin_05:30|t Salir", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 3);

		player->SEND_GOSSIP_MENU(DEFAULT_MESSAGE, creature->GetGUID());
		return true;
	}

	bool OnGossipSelect(Player* player, Creature* creature, uint32 sender, uint32 action)
	{
		player->PlayerTalkClass->ClearMenus();

		switch (action)
		{
		case GOSSIP_ACTION_INFO_DEF + 1:
			MainHand = true;
			GetMenu(player, creature, 1);
			return false;

		case GOSSIP_ACTION_INFO_DEF + 2:
			MainHand = false;
			GetMenu(player, creature, 1);
			return false;

		case GOSSIP_ACTION_INFO_DEF + 3:
			player->CLOSE_GOSSIP_MENU();
			return false;
		}

		uint32 menuData = vData[action].Submenu;

		if (menuData == 0)
		{
			SetVisual(player, vData[action].Id);
			menuData = vData[action].Menu;
		}

		GetMenu(player, creature, menuData);
		return true;
	}
};

void AddSC_NPC_VisualWeapon()
{
	new NPC_VisualWeapon;
}
