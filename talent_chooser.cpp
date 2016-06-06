#include "ScriptPCH.h"
 
class Talent_Chooser : public CreatureScript
{
public:
    Talent_Chooser() : CreatureScript("Talent_Chooser") { }
 
    bool OnGossipHello(Player * pPlayer, Creature * pCreature)
    {
        switch (pPlayer->getClass())
        {
        case CLASS_PALADIN:
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_holy_auraoflight:30|t|cff660099Retribution|r\n|cffbc0000Passives:\nSheath of Light.|r\n|cff0A7600Actives:\nCrusader Strike and Repentance", GOSSIP_SENDER_MAIN, 0);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_holy_holybolt:30|t|cff660099Holy|r\n|cffbc0000Passives:\nJudgements of the Pure, Light's Grace.|r\n|cff0A7600Actives:\nCleanse, Aura Mastery, Holy Guidance, and Concentration Aura.", GOSSIP_SENDER_MAIN, 1);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_holy_devotionaura:30|t|cff660099Protection|r\n|cffbc0000Passives:\nSpiritual Attunement.\n|cff0A7600Actives:\nBlessing of Sanctuary, Holy Shield, and Consecration.", GOSSIP_SENDER_MAIN, 2);
            pPlayer->PlayerTalkClass->SendGossipMenu(161666, pCreature->GetGUID());
            break;
        case CLASS_MAGE:
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_holy_magicalsentry:30|t|cff660099Arcane|r\n|cffbc0000Passives:\nMissle Barrage.|r\n|cff0A7600Actives:\nInvisibility and Slow.", GOSSIP_SENDER_MAIN, 3);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_fire_flamebolt:30|t|cff660099Fire|r\n|cffbc0000Passives:\nBlazing Speed.|r\n|cff0A7600Actives:\nDragon's Breath, and Scorch.", GOSSIP_SENDER_MAIN, 4);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_frost_frostbolt02:30|t|cff660099Frost|r\n|cffbc0000Passives:\nShatter.|r\n|cff0A7600Actives:\nIce Barrier and Ice Lance.", GOSSIP_SENDER_MAIN, 5);
            pPlayer->PlayerTalkClass->SendGossipMenu(161666, pCreature->GetGUID());
            break;
        case CLASS_WARRIOR:
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_rogue_eviscerate:30|t|cff660099Arms|r\n|cffbc0000Passives:\nTaste for Blood, Second Wind, Improved Overpower, Sudden Death. \n|cff0A7600Actives:\nIntervene", GOSSIP_SENDER_MAIN, 6);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_warrior_innerrage:30|t|cff660099Fury|r\n|cffbc0000Passives:\nBloodsurge.|r\n|cff0A7600Actives:\nBloodthirst, and Slam.", GOSSIP_SENDER_MAIN, 7);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_warrior_defensivestance:30|t|cff660099Protection|r\n|cffbc0000Passives:\nShield Mastery.|r\n|cff0A7600Actives:\nConcussion Blow, Last Stand, and Spell Reflection.", GOSSIP_SENDER_MAIN, 8);
            pPlayer->PlayerTalkClass->SendGossipMenu(161666, pCreature->GetGUID());
            break;
        case CLASS_PRIEST:
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_holy_guardianspirit:30|t|cff660099Holy|r\n|cffbc0000Passives:\nEmpowered Renew, Spiritual Healing and Surge of Light.|r\n|cff0A7600Actives:\nDesperate Prayer and Holy Nova.", GOSSIP_SENDER_MAIN, 9);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_holy_wordfortitude:30|t|cff660099Discipline|r\n|cffbc0000Passives:\nMeditation, Soul Warding, Grace, Impowered Power Word: Shield and Rapture.|r\n|cff0A7600Actives:\nPain Surpression.", GOSSIP_SENDER_MAIN, 10);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_shadow_shadowwordpain:30|t|cff660099Shadow|r\n|cffbc0000Passive:\nFocused Mind and Shadow Weaving.|r\n|cff0A7600Actives:\nMind Flay and Vampiric Touch.", GOSSIP_SENDER_MAIN, 11);
            pPlayer->PlayerTalkClass->SendGossipMenu(161666, pCreature->GetGUID());
            break;
        case CLASS_HUNTER:
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_marksmanship:30|t|cff660099Marksmanship|r\n|cff0A7600Actives:\nSilencing Shot, Chimera Shot.|r", GOSSIP_SENDER_MAIN, 12);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_hunter_swiftstrike.:30|t|cff660099Survival|r\n|cffbc0000Passives:\nExpose Weakness, and Master Tactician.|r\n|cff0A7600Actives:\nScatter Shot, Deterrence.|r", GOSSIP_SENDER_MAIN, 13);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_hunter_beasttaming:30|t|cff660099Beastmaster|r\n|cffbc0000Passives:\nUnleashed Fury, Bestial Discipline, Ferocity, Kindred Spirits and Beast Mastery.|r\n|cff0A7600Actives:\nMaster's Call and Intimidation.|r", GOSSIP_SENDER_MAIN, 14);
            pPlayer->PlayerTalkClass->SendGossipMenu(161666, pCreature->GetGUID());
            break;
        case CLASS_ROGUE:
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_stealth:30|t|cff660099Subtlety|r\n|cffbc0000Passives:\nSlaughter from the Shadows and Elusiveness.|r\n|cff0A7600Actives:\nHemorrhage.", GOSSIP_SENDER_MAIN, 15);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_rogue_eviscerate:30|t|cff660099Assassination|r\n|cffbc0000Passives:\nOverkill, Seal Fate, Deadly Brew, and Improved Poisons.|r\n|cff0A7600Actives:\nCold Blood.", GOSSIP_SENDER_MAIN, 16);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_backstab:30|t|cff660099Combat|r\n|cffbc0000Passives:\nUnfair Advantage, and Improved Sprint.|r\n|cff0A7600Actives:\nAdrenaline Rush", GOSSIP_SENDER_MAIN, 17);
            pPlayer->PlayerTalkClass->SendGossipMenu(161666, pCreature->GetGUID());
            break;
        case CLASS_SHAMAN:
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_nature_magicimmunity:30|t|cff660099Restoration|r\n|cffbc0000Passives:\nNature's Guardian, and Purification and Healing Focus.|r\n|cff0A7600Actives:\nEarth Shield and Cleanse Spirit.", GOSSIP_SENDER_MAIN, 18);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_nature_lightningshield:30|t|cff660099Enhancement|r\n|cffbc0000Passives:\nDual Wield, Flurry, Mental Quickness, and Improved Stormstrike.|r\n|cff0A7600Actives:\nStormstrike, Lava Lash.", GOSSIP_SENDER_MAIN, 19);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_nature_lightning:30|t|cff660099Elemental|r\n|cffbc0000Passives:\nLightning Mastery, Eye of the Storm, and Storm Earth and Fire. \n|cff0A7600Actives:\nElemental Mastery.", GOSSIP_SENDER_MAIN, 20);
            pPlayer->PlayerTalkClass->SendGossipMenu(161666, pCreature->GetGUID());
            break;
        case CLASS_WARLOCK:
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_shadow_deathcoil:30|t|cff660099Affliciton|r\n|cffbc0000Passives:\nFel Concentration.|r\n|cff0A7600Actives:\nHaunt.", GOSSIP_SENDER_MAIN, 21);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_shadow_gathershadows:30|t|cff660099Demonology|r\n|cffbc0000Passives:\nMaster Summoner.|r\n|cff0A7600Actives:\nSoul Link and Fel Domination.|r", GOSSIP_SENDER_MAIN, 22);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_shadow_rainoffire:30|t|cff660099Destruction|r\n|cffbc0000Passives:\nBackdraft and Intensity.|r\n|cff0A7600Actives:\nConflagrate and Incinterate.|r", GOSSIP_SENDER_MAIN, 23);
            pPlayer->PlayerTalkClass->SendGossipMenu(161666, pCreature->GetGUID());
            break;
        case CLASS_DRUID:
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_druid_catform:30|t|cff660099Feral|r\n|cffbc0000Passives:\nPredatory Strikes, Nurturing Instinct Shredding Attacks, and Feral Swiftness.|r\n|cff0A7600Actives:\nFeral Charge - Cat, Mangle - Cat and Shred.", GOSSIP_SENDER_MAIN, 24);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\ability_racial_bearform:30|t|cff660099Guardian|r\n|cffbc0000Passives:\nNatural Reaction and Protector of the Pack.|r\n|cff0A7600Actives:\nMangle - Bear and Dire Bear Form.", GOSSIP_SENDER_MAIN, 27);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_nature_starfall:30|t|cff660099Balance|r\n|cffbc0000Passives:\nDreamstate and Owlkin Frenzy.|r\n|cff0A7600Actives:\nMoonkin Form and Insect Swarm.", GOSSIP_SENDER_MAIN, 25);
            pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface\\icons\\spell_nature_healingtouch:30|t|cff660099Restoration|r\n|cffbc0000Passives:\nIntensity and Gift of the Nature.|r\n|cff0A7600Actives:\nSwiftmend and Barkskin.", GOSSIP_SENDER_MAIN, 26);
            pPlayer->PlayerTalkClass->SendGossipMenu(161666, pCreature->GetGUID());
            break;
        }
        return true;
    }
 
    bool OnGossipSelect(Player * player, Creature * creature, uint32 sender, uint32 uiAction)
    {
        if (sender == GOSSIP_SENDER_MAIN)
        {
            player->PlayerTalkClass->ClearMenus();
            switch (uiAction)
            {
                // Paladin
            case 0: //Retrubition
                player->RemoveSpell(19746, false); //Concentration Aura
                player->RemoveSpell(31821, false); //Aura Mastery
                player->RemoveSpell(4987, false);  //Cleanse
                player->RemoveSpell(20911, false); //Blessing of Sanctuary
                player->RemoveSpell(20925, false); //Holy Shield
                player->RemoveSpell(26573, false); //Consecration
                player->RemoveSpell(20127, false); //Redoubt
                player->RemoveSpell(31785, false); //Spiritual Attunement
                player->RemoveSpell(53671, false);  //Judgements of the Pure
                player->RemoveSpell(31833, false); //Light's Grace
                player->RemoveSpell(31837, false); //Holy Guidance
                player->LearnSpell(20066, false);  //Repentance
                player->LearnSpell(35395, false);  //Crusader Strike
                player->LearnSpell(53501, false);  //Sheath of Light 1/3
                break;
            case 1: //Holy
                player->RemoveSpell(20066, false); //Repentance
                player->RemoveSpell(35395, false); //Crusader Strike
                player->RemoveSpell(53501, false); //Sheath of Light 1/3
                player->RemoveSpell(20911, false); //Blessing of Sanctuary
                player->RemoveSpell(20925, false); //Holy Shield
                player->RemoveSpell(26573, false); //Consecration
                player->RemoveSpell(20127, false); //Redoubt
                player->RemoveSpell(31785, false); //Spiritual Attunement
                player->LearnSpell(31840, false);  //Holy Guidance
                player->LearnSpell(19746, false);  //Concentration Aura
                player->LearnSpell(31821, false);  //Aura Mastery
                player->LearnSpell(4987, false);   //Cleanse
                player->LearnSpell(54155, false);   //Judgements of the Pure
                player->LearnSpell(31836, false);  //Light's Grace
                break;
            case 2:  //Protection
                player->RemoveSpell(35395, false); //Crusader Strike
                player->RemoveSpell(53671, false);  //Judgements of the Pure
                player->RemoveSpell(31833, false); //Light's Grace
                player->RemoveSpell(20066, false); //Repentance
                player->RemoveSpell(53501, false); //Sheath of Light 1/3
                player->RemoveSpell(4987, false);  //Cleanse  
                player->RemoveSpell(31821, false); //Aura Mastery
                player->RemoveSpell(19746, false); //Concentration Aura
                player->RemoveSpell(31837, false); //Holy Guidance
                player->LearnSpell(20911, false);  //Blessing of Sanctuary
                player->LearnSpell(20925, false);  //Holy Shield
                player->LearnSpell(26573, false);  //Consecration
                player->LearnSpell(20135, false);  //Redoubt
                player->LearnSpell(33776, false);  //Spiritual Attunement
                break;
 
                // Mage
            case 3: // Arcane
                player->RemoveSpell(11426, false); //Ice Barrier
                player->RemoveSpell(11170, false); //Shatter
                player->RemoveSpell(31661, false); //Dragon's Breath
                player->RemoveSpell(31641, false); //Blazing Speed
                player->RemoveSpell(2948, false);  //Scorch    
                player->RemoveSpell(30455, false); //Ice Lance
                player->LearnSpell(66, false);     //Invisibility
                player->LearnSpell(54489, false);  //Missle Barrage
                player->LearnSpell(31589, false);  //Slow
                break;
            case 4: // Fire
                player->RemoveSpell(11426, false); //Ice Barrier
                player->RemoveSpell(11170, false); //Shatter
                player->RemoveSpell(44404, false); //Missle Barrage
                player->RemoveSpell(31589, false); //Slow
                player->RemoveSpell(30455, false); //Ice Lance
                player->RemoveSpell(66, false);     //Invisibility
                player->LearnSpell(31661, false);  //Dragon's Breath
                player->LearnSpell(31642, false);  //Blazing Speed
                player->LearnSpell(2948, false);   //Scorch
                break;
            case 5: // Frost
                player->RemoveSpell(44404, false); //Missle Barrage
                player->RemoveSpell(31589, false); //Slow
                player->RemoveSpell(31661, false); //Dragon's Breath
                player->RemoveSpell(31641, false); //Blazing Speed
                player->RemoveSpell(2948, false);  //Scorch
                player->RemoveSpell(66, false);     //Invisibility
                player->LearnSpell(30455, false);  //Ice Lance
                player->LearnSpell(11426, false); //Ice Barrier
                player->LearnSpell(12983, false);  //Shatter
                break;
 
                // Warrior
            case 6: // Arms
                player->LearnSpell(57499, false);  //Warbringer
                player->RemoveSpell(23881, false); //Bloodthirst
                player->RemoveSpell(1464, false);  //Slam
                player->RemoveSpell(12975, false); //Last Stand
                player->RemoveSpell(23920, false); //Spell Reflection
                player->RemoveSpell(29598, false); //Shield Mastery
                player->RemoveSpell(12809, false); //Concussion Blow
                player->RemoveSpell(46913, false); //Bloodsurge
                player->RemoveSpell(12292, false); //Death Wish
                player->LearnSpell(56638, false);  //Taste For Blood
                player->LearnSpell(29838, false);  //Second Wind
                player->LearnSpell(12963, false);  //Improved Overpower
                player->LearnSpell(29724, false);  //Sudden Death
                player->LearnSpell(3411, false);   //Intervene
                break;
            case 7: // Fury
                player->LearnSpell(57499, false);  //Warbringer
                player->RemoveSpell(56636, false); //Taste For Blood
                player->RemoveSpell(12975, false); //Last Stand
                player->RemoveSpell(29834, false); //Second Wind
                player->RemoveSpell(29723, false); //Sudden Death
                player->RemoveSpell(3411, false);  //Intervene
                player->RemoveSpell(23920, false); //Spell Reflection
                player->RemoveSpell(29598, false); //Shield Mastery
                player->RemoveSpell(12809, false); //Concussion Blow
                player->RemoveSpell(12960, false); //Improved Overpower
                player->LearnSpell(23881, false);  //Bloodthirst
                player->LearnSpell(1464, false);   //Slam
                player->LearnSpell(46915, false);  //Bloodsurge
                break;
            case 8: // Protection
                player->LearnSpell(57499, false);  //Warbringer
                player->RemoveSpell(56636, false); //Taste For Blood
                player->RemoveSpell(23881, false); //Bloodthirst
                player->RemoveSpell(12292, false); //Death Wish
                player->RemoveSpell(1464, false);  //Slam
                player->RemoveSpell(46913, false); //Bloodsurge
                player->RemoveSpell(29834, false); //Second Wind
                player->RemoveSpell(29723, false); //Sudden Death
                player->RemoveSpell(3411, false);  //Intervene
                player->RemoveSpell(12960, false); //Improved Overpower
                player->LearnSpell(23920, false);  //Spell Reflection
                player->LearnSpell(29599, false);  //Shield Mastery
                player->LearnSpell(12809, false);  //Concussion Blow
                player->LearnSpell(12975, false);  //Last Stand
                break;
 
                // Priest
            case 9: // Holy
                player->RemoveSpell(14521, false); //Meditation
                player->RemoveSpell(33206, false); //Pain Suppression
                player->RemoveSpell(63574, false); //Soul Warding
                player->RemoveSpell(47535, false); //Rapture
                player->RemoveSpell(15407, false); //Mind Flay
                player->RemoveSpell(34914, false); //Vampiric Touch
                player->RemoveSpell(33213, false); //Focused Mind
                player->RemoveSpell(15257, false); //Shadow Weaving
                player->RemoveSpell(47516, false); //Grace
                player->RemoveSpell(14748, false); //Improved Power Word Sheild
                player->LearnSpell(63543, false);  //Empowered Renew
                player->LearnSpell(19236, false);  //Desperate Prayer
                player->LearnSpell(33154, false);  //Surge of Light
                player->LearnSpell(15237, false);  //Holy Nova
                player->LearnSpell(9472, false);   //Flash Heal Rank 2
                player->LearnSpell(6075, false);   //Renew Rank 3
                player->LearnSpell(2055, false);   //Heal Rank 2
                player->LearnSpell(15356, false);  //Spiritual Healing
                break;
            case 10: // Discipline
                player->RemoveSpell(63534, false); //Empowered Renew
                player->RemoveSpell(19236, false); //Desperate Prayer
                player->RemoveSpell(33150, false); //Surge of Light
                player->RemoveSpell(15237, false); //Holy Nova
                player->RemoveSpell(15407, false); //Mind Flay
                player->RemoveSpell(34914, false); //Vampiric Touch
                player->RemoveSpell(33213, false); //Focused Mind
                player->RemoveSpell(15257, false); //Shadow Weaving
                player->RemoveSpell(14898, false); //Spiritual Healing
                player->LearnSpell(47517, false);  //Grace
                player->LearnSpell(14769, false);  //Improved Power Word Sheild
                player->LearnSpell(14777, false);  //Meditation
                player->LearnSpell(33206, false);  //Pain Suppression
                player->LearnSpell(63574, false);  //Soul Warding
                player->LearnSpell(47537, false);  //Rapture
                player->LearnSpell(9472, false);   //Flash Heal Rank 2
                player->LearnSpell(6075, false);   //Renew Rank 3
                player->LearnSpell(2055, false);   //Heal Rank 2
                break;
            case 11: // Shadow
                player->RemoveSpell(63534, false); //Empowered Renew
                player->RemoveSpell(19236, false); //Desperate Prayer
                player->RemoveSpell(33150, false); //Surge of Light
                player->RemoveSpell(15237, false); //Holy Nova
                player->RemoveSpell(14521, false); //Meditation
                player->RemoveSpell(33206, false); //Pain Suppression
                player->RemoveSpell(63574, false); //Soul Warding
                player->RemoveSpell(47535, false); //Rapture
                player->RemoveSpell(9472, false);  //Flash Heal Rank 2
                player->RemoveSpell(6075, false);  //Renew Rank 3
                player->RemoveSpell(2055, false);  //Heal Rank 2
                player->RemoveSpell(14898, false); //Spiritual Healing
                player->RemoveSpell(47516, false); //Grace
                player->RemoveSpell(14748, false); //Improved Power Word Sheild
                player->LearnSpell(15332, false);  //Shadow Weaving
                player->LearnSpell(33215, false);  //Focused Mind
                player->LearnSpell(15407, false);  //Mind Flay
                player->LearnSpell(34914, false);  //Vampiric Touch
                break;
 
                // Hunter
            case 12: // Marksman
                player->CastSpell(player, 36562, false); //Force Dismisses Pet.
                player->RemoveSpell(53271, false); //Master's Call
                player->RemoveSpell(19590, false); //Bestial Discipline
                player->RemoveSpell(19616, false); //Unleashed Fury
                player->RemoveSpell(19598, false); //Ferocity
                player->RemoveSpell(56314, false); //Kindred Spirits
                player->RemoveSpell(19503, false); //Scatter Shot
                player->RemoveSpell(19263, false); //Deterrence
                player->RemoveSpell(34500, false); //Expose Weakness
                player->RemoveSpell(34506, false); //Master Tactician
                player->RemoveSpell(19577, false); //Intimidation
                player->RemoveSpell(53270, false); //Beast Mastery (Exotic Pets)
                player->LearnSpell(34490, false);  //Silencing Shot
                player->LearnSpell(53209, false);  //Chimera Shot
                break;
            case 13: // Survival
                player->CastSpell(player, 36562, false); //Force Dismisses Pet.
                player->RemoveSpell(53271, false); //Master's Call
                player->RemoveSpell(19590, false); //Bestial Discipline
                player->RemoveSpell(19616, false); //Unleashed Fury
                player->RemoveSpell(19598, false); //Ferocity
                player->RemoveSpell(56314, false); //Kindred Spirits
                player->RemoveSpell(34490, false); //Silencing Shot
                player->RemoveSpell(53209, false); //Chimera Shot
                player->RemoveSpell(19577, false); //Intimidation
                player->RemoveSpell(53270, false); //Beast Mastery (Exotic Pets)
                player->LearnSpell(19503, false);  //Scatter Shot
                player->LearnSpell(19263, false);  //Deterrence
                player->LearnSpell(34503, false);  //Expose Weakness
                player->LearnSpell(34839, false);  //Master Tactician
                break;
            case 14: // Beastmaster
                player->CastSpell(player, 36562, false); //Force Dismisses Pet/
                player->RemoveSpell(34490, false); //Silencing Shot
                player->RemoveSpell(53209, false); //Chimera Shot
                player->RemoveSpell(19503, false); //Scatter Shot
                player->RemoveSpell(19263, false); //Deterrence
                player->RemoveSpell(34500, false); //Expose Weakness
                player->RemoveSpell(34506, false); //Master Tactician
                player->LearnSpell(19577, false);  //Intimidation
                player->LearnSpell(53271, false);  //Master's Call
                player->LearnSpell(19620, false);  //Unleashed Fury
                player->LearnSpell(19592, false);  //Bestial Discipline
                player->LearnSpell(19602, false);  //Ferocity
                player->LearnSpell(56318, false);  //Kindred Spirits
                player->LearnSpell(53270, false); //Beast Mastery (Exotic Pets)
                break;
 
                // Rogue
            case 15: //Sub
                player->RemoveSpell(51672, false); // Unfair Advantage
                player->RemoveSpell(58426, false); // Overkill
                player->RemoveSpell(13743, false); // Improved Sprint
                player->RemoveSpell(13750, false); // Adrenaline Rush
                player->RemoveSpell(14177, false); // Cold Blood
                player->RemoveSpell(14113, false); // Improved Poisons
                player->RemoveSpell(14186, false); // Seal Fate
                player->RemoveSpell(51625, false); // Deadly Brew
                player->LearnSpell(51711, false);  // Slaughter from the Shadows 4/5
                player->LearnSpell(14066, false);  // Elusiveness
                player->LearnSpell(16511, false);  // Hemorrhage
                break;
            case 16: // Assassination
                player->RemoveSpell(13750, false); // Adrenaline Rush
                player->RemoveSpell(51672, false); // Unfair Advantage
                player->RemoveSpell(13743, false); // Improved Sprint
                player->RemoveSpell(13981, false); // Elusiveness
                player->RemoveSpell(16511, false); // Hemorrhage
                player->RemoveSpell(51708, false); // Slaughter from the Shadows
                player->LearnSpell(14177, false);  // Cold Blood
                player->LearnSpell(58426, false);  // Overkill
                player->LearnSpell(14117, false);  // Improved Poisons
                player->LearnSpell(14195, false);  // Seal Fate
                player->LearnSpell(51626, false);  // Deadly Brew
                break;
            case 17: // Combat
                player->RemoveSpell(14177, false); // Cold Blood
                player->RemoveSpell(58426, false); // Overkill
                player->RemoveSpell(14113, false); // Improved Poisons
                player->RemoveSpell(14186, false); // Seal Fate
                player->RemoveSpell(51625, false); // Deadly Brew
                player->RemoveSpell(13981, false); // Elusiveness
                player->RemoveSpell(16511, false); // Hemorrhage
                player->RemoveSpell(51708, false); // Slaughter from the Shadows
                player->LearnSpell(13750, false);  // Adrenaline Rush
                player->LearnSpell(51674, false);  // Unfair Advantage
                player->LearnSpell(13875, false);  // Improved Sprint
                break;
 
                // Shaman
            case 18: //Restoration
                player->RemoveSpell(51483, false); // Storm, Earth and Fire
                player->RemoveSpell(16166, false); // Elemental Mastery
                player->RemoveSpell(29062, false); // Eye of the Storm
                player->RemoveSpell(16578, false); // Lightning Mastery
                player->RemoveSpell(30798, false); // Dual Wield
                player->RemoveSpell(17364, false); // Stormstrike
                player->RemoveSpell(51521, false); // Improved Stormstrike
                player->RemoveSpell(30812, false); // Mental Quickness 1/3
                player->RemoveSpell(16256, false); // Flurry
                player->RemoveSpell(60103, false); // Lava Lash
                player->RemoveSpell(939, false);   // Healing Wave Rank 5
                player->RemoveSpell(8008, false);  // Lesser Healing Rank 2
                player->RemoveSpell(51490, false); // REMOVE Thunderstorm
                player->RemoveSpell(51730, false); // REMOVE Earthliving
                player->LearnSpell(939, false);    // Healing Wave Rank 5
                player->LearnSpell(8008, false);   // Lesser Healing Rank 2
                player->LearnSpell(30886, false);  // Nature's Guardian
                player->LearnSpell(51886, false);  // Cleanse Spirit
                player->LearnSpell(16232, false);  // Healing Focus
                player->LearnSpell(974, false);    // Earth Shield
                player->LearnSpell(16213, false);  // Purification
                break;
            case 19: // Enhancement
                player->RemoveSpell(16213, false); // Purification
                player->RemoveSpell(30881, false); // Nature's Guardian
                player->RemoveSpell(51886, false); // Cleanse Spirit
                player->RemoveSpell(16181, false); // Healing Focus
                player->RemoveSpell(974, false);   // Earth Shield
                player->RemoveSpell(16166, false); // Elemental Mastery
                player->RemoveSpell(29062, false); // Eye of the Storm
                player->RemoveSpell(51483, false); // Storm, Earth and Fire
                player->RemoveSpell(16578, false); // Lightning Mastery
                player->RemoveSpell(939, false);   // Healing Wave Rank 5
                player->RemoveSpell(8008, false);  // Lesser Healing Rank 2
                player->RemoveSpell(51490, false); // REMOVE Thunderstorm
                player->RemoveSpell(51730, false); // REMOVE Earthliving
                player->LearnSpell(16284, false);  // Flurry
                player->LearnSpell(60103, false);  // Lava Lash
                player->LearnSpell(30812, false);  // Mental Quickness 1/3
                player->LearnSpell(51522, false);  // Improved Stormstrike
                player->LearnSpell(30798, false);  // Dual Wield
                player->LearnSpell(17364, false);  // Stormstrike
                break;
            case 20: // Elemental
                player->RemoveSpell(16213, false); // Purification
                player->RemoveSpell(30798, false); // Dual Wield
                player->RemoveSpell(17364, false); // Stormstrike
                player->RemoveSpell(51521, false); // Improved Stormstrike
                player->RemoveSpell(30812, false); // Mental Quickness 1/3
                player->RemoveSpell(30881, false); // Nature's Guardian
                player->RemoveSpell(51886, false); // Cleanse Spirit
                player->RemoveSpell(16181, false); // Healing Focus
                player->RemoveSpell(974, false);   // Earth Shield
                player->RemoveSpell(16256, false); // Flurry
                player->RemoveSpell(60103, false); // Lava Lash
                player->RemoveSpell(51490, false); // REMOVE Thunderstorm
                player->RemoveSpell(51730, false); // REMOVE Earthliving
                player->RemoveSpell(939, false);   // Healing Wave Rank 5
                player->RemoveSpell(8008, false);  // Lesser Healing Rank 2
                player->LearnSpell(29065, false);  // Eye of the Storm
                player->LearnSpell(51486, false);  // Storm, Earth and Fire
                player->LearnSpell(16582, false);  // Lightning Mastery
                player->LearnSpell(16166, false);  // Elemental Mastery
                break;
 
                // Warlock
            case 21: //Affliction
                player->CastSpell(player, 36562, false); //Force Dismisses Pet
                player->RemoveSpell(17962, false); // Conflagrate
                player->RemoveSpell(47258, false); // Backdraft
                player->RemoveSpell(29722, false); // Incinterate
                player->RemoveSpell(59672, false); // Metamorphosis
                player->RemoveSpell(19028, false); // Soul Link
                player->RemoveSpell(18708, false); // Fel Domination
                player->RemoveSpell(18709, false); // Master Summoner
                player->RemoveSpell(18135, false); // Intensity
                player->RemoveSpell(47241, false); // REMOVE META                                
                player->LearnSpell(48181, false);  // Haunt
                player->LearnSpell(17785, false);  // Fel Concentration
                break;
            case 22: // Demonology
                player->CastSpell(player, 36562, false); //Force Dismisses Pet
                player->RemoveSpell(48181, false); // Haunt
                player->RemoveSpell(17783, false); // Fel Concentration
                player->RemoveSpell(17962, false); // Conflagrate
                player->RemoveSpell(47258, false); // Backdraft
                player->RemoveSpell(29722, false); // Incinterate
                player->RemoveSpell(18135, false); // Intensity
                player->RemoveSpell(47241, false); // REMOVE META
                player->LearnSpell(19028, false);  // Soul Link
                player->LearnSpell(18708, false);  // Fel Domination
                player->LearnSpell(18710, false);  // Master Summoner
                break;
            case 23: //Destruction
                player->CastSpell(player, 36562, false); //Force Dismisses Pet
                player->RemoveSpell(48181, false); // Haunt
                player->RemoveSpell(17783, false); // Fel Concentration                                                                          
                player->RemoveSpell(59672, false); // Metamorphosis
                player->RemoveSpell(19028, false); // Soul Link
                player->RemoveSpell(18708, false); // Fel Domination
                player->RemoveSpell(18709, false); // Master Summoner
                player->RemoveSpell(47241, false); // REMOVE META
                player->LearnSpell(18136, false);  // Intensity
                player->LearnSpell(17962, false);  // Conflagrate
                player->LearnSpell(47260, false);  // Backdraft
                player->LearnSpell(29722, false);  // Incinterate
                break;
 
                // Druid
            case 24: //Feral
                player->LearnSpell(16979, false);  // Feral Charge - Bear
                player->RemoveSpell(18562, false); // Swiftmend
                player->RemoveSpell(17106, false); // Intensity
                player->RemoveSpell(22812, false); // Barkskin
                player->RemoveSpell(24858, false); // Moonkin Form
                player->RemoveSpell(33597, false); // Dreamstate
                player->RemoveSpell(5570, false);  // Insect Swarm
                player->RemoveSpell(57878, false); // Natural Reaction
                player->RemoveSpell(57873, false); // Protector of the Pack
                player->RemoveSpell(9634, false);  // Dire Bear Form
                player->RemoveSpell(33878, false); // Mangle (Bear)
                player->RemoveSpell(48389, false); // Owlkin Frenzy
                player->RemoveSpell(17104, false); //Gift of the Nature
                player->LearnSpell(8939, false);   // Growth Rank 3
                player->LearnSpell(2090, false);   // Rejuvenation Rank 4
                player->LearnSpell(5221, false);   // Shred
                player->LearnSpell(33876, false);  // Mangle (Cat)
                player->LearnSpell(16975, false);  // Predatory Strikes
                player->LearnSpell(49376, false);  // Feral Charge - Cat
                player->LearnSpell(24866, false);  // Feral Swiftness
                player->LearnSpell(33872, false);  // Nurturing Instinct 1/2
                player->LearnSpell(16968, false);  // Shredding Attacks
                break;
            case 25: // Balance
                player->LearnSpell(16979, false);  // Feral Charge - Bear
                player->RemoveSpell(18562, false); // Swiftmend
                player->RemoveSpell(17106, false); // Intensity
                player->RemoveSpell(22812, false); // Barkskin                                      
                player->RemoveSpell(33876, false); // Mangle (Cat)
                player->RemoveSpell(49376, false); // Feral Charge - Cat
                player->RemoveSpell(17002, false); // Feral Swiftness
                player->RemoveSpell(16972, false); // Predatory Strikes
                player->RemoveSpell(33872, false); // Nurturing Instinct 1/2
                player->RemoveSpell(57878, false); // Natural Reaction
                player->RemoveSpell(57873, false); // Protector of the Pack
                player->RemoveSpell(9634, false);  // Dire Bear Form
                player->RemoveSpell(33878, false); // Mangle (Bear)
                player->RemoveSpell(8939, false);  // Growth Rank 3
                player->RemoveSpell(2090, false);  // Rejuvenation Rank 4
                player->RemoveSpell(5221, false);  // Shred
                player->RemoveSpell(17104, false); //Gift of the Nature
                player->RemoveSpell(16966, false);  // Shredding Attacks
                player->LearnSpell(48393, false);  // Owlkin Frenzy
                player->LearnSpell(24858, false);  // Moonkin Form
                player->LearnSpell(33956, false);  // Dreamstate
                player->LearnSpell(5570, false);   // Insect Swarm
                break;
            case 26: //Restoration
                player->LearnSpell(16979, false);  // Feral Charge - Bear
                player->RemoveSpell(33876, false); // Mangle (Cat)
                player->RemoveSpell(16972, false); // Predatory Strikes
                player->RemoveSpell(49376, false); // Feral Charge - Cat
                player->RemoveSpell(17002, false); // Feral Swiftness
                player->RemoveSpell(33872, false); // Nurturing Instinct 1/2
                player->RemoveSpell(24858, false); // Moonkin Form
                player->RemoveSpell(33597, false); // Dreamstate
                player->RemoveSpell(5570, false);  // Insect Swarm
                player->RemoveSpell(48389, false); // Owlkin Frenzy
                player->RemoveSpell(57878, false); // Natural Reaction
                player->RemoveSpell(57873, false); // Protector of the Pack
                player->RemoveSpell(9634, false);  // Dire Bear Form
                player->RemoveSpell(5221, false);  // Shred
                player->RemoveSpell(33878, false); // Mangle (Bear)
                player->RemoveSpell(16966, false);  // Shredding Attacks
                player->LearnSpell(18562, false);  // Swiftmend
                player->LearnSpell(17108, false);  // Intensity
                player->LearnSpell(22812, false);  // Barkskin
                player->LearnSpell(8939, false);   // Growth Rank 3
                player->LearnSpell(2090, false);   // Rejuvenation Rank 4
                player->LearnSpell(24949, false);  //Gift of the Nature
                break;
            case 27: //Guardian
                player->LearnSpell(16979, false);  // Feral Charge - Bear
                player->RemoveSpell(33876, false); // Mangle (Cat)
                player->RemoveSpell(16972, false); // Predatory Strikes
                player->RemoveSpell(49376, false); // Feral Charge - Cat
                player->RemoveSpell(17002, false); // Feral Swiftness
                player->RemoveSpell(33872, false); // Nurturing Instinct 1/2
                player->RemoveSpell(24858, false); // Moonkin Form
                player->RemoveSpell(33597, false); // Dreamstate
                player->RemoveSpell(5570, false);  // Insect Swarm
                player->RemoveSpell(48389, false); // Owlkin Frenzy
                player->RemoveSpell(18562, false); // Swiftmend
                player->RemoveSpell(17106, false); // Intensity
                player->RemoveSpell(22812, false); // Barkskin
                player->RemoveSpell(5221, false);  // Shred
                player->RemoveSpell(17104, false); //Gift of the Nature
                player->RemoveSpell(16966, false);  // Shredding Attacks
                player->LearnSpell(8939, false);   // Growth Rank 3
                player->LearnSpell(2090, false);   // Rejuvenation Rank 4
                player->LearnSpell(57881, false);  // Natural Reaction
                player->LearnSpell(57877, false);  // Protector of the Pack
                player->LearnSpell(9634, false);   // Dire Bear Form
                player->LearnSpell(33878, false);  // Mangle (Bear)
                break;
            }
            player->CLOSE_GOSSIP_MENU();
        }
        return true;
    }
};
 
void AddSC_Talent_Chooser() {
    new Talent_Chooser();
}