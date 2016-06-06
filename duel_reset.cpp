#include "ScriptPCH.h"
 
class Duel_Reset : public PlayerScript
{
        public:
                Duel_Reset() : PlayerScript("Duel_Reset"){}
 
                void OnDuelEnd(Player* pWinner, Player* pLoser, DuelCompleteType /*type*/)
                {
                        pWinner->SetHealth(pWinner->GetMaxHealth());
                        if ( pWinner->getPowerType() == POWER_MANA )
                             pWinner->SetPower(POWER_MANA, pWinner->GetMaxPower(POWER_MANA));
						pWinner->GetSession()->SendNotification("|cff00ff00|TInterface\\icons\\inv_bannerpvp_02:18|t ¡Ganas el duelo! tus cds han sido restablecidos |cff00ff00|TInterface\\icons\\inv_bannerpvp_01:18|t");
                        pLoser->SetHealth(pLoser->GetMaxHealth());
                        if ( pLoser->getPowerType() == POWER_MANA )
                                pLoser->SetPower(POWER_MANA,  pLoser->GetMaxPower(POWER_MANA));
								pLoser->GetSession()->SendNotification("|cff00ff00|TInterface\\icons\\inv_bannerpvp_01:18|t ¡Perdiste el duelo! tus cds han sido restablecidos |cff00ff00|TInterface\\icons\\inv_bannerpvp_02:18|t");
                }
};
 
void AddSC_Duel_Reset()
{
        new Duel_Reset();
}