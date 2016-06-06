#include "ScriptPCH.h"
 
class gurubashipvp : public PlayerScript
{
public:
        gurubashipvp() : PlayerScript("gurubashipvp") { }
 
    void OnPvPKill(Player *pKiller, Player *pVictim) {
		int reward = 20; // = 50 Puntos de Honor
                int pvparea = 2177; //Area ID of the place both characters must be to be eligible for reward
            int area1 = pKiller->GetAreaId();
            int area2 = pVictim->GetAreaId();
                if(area1 == area2) {
                        int area = area;
                        if(area == pvparea) {
                                if(pKiller->GetTeam() != pVictim->GetTeam()) {
                                    int honor = pKiller->GetHonorPoints();
                                    pKiller->ModifyHonorPoints(honor + reward);
                                }
                        }
                }
    }
};
 
void AddSC_gurubashipvp() 
{
        new gurubashipvp;
}