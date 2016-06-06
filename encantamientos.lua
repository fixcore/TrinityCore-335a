local npcid = 54
 
local T = {
        ["Menu"] = {
                {"Headpiece", 0},
                {"Shoulders", 2},
                {"Chest", 4},
                {"Legs", 6},
                {"Boots", 7},
                {"Bracers", 8},
                {"Gloves", 9},
                {"Cloak", 14},
                {"Main-Hand Weapons", 15},
                {"Two-Handed Weapons", 151},
                {"Off-Hand Weapons", 16},
                {"Shields", 161};
        },
       
        [0] = { -- Headpiece
                {"Arcanum of Burning Mysteries", 3820, false},
                {"Arcanum of Blissful Mending", 3819, false},
                {"Arcanum of the Stalward Protector", 3818, false},
                {"Arcanum of Torment", 3817, false},
                {"Arcanum of the Savage Gladiator", 3842, false},
                {"Arcanum of Triumph", 3795, false},
                {"Arcanum of Dominance", 3797, false};
        },
 
        [2] = { -- Shoulders
                {"Inscription of Triumph", 3793, false},
                {"Inscription of Dominance", 3794, false},
                {"Greater Inscription of the Gladiator", 3852, false},
                {"Greater Inscription of the Axe", 3808, false},
                {"Greater Inscription of the Crag", 3809, false},
                {"Greater Inscription of the Pinnacle", 3811, false},
                {"Greater Inscription of the Storm", 3810, false};
        },
 
        [4] = { -- Chest
                {"Enchant Chest - Powerful Stats", 3832, false},
                {"Enchant Chest - Super Health", 3297, false},
                {"Enchant Chest - Greater Mana Restoration", 2381, false},
                {"Enchant Chest - Exceptional Resilience", 3245, false},
                {"Enchant Chest - Greater Defense", 1953, false};
        },
 
        [6] = { -- Legs
                {"Earthen Leg Armor", 3853, false},
                {"Frosthide Leg Armor", 3822, false},
                {"Icescale Leg Armor", 3823, false},
                {"Brilliant Spellthread", 3719, false},
                {"Sapphire Spellthread", 3721, false};
        },     
 
        [7] = { -- Boots
                {"Enchant Boots - Greater Assault", 1597, false},
                {"Enchant Boots - Tuskars Vitality", 3232, false},
                {"Enchant Boots - Superior Agility", 983, false},
                {"Enchant Boots - Greater Spirit", 1147, false},
                {"Enchant Boots - Greater Vitality", 3244, false},
                {"Enchant Boots - Icewalker", 3826, false},
                {"Enchant Boots - Greater Fortitude", 1075, false};
        },
 
        [8] = { -- Bracers
                {"Enchant Bracers - Major Stamina", 3850, false},
                {"Enchant Bracers - Superior Spellpower", 2332, false},
                {"Enchant Bracers - Greater Assault", 3845, false},
                {"Enchant Bracers - Major Spirit", 1147, false},
                {"Enchant Bracers - Expertise", 3231, false},
                {"Enchant Bracers - Greater Stats", 2661, false},
                {"Enchant Bracers - Exceptional Intellect", 1119, false};
        },
 
        [9] = { -- Gloves
                {"Enchant Gloves - Greater Blasting", 3249, false},
                {"Enchant Gloves - Armsman", 3253, false},
                {"Enchant Gloves - Crusher", 1603, false},
                {"Enchant Gloves - Agility", 3222, false},
                {"Enchant Gloves - Precision", 3234, false},
                {"Enchant Gloves - Expertise", 3231, false},
                {"Enchant Gloves - Exceptional Spellpower", 3246, false};
        },
 
        [14] = { -- Cloak
                {"Enchant Cloak - Shadow Armor", 3256, false},
                {"Enchant Cloak - Wisdom", 3296, false},
                {"Enchant Cloak - Titan Weave", 1951, false},
                {"Enchant Cloak - Greater Speed", 3831, false},
                {"Enchant Cloak - Mighty Armor", 3294, false},
                {"Enchant Cloak - Major Agility", 1099, false},
                {"Enchant Cloak - Spell Piercing", 1262, false};
        },
 
        [15] = {
                -- Main Hand
                {"Enchant Weapon - Titan Guard", 3851, false},
                {"Enchant Weapon - Accuracy", 3788, false},
                {"Enchant Weapon - Berserking", 3789, false},
                {"Enchant Weapon - Black Magic", 3790, false},
                {"Enchant Weapon - Mighty Spellpower", 3834, false},
                {"Enchant Weapon - Superior Potency", 3833, false},
                {"Enchant Weapon - Ice Breaker", 3239, false},
                {"Enchant Weapon - Lifeward", 3241, false},
                {"Enchant Weapon - Blood Draining", 3870, false},
                {"Enchant Weapon - Blade Ward", 3869, false},
                {"Enchant Weapon - Exceptional Agility", 1103, false},
                {"Enchant Weapon - Exceptional Spirit", 3844, false},
                {"Enchant Weapon - Executioner", 3225, false},
                {"Enchant Weapon - Mongoose", 2673, false},
               
                -- Two-Handed
                {"Enchant 2H Weapon - Massacre", 3827, true},
                {"Enchant 2H Weapon - Scourgebane", 3247, true},
                {"Enchant 2H Weapon - Giant Slayer", 3251, true},
                {"Enchant 2H Weapon - Greater Spellpower", 3854, true};
        },
       
        [16] = {
                -- Offhand
                {"Enchant Weapon - Titan Guard", 3851, false},
                {"Enchant Weapon - Accuracy", 3788, false},
                {"Enchant Weapon - Berserking", 3789, false},
                {"Enchant Weapon - Black Magic", 3790, false},
                {"Enchant Weapon - Mighty Spellpower", 3834, false},
                {"Enchant Weapon - Superior Potency", 3833, false},
                {"Enchant Weapon - Ice Breaker", 3239, false},
                {"Enchant Weapon - Lifeward", 3241, false},
                {"Enchant Weapon - Blood Draining", 3870, false},
                {"Enchant Weapon - Blade Ward", 3869, false},
                {"Enchant Weapon - Exceptional Agility", 1103, false},
                {"Enchant Weapon - Exceptional Spirit", 3844, false},
                {"Enchant Weapon - Executioner", 3225, false},
                {"Enchant Weapon - Mongoose", 2673, false},
               
                -- Shields
                {"Enchant Shield - Defense", 1952, true},
                {"Enchant Shield - Greater Intellect", 1128, true},
                {"Enchant Shield - Shield Block", 2655, true},
                {"Enchant Shield - Resilience", 3229, true},
                {"Enchant Shield - Major Stamina", 1071, true},
                {"Enchant Shield - Tough Shield", 2653, true};
        },
};
local pVar = {};
 
