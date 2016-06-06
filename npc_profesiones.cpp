/*Fixed By DevKM*/
#include "Language.h"
 
class Professions_NPC : public CreatureScript
{
public:
    Professions_NPC () : CreatureScript("Professions_NPC") { }
               
    uint32 PlayerMaxLevel() const
    {
        return sWorld->getIntConfig(CONFIG_MAX_PLAYER_LEVEL);
    }
 
    bool PlayerHasItemOrSpell(Player* player, uint32 itemId, uint32 spellId)
    {
        return player->HasItemCount(itemId, 1, true) || player->HasSpell(spellId);
    }
               
    bool PlayerAlreadyHasTwoProfessions(Player* player)
    {
        uint32 skillCount = 0;
 
        if (player->HasSkill(SKILL_MINING))
            skillCount++;
        if (player->HasSkill(SKILL_SKINNING))
            skillCount++;
        if (player->HasSkill(SKILL_HERBALISM))
            skillCount++;
 
        if (skillCount >= 2)
            return true;
 
        for (uint32 i = 1; i < sSkillLineStore.GetNumRows(); ++i)
        {
            SkillLineEntry const *SkillInfo = sSkillLineStore.LookupEntry(i);
            if (!SkillInfo)
                continue;
 
            if (SkillInfo->categoryId == SKILL_CATEGORY_SECONDARY)
                continue;
 
            if ((SkillInfo->categoryId != SKILL_CATEGORY_PROFESSION) || !SkillInfo->canLink)
                continue;
 
            uint32 skillID = SkillInfo->id;
            if (player->HasSkill(skillID))
                skillCount++;
 
            if (skillCount >= 2)
                return true;
        }
 
        return false;
    }
 
    bool LearnAllRecipesInProfession(Player* player, SkillType skill)
    {
        char* skill_name;
 
        SkillLineEntry const* SkillInfo = sSkillLineStore.LookupEntry(skill);
        skill_name = SkillInfo->name[ChatHandler(player->GetSession()).GetSessionDbcLocale()];
 
        if (!SkillInfo)
            return false;      
 
        LearnSkillRecipesHelper(player, SkillInfo->id);
 
        player->SetSkill(SkillInfo->id, player->GetSkillStep(SkillInfo->id), 450, 450);
        ChatHandler(player->GetSession()).PSendSysMessage(LANG_COMMAND_LEARN_ALL_RECIPES, skill_name);
               
        return true;
    }
       
    void LearnSkillRecipesHelper(Player* player, uint32 skill_id)
    {
        uint32 classmask = player->getClassMask();
 
        for (uint32 j = 0; j < sSkillLineAbilityStore.GetNumRows(); ++j)
        {
            SkillLineAbilityEntry const* skillLine = sSkillLineAbilityStore.LookupEntry(j);
            if (!skillLine)
                continue;
 
            if (skillLine->skillId != skill_id)
                continue;
 
            if (skillLine->forward_spellid)
                continue;
 
            if (skillLine->racemask != 0)
                continue;
 
            if (skillLine->classmask && (skillLine->classmask & classmask) == 0)
                continue;
 
            SpellInfo const* spellInfo = sSpellMgr->GetSpellInfo(skillLine->spellId);
            if (!spellInfo || !SpellMgr::IsSpellValid(spellInfo, player, false))
                continue;
                               
            player->LearnSpell(skillLine->spellId, false);
        }
    }
 
    bool IsSecondarySkill(SkillType skill)
    {
        return skill == SKILL_COOKING || skill == SKILL_FIRST_AID;
    }
 
    void CompleteLearnProfession(Player* player, Creature* creature, SkillType skill)
    {
        if (PlayerAlreadyHasTwoProfessions(player) && !IsSecondarySkill(skill))
		player->GetSession()->SendNotification("|TInterface/ICONS/achievement_profession_chefhat:18|t Ya aprendiste 2 profesiones |TInterface/ICONS/achievement_profession_fishing_findfish:18|t");
        else
        {
            if (!LearnAllRecipesInProfession(player, skill))
			ChatHandler(player->GetSession()).PSendSysMessage("ERROR!", player->GetName());

        }
    }
 
