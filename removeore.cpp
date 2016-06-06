#include "ScriptMgr.h"
#include "Player.h"
#include "Chat.h"
#define FFA_ENTER_MSG "|cffff6060[InMoral JcJ]:|r Esto es una |cFFFF4500zona JcJ|r, recuerda que cuando mueres |cFFFF4500pierdes 5 de oro|r pero ganaras |cFFFF4500 5 de oro|r por muerte!"
#define KILL_MSG "|cff00ff00|TInterface\\PvPRankBadges/PvPRank06:24|t|r Bien hecho usted ha ganado 5 de oro por esta |cFFFF4500Muerte|r!"
#define KILL_FFA_MSG "|cffff6060[InMoral JcJ]:|r Bien hecho ganaste 5 de oro por esta muerte! |cFFFF4500Muerte|r!"
#define LOST_GOLD_MSG "|cffff6060[InMoral JcJ]:|r Lo siento |cFFFF4500perdiste|r 5 de oro"
#define ERR_TOO_MUCH_MONEY "|cffff6060[InMoral JcJ]: Superaste la cantidad maxima de oro!|r"

enum Rewards
{
	NORMAL_REWARD = 50000,
	FFA_REWARD    = 50000,
	FFA_LOST      = 50000
};

class GoldOnKill : public PlayerScript
{
public:
	GoldOnKill() : PlayerScript("GoldOnKill") {}

	void OnUpdateZone(Player* player, uint32 zone, uint32 area)
	{
		if(player->pvpInfo.IsInFFAPvPArea) //gets updated by UpdatePvPState
		{
			ChatHandler handler(player->GetSession());
			handler.PSendSysMessage(FFA_ENTER_MSG);
		}
	}
	void OnPVPKill(Player* killer, Player* victim)
	{
		ChatHandler kHandler(killer->GetSession());
		ChatHandler vHandler(victim->GetSession());

		if(killer->GetGUID() == victim->GetGUID())
		{
			return;
		}
		else
		{
		if(killer->pvpInfo.IsInFFAPvPArea && victim->pvpInfo.IsInFFAPvPArea) //gets updated by UpdatePvPState
		{
			if(killer->GetMoney() + FFA_REWARD < MAX_MONEY_AMOUNT)
			{
			killer->SetMoney(killer->GetMoney() + FFA_REWARD);
			kHandler.PSendSysMessage(KILL_FFA_MSG);
			killer->CastSpell(killer, 23505, true);
			//killer->CastSpell(killer, 33053, true); //bendicion de don pellisco
			//killer->CastSpell(killer, 35076, true); //bendicion de adal
			//killer->CastSpell(killer, 26393, true); //bendicion de elune
			//killer->CastSpell(killer, 26035, true); //celebra los buenos tiempos
			//killer->CastSpell(killer, 22888, true); //berrido de convocacion
			//killer->CastSpell(killer, 24425, true); //espiritu zandalar
			//killer->CastSpell(killer, 24705, true); //hombre de minbre
			killer->ModifyArenaPoints(1);
			}
			else
				kHandler.PSendSysMessage(ERR_TOO_MUCH_MONEY);
			if(victim->GetMoney() - FFA_LOST > 0)
			{
				if(victim->GetMoney() != 0){
				victim->SetMoney(victim->GetMoney() - FFA_LOST);
				}
				vHandler.PSendSysMessage(LOST_GOLD_MSG);
			}
		}
		else
		{
			if(killer->GetMoney() + NORMAL_REWARD < MAX_MONEY_AMOUNT)
			{
			killer->SetMoney(killer->GetMoney() + NORMAL_REWARD);
			kHandler.PSendSysMessage(KILL_MSG);
			killer->CastSpell(killer, 23505, true);
			//killer->CastSpell(killer, 33053, true);
			//killer->CastSpell(killer, 35076, true);
			//killer->CastSpell(killer, 26393, true);
			//killer->CastSpell(killer, 26035, true);
			//killer->CastSpell(killer, 22888, true);
			//killer->CastSpell(killer, 24425, true);
			//killer->CastSpell(killer, 24705, true);
			killer->ModifyArenaPoints(1);
			}
			else
				kHandler.PSendSysMessage(ERR_TOO_MUCH_MONEY);
			if (victim->GetMoney() - FFA_LOST > 0)
			{
				if (victim->GetMoney() != 0){
					victim->SetMoney(victim->GetMoney() - FFA_LOST);
				}
				vHandler.PSendSysMessage(LOST_GOLD_MSG);
			}
		}
     }
  }
};

void AddSC_GoldOnKill()
{
	new GoldOnKill();
}
