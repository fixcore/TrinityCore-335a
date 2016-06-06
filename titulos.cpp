#include "ScriptPCH.h"

class npc_titulos_km : public CreatureScript
{
	public:
		npc_titulos_km() : CreatureScript("npc_titulos_km")
		{
		}

		bool OnGossipHello(Player * pPlayer, Creature * pCreature)
		{
				pPlayer->PlayerTalkClass->ClearMenus();
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Assasin (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 22);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Malefic (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 23);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Forsaken (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 24);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Crusader (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 25);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Starcaller (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 26);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t The Seeker (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 27);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Bane of the Fallen King (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 28);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t The Light of Dawn (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 29);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Elder (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 30);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Scarab LordThe Insane (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 31);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Vanquisher (500 PvP Tokens)", GOSSIP_SENDER_MAIN, 32);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Hand of A'dal (500 PvP Tokens)", GOSSIP_SENDER_MAIN, 33);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Champion of the Naaru (500 PvP Tokens)", GOSSIP_SENDER_MAIN, 34);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t Death's Demise (750 PvP Tokens)", GOSSIP_SENDER_MAIN, 35);
				pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_boss_algalon_01:30|t The Insane (750 PvP Tokens)", GOSSIP_SENDER_MAIN, 36);
				if (pPlayer->getFaction() == ALLIANCE)
				{
					pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_dungeon_nexus70_normal:30|t of the Alliance (1000 PvP Tokens)", GOSSIP_SENDER_MAIN, 37);
				}
				if (pPlayer->getFaction() == HORDE)
				{
					pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/achievement_dungeon_nexus70_normal:30|t of the Horde (1000 PvP Tokens)", GOSSIP_SENDER_MAIN, 38);
				}
				pPlayer->PlayerTalkClass->SendGossipMenu(9452, pCreature->GetGUID());
			return true;
		}

		bool OnGossipSelect(Player * pPlayer, Creature * pCreature, uint32 /*uiSender*/, uint32 uiAction)
		{
			if (!pPlayer)
				return true;

			switch (uiAction)
			{
				{
			case 22:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(95);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título Assasin!", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 23:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(90);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título the Malefic", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 24:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(119);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título the Forsaken", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 25:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(156);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título Crusader", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 26:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(164);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título Starcaller", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 27:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(81);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título the Seeker", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 28:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(174);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título Bane of the Fallen King", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 29:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(173);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título the Light of Dawn", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 30:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(74);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título Elder", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 31:
				if (pPlayer->HasItemCount(29434, 250, true))
				{
					pPlayer->DestroyItemCount(29434, 250, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(46);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título Scarab Lord", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 32:
				if (pPlayer->HasItemCount(29434, 500, true))
				{
					pPlayer->DestroyItemCount(29434, 500, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(163);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título Vanquisher", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 33:
				if (pPlayer->HasItemCount(29434, 500, true))
				{
					pPlayer->DestroyItemCount(29434, 500, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(64);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título Hand of A'dal", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 34:
				if (pPlayer->HasItemCount(29434, 500, true))
				{
					pPlayer->DestroyItemCount(29434, 500, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(53);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título Champion of the Naaru", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 35:
				if (pPlayer->HasItemCount(29434, 750, true))
				{
					pPlayer->DestroyItemCount(29434, 750, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(158);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título Death's Demise", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 36:
				if (pPlayer->HasItemCount(29434, 750, true))
				{
					pPlayer->DestroyItemCount(29434, 750, true);
					CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(145);
					pPlayer->SetTitle(titleInfo, false);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Se le ha añadido el título the Insane", pPlayer->GetGUID());
				}

				return true;
				}
			}
		}

};

void AddSC_npc_titulos_km()
{
	new npc_titulos_km();
}