    bool OnGossipHello(Player* player, Creature* creature)
    {
		player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Alquimia", GOSSIP_SENDER_MAIN, 1);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Herreria", GOSSIP_SENDER_MAIN, 2);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Peleteteria", GOSSIP_SENDER_MAIN, 3);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Sastreria", GOSSIP_SENDER_MAIN, 4);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Ingenieria", GOSSIP_SENDER_MAIN, 5);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Encantamiento", GOSSIP_SENDER_MAIN, 6);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Joyeria", GOSSIP_SENDER_MAIN, 7);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Inscripcion", GOSSIP_SENDER_MAIN, 8);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Herboristería", GOSSIP_SENDER_MAIN, 11);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Peleteria", GOSSIP_SENDER_MAIN, 12);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Mineria", GOSSIP_SENDER_MAIN, 13);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Cocina", GOSSIP_SENDER_MAIN, 9);
        player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|TInterface/ICONS/spell_holy_prayerofshadowprotection:30|t Primeros Auxilios", GOSSIP_SENDER_MAIN, 10);
        player->SEND_GOSSIP_MENU(907, creature->GetGUID());
        return true;
    }
 
    bool OnGossipSelect(Player* player, Creature* creature, uint32 /* sender */, uint32 actions)
    {
        player->PlayerTalkClass->ClearMenus();
 
        switch (actions)
        {
            case 196:
                
 
                player->SEND_GOSSIP_MENU(907, creature->GetGUID());
                break;
            case 1:
                if(player->HasSkill(SKILL_ALCHEMY))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_ALCHEMY);
                player->CLOSE_GOSSIP_MENU();
                break;
            case 2:
                if(player->HasSkill(SKILL_BLACKSMITHING))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_BLACKSMITHING);
                player->CLOSE_GOSSIP_MENU();
                break;
            case 3:
                if(player->HasSkill(SKILL_LEATHERWORKING))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_LEATHERWORKING);
                player->CLOSE_GOSSIP_MENU();
                break;
            case 4:
                if(player->HasSkill(SKILL_TAILORING))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_TAILORING);
                player->PlayerTalkClass->SendCloseGossip();
                break;
            case 5:
                if(player->HasSkill(SKILL_ENGINEERING))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_ENGINEERING);
                player->CLOSE_GOSSIP_MENU();
                break;
                                                                                               
            case 6:
                if(player->HasSkill(SKILL_ENCHANTING))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_ENCHANTING);
                player->CLOSE_GOSSIP_MENU();
                break;
            case 7:
                if(player->HasSkill(SKILL_JEWELCRAFTING))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_JEWELCRAFTING);
                player->CLOSE_GOSSIP_MENU();
                break;
            case 8:
                if(player->HasSkill(SKILL_INSCRIPTION))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_INSCRIPTION);
                player->CLOSE_GOSSIP_MENU();
                break;
            case 9:
                if(player->HasSkill(SKILL_COOKING))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_COOKING);
                player->CLOSE_GOSSIP_MENU();
                break;
            case 10:
                if(player->HasSkill(SKILL_FIRST_AID))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_FIRST_AID);
                player->CLOSE_GOSSIP_MENU();;
                break;
            case 11:
                if(player->HasSkill(SKILL_HERBALISM))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_HERBALISM);
                player->CLOSE_GOSSIP_MENU();
                break;
            case 12:
                if(player->HasSkill(SKILL_SKINNING))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_SKINNING);
                player->CLOSE_GOSSIP_MENU();
                break;
            case 13:
                if(player->HasSkill(SKILL_MINING))
                {
                    player->CLOSE_GOSSIP_MENU();
                    return false;
                }
 
                CompleteLearnProfession(player, creature, SKILL_MINING);
                player->CLOSE_GOSSIP_MENU();
                break;
        }
        return true;
    }
};
 
void AddSC_Professions_NPC()
{
    new Professions_NPC();
}


