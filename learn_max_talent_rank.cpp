   /*------------------------------------------------------------|
    | Coded By Obitus                                             |
    | March 18th, 2016                                            |
    | Tested on the latest TrinityCore 3.3.5                      |
    | What it does?                                               |
    | Players will automatically learn the highest talent rank    |
    | Improved the code - Thanks to Phil                          |
    |-------------------------------------------------------------|
    */
 
#include "Player.h"
#include "ScriptMgr.h"
 
class learn_max_talent_rank : public PlayerScript
{
public:
    learn_max_talent_rank() : PlayerScript("learn_max_talent_rank") { }
 
   
    // Called when a player's free talent points change (right before the change is applied)
    void OnFreeTalentPointsChanged(Player* player, uint32 points)
    {
            uint32 Talent_First_Rank[] =
        {
            19386, //Wyvern Sting
            53301, //Explosive Shot
            19306, //Counter Attack
            19434, //Aimed Shot
            3674, //Black Arrow
 
            55050, //Heart Strike
            49143, //Frost Strike
            49184, //Howling Blast
            55090, //Scourge Strike
            49158, //Corpse Explosion
 
            12294, //Mortal Strike
            20243, //Devastate
 
            20925, //Holy Shield
            31935, //Avenger's Shield
            20473, //Holy Shock
 
            11366, //Pyroblast
            11426, //Ice Barrier
            44457, //Living Bomb
            31661, //Dragon's Breath
            11113, //Blast Wave
            44425, //Arcane Barrage
 
            17877, //Shadowburn
            30283, //Shadowfury
            30108, //Unstable Affliction
            50796, //Chaos Bolt
            48181, //Haunt
            18220, //Dark Pact
 
            16511, //Hemorrhage
            1329, //Mutilate
 
            34914, //Vampiric Touch
            47540, //Penance
            724, //Lightwell
            19236, //Desperate Prayer
            34861, //Circle of Healing
            15407, //Mind Flay
 
            61295, //Riptide
            974, //Earth Shield
            30706, //Totem of Wrath
            51490, //Thunderstorm
 
            50516, //Typhoon
            48505, //Starfall
            48438, //Wild Growth
            5570, //Insect Swarm
            33876, //Mangle (Cat)
            33878 //Mangle (Bear)
 
        };
 
        for (uint32 i = 0; i < sizeof(Talent_First_Rank) / sizeof(uint32); i++)
            if (player->HasSpell(Talent_First_Rank[i]))
            player->LearnSpellHighestRank(Talent_First_Rank[i]);
 
            if (player->HasSpell(20911)) //Blessing of Sanctuary
            player->LearnSpell(25899, false); //Greater Blessing of Sanctuary
     }
};
 
void AddSC_learn_max_talent_rank()
{
    new learn_max_talent_rank;
}