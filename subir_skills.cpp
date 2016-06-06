/*
Creado por Sakuranobushi
Publicación original en Reign of Ysera de proyecto Oscuridad
Liberado para http://overwow.com
Por favor, mantener los creditos en caso de ser utilizado
*/


#include "ScriptPCH.h"


class npc_skills : public CreatureScript
{
public:
        npc_skills() : CreatureScript("npc_skills") { }


       bool OnGossipHello(Player* player, Creature* creature)
        {
                {
                        player->PrepareQuestMenu(creature->GetGUID());
                        player->SendPreparedQuest(creature->GetGUID());
                }
                player->ADD_GOSSIP_ITEM(TRAINER_ICON, "Quiero subir mis habilidades", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+1);
                player->SEND_GOSSIP_MENU(1, creature->GetGUID());
                return true;
        }


        bool OnGossipSelect(Player* player, Creature* creature, uint32 sender, uint32 action)
       {
                player->UpdateSkillsToMaxSkillsForLevel();
                player->SaveToDB();
                player->SEND_GOSSIP_MENU(1, creature->GetGUID());
                player->PlayerTalkClass->SendCloseGossip();
        }
};
void AddSC_npc_skills(){    new npc_skills();}