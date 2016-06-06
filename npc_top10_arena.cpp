
#include "ScriptPCH.h"
#include <cstring>
#include <string.h>
#include "ObjectMgr.h"
#include "ScriptMgr.h"
#include "ArenaTeam.h"
#include "ArenaTeamMgr.h"
#include "World.h"

enum enus
{
	ARENA_MAX_RESULTS = 10,
	ARENA_1V1_LADDER = GOSSIP_ACTION_INFO_DEF + 1,
    ARENA_2V2_LADDER = GOSSIP_ACTION_INFO_DEF + 2,
    ARENA_3V3_LADDER = GOSSIP_ACTION_INFO_DEF + 3,
    ARENA_5V5_LADDER = GOSSIP_ACTION_INFO_DEF + 4,
    ARENA_GOODBYE = GOSSIP_ACTION_INFO_DEF + 5,
	ARENA_START_TEAM_LOOKUP = GOSSIP_ACTION_INFO_DEF + 6,
	ARENA_HELP = GOSSIP_ACTION_INFO_DEF + 9999,
};

class arena_top_teams : public CreatureScript
{
    private:
	uint32 optionToTeamType(uint32 option) 
	{
		uint32 teamType;
		switch(option)
		{
		    case ARENA_1V1_LADDER:
			teamType = 1;
			break;
			case ARENA_2V2_LADDER: 
				teamType = 2;
			break;
					
			case ARENA_3V3_LADDER:
				teamType = 3; 
			break;
				
			case ARENA_5V5_LADDER:
				teamType = 5; 
			break;
		}
		return teamType;
	}
		
	uint32 teamTypeToOption(uint32 teamType) 
	{
		uint32 option;
		switch(teamType) 
		{
			
	     	case 1:
			option = ARENA_1V1_LADDER;
			break;

		    case 2: 
				option = ARENA_2V2_LADDER; 
			break;
					
			case 3: 
				option = ARENA_3V3_LADDER; 
			break;
					
			case 5: 
				option = ARENA_5V5_LADDER; 
			break;
		}
		return option;
	}
        
	std::string raceToString(uint8 race) 
	{
		std::string race_s = "Desconocido";
		switch (race)
		{
			case RACE_HUMAN:            
				race_s = "Humano";       
			break;
				
			case RACE_ORC:              
				race_s = "Orco";         
			break;
				
			case RACE_DWARF:           
				race_s = "Enano";       
			break;
				
			case RACE_NIGHTELF:         
				race_s = "Elfo de la Noche";   
			break;
				
			case RACE_UNDEAD_PLAYER:   
				race_s = "Muerto Viviente";      
			break;
				
			case RACE_TAUREN:          
				race_s = "Tauren";      
			break;
				
			case RACE_GNOME:            
				race_s = "Gnomo";       
			break;
				
			case RACE_TROLL:            
				race_s = "Troll";       
			break;
				
			case RACE_BLOODELF:         
				race_s = "Elfo de Sangre";   
			break;
				
			case RACE_DRAENEI:          
				race_s = "Draenei";     
			break;
		}
		return race_s;
	}
        
	std::string classToString(uint8 Class) 
	{
		std::string Class_s = "Desconocido";
		switch (Class)
		{
			case CLASS_WARRIOR:         
				Class_s = "Guerrero";        
			break;
				
			case CLASS_PALADIN:        
				Class_s = "Paladin";       
			break;
				
			case CLASS_HUNTER:         
				Class_s = "Cazador";        
			break;
				
			case CLASS_ROGUE:          
				Class_s = "Picaro";          
			break;
				
			case CLASS_PRIEST:
				Class_s = "Sacerdote";
			break;
				
			case CLASS_DEATH_KNIGHT:
				Class_s = "Caballero de la Muerte";
			break;
				
			case CLASS_SHAMAN: 
				Class_s = "Chaman";       
			break;
				
			case CLASS_MAGE: 
				Class_s = "Mago";          
			break;
				
			case CLASS_WARLOCK: 
				Class_s = "Brujo";       
			break;
				
			case CLASS_DRUID:          
				Class_s = "Druida";          
			break;
		}
		return Class_s;
	}
        
        
	std::string getWinPercent(uint32 wins, uint32 losses)
	{
		uint32 totalGames = wins + losses;
		if (totalGames == 0)
			return "0%";
            
		std::stringstream buf;
		uint32 percentage = (wins * 100) / totalGames;
		buf << percentage << "%";
		return buf.str();
	}

	public:
		arena_top_teams() : CreatureScript("arena_top_teams"){}
        
