#include "ScriptMgr.h"
#include "Player.h"
#include "WorldSession.h"
class custom_CongratsOnLevel : public PlayerScript
{
public:
    custom_CongratsOnLevel() : PlayerScript("custom_CongratsOnLevel") { }

    void OnLevelChanged(Player* player, uint8 newLevel)
    {
        uint32 money, item, spell;

        switch(++newLevel)
        {
            case 10: 
		money = 10; // 1 de oro
		item = 4500; // Mochila de viajero
		//item3 = 29434;
		spell = 26035; // celebra los buenos tiempos
		break;
			case 15:
		money = 20;
		item = 90001; //moneda de nivel
		spell = 53758; //Frasco de Sangre piedra
		break;
            case 20: 
		money = 50; // 2 de oro
		item = 43599; //Gran Oso de Blizzard
		spell = 24705; //bendicion del hombre de mimbre
		break;
            case 30: 
		money = 30; // 3 de oro
		item = 52002; // anillo de pirata aterrador
		//item2 = 50255;
		spell = 24425; //Espiritu zandalar
		break;
            case 40: 
		money = 40; 
		item = 41426; //obsequi envuelto en magia
		//item2 = 50255;
		spell = 35076; //bendicion de adal
		break;
            case 50: 
		money = 50; 
		item = 52002; //cartera de biene utiles
		//item2 = 50255;
		spell = 53758; // frasco de sangre piedra
		break;
            case 60: 
		money = 5000; 
		item = 29434; //distintivo de justicia
		//item2 = 50255;
		spell = 16609; //bendicion del jefe de guerra
		break;
            case 70: 
		money = 5000; 
		item = 45624;//emblema de conquista
		//item2 = 50255;
		spell = 26393; //bendicion de elune
		break;
            case 80: 
		money = 5000; 
		item = 90001;
		//item2 = 50255;
		spell = 33053; //Bendicion de don pellisco
		break;
            default: 
		return;
        }

        std::ostringstream ss;
        ss << "|cffFF0000[Rhonin WoW]|r Felicidades " << player->GetName() << " por alcanzar el nivel " << (uint32)newLevel;
        sWorld->SendServerMessage(SERVER_MSG_STRING, ss.str().c_str());

        std::ostringstream ss2;
        ss2 << "Por su esfuerzo y dedicación le recompensaron con " << money << " oro y un objeto especial!";
        player->GetSession()->SendNotification(ss2.str().c_str());

        player->ModifyMoney(money*GOLD);
	player->AddItem(item, 1);
	player->CastSpell(player, spell, false);
    }
};

void AddSC_custom_CongratsOnLevel()
{
    new custom_CongratsOnLevel();
}
