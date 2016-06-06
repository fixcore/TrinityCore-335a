#include "ScriptPCH.h"
#include "Channel.h"
#include "Language.h"
#include <string>
 
class System_Censure : public PlayerScript
{
public:
        System_Censure() : PlayerScript("System_Censure") {}
 
        void OnChat(Player* player, uint32 /*type*/, uint32 lang, std::string& msg)
        {
                CheckMessage(player, msg, lang, NULL, NULL, NULL, NULL);
        }
 
        void OnChat(Player* player, uint32 /*type*/, uint32 lang, std::string& msg, Player* receiver)
        {
                CheckMessage(player, msg, lang, receiver, NULL, NULL, NULL);
        }
 
        void OnChat(Player* player, uint32 /*type*/, uint32 lang, std::string& msg, Group* group)
        {
                CheckMessage(player, msg, lang, NULL, group, NULL, NULL);
        }
 
        void OnChat(Player* player, uint32 /*type*/, uint32 lang, std::string& msg, Guild* guild)
        {
                CheckMessage(player, msg, lang, NULL, NULL, guild, NULL);
        }
 
        void OnChat(Player* player, uint32 /*type*/, uint32 lang, std::string& msg, Channel* channel)
        {
                CheckMessage(player, msg, lang, NULL, NULL, NULL, channel);
        }
 
void CheckMessage(Player* player, std::string& msg, uint32 lang, Player* /*receiver*/, Group* /*group*/, Guild* /*guild*/, Channel* channel)
{
    if (player->IsGameMaster() || lang == LANG_ADDON)
            return;
 
    //transform to lowercase (for simpler checking)
    std::string lower = msg;
    std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
 
        const uint8 cheksSize = 18;
        std::string checks[cheksSize];
        checks[0] ="http://";
        checks[1] =".com";
        checks[2] =".net";
        checks[3] =".org";
        checks[4] =".ru";
        checks[5] ="rondor";
        checks[6] ="www.";
		checks[7] ="xxx";
		checks[8] = "verga";
		checks[9] = "server";
		checks[10] = "servidor";
		checks[11] = ".la";
		checks[12] = "chupamela";
		checks[13] = "mamamela";
		checks[14] = "server";
		checks[15] = ".info";
		checks[16] = ".tk";
		checks[17] = ".ml";
		checks[18] = "puto";
		checks[19] = "marico";
		checks[20] = "noob";
		checks[21] = "pendejo";
		checks[22] = "deathforce";
		checks[23] = "death";
		checks[24] = "force";
		checks[25] = "dencel";
		checks[26] = "servegame";
		checks[27] = ".biz";
		checks[28] = ".no-ip";
			
        for (int i = 0; i < cheksSize; ++i)
            if (lower.find(checks[i]) != std::string::npos)
            {
                msg = "No se tolera el Spam!";
			    msg = lang == LANG_GM_SILENCE;
				ChatHandler(player->GetSession()).PSendSysMessage("|TInterface/ICONS/achievement_leader_sylvanas:20|tNo se tolera el Spam!");
				std::string plr = player->GetName();
            std::string gender = player->getGender() == GENDER_FEMALE ? "esta" : "esta";
            bool ingroup = player->GetGroup();
            std::string tag_colour = "7bbef7";
            std::string plr_colour = "ff0000";
            std::string boss_colour = "18be00";
            std::ostringstream stream;
            stream << "|CFF" << tag_colour << 
                      "[Anuncio de Spam]|r:|cff" << plr_colour << " " << plr << 
                      (ingroup ? " el " : "  ") << gender << (ingroup ? " Spameando " : " Spameando ") << "!";
			sWorld->SendGMText(LANG_GM_BROADCAST, stream.str().c_str());
                return;
            }
    
	}  
    };

void AddSC_System_Censure()
{
    new System_Censure();
}
