#include "ScriptPCH.h"

class npc_monturas_km : public CreatureScript
{
	public:
		npc_monturas_km() : CreatureScript("npc_monturas_km")
		{
		}

		bool OnGossipHello(Player * pPlayer, Creature * pCreature)
		{
			pPlayer->PlayerTalkClass->ClearMenus();
			pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/achievement_reputation_kirintor:30|t White Polar Bear (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 39);
			pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/achievement_reputation_kirintor:30|t Sable de Hielo (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 40);
			pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/achievement_reputation_kirintor:30|t Gran Oso de Batalla (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 41);
			pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/achievement_reputation_kirintor:30|t Corcel Celestial (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 42);
			pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/achievement_reputation_kirintor:30|t Swift Magic Broom (500 PvP Tokens)", GOSSIP_SENDER_MAIN, 43);
			pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/achievement_reputation_kirintor:30|t Raven Lord (500 PVP Tokens)", GOSSIP_SENDER_MAIN, 44);
			pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/achievement_reputation_kirintor:30|t Amani War Bear (500 PvP Tokens)", GOSSIP_SENDER_MAIN, 45);
			pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/achievement_reputation_kirintor:30|t Wooly White Rhino (750 PvP Tokens)", GOSSIP_SENDER_MAIN, 46);
			pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/achievement_reputation_kirintor:30|t Magic Rooster Egg (750 PVP Tokens)", GOSSIP_SENDER_MAIN, 47);
			pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/achievement_reputation_kirintor:30|t Tallstrider Egg (750 PvP Tokens)", GOSSIP_SENDER_MAIN, 48);
			pPlayer->PlayerTalkClass->SendGossipMenu(9425, pCreature->GetGUID());
			return true;
		}

		bool OnGossipSelect(Player * pPlayer, Creature * pCreature, uint32 /*uiSender*/, uint32 uiAction)
		{
			if (!pPlayer)
				return true;

			switch (uiAction)
			{
				{
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					pPlayer->AddItem(43962, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido the White Polar Bear", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 40:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					pPlayer->AddItem(12302, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido the Ancient Frostsaber", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 41:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					pPlayer->AddItem(38576, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido the Big Battle Bear", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 42:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					pPlayer->AddItem(49290, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido the Celestial Steed", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 43:
				if (pPlayer->HasItemCount(29434, 500, true))
				{
					pPlayer->DestroyItemCount(29434, 500, true);
					pPlayer->AddItem(33184, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido the Swift Magic Broom", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 44:
				if (pPlayer->HasItemCount(29434, 500, true))
				{
					pPlayer->DestroyItemCount(29434, 500, true);
					pPlayer->AddItem(32768, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido the Raven Lord.", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 45:
				if (pPlayer->HasItemCount(29434, 500, true))
				{
					pPlayer->DestroyItemCount(29434, 500, true);
					pPlayer->AddItem(33809, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido the Amani War Bear", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 46:
				if (pPlayer->HasItemCount(29434, 750, true))
				{
					pPlayer->DestroyItemCount(29434, 750, true);
					pPlayer->AddItem(54068, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido the Wooly White Rhino", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 47:
				if (pPlayer->HasItemCount(29434, 750, true))
				{
					pPlayer->DestroyItemCount(29434, 750, true);
					pPlayer->AddItem(46778, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido the Magic Rooster Egg", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 48:
				if (pPlayer->HasItemCount(29434, 750, true))
				{
					pPlayer->DestroyItemCount(29434, 750, true);
					pPlayer->AddItem(121777, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido the Tallstrider Egg", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;
				}
				return true;
			}
		}

};

void AddSC_npc_monturas_km()
{
	new npc_monturas_km();
}