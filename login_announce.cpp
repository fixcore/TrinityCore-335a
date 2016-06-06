#include "ScriptPCH.h"

class login_announce : public PlayerScript
{
public:
	login_announce() : PlayerScript("login_announce") { }

	void OnLogin(Player* player, bool /*loginFirst*/)
	{
		if (player || player->GetSession())
		{
			player->GetSession()->SendNotification("|cff00ff00|TInterface\\icons\\inv_staff_104:25|t |cff00ff00%s|r ¡Bienvenido a TenebrousWoW! |cff00ff00|TInterface\\icons\\inv_staff_104:25|t", player->GetName());
		}
	}
};
void AddSC_login_announce()
{
	new login_announce;
}