function Enchanter(event, plr, unit)
        pVar[plr:GetName()] = nil;
 
        for _, v in ipairs(T["Menu"]) do
                plr:GossipMenuAddItem(3, "|cFF008000Enchant "..v[1]..".|R", 0, v[2])
        end
        plr:GossipSendMenu(1, unit)
end
 
function EnchanterSelect(event, plr, unit, sender, intid, code)
        if (intid < 500) then
                local ID = intid
                local f
                if(intid == 161 or intid == 151) then
                        ID = math.floor(intid/10)
                        f = true
                end
                pVar[plr:GetName()] = intid;
                if(T[ID]) then
                        for i, v in ipairs(T[ID]) do
                                if((not f and not v[3]) or (f and v[3])) then
                                        plr:GossipMenuAddItem(3, "|cFF008000Enchant "..v[1]..".|R", 0, v[2])
                                end
                        end
                end
                plr:GossipMenuAddItem(3, "[Back]", 0, 500)
                plr:GossipSendMenu(1, unit)
        elseif (intid == 500) then
                Enchanter(event, plr, unit)
        elseif (intid >= 900) then
                local ID = pVar[plr:GetName()]
                if(ID == 161 or ID == 151) then
                        ID = math.floor(ID/10)
                end
                for k, v in pairs(T[ID]) do
                        if v[2] == intid then
                                local item = plr:GetEquippedItemBySlot(ID)
                                if item then
                                        if v[3] then
                                                local WType = item:GetSubClass()
                                                if pVar[plr:GetName()] == 151 then
                                                        if(WType == 1 or WType == 5 or WType == 6 or WType == 8 or WType == 10) then
                                                                item:ClearEnchantment(0,0)
                                                                item:SetEnchantment(intid, 0, 0)
                                                        else
                                                                plr:SendAreaTriggerMessage("You do not have a Two-Handed Weapon equipped!")
                                                        end    
                                                elseif pVar[plr:GetName()] == 161 then
                                                        if(WType == 6) then
                                                                item:ClearEnchantment(0,0)
                                                                item:SetEnchantment(intid, 0, 0)
                                                        else
                                                                plr:SendAreaTriggerMessage("You do not have a Shield equipped!")
                                                        end
                                                end
                                        else
                                                item:ClearEnchantment(0,0)
                                                item:SetEnchantment(intid, 0, 0)
                                                plr:CastSpell(plr, 36937)
                                        end
                                else
                                        plr:SendAreaTriggerMessage("You have no item to enchant in the selected slot!")
                                end
                        end
                end
                EnchanterSelect(event, plr, unit, sender, pVar[plr:GetName()], nil)
        end
end
 
RegisterCreatureGossipEvent(npcid, 1, Enchanter)
RegisterCreatureGossipEvent(npcid, 2, EnchanterSelect)