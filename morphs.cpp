#include "ScriptPCH.h"

class npc_morphs_km : public CreatureScript
{
	public:
		npc_morphs_km() : CreatureScript("npc_morphs_km")
		{
		}

		bool OnGossipHello(Player * pPlayer, Creature * pCreature)
		{
					pPlayer->PlayerTalkClass->ClearMenus();
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Blood Elf Female (3 Tokens)", GOSSIP_SENDER_MAIN, 4);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Blood Elf Male (3 Tokens)", GOSSIP_SENDER_MAIN, 5);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Gnome Female (3 Tokens)", GOSSIP_SENDER_MAIN, 6);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Gnome Male (3 Tokens)", GOSSIP_SENDER_MAIN, 7);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Human Female (3 Tokens)", GOSSIP_SENDER_MAIN, 8);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Human Male (3 Tokens)", GOSSIP_SENDER_MAIN, 9);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Tauren Female (3 Tokens)", GOSSIP_SENDER_MAIN, 10);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Tauren Male (3 Tokens)", GOSSIP_SENDER_MAIN, 11);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Undead Pirate (5 Tokens)", GOSSIP_SENDER_MAIN, 12);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Etherial (5 Tokens)", GOSSIP_SENDER_MAIN, 13);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Mad Scientist (5 Tokens)", GOSSIP_SENDER_MAIN, 14);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Tatooed Man (5 Tokens)", GOSSIP_SENDER_MAIN, 15);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Necromancer (5 Tokens)", GOSSIP_SENDER_MAIN, 16);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Skeletal Mago (5 Tokens)", GOSSIP_SENDER_MAIN, 17);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Frost Troll (5 Tokens)", GOSSIP_SENDER_MAIN, 18);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Blood Elf Demon Girl (5 Tokens)", GOSSIP_SENDER_MAIN, 19);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Human 19 Twink (5 Tokens)", GOSSIP_SENDER_MAIN, 20);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/achievement_boss_anomalus:30|t Undead 19 Twink (5 Tokens)", GOSSIP_SENDER_MAIN, 21);			
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
			case 4:
				if (pPlayer->HasItemCount(29434, 3, true))
				{
					pPlayer->DestroyItemCount(29434, 3, true);
					pPlayer->SetDisplayId(20370);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Female Blood Elf.", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 5:
				if (pPlayer->HasItemCount(29434, 3, true))
				{
					pPlayer->DestroyItemCount(29434, 3, true);
					pPlayer->SetDisplayId(20369);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Male Blood Elf.", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 6:
				if (pPlayer->HasItemCount(29434, 3, true))
				{
					pPlayer->DestroyItemCount(29434, 3, true);
					pPlayer->SetDisplayId(20320);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Gnome Female.", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 7:
				if (pPlayer->HasItemCount(29434, 3, true))
				{
					pPlayer->DestroyItemCount(29434, 3, true);
					pPlayer->SetDisplayId(20580);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Gnome Male.", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 8:
				if (pPlayer->HasItemCount(29434, 3, true))
				{
					pPlayer->DestroyItemCount(29434, 3, true);
					pPlayer->SetDisplayId(19724);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Human Female.", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 9:
				if (pPlayer->HasItemCount(29434, 3, true))
				{
					pPlayer->DestroyItemCount(29434, 3, true);
					pPlayer->SetDisplayId(19723);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Human Male.", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 10:
				if (pPlayer->HasItemCount(29434, 3, true))
				{
					pPlayer->DestroyItemCount(29434, 3, true);
					pPlayer->SetDisplayId(20584);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Tauren Female.", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 11:
				if (pPlayer->HasItemCount(29434, 3, true))
				{
					pPlayer->DestroyItemCount(29434, 3, true);
					pPlayer->SetDisplayId(20319);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Tauren Male", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 12:
				if (pPlayer->HasItemCount(29434, 5, true))
				{
					pPlayer->DestroyItemCount(29434, 3, true);
					pPlayer->SetDisplayId(25042);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Undead Pirate", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 13:
				if (pPlayer->HasItemCount(29434, 5, true))
				{
					pPlayer->DestroyItemCount(29434, 5, true);
					pPlayer->SetDisplayId(24942);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Etherial", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 14:
				if (pPlayer->HasItemCount(29434, 5, true))
				{
					pPlayer->DestroyItemCount(29434, 5, true);
					pPlayer->SetDisplayId(23875);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Mad Scientist", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 15:
				if (pPlayer->HasItemCount(29434, 5, true))
				{
					pPlayer->DestroyItemCount(29434, 5, true);
					pPlayer->SetDisplayId(22634);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 0.5);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Tattooed Man", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 16:
				if (pPlayer->HasItemCount(29434, 5, true))
				{
					pPlayer->DestroyItemCount(29434, 5, true);
					pPlayer->SetDisplayId(24793);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Necromancer", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 17:
				if (pPlayer->HasItemCount(29434, 5, true))
				{
					pPlayer->DestroyItemCount(29434, 5, true);
					pPlayer->SetDisplayId(24495);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 0.7f);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Skeletal Mage", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 18:
				if (pPlayer->HasItemCount(29434, 5, true))
				{
					pPlayer->DestroyItemCount(29434, 5, true);
					pPlayer->SetDisplayId(24938);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Frost Troll", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 19:
				if (pPlayer->HasItemCount(29434, 5, true))
				{
					pPlayer->DestroyItemCount(29434, 5, true);
					pPlayer->SetDisplayId(24930);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en BELF Demon Girl", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 20:
				if (pPlayer->HasItemCount(29434, 5, true))
				{
					pPlayer->DestroyItemCount(29434, 5, true);
					pPlayer->SetDisplayId(29796);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Human 19 Twink", pPlayer->GetGUID());
				}
				else
				{
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted no tiene la cantidad necesaria de PvP Tokens.", pPlayer->GetGUID());
				}
				break;

			case 21:
				if (pPlayer->HasItemCount(29434, 5, true))
				{
					pPlayer->DestroyItemCount(29434, 5, true);
					pPlayer->SetDisplayId(29795);
					pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
					pPlayer->CLOSE_GOSSIP_MENU();
					ChatHandler(pPlayer->GetSession()).PSendSysMessage("Usted ha sido transformado en Undead 19 Twink", pPlayer->GetGUID());
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

void AddSC_npc_morphs_km()
{
	new npc_morphs_km();
}