	bool OnGossipHello(Player *player, Creature *creature)
	{
		player->ADD_GOSSIP_ITEM(4,"|cff00ff00|TInterface\\icons\\spell_chargepositive:26|t|r ¿Como Funciona este npc?", GOSSIP_SENDER_MAIN, ARENA_HELP);
		player->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\Ability_Warrior_WeaponMastery:26|t|r Top 10: 1v1 Arena", GOSSIP_SENDER_MAIN, ARENA_1V1_LADDER);
		player->ADD_GOSSIP_ITEM(4,"|cff00ff00|TInterface\\icons\\Achievement_Arena_2v2_7:26|t|r Top 10: 2v2 Arena", GOSSIP_SENDER_MAIN, ARENA_2V2_LADDER);
		player->ADD_GOSSIP_ITEM(4,"|cff00ff00|TInterface\\icons\\Achievement_Arena_3v3_7:26|t|r Top 10: 3v3 Arena", GOSSIP_SENDER_MAIN, ARENA_3V3_LADDER);
		player->ADD_GOSSIP_ITEM(4,"|cff00ff00|TInterface\\icons\\Achievement_Arena_5v5_7:26|t|r Top 10: 5v5 Arena", GOSSIP_SENDER_MAIN, ARENA_5V5_LADDER);
		player->ADD_GOSSIP_ITEM(4,"|cff00ff00|TInterface\\icons\\spell_chargenegative:26|t|r Salir", GOSSIP_SENDER_MAIN, ARENA_GOODBYE);
		player->SEND_GOSSIP_MENU(90085, creature->GetGUID());
		return true;
	}
        
	bool OnGossipSelect(Player* player, Creature* creature, uint32 /*uiSender*/, uint32 uiAction) 
	{
		player->PlayerTalkClass->ClearMenus();
		switch(uiAction) 
		{
			case ARENA_GOODBYE:
			{
				player->PlayerTalkClass->SendCloseGossip();
				break;
			}

			case ARENA_HELP:
			{
				ChatHandler(player->GetSession()).PSendSysMessage("|cffff6060[INFO]:|r Este npc crea una lista con los mejores players del server, un top 10 de ellos.");
				break;
			}
            
			case ARENA_1V1_LADDER:
			case ARENA_2V2_LADDER:
			case ARENA_5V5_LADDER:
			case ARENA_3V3_LADDER:
			{
				uint32 teamType = optionToTeamType(uiAction);
				QueryResult result = CharacterDatabase.PQuery("SELECT arenaTeamId, name, rating FROM arena_team WHERE type = '%u' ORDER BY rating DESC LIMIT %u;", teamType, ARENA_MAX_RESULTS);
                    
				if(!result) 
				{
					player->ADD_GOSSIP_ITEM(7, "No...", GOSSIP_SENDER_MAIN, ARENA_GOODBYE);
					player->SEND_GOSSIP_MENU(1, creature->GetGUID());
				} 
				else
				{
					std::string name;
					uint32 teamId, rating, rank = 1;
					player->ADD_GOSSIP_ITEM(0,"Top Arena Lista de Gladiadores:", GOSSIP_SENDER_MAIN, ARENA_GOODBYE);
					do 
					{
						Field *fields = result->Fetch();
						teamId = fields[0].GetUInt32();
						name = fields[1].GetString();
						rating = fields[2].GetUInt32();
                            
						std::stringstream buffer;
						buffer << rank << ". " << name;
						buffer << ": " << "|cFF1E90FF" << rating << "|r" << " rating!";
						player->ADD_GOSSIP_ITEM(4, buffer.str(), GOSSIP_SENDER_MAIN, ARENA_START_TEAM_LOOKUP + teamId);
							
						rank++;
					} 
					while(result->NextRow());
					player->ADD_GOSSIP_ITEM(7, "Adios...", GOSSIP_SENDER_MAIN, ARENA_GOODBYE);
					player->SEND_GOSSIP_MENU(90086, creature->GetGUID());
				}
				break;
			}
			
			default:
			{
				if (uiAction > ARENA_START_TEAM_LOOKUP) 
				{
					uint32 teamId = uiAction - ARENA_START_TEAM_LOOKUP;
					QueryResult result = CharacterDatabase.PQuery("SELECT name, rating, seasonWins, seasonGames - seasonWins, weekWins, weekGames - weekWins, rank, captainGuid , type FROM arena_team WHERE arenaTeamId = '%u'", teamId);
                        
					if(!result) 
					{
						player->GetSession()->SendNotification("Team de arena no funciona!...");
						player->PlayerTalkClass->SendCloseGossip();
						return true;
					}
                        
					Field *fields = result->Fetch();
					std::string name = fields[0].GetString();
					uint32 rating = fields[1].GetUInt32();
					uint32 seasonWins = fields[2].GetUInt32();
					uint32 seasonLosses = fields[3].GetUInt32();
					uint32 weekWins = fields[4].GetUInt32();
					uint32 weekLosses = fields[5].GetUInt32();
					uint32 rank = fields[6].GetUInt32();
					uint32 captainGuid = fields[7].GetUInt32();
					uint32 type = fields[8].GetUInt32();
					uint32 parentOption = teamTypeToOption(type);
                        
					std::string seasonWinPercentage = getWinPercent(seasonWins, seasonLosses);
					std::string weekWinPercentage = getWinPercent(weekWins, weekLosses);
                        
					std::stringstream buf;
					buf << "Nombre: " << "|cFF1E90FF" << name << "|r";
					player->ADD_GOSSIP_ITEM(7, buf.str(), GOSSIP_SENDER_MAIN, parentOption);
					buf.str("");
					
					buf << "Rating: " << "|cFF1E90FF" << rating << "|r" << " (Rank: " << "|cFF1E90FF" << rank << "|r" << ", Type: " << "|cFF1E90FF" << type << "v" << type << "|r"")";
					player->ADD_GOSSIP_ITEM(4, buf.str(), GOSSIP_SENDER_MAIN, parentOption);
					buf.str("");
					
					buf << "Total semana: " << "|cFF1E90FF" << weekWins << "-" << weekLosses << "|r"" (" << "|cFF1E90FF" << weekWinPercentage << "|r" << "win)"; 
					player->ADD_GOSSIP_ITEM(4, buf.str(), GOSSIP_SENDER_MAIN, parentOption);
					buf.str("");
					
					buf << "Total Season: " << "|cFF1E90FF" << seasonWins << "-" << seasonLosses << "|r" << " (" << "|cFF1E90FF" << seasonWinPercentage << "|r" << " win)"; 
					player->ADD_GOSSIP_ITEM(4, buf.str(), GOSSIP_SENDER_MAIN, parentOption);
                        
					QueryResult members = CharacterDatabase.PQuery("SELECT  a.guid, a.personalRating, a.weekWins, a.weekGames - a.weekWins, a.seasonWins, a.seasonGames - a.seasonWins, c.name, c.race, c.class, c.level FROM arena_team_member a LEFT JOIN characters c ON c.guid = a.guid WHERE arenaTeamId = '%u' ORDER BY a.guid = '%u' DESC, a.seasonGames DESC, c.name ASC", teamId, captainGuid);
					if(!members) 
					{
						player->ADD_GOSSIP_ITEM(7, "En los miembros del equipo encontrado...?", GOSSIP_SENDER_MAIN, parentOption);
					} 
					else 
					{
						uint32 memberPos = 1;
						uint32 memberCount = members->GetRowCount();
						uint32 guid, personalRating, level;
						std::string name, race, Class;
                            
						buf.str("");
						buf << "      --- " << memberCount << " team" << ((memberCount == 1) ? " member" : " members") << " found" << " ---";
						player->ADD_GOSSIP_ITEM(0, buf.str(), GOSSIP_SENDER_MAIN, parentOption);
						do 
						{
							fields = members->Fetch();
							guid = fields[0].GetUInt32();
							personalRating = fields[1].GetUInt32();
							weekWins= fields[2].GetUInt32();
							weekLosses = fields[3].GetUInt32();
							seasonWins = fields[4].GetUInt32();
							seasonLosses = fields[5].GetUInt32();
							name = fields[6].GetString();
							race = raceToString(fields[7].GetUInt8());
							Class = classToString(fields[8].GetUInt8());
							level = fields[9].GetUInt32();
                                
							seasonWinPercentage = getWinPercent(seasonWins, seasonLosses);
							weekWinPercentage = getWinPercent(weekWins, weekLosses);
                                
							buf.str(""); 
							buf << memberPos << ". "; 
							if (guid == captainGuid) 
								buf <<  "Capitán del equipo ";
								
							
							buf << race << " " << Class << ", " << "|cFF1E90FF" << personalRating << "|r" << " rating personal!";
							player->ADD_GOSSIP_ITEM(4, buf.str(), GOSSIP_SENDER_MAIN, parentOption);
							buf.str("");
							
							buf << "Semana: " << "|cFF1E90FF" << weekWins << "-" << weekLosses << "|r" << " (" << "|cFF1E90FF" << weekWinPercentage << "|r" << " win), " << "|cFF1E90FF" << (weekWins + weekLosses) << "|r" << " played!"; 
							player->ADD_GOSSIP_ITEM(4, buf.str(), GOSSIP_SENDER_MAIN, parentOption);
							buf.str("");
							
							buf << "Season: " << "|cFF1E90FF" << seasonWins << "-" << seasonLosses << "|r" << " (" << "|cFF1E90FF" << seasonWinPercentage << "|r" << " win), " << "|cFF1E90FF" << (seasonWins + seasonLosses) << "|r" << " played!"; 
							player->ADD_GOSSIP_ITEM(4, buf.str(), GOSSIP_SENDER_MAIN, parentOption);
							memberPos++;
						} 
						while(members->NextRow());
					}
					player->SEND_GOSSIP_MENU(90087, creature->GetGUID());
				}
			}
		}
		return true;
	}
};

void AddSC_arena_top_teams()
{
    new arena_top_teams();
}