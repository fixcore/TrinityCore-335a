--- Script Lua Engine TrinityCore 3.3.5
--- By Kusanagy Azakura
--- Developers & Customizers
--- Thanks to: Tommy, for teaching the local Classes = { 



local UnitEntry = 999995
local IconMoney = "|TInterface\\icons\\INV_Misc_Coin_02:15|t"

local Classes = { 
    [1] = "|TInterface\\icons\\INV_Sword_27.png:25|t|cFFA52A2A[Warrior Trainer]",              -- Warrior
    [2] = "|TInterface\\icons\\INV_Hammer_01.png:25|t|cFFF58CBA[Paladin Trainer]",             -- Paladin
    [3] = "|TInterface\\icons\\INV_Weapon_Bow_07.png:25|t|cFFABD473[Hunter Trainer]",          -- Hunter
    [4] = "|TInterface\\icons\\INV_ThrowingKnife_04.png:25|t|cFFFFF569[Rogue Trainer]",        -- Rogue
    [5] = "|TInterface\\icons\\INV_Staff_30.png:25|t|cFFFFFFFF[Priest Trainer]",               -- Priest
    [6] = "|TInterface\\icons\\Spell_Deathknight_ClassIcon.png:25|t|cFFC41F3B[Death Trainer]", -- Death Knight
    [7] = "|TInterface\\icons\\inv_jewelry_talisman_04.png:25|t|cFF0070DE[Shaman Trainer]",    -- Shaman
    [8] = "|TInterface\\icons\\INV_Staff_30.png:25|t|cFF69CCF0[Mage Trainer]",                 -- Mage
    [9] = "|TInterface\\icons\\INV_Staff_30.png:25|t|cFF9482C9[Warlock Trainer]",              -- Warlock
    [10] = "",                                                                                 -- Unk
    [11] = "[|TInterface\\icons\\Ability_Druid_Maul.png:25|t|cFFFF7d0A[Druid Trainer]"         -- Druid
};
 
function Trainers_Gossip(unit, player, creature)
if (player:GetLevel() >= 80) then
                if  player:GetClass() == 1 then -- Warrior
                        player:GossipMenuAddItem(3,""..Classes[player:GetClass()].." |cFFFF0000[Costs 500 "..IconMoney.."]",0,1)
                    elseif  player:GetClass() == 2 then -- Paladin
                        player:GossipMenuAddItem(3,""..Classes[player:GetClass()].." |cFFFF0000[Costs 500 "..IconMoney.."]",0,2)
                        elseif  player:GetClass() == 3 then -- Hunter
                        player:GossipMenuAddItem(3,""..Classes[player:GetClass()].." |cFFFF0000[Costs 500 "..IconMoney.."]",0,3)
                            elseif  player:GetClass() == 4 then -- Rogue
                        player:GossipMenuAddItem(3,""..Classes[player:GetClass()].." |cFFFF0000[Costs 500 "..IconMoney.."]",0,4)
                                elseif  player:GetClass() == 5 then -- Priest
                        player:GossipMenuAddItem(3,""..Classes[player:GetClass()].." |cFFFF0000[Costs 500 "..IconMoney.."]",0,5)
                                    elseif  player:GetClass() == 6 then -- Death Knight
                        player:GossipMenuAddItem(3,""..Classes[player:GetClass()].." |cFFFF0000[Costs 500 "..IconMoney.."]",0,6)
                                        elseif  player:GetClass() == 7 then -- Shaman
                        player:GossipMenuAddItem(3,""..Classes[player:GetClass()].." |cFFFF0000[Costs 500 "..IconMoney.."]",0,7)
                                            elseif  player:GetClass() == 8 then -- Mage
                        player:GossipMenuAddItem(3,""..Classes[player:GetClass()].." |cFFFF0000[Costs 500 "..IconMoney.."]",0,8)
                                                elseif  player:GetClass() == 9 then -- Warlock
                        player:GossipMenuAddItem(3,""..Classes[player:GetClass()].." |cFFFF0000[Costs 500 "..IconMoney.."]",0,9)
                                                    elseif  player:GetClass() == 11 then -- Druid
                        player:GossipMenuAddItem(3,""..Classes[player:GetClass()].." |cFFFF0000[Costs 500 "..IconMoney.."]",0,10)
                                                end
                                            end
                                    
player:GossipMenuAddItem(3,"|TInterface\\icons\\Achievement_BG_returnXflags_def_WSG:25|t|cFF000000[|r|cFF800000Reset Talent Points|cFF000000]",0,11)
player:GossipMenuAddItem(3, "|TInterface/ICONS/Ability_Warrior_OffensiveStance:25|t|cFF8B0000Learn Weapon Skills.", 0, 99940)
player:GossipMenuAddItem(3, "|TInterface/ICONS/Ability_Warrior_Disarm:25|t|cFF8B0000Advance All Weapon Skills", 0, 99941)
player:GossipMenuAddItem(3, "|TInterface/ICONS/Ability_Warrior_TitansGrip:25|t|cFF008000Dual-Wield", 0, 99942)
player:GossipMenuAddItem(3, "|TInterface/ICONS/INV_Jewelry_Talisman_02:25|t|cFF0000FFArtisan Riding", 0, 99943)
player:GossipMenuAddItem(3, "|TInterface/ICONS/ABILITY_MAGE_INVISIBILITY:25|t|cFF00FF00Buff me Please",0, 99944)
player:GossipMenuAddItem(2, "|TInterface/ICONS/Achievement_Boss_Kael'thasSunstrider_01:25|t|cFF008000Morphing Service", 0, 99945)
player:GossipMenuAddItem(3,"|TInterface\\icons\\Ability_Vehicle_LoadSelfCatapult:25|t|cFF000000[|r|cFF800000Nevermind|cFF000000]",0,999)
player:GossipSendMenu(1, creature)
end




function Menu_Trainers_Select(event, player, creature, sender, intid, code)
if (intid < 11 and intid > 0) then
        if (player:ModifyMoney(-5000000) == false) then
                intid = 0
                player:SendBroadcastMessage("You don't have enough gold")
                player:GossipComplete()
        end
end
 
 
 if(intid == 99945) then
player:GossipMenuAddItem(7, "|TInterface/ICONS/Achievement_Character_Troll_Male:25|tTroll Faction", 0, 9700)
player:GossipMenuAddItem(7, "|TInterface/ICONS/Achievement_Character_Bloodelf_Female:25|tBloodelf Faction", 0, 9701)
player:GossipMenuAddItem(7, "|TInterface/ICONS/Achievement_Character_Draenei_Female:25|tDraenei Faction", 0, 9702)
player:GossipMenuAddItem(7, "|TInterface/ICONS/Achievement_Character_Gnome_Female:25|tGnomish Faction", 0, 9703)
player:GossipMenuAddItem(7, "|TInterface/ICONS/Achievement_Character_Tauren_Male:25|tTauren Faction", 0, 9704)
player:GossipMenuAddItem(7, "|TInterface/ICONS/Achievement_Character_Nightelf_Male:25|tNightElf Faction", 0, 9705)
player:GossipMenuAddItem(7, "|TInterface/ICONS/Achievement_Character_Dwarf_Male:25|tDwarf Faction", 0, 9706)
player:GossipMenuAddItem(7, "|TInterface/ICONS/Achievement_Character_Orc_Female:25|tOrchish Faction", 0, 9707)
player:GossipMenuAddItem(3,"|TInterface\\icons\\Ability_Vehicle_LoadSelfCatapult:25|t|cFF000000[|r|cFF800000Nevermind|cFF000000]",0,999)
player:GossipSendMenu(1, creature)
end


-- class train

    if (intid == 1) then -- Warrior
        player:LearnSpell(2457)
        player:LearnSpell(47436)
        player:LearnSpell(47450)
        player:LearnSpell(11578)
        player:LearnSpell(47465)
        player:LearnSpell(47502)
        player:LearnSpell(34428)
        player:LearnSpell(1715)
        player:LearnSpell(2687)
        player:LearnSpell(71)
        player:LearnSpell(7386)
        player:LearnSpell(355)
        player:LearnSpell(72)
        player:LearnSpell(47437)
        player:LearnSpell(57823)
        player:LearnSpell(694)
        player:LearnSpell(2565)
        player:LearnSpell(676)
        player:LearnSpell(47520)
        player:LearnSpell(20230)
        player:LearnSpell(12678)
        player:LearnSpell(47471)
        player:LearnSpell(1161)
        player:LearnSpell(871)
        player:LearnSpell(2458)
        player:LearnSpell(20252)
        player:LearnSpell(47475)
        player:LearnSpell(18499)
        player:LearnSpell(1680)
        player:LearnSpell(6552)
        player:LearnSpell(47488)
        player:LearnSpell(1719)
        player:LearnSpell(23920)
        player:LearnSpell(47440)
        player:LearnSpell(3411)
        player:LearnSpell(64382)
        player:LearnSpell(55694)
        player:LearnSpell(57755)
        player:LearnSpell(674)
        player:LearnSpell(750)
        player:LearnSpell(5246)
    
    if (player:HasSpell(12294)) then
        player:LearnSpell(47486)
    end
    
    if (player:HasSpell(20243)) then
        player:LearnSpell(47498)
end
end


    if (intid == 2) then -- paladin
        player:LearnSpell(750)
        player:LearnSpell(48942)
        player:LearnSpell(48782)
        player:LearnSpell(48932)
        player:LearnSpell(20271)
        player:LearnSpell(498)
        player:LearnSpell(853)
        player:LearnSpell(1152)
        player:LearnSpell(10278)
        player:LearnSpell(48788)
        player:LearnSpell(53408)
        player:LearnSpell(48950)
        player:LearnSpell(48936)
        player:LearnSpell(31789)
        player:LearnSpell(62124)
        player:LearnSpell(54043)
        player:LearnSpell(25780)
        player:LearnSpell(1044)
        player:LearnSpell(20217)
        player:LearnSpell(48819)
        player:LearnSpell(48801)
        player:LearnSpell(48785)
        player:LearnSpell(5502)
        player:LearnSpell(20164)
        player:LearnSpell(10326)
        player:LearnSpell(1038)
        player:LearnSpell(53407)
        player:LearnSpell(48943)
        player:LearnSpell(20165)
        player:LearnSpell(48945)
        player:LearnSpell(642)
        player:LearnSpell(48947)
        player:LearnSpell(20166)
        player:LearnSpell(4987)
        player:LearnSpell(48806)
        player:LearnSpell(6940)
        player:LearnSpell(48817)
        player:LearnSpell(48934)
        player:LearnSpell(48938)
        player:LearnSpell(25898)
        player:LearnSpell(25899)
        player:LearnSpell(32223)
        player:LearnSpell(31884)
        player:LearnSpell(54428)
        player:LearnSpell(61411)
        player:LearnSpell(53601)
        player:LearnSpell(33388)
        player:LearnSpell(33391)
        player:LearnSpell(34769)
        player:LearnSpell(34767)
            player:LearnSpell(19746)
    if (player:GetTeam() < 1) then
        player:LearnSpell(31801)
    else
        player:LearnSpell(53736)
    end
    
    if (player:HasSpell(20925)) then
        player:LearnSpell(48952)
    end
    
    if (player:HasSpell(31935)) then
        player:LearnSpell(48827)
    end
    
    if (player:HasSpell(20473)) then
        player:LearnSpell(48825)
    end
end

    if (intid == 4) then -- Rogue
        player:LearnSpell(674)
        player:LearnSpell(48668)
        player:LearnSpell(48638)
        player:LearnSpell(1784)
        player:LearnSpell(48657)
        player:LearnSpell(921)
        player:LearnSpell(1776)
        player:LearnSpell(26669)
        player:LearnSpell(51724)
        player:LearnSpell(6774)
        player:LearnSpell(11305)
        player:LearnSpell(1766)
        player:LearnSpell(48676)
        player:LearnSpell(48659)
        player:LearnSpell(1804)
        player:LearnSpell(8647)
        player:LearnSpell(48691)
        player:LearnSpell(51722)
        player:LearnSpell(48672)
        player:LearnSpell(1725)
        player:LearnSpell(26889)
        player:LearnSpell(2836)
        player:LearnSpell(1833)
        player:LearnSpell(1842)
        player:LearnSpell(8643)
        player:LearnSpell(2094)
        player:LearnSpell(1860)
        player:LearnSpell(57993)
        player:LearnSpell(48674)
        player:LearnSpell(31224)
        player:LearnSpell(5938)
        player:LearnSpell(57934)
        player:LearnSpell(51723)
    
    if (player:HasSpell(16511)) then
        player:LearnSpell(48660)
    end
    
    if (player:HasSpell(1329)) then
        player:LearnSpell(48666)
    end
end

    if (intid == 3) then -- Hunter
        player:LearnSpell(8737)
        player:LearnSpell(1494)
        player:LearnSpell(13163)
        player:LearnSpell(48996)
        player:LearnSpell(49001)
        player:LearnSpell(49045)
        player:LearnSpell(53338)
        player:LearnSpell(5116)
        player:LearnSpell(27044)
        player:LearnSpell(883)
        player:LearnSpell(2641)
        player:LearnSpell(6991)
        player:LearnSpell(982)
        player:LearnSpell(1515)
        player:LearnSpell(19883)
        player:LearnSpell(20736)
        player:LearnSpell(48990)
        player:LearnSpell(2974)
        player:LearnSpell(6197)
        player:LearnSpell(1002)
        player:LearnSpell(14327)
        player:LearnSpell(5118)
        player:LearnSpell(49056)
        player:LearnSpell(53339)
        player:LearnSpell(49048)
        player:LearnSpell(19884)
        player:LearnSpell(34074)
        player:LearnSpell(781)
        player:LearnSpell(14311)
        player:LearnSpell(1462)
        player:LearnSpell(19885)
        player:LearnSpell(19880)
        player:LearnSpell(13809)
        player:LearnSpell(13161)
        player:LearnSpell(5384)
        player:LearnSpell(1543)
        player:LearnSpell(19878)
        player:LearnSpell(49067)
        player:LearnSpell(3034)
        player:LearnSpell(13159)
        player:LearnSpell(19882)
        player:LearnSpell(58434)
        player:LearnSpell(49071)
        player:LearnSpell(49052)
        player:LearnSpell(19879)
        player:LearnSpell(19263)
        player:LearnSpell(19801)
        player:LearnSpell(34026)
        player:LearnSpell(34600)
        player:LearnSpell(34477)
        player:LearnSpell(61006)
        player:LearnSpell(61847)
        player:LearnSpell(53271)
        player:LearnSpell(60192)
        player:LearnSpell(62757)
    
    if (player:HasSpell(19386)) then
        player:LearnSpell(49012)
    end
    
    if (player:HasSpell(53301)) then
        player:LearnSpell(60053)
    end
    
    if (player:HasSpell(19306)) then
        player:LearnSpell(48999)
    end
    
    if (player:HasSpell(19434)) then
        player:LearnSpell(49050)
    end
end

    if (intid == 5) then -- Priest
        player:LearnSpell(2053)
        player:LearnSpell(48161)
        player:LearnSpell(48123)
        player:LearnSpell(48125)
        player:LearnSpell(48066)
        player:LearnSpell(586)
        player:LearnSpell(48068)
        player:LearnSpell(48127)
        player:LearnSpell(48171)
        player:LearnSpell(48168)
        player:LearnSpell(10890)
        player:LearnSpell(6064)
        player:LearnSpell(988)
        player:LearnSpell(48300)
        player:LearnSpell(6346)
        player:LearnSpell(48071)
        player:LearnSpell(48135)
        player:LearnSpell(48078)
        player:LearnSpell(453)
        player:LearnSpell(9484)
        player:LearnSpell(10909)
        player:LearnSpell(8129)
        player:LearnSpell(48073)
        player:LearnSpell(605)
        player:LearnSpell(48072)
        player:LearnSpell(48169)
        player:LearnSpell(552)
        player:LearnSpell(1706)
        player:LearnSpell(48063)
        player:LearnSpell(48162)
        player:LearnSpell(48170)
        player:LearnSpell(48074)
        player:LearnSpell(48158)
        player:LearnSpell(48120)
        player:LearnSpell(34433)
        player:LearnSpell(48113)
        player:LearnSpell(32375)
        player:LearnSpell(64843)
        player:LearnSpell(64901)
        player:LearnSpell(53023)
    
    if (player:HasSpell(34914)) then
        player:LearnSpell(48160)
    end
    
    if (player:HasSpell(47540)) then
        player:LearnSpell(53007)
    end
    
    if (player:HasSpell(724)) then
        player:LearnSpell(48087)
    end
    
    if (player:HasSpell(19236)) then
        player:LearnSpell(48173)
    end
    
    if (player:HasSpell(34861)) then
        player:LearnSpell(48089)
    end
    
    if (player:HasSpell(15407)) then
        player:LearnSpell(48156)
    end
end

    if (intid == 8) then --mage
        player:LearnSpell(42995)
        player:LearnSpell(42833)
        player:LearnSpell(27090)
        player:LearnSpell(42842)
        player:LearnSpell(33717)
        player:LearnSpell(42873)
        player:LearnSpell(42846)
        player:LearnSpell(12826)
        player:LearnSpell(28271)
        player:LearnSpell(61780)
        player:LearnSpell(61721)
        player:LearnSpell(28272)
        player:LearnSpell(61305)
        player:LearnSpell(42917)
        player:LearnSpell(43015)
        player:LearnSpell(130)
        player:LearnSpell(42921)
        player:LearnSpell(42926)
        player:LearnSpell(43017)
        player:LearnSpell(475)
        player:LearnSpell(1953)
        player:LearnSpell(42940)
        player:LearnSpell(12051)
        player:LearnSpell(43010)
        player:LearnSpell(43020)
        player:LearnSpell(43012)
        player:LearnSpell(42859)
        player:LearnSpell(2139)
        player:LearnSpell(42931)
        player:LearnSpell(42985)
        player:LearnSpell(43008)
        player:LearnSpell(45438)
        player:LearnSpell(43024)
        player:LearnSpell(43002)
        player:LearnSpell(43046)
        player:LearnSpell(42897)
        player:LearnSpell(42914)
        player:LearnSpell(66)
        player:LearnSpell(58659)
        player:LearnSpell(30449)
        player:LearnSpell(42956)
        player:LearnSpell(47610)
        player:LearnSpell(61316)
        player:LearnSpell(61024)
        player:LearnSpell(55342)
        player:LearnSpell(53142)

        if (player:GetTeam() < 1) then
            player:LearnSpell(32271)
            player:LearnSpell(49359)
            player:LearnSpell(3565)
            player:LearnSpell(33690)
            player:LearnSpell(3562)
            player:LearnSpell(3561)
            player:LearnSpell(11419)
            player:LearnSpell(32266)
            player:LearnSpell(11416)
            player:LearnSpell(33691)
            player:LearnSpell(11059)
            player:LearnSpell(49360)
        else
            player:LearnSpell(3567)
            player:LearnSpell(35715)
            player:LearnSpell(3566)
            player:LearnSpell(49358)
            player:LearnSpell(32272)
            player:LearnSpell(3563)
            player:LearnSpell(11417)
            player:LearnSpell(35717)
            player:LearnSpell(32267)
            player:LearnSpell(49361)
            player:LearnSpell(11420)
            player:LearnSpell(11418)
        end
        
    if (player:HasSpell(11366)) then
        player:LearnSpell(42891)
    end
    
    if (player:HasSpell(11426)) then
        player:LearnSpell(43039)
    end
    
    if (player:HasSpell(44457)) then
        player:LearnSpell(55360)
    end
    
    if (player:HasSpell(31661)) then
        player:LearnSpell(42950)
    end
    
    if (player:HasSpell(11113)) then
        player:LearnSpell(42945)
    end
    
    if (player:HasSpell(44425)) then
        player:LearnSpell(44781)
    end
end

    if (intid == 9) then -- warlock
        player:LearnSpell(696)
        player:LearnSpell(47811)
        player:LearnSpell(47809)
        player:LearnSpell(688)
        player:LearnSpell(47813)
        player:LearnSpell(50511)
        player:LearnSpell(57946)
        player:LearnSpell(47864)
        player:LearnSpell(6215)
        player:LearnSpell(47878)
        player:LearnSpell(47855)
        player:LearnSpell(697)
        player:LearnSpell(47856)
        player:LearnSpell(47857)
        player:LearnSpell(5697)
        player:LearnSpell(47884)
        player:LearnSpell(47815)
        player:LearnSpell(47889)
        player:LearnSpell(47820)
        player:LearnSpell(698)
        player:LearnSpell(712)
        player:LearnSpell(126)
        player:LearnSpell(5138)
        player:LearnSpell(5500)
        player:LearnSpell(11719)
        player:LearnSpell(132)
        player:LearnSpell(60220)
        player:LearnSpell(18647)
        player:LearnSpell(61191)
        player:LearnSpell(47823)
        player:LearnSpell(691)
        player:LearnSpell(47865)
        player:LearnSpell(47891)
        player:LearnSpell(47888)
        player:LearnSpell(17928)
        player:LearnSpell(47860)
        player:LearnSpell(47825)
        player:LearnSpell(1122)
        player:LearnSpell(47867)
        player:LearnSpell(18540)
        player:LearnSpell(47893)
        player:LearnSpell(47838)
        player:LearnSpell(29858)
        player:LearnSpell(58887)
        player:LearnSpell(47836)
        player:LearnSpell(61290)
        player:LearnSpell(48018)
        player:LearnSpell(48020)
        player:LearnSpell(33388)
        player:LearnSpell   (33391)
        player:LearnSpell(23161)
    
    if (player:HasSpell(17877)) then
        player:LearnSpell(47827)
    end
    
    if (player:HasSpell(30283)) then
        player:LearnSpell(47847)
    end
    
    if (player:HasSpell(30108)) then
        player:LearnSpell(47843)
    end
    
    if (player:HasSpell(50796)) then
        player:LearnSpell(59172)
    end
    
    if (player:HasSpell(48181)) then
        player:LearnSpell(59164)
    end
    
    if (player:HasSpell(18220)) then
        player:LearnSpell(59092)
    end
end

    if (intid == 7) then --Shaman
        player:LearnSpell(8737)
        player:LearnSpell(49273)
        player:LearnSpell(49238)
        player:LearnSpell(10399)
        player:LearnSpell(49231)
        player:LearnSpell(58753)
        player:LearnSpell(2484)
        player:LearnSpell(49281)
        player:LearnSpell(58582)
        player:LearnSpell(49233)
        player:LearnSpell(58790)
        player:LearnSpell(58704)
        player:LearnSpell(58643)
        player:LearnSpell(49277)
        player:LearnSpell(61657)
        player:LearnSpell(8012)
        player:LearnSpell(526)
        player:LearnSpell(2645)
        player:LearnSpell(57994)
        player:LearnSpell(8143)
        player:LearnSpell(49236)
        player:LearnSpell(58796)
        player:LearnSpell(58757)
        player:LearnSpell(49276)
        player:LearnSpell(57960)
        player:LearnSpell(131)
        player:LearnSpell(58745)
        player:LearnSpell(6196)
        player:LearnSpell(58734)
        player:LearnSpell(58774)
        player:LearnSpell(58739)
        player:LearnSpell(58656)
        player:LearnSpell(546)
        player:LearnSpell(556)
        player:LearnSpell(66842)
        player:LearnSpell(51994)
        player:LearnSpell(8177)
        player:LearnSpell(58749)
        player:LearnSpell(20608)
        player:LearnSpell(36936)
        player:LearnSpell(58804)
        player:LearnSpell(49271)
        player:LearnSpell(8512)
        player:LearnSpell(6495)
        player:LearnSpell(8170)
        player:LearnSpell(66843)
        player:LearnSpell(55459)
        player:LearnSpell(66844)
        player:LearnSpell(3738)
        player:LearnSpell(2894)
        player:LearnSpell(60043)
        player:LearnSpell(51514)
    
    if (player:GetTeam() < 1) then
        player:LearnSpell(32182)
    else
        player:LearnSpell(2825)
    end
    
    if (player:HasSpell(61295)) then
        player:LearnSpell(61301)
    end
    
    if (player:HasSpell(974)) then
        player:LearnSpell(49284)
    end
    
    if (player:HasSpell(30706)) then
        player:LearnSpell(57722)
    end
    
    if (player:HasSpell(51490)) then
        player:LearnSpell(59159)
    end
end

    if (intid == 6) then
        player:LearnSpell(50842)
        player:LearnSpell(49941)
        player:LearnSpell(49930)
        player:LearnSpell(47476)
        player:LearnSpell(45529)
        player:LearnSpell(3714)
        player:LearnSpell(56222)
        player:LearnSpell(48743)
        player:LearnSpell(48263)
        player:LearnSpell(49909)
        player:LearnSpell(66188)
        player:LearnSpell(47528)
        player:LearnSpell(45524)
        player:LearnSpell(48792)
        player:LearnSpell(57623)
        player:LearnSpell(56815)
        player:LearnSpell(47568)
        player:LearnSpell(49895)
        player:LearnSpell(50977)
        player:LearnSpell(49576)
        player:LearnSpell(49921)
        player:LearnSpell(46584)
        player:LearnSpell(49938)
        player:LearnSpell(48707)
        player:LearnSpell(48265)
        player:LearnSpell(61999)
        player:LearnSpell(42650)
        player:LearnSpell(53428)
        player:LearnSpell(53331)
        player:LearnSpell(54447)
        player:LearnSpell(53342)
        player:LearnSpell(54446)
        player:LearnSpell(53323)
        player:LearnSpell(53344)
        player:LearnSpell(70164)
        player:LearnSpell(62158)
        player:LearnSpell(33391)
        player:LearnSpell(48778)
        player:LearnSpell(51425)
        player:LearnSpell(49924)
        player:LearnSpell(49924)
    
    if (player:HasSpell(55050)) then
        player:LearnSpell(55262)
    end
    
    if (player:HasSpell(49143)) then
        player:LearnSpell(55268)
    end
    
    if (player:HasSpell(49184)) then
        player:LearnSpell(51411)
    end
    
    if (player:HasSpell(55090)) then
        player:LearnSpell(55271)
    end
        
    if (player:HasSpell(49158)) then
        player:LearnSpell(51328)
    end
end

    if (intid == 10) then -- Druid
        player:LearnSpell(48378)
        player:LearnSpell(48469)
        player:LearnSpell(48461)
        player:LearnSpell(48463)
        player:LearnSpell(48441)
        player:LearnSpell(53307)
        player:LearnSpell(53308)
        player:LearnSpell(5487)
        player:LearnSpell(48560)
        player:LearnSpell(6795)
        player:LearnSpell(48480)
        player:LearnSpell(53312)
        player:LearnSpell(18960)
        player:LearnSpell(5229)
        player:LearnSpell(48443)
        player:LearnSpell(50763)
        player:LearnSpell(8983)
        player:LearnSpell(8946)
        player:LearnSpell(1066)
        player:LearnSpell(48562)
        player:LearnSpell(783)
        player:LearnSpell(770)
        player:LearnSpell(16857)
        player:LearnSpell(18658)
        player:LearnSpell(768)
        player:LearnSpell(1082)
        player:LearnSpell(16979)
        player:LearnSpell(49376)
        player:LearnSpell(5215)
        player:LearnSpell(48477)
        player:LearnSpell(49800)
        player:LearnSpell(48465)
        player:LearnSpell(48572)
        player:LearnSpell(26995)
        player:LearnSpell(48574)
        player:LearnSpell(2782)
        player:LearnSpell(50213)
        player:LearnSpell(2893)
        player:LearnSpell(33357)
        player:LearnSpell(5209)
        player:LearnSpell(48575)
        player:LearnSpell(48447)
        player:LearnSpell(48577)
        player:LearnSpell(48579)
        player:LearnSpell(5225)
        player:LearnSpell(22842)
        player:LearnSpell(49803)
        player:LearnSpell(9634)
        player:LearnSpell(20719)
        player:LearnSpell(48467)
        player:LearnSpell(29166)
        player:LearnSpell(62600)
        player:LearnSpell(22812)
        player:LearnSpell(48470)
        player:LearnSpell(48564)
        player:LearnSpell(48566)
        player:LearnSpell(33891)
        player:LearnSpell(33943)
        player:LearnSpell(49802)
        player:LearnSpell(48451)
        player:LearnSpell(48568)
        player:LearnSpell(33786)
        player:LearnSpell(40120)
        player:LearnSpell(62078)
        player:LearnSpell(52610)
        player:LearnSpell(50464)
        player:LearnSpell(48570)
        player:LearnSpell(1850)
    if (player:HasSpell(50516)) then
        player:LearnSpell(61384)
    end
    
    if (player:HasSpell(48505)) then
        -- player:LearnSpell(53201)
player:SendBroadcastMessage("Starfall Rank 4 has been disable due to a damage bug. This Spell will be avaible soon. You can use the Rank 1.")
    end
    
    if (player:HasSpell(48438)) then
        player:LearnSpell(53251)
    end
    
    if (player:HasSpell(5570)) then
        player:LearnSpell(48468)
    end
end
 
if (intid == 11) then
        player:ResetTalents()
        player:SendBroadcastMessage("your talent points are reset.")
        player:GossipComplete()
end
 
if (intid == 999) then
        player:GossipComplete()
end

if(intid == 99940) then
player:LearnSpell(201) -- One-Handed Swords
player:LearnSpell(202) -- Two-Handed Swords
player:LearnSpell(196) -- One-Handed Axes
player:LearnSpell(197) -- Two-Handed Axes
player:LearnSpell(227) -- Staves
player:LearnSpell(200) -- Polearms
player:LearnSpell(266) -- Guns
player:LearnSpell(264) -- Bows
player:LearnSpell(5011) -- Crossbows
player:LearnSpell(3018) -- Shoot (Bow, Crossbow or Gun)
player:LearnSpell(198) -- One-Handed Maces
player:LearnSpell(199) -- Two-Handed Maces
player:LearnSpell(1180) -- Daggers
player:LearnSpell(2567) -- Thrown
player:LearnSpell(2764) -- Throw (With Thrown)
player:LearnSpell(5009) -- Wands
player:LearnSpell(5019) -- Shoot (Wands)
player:SendBroadcastMessage("Ahora usted tiene todas las habilidades de armas.") -- Message
player:GossipComplete()
end
 
if(intid == 99941) then
player:AdvanceSkill (43, 399)
player:AdvanceSkill (44, 399)
player:AdvanceSkill (45, 399)
player:AdvanceSkill (46, 399)
player:AdvanceSkill (54, 399)
player:AdvanceSkill (55, 399)  
player:AdvanceSkill (256, 399)
player:AdvanceSkill (160, 399)
player:AdvanceSkill (172, 399)
player:AdvanceSkill (173, 399)
player:AdvanceSkill (176, 399)
player:AdvanceSkill (226, 399)
player:AdvanceSkill (228, 399)
player:AdvanceSkill (229, 399)
player:AdvanceSkill (473, 399)
player:SendBroadcastMessage("He avanzada Todas sus habilidades con armas.!") -- Message
player:GossipComplete()
end
 
if(intid == 99942) then
player:LearnSpell(674) -- Dual-Wield
player:SendBroadcastMessage("Ahora usted puede doble empuñadura!") -- Message.
player:GossipComplete()
end
 
if(intid == 99943) then
player:LearnSpell(34091)
player:SendBroadcastMessage("has aprendido La Habilidad Artesano! Por favor Relog Para que entre en vigor!") -- Message
player:GossipComplete()
end

if(intid == 99944) then
               player:CastSpell(player, 15366, true)
                player:CastSpell(player, 16609, true)
                player:CastSpell(player, 48162, true)
                player:CastSpell(player, 48074, true)
                player:CastSpell(player, 48170, true)
                player:CastSpell(player, 43223, true)
                player:CastSpell(player, 36880, true)
                player:CastSpell(player, 467, true)
                player:CastSpell(player, 69994, true)
                player:CastSpell(player, 33081, true)
                player:CastSpell(player, 24705, true)
                player:CastSpell(player, 26035, true)
                player:CastSpell(player, 48469, true)
                player:SetDisplayId(11657)
                player:SetScale(0.8)
                player:SendAreaTriggerMessage("|cff00ff00|TInterface\\icons\\spell_holy_fanaticism:30|t|r Estas Buffeado |cffff0000"..player:GetName().."")
player:GossipComplete()
end

-------Morph---------
if(intid == 9700) then
player:SetDisplayId(20321)
player:GossipComplete(player)
end
if(intid == 9701) then
player:SetDisplayId(20322)
player:GossipComplete(player)
end
if(intid == 9702) then
player:SetDisplayId(20323)
player:GossipComplete(player)
end
if(intid == 9703) then
player:SetDisplayId(20320)
player:GossipComplete(player)
end
if(intid == 9704) then
player:SetDisplayId(20319)
player:GossipComplete(player)
end
if(intid == 9705) then
player:SetDisplayId(20318)
player:GossipComplete(player)
end
if(intid == 9706) then
player:SetDisplayId(20317)
player:GossipComplete(player)
end
if(intid == 9707) then
player:SetDisplayId(20316)
player:GossipComplete(player)
end
end
 
RegisterCreatureGossipEvent(UnitEntry, 1, Trainers_Gossip)
RegisterCreatureGossipEvent(UnitEntry, 2, Menu_Trainers_Select)