#include "ScriptPCH.h"
 
class VIP_NPC : public CreatureScript
{
public:
        VIP_NPC() : CreatureScript("VIP_NPC") { }
 
        bool OnGossipHello(Player * player, Creature * pCreature)
        {
                if (player->GetSession()->GetSecurity() >= SEC_GAMEMASTER)
                {
                        player->ADD_GOSSIP_ITEM(6, "Browse goods", GOSSIP_SENDER_MAIN, GOSSIP_OPTION_VENDOR);
                        player->ADD_GOSSIP_ITEM(6, "Goodbye", GOSSIP_SENDER_MAIN, 1);
                }
                else
                {
                        player->GetSession()->SendNotification("Only a VIP may speak to me. Donate or do something unique for the server to become a VIP!");
                        player->CLOSE_GOSSIP_MENU();
                }
                player->PlayerTalkClass->SendGossipMenu(9452, pCreature->GetGUID());
                return true;
        }
 
        bool OnGossipSelect(Player *player, Creature * m_creature, uint32 sender, uint32 action)
        {
                player->PlayerTalkClass->ClearMenus();
                switch (action)
                {
                case GOSSIP_OPTION_VENDOR:
                        player->GetSession()->SendListInventory(m_creature->GetGUID());
                        break;
                case 1:
                        player->CLOSE_GOSSIP_MENU();
                        break;
                }
                return true;
        }
};
 
void AddSC_VIP_NPC()
{
        new VIP_NPC();
}