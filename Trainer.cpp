#include "ScriptPCH.h"

class npc_morphs_fix : public CreatureScript
{
public:
  npc_morphs_fix() : CreatureScript("npc_morphs_fix")
  {
  }

  bool OnGossipHello(Player * pPlayer, Creature * pCreature)
  {
    pPlayer->PlayerTalkClass->ClearMenus();
    pPlayer->ADD_GOSSIP_ITEM(8, "Morphs Part 1", GOSSIP_SENDER_MAIN, 4);
    pPlayer->ADD_GOSSIP_ITEM(8, "Morphs Part 2", GOSSIP_SENDER_MAIN, 5);
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
      pPlayer->CastSpell(pPlayer, 190000, true, NULL, NULL, pPlayer->GetGUID());
      break;

    case 5:
      pPlayer->CastSpell(pPlayer, 190001, true, NULL, NULL, pPlayer->GetGUID());
      break;

    


      }
    }
    return true;
  }

};

void AddSC_npc_morphs_fix()
{
  new npc_morphs_fix();
}