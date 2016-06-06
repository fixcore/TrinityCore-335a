/* FixCore - 2016 - Todos los derechos reservados */

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
				pPlayer->ADD_GOSSIP_ITEM(4, "Reiniciar instancias", GOSSIP_SENDER_MAIN, 22);
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
				if (!*args)
            return false;

        Player* player = handler->getSelectedPlayer();
        if (!player)
            player = handler->GetSession()->GetPlayer();

        char* map = strtok((char*)args, " ");
        char* pDiff = strtok(NULL, " ");
        int8 diff = -1;
        if (pDiff)
            diff = atoi(pDiff);
        uint16 counter = 0;
        uint16 MapId = 0;

        if (strcmp(map, "all") != 0)
        {
            MapId = uint16(atoi(map));
            if (!MapId)
                return false;
        }

        for (uint8 i = 0; i < MAX_DIFFICULTY; ++i)
        {
            Player::BoundInstancesMap &binds = player->GetBoundInstances(Difficulty(i));
            for (Player::BoundInstancesMap::iterator itr = binds.begin(); itr != binds.end();)
            {
                InstanceSave* save = itr->second.save;
                if (itr->first != player->GetMapId() && (!MapId || MapId == itr->first) && (diff == -1 || diff == save->GetDifficulty()))
                {
                    std::string timeleft = GetTimeString(save->GetResetTime() - time(NULL));
                    handler->PSendSysMessage(LANG_COMMAND_INST_UNBIND_UNBINDING, itr->first, save->GetInstanceId(), itr->second.perm ? "yes" : "no", save->GetDifficulty(), save->CanReset() ? "yes" : "no", timeleft.c_str());
                    player->UnbindInstance(itr, Difficulty(i));
                    counter++;
                }
                else
                    ++itr;
            }
        }
        handler->PSendSysMessage(LANG_COMMAND_INST_UNBIND_UNBOUND, counter);

        return true;
				break;
				return true;
				}
			}
		}

};

void AddSC_npc_titulos_km()
{
	new npc_titulos_km();
}