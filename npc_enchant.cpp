#include "ScriptPCH.h"

enum Enchants
{
    ENCHANT_WEP_BLADE_WARD              = 3869,
    ENCHANT_WEP_BLOOD_DRAINING          = 3870,
    ENCHANT_WEP_BERSERKING              = 3789,
    
    ENCHANT_WEP_ACCURACY                = 3788,
    ENCHANT_WEP_AGILITY_1H              = 1103,
    ENCHANT_WEP_AGILITY_2H              = 2670,
    ENCHANT_WEP_SPIRIT                  = 3844,
    ENCHANT_WEP_BATTLEMASTER            = 2675,
    ENCHANT_WEP_BLACK_MAGIC             = 3790,
    ENCHANT_WEP_ICEBREAKER              = 3239,
    ENCHANT_WEP_LIFEWARD                = 3241,
    ENCHANT_WEP_MIGHTY_SPELL_POWER      = 3834, // One-hand
    ENCHANT_WEP_GREATER_SPELL_POWER     = 3854, // Two-hand (staff)
    ENCHANT_WEP_MONGOOSE                = 2673,
    ENCHANT_WEP_EXECUTIONER             = 3225,
    ENCHANT_WEP_POTENCY                 = 3833,
    ENCHANT_WEP_TITANGUARD              = 3851,
    ENCHANT_WEP_MASSACRE                = 3827,
    
    ENCHANT_WEP_CINDERGLACIER           = 3369,
    ENCHANT_WEP_LICHBANE                = 3366,
    ENCHANT_WEP_RAZORICE                = 3370,
    ENCHANT_WEP_SPELLBREAKING           = 3595,
    ENCHANT_WEP_SPELLSHATTERING         = 3367,
    ENCHANT_WEP_SWORDBREAKING           = 3594,
    ENCHANT_WEP_SWORDSHATTERING         = 3365,
    ENCHANT_WEP_FALLEN_CRUSADER         = 3368,
    ENCHANT_WEP_NERUBIAN_CARAPACE       = 3883,
    ENCHANT_WEP_STONESKIN_GARGOYLE      = 3847,

    ENCHANT_WEP_TITANIUM_CHAIN          = 3731,

    ENCHANT_SHIELD_DEFENSE              = 1952,
    ENCHANT_SHIELD_INTELLECT            = 1128,
    ENCHANT_SHIELD_MAJOR_STAMINA        = 1071,
    ENCHANT_SHIELD_RESILIENCE           = 3229,

    ENCHANT_SHIELD_TITANIUM_PLATING     = 3849,
    ENCHANT_SHIELD_TITANIUM_SPIKE        = 3748,

    ENCHANT_HEAD_BLISSFUL_MENDING       = 3819,
    ENCHANT_HEAD_BURNING_MYSTERIES      = 3820,
    ENCHANT_HEAD_DOMINANCE              = 3796,
    ENCHANT_HEAD_SAVAGE_GLADIATOR       = 3842,
    ENCHANT_HEAD_STALWART_PROTECTOR     = 3818,
    ENCHANT_HEAD_TORMENT                = 3817,
    ENCHANT_HEAD_TRIUMPH                = 3795,
    
    ENCHANT_SHOULDER_MASTERS_AXE        = 3835,
    ENCHANT_SHOULDER_MASTERS_CRAG       = 3836,
    ENCHANT_SHOULDER_MASTERS_PINNACLE   = 3837,
    ENCHANT_SHOULDER_MASTERS_STORM      = 3838,
    ENCHANT_SHOULDER_GREATER_AXE        = 3808,
    ENCHANT_SHOULDER_GREATER_CRAG       = 3809,
    ENCHANT_SHOULDER_GREATER_GLADIATOR  = 3852,
    ENCHANT_SHOULDER_GREATER_PINNACLE   = 3811,
    ENCHANT_SHOULDER_GREATER_STORM      = 3810,
    ENCHANT_SHOULDER_DOMINANCE          = 3794,
    ENCHANT_SHOULDER_TRIUMPH            = 3793,

    ENCHANT_CLOAK_DARKGLOW_EMBROIDERY   = 3728,
    ENCHANT_CLOAK_SWORDGUARD_EMBROIDERY = 3730,
    ENCHANT_CLOAK_LIGHTWEAVE_EMBROIDERY = 3722,
    ENCHANT_CLOAK_FLEXWEAVE_UNDERLAY    = 3605,
    ENCHANT_CLOAK_SPRINGY_ARACHNOWEAVE  = 3859,
    ENCHANT_CLOAK_WISDOM                = 3296,
    ENCHANT_CLOAK_TITANWEAVE            = 1951,
    ENCHANT_CLOAK_SPELL_PIERCING        = 3243,
    ENCHANT_CLOAK_SHADOW_ARMOR          = 3256,
    ENCHANT_CLOAK_MIGHTY_ARMOR          = 3294,
    ENCHANT_CLOAK_MAJOR_AGILITY         = 1099,
    ENCHANT_CLOAK_GREATER_SPEED         = 3831,

    ENCHANT_CHEST_EXCEPTIONAL_MANA      = 3233,
    ENCHANT_CHEST_GREATER_MANA_RESTO    = 3533,
    ENCHANT_CHEST_EXCEPTIONAL_RESILIENCE= 3245,
    ENCHANT_CHEST_SUPER_HEALTH          = 3297,
    ENCHANT_CHEST_ALL_STATS             = 3832,

    ENCHANT_BRACER_GREATER_ASSAULT      = 3845,
    ENCHANT_BRACER_EXCEPTIONAL_INTELLECT= 3458,
    ENCHANT_BRACER_MAJOR_SPIRIT         = 1147,
    ENCHANT_BRACER_EXPERTISE            = 3231,
    ENCHANT_BRACER_GREATER_STATS        = 2661,
    ENCHANT_BRACER_SUPERIOR_SPELLPOWER  = 2332,
    ENCHANT_BRACER_MAJOR_STAMINA        = 3850,

    ENCHANT_BRACER_FUR_LINING_AP        = 3756,
    ENCHANT_BRACER_FUR_LINING_STAMINA   = 3757,
    ENCHANT_BRACER_FUR_LINING_SP        = 3758,
    ENCHANT_BRACER_ARCANE_RESIST        = 3763,
    ENCHANT_BRACER_NATURE_RESIST        = 3762,
    ENCHANT_BRACER_SHADOW_RESIST        = 3761,
    ENCHANT_BRACER_FROST_RESIST         = 3760,
    ENCHANT_BRACER_FIRE_RESIST          = 3759,

    ENCHANT_BRACER_SOCKET_BRACER        = 3717,
    
    ENCHANT_GLOVES_CRUSHER              = 1603,
    // EXTREMELY ugly hack for duplicate enchants
    ENCHANT_GLOVES_EXPERTISE            = -3231,
    ENCHANT_GLOVES_PRECISION            = 3234,
    ENCHANT_GLOVES_GREATER_ASSAULT      = 1603,
    ENCHANT_GLOVES_MAJOR_AGILITY        = 1097,
    ENCHANT_GLOVES_EXCEPTIONAL_SPELLPOWER = 2330,
    ENCHANT_GLOVES_ARMSMAN              = 3253,

    ENCHANT_GLOVES_SOCKET_GLOVES        = 3723,

    ENCHANT_GLOVES_PYROROCKET           = 3603,
    ENCHANT_GLOVES_HYPERSPEED_ACCELERATORS = 3604,

    ENCHANT_BELT_ETERNAL_BELT_BUCKLE    = 3729,
    ENCHANT_BELT_FRAG_BELT              = 3601,

    ENCHANT_LEGS_FROSTHIDE_ARMOR        = 3822,
    ENCHANT_LEGS_ICESCALE_ARMOR         = 3823,
    ENCHANT_LEGS_EARTHEN_ARMOR          = 3853,
    ENCHANT_LEGS_SAPPHIRE_SPELLTHREAD   = 3873,
    ENCHANT_LEGS_BRILLIANT_SPELLTHREAD  = 3872,

    ENCHANT_BOOTS_TUSKARRS_VITALITY     = 3232,
    ENCHANT_BOOTS_ICEWALKER             = 2599,
    ENCHANT_BOOTS_GREATER_ASSAULT       = 1597,
    ENCHANT_BOOTS_GREATER_SPIRIT        = 528,
    ENCHANT_BOOTS_GREATER_FORTITUDE     = 3259,
    ENCHANT_BOOTS_SUPERIOR_AGILITY      = 983,
    ENCHANT_BOOTS_NITRO_BOOSTS          = 3606,

    ENCHANT_RING_STAMINA                = 3791,
    ENCHANT_RING_GREATER_SPELLPOWER     = 3840,
    ENCHANT_RING_ASSAULT                = 3839,

    ENCHANT_RANGED_HEARTSEEKER_SCOPE    = 3608,
    ENCHANT_RANGED_SUN_SCOPE            = 3607
};

Item* PlayerAddItem(Player* player, uint32 item_id)
{
    uint8 count = 1;
    uint32 noSpaceForCount = 0;
    ItemPosCountVec dest;

    InventoryResult msg = player->CanStoreNewItem(NULL_BAG, NULL_SLOT, 
        dest, item_id, count, &noSpaceForCount);
    if (msg != EQUIP_ERR_OK)
        count -= noSpaceForCount;

    Item* item = player->StoreNewItem(dest, item_id, true, 
        Item::GenerateItemRandomPropertyId(item_id));

    if (noSpaceForCount > 0)
    {
        player->GetSession()->SendNotification("Por favor, hacer espacio en su "
            "inventario.");
        return NULL;
    }
    return item;
}

void EnchantWithItem(Player* player, uint32 item_id, Item* target)
{
    Item* item = PlayerAddItem(player, item_id);
    SpellCastTargets* targets = new SpellCastTargets();
    targets->SetItemTarget(target);
    player->CastItemUseSpell(item, *targets, 1, 0);
}

void EnchantWithSpell(Player* player, uint32 spell_id, Item* item)
{
    SpellCastTargets* targets = new SpellCastTargets();
    targets->SetItemTarget(item);
    player->CastSpell(*targets, sSpellMgr->GetSpellInfo(spell_id), 
        NULL, TRIGGERED_IGNORE_POWER_AND_REAGENT_COST);
}

void Enchant(Player* player, Creature* creature, Item* item, uint32 enchantid)
{
    if (!item)
    {
        player->GetSession()->SendNotification("Primero equipa el item.");
        return;
    }

    uint32 item_id = 0;
    switch (enchantid)
    {
        case ENCHANT_WEP_GREATER_SPELL_POWER:
        case ENCHANT_WEP_AGILITY_2H:
        case ENCHANT_WEP_MASSACRE:
            if (item->GetTemplate()->InventoryType != INVTYPE_2HWEAPON)
            {
				ChatHandler(player->GetSession()).PSendSysMessage("Esta no es un arma de 2 Manos");
                return;
            }
            break;
        case ENCHANT_SHIELD_DEFENSE:
        case ENCHANT_SHIELD_INTELLECT:
        case ENCHANT_SHIELD_MAJOR_STAMINA:
        case ENCHANT_SHIELD_RESILIENCE:
        case ENCHANT_SHIELD_TITANIUM_PLATING:
        case ENCHANT_SHIELD_TITANIUM_SPIKE:
            if (item->GetTemplate()->InventoryType != INVTYPE_SHIELD)
            {
                ChatHandler(player->GetSession()).PSendSysMessage("Eso no es un escudo");
                return;
            }
            break;
        case ENCHANT_RANGED_HEARTSEEKER_SCOPE:
        case ENCHANT_RANGED_SUN_SCOPE:
            if (item->GetTemplate()->InventoryType != INVTYPE_RANGED &&
                item->GetTemplate()->InventoryType != INVTYPE_RANGEDRIGHT)
            {
				ChatHandler(player->GetSession()).PSendSysMessage("Eso no es un arma a distancia");
                return;
            }
            break;
        default:
            break;
    }

    player->ApplyEnchantment(item, PERM_ENCHANTMENT_SLOT, false);
    item->ClearEnchantment(PERM_ENCHANTMENT_SLOT);
    item->SetEnchantment(PERM_ENCHANTMENT_SLOT, enchantid, 0, 0);
    player->ApplyEnchantment(item, PERM_ENCHANTMENT_SLOT, true);

    switch (enchantid)
    {
        case ENCHANT_BELT_ETERNAL_BELT_BUCKLE:
            EnchantWithItem(player, 41611, item);
            break;
        case ENCHANT_BRACER_SOCKET_BRACER:
            PlayerAddItem(player, 5956); // Blacksmith hammer
            EnchantWithSpell(player, 55628, item);
            player->DestroyItemCount(5956, -1, true, false);
            break;
        case ENCHANT_GLOVES_SOCKET_GLOVES:
            PlayerAddItem(player, 5956); // Blacksmith hammer
            EnchantWithSpell(player, 55641, item);
            player->DestroyItemCount(5956, -1, true, false);
            break;
    }
    
    const char* item_name = item->GetTemplate()->Name1.c_str();
    player->GetSession()->SendNotification("|cff00ff00|TInterface\\icons\\inv_weapon_bow_55:20|t %s |cff00ff00|TInterface\\icons\\inv_weapon_bow_55:20|t ¡ITEM ENCANTADO!", item->GetTemplate()->Name1.c_str());
}
 
class npc_enchantment : public CreatureScript
{
    public:
        npc_enchantment() : CreatureScript("npc_enchantment") { }
        int selected_enchant;

        bool OnGossipHello(Player* player, Creature* creature)
        {
            ShowMainMenu(player, creature);
            return true;
        }

        void ShowMainMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_Weapon_ShortBlade_02:30|t|r Encantar Arma", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_Weapon_Staff_109:30|t|r Encantar Arma 2M", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 2);
			player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_Weapon_ShortBlade_02:30|t|r Encantar Arma a Distancia", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 13);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\Ability_Warrior_ShieldWall:30|t|r Encantar Escudo", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 3);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_Misc_Head_Gnome_01:30|t|r Encantar Casco", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 4);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_SHOULDER_97:30|t|r Encantar Hombros", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 5);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\Item_icecrowncloak:30|t|r Encantar Capa", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 6);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_Misc_Desecrated_ClothChest:30|t|r Encantar Pecho", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 7);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_Misc_Desecrated_MailBracer:30|t|r Encantar Muneca", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 8);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_Misc_Desecrated_PlateGloves:30|t|r Encantar Guantes", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 9);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_Belt_28:30|t|r Encantar Cintura", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 10);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_Misc_Desecrated_ClothPants:30|t|r Encantar Piernas", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 11);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\INV_Misc_Desecrated_LeatherBoots:30|t|r Encantar Botas", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 12);
            if (player->HasSkill(SKILL_ENCHANTING) && player->GetSkillValue(SKILL_ENCHANTING) >= 450)
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "|cff00ff00|TInterface\\icons\\inv_jewelry_ring_11:30|t|rEncantar Anillos", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 14);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void Show1HWeaponMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            if (player->getClass() == CLASS_DEATH_KNIGHT)
            {
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de Cinderglacier", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_CINDERGLACIER);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de Aterraexánime", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_LICHBANE);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de Cuchilla de hielo", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_RAZORICE);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de Ruptura de hechizos", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_SPELLBREAKING);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de Interruptor espada", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_SWORDBREAKING);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de cruzado caído", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_FALLEN_CRUSADER);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de Nerubian Caparazón", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_NERUBIAN_CARAPACE);
            }
            if (player->HasSkill(SKILL_ENCHANTING) && player->GetSkillValue(SKILL_ENCHANTING) >= 450)
            {
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Hoja Ward", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_BLADE_WARD);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "El drenaje de la sangre", GOSSIP_SENDER_MAIN, 
                    ENCHANT_WEP_BLOOD_DRAINING);
            }
		
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Precision -- 25 Hit + 25 Crit", GOSSIP_SENDER_MAIN,
                ENCHANT_WEP_ACCURACY);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Negro mágico -- 250 Spell Haste Proc", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_BLACK_MAGIC);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Batalla -- La probabilidad de sanar en hit", GOSSIP_SENDER_MAIN,
                ENCHANT_WEP_BATTLEMASTER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Berserking -- 400 Attack Power Proc", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_BERSERKING);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Agilidad excepcional - 26 Agilidad", GOSSIP_SENDER_MAIN,
                ENCHANT_WEP_AGILITY_1H);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Espíritu Excepcional - 45 Espíritu", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_SPIRIT);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Verdugo - 120 Brazo Pen Proc", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_EXECUTIONER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Icebreaker - daño de Fuego en la exitosa", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_ICEBREAKER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Resguardo de vida - La probabilidad de sanar en hit", GOSSIP_SENDER_MAIN,
                ENCHANT_WEP_LIFEWARD);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Poder con hechizos Mighty - 63 poder con hechizos", GOSSIP_SENDER_MAIN,
                ENCHANT_WEP_MIGHTY_SPELL_POWER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mangosta - 120 Agilidad Proc", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_MONGOOSE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Potencia Superior - 65 poder de ataque", GOSSIP_SENDER_MAIN,
                ENCHANT_WEP_POTENCY);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Titanguard - 50 Stamina", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_TITANGUARD);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Titanio Arma Cadena - Menos Desarmar Tiempo", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_TITANIUM_CHAIN);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void Show2HWeaponMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            if (player->getClass() == CLASS_DEATH_KNIGHT)
            {
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de Cinderglacier", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_CINDERGLACIER);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de aterraexánime", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_LICHBANE);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de cuchilla de hielo", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_RAZORICE);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de Hechizo destrozando", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_SPELLSHATTERING);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de Espada demoledora", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_SWORDSHATTERING);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de cruzado caído", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_FALLEN_CRUSADER);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Runa de la gárgola piel de piedra", GOSSIP_SENDER_MAIN,
                    ENCHANT_WEP_STONESKIN_GARGOYLE);
            }
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Rabiar - Ataque 400 Poder Proc", GOSSIP_SENDER_MAIN,
                ENCHANT_WEP_BERSERKING);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Verdugo - 120 Brazo Pen Proc", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_EXECUTIONER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayor poder con hechizos - 81 poder con hechizos", GOSSIP_SENDER_MAIN,
                ENCHANT_WEP_GREATER_SPELL_POWER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayor agilidad - 35 Agilidad", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_AGILITY_2H);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Masacre - 110 poder de ataque", GOSSIP_SENDER_MAIN,
                ENCHANT_WEP_MASSACRE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mangosta - 120 Agilidad Proc", GOSSIP_SENDER_MAIN, 
                ENCHANT_WEP_MONGOOSE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void ShowShieldMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Defensa - 20 Defensa", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHIELD_DEFENSE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Gran Intelecto - 25 Intelecto", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHIELD_INTELLECT);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayor Resistencia - 18 Stamina", GOSSIP_SENDER_MAIN,
                ENCHANT_SHIELD_MAJOR_STAMINA);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Resiliencia - 12 Resiliencia", GOSSIP_SENDER_MAIN,
                ENCHANT_SHIELD_RESILIENCE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Titanio Revestimiento - 36 Bloquear", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHIELD_TITANIUM_PLATING);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Titanio Punta de escudo - 81 Block + 50% menos Desarmar", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHIELD_TITANIUM_SPIKE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void ShowHeadMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Arcano de Mending dichoso - 30 poder con hechizos + 10 Mp5", GOSSIP_SENDER_MAIN, 
                ENCHANT_HEAD_BLISSFUL_MENDING);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Arcano de Quemar Misterios - 25 Resistencia al Fuego + 30 Stam", GOSSIP_SENDER_MAIN, 
                ENCHANT_HEAD_BURNING_MYSTERIES);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Arcano de Dominación - 30 poder con hechizos 20 + Critico", GOSSIP_SENDER_MAIN, 
                ENCHANT_HEAD_DOMINANCE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Arcano de El Gladiador indómito - 30 Resistencia + 25 Resil", GOSSIP_SENDER_MAIN, 
                ENCHANT_HEAD_SAVAGE_GLADIATOR);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Arcano de El Protector Stalwart - 37 Resistencia + Defensa", GOSSIP_SENDER_MAIN,
                ENCHANT_HEAD_STALWART_PROTECTOR);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Arcano de Tormento - 29 poder con hechizos + 20 Resil", GOSSIP_SENDER_MAIN,
                ENCHANT_HEAD_TORMENT);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Arcano de Triumph - 50 Poder de Ataque + 20 Resil", GOSSIP_SENDER_MAIN, 
                ENCHANT_HEAD_TRIUMPH);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void ShowShouldersMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            if (player->HasSkill(SKILL_INSCRIPTION) && player->GetSkillValue(SKILL_INSCRIPTION) >= 450)
            {
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción del Maestro de la Axe", GOSSIP_SENDER_MAIN, 
                    ENCHANT_SHOULDER_MASTERS_AXE);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción del Maestro de la Crag", GOSSIP_SENDER_MAIN, 
                    ENCHANT_SHOULDER_MASTERS_CRAG);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción del Maestro de pináculo", GOSSIP_SENDER_MAIN, 
                    ENCHANT_SHOULDER_MASTERS_PINNACLE);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción del Maestro de la tormenta", GOSSIP_SENDER_MAIN, 
                    ENCHANT_SHOULDER_MASTERS_STORM);
            }
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción del hacha - 40 Poder de Ataque + 15 Crit", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHOULDER_GREATER_AXE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción de la Peña - 24 poder con hechizos + 8 Mp5", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHOULDER_GREATER_CRAG);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción del pináculo - 30 Resistencia + 15 Resil", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHOULDER_GREATER_PINNACLE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción del Gladiador - 20 de Dodge + 15 Defensa", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHOULDER_GREATER_GLADIATOR);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción de la tormenta - 24 poder con hechizos 15 + Crit", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHOULDER_GREATER_STORM);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción de Dominación - 23 poder con hechizos + 15", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHOULDER_DOMINANCE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Inscripción de triunfo - 40 poder de ataque + 15 Resil", GOSSIP_SENDER_MAIN, 
                ENCHANT_SHOULDER_TRIUMPH);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void ShowCloakMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            if (player->HasSkill(SKILL_ENGINEERING) && player->GetSkillValue(SKILL_ENGINEERING) >= 450)
            {
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Elástico Arachne Weave", GOSSIP_SENDER_MAIN, 
                    ENCHANT_CLOAK_SPRINGY_ARACHNOWEAVE);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Base de tejido flexible", GOSSIP_SENDER_MAIN,
                    ENCHANT_CLOAK_FLEXWEAVE_UNDERLAY);
            }
            if (player->getClass() == CLASS_ROGUE)
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Shadow Armor", GOSSIP_SENDER_MAIN,
                    ENCHANT_CLOAK_SHADOW_ARMOR);
            if (player->HasSkill(SKILL_TAILORING) && player->GetSkillValue(SKILL_TAILORING) >= 450)
            {
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Darkglow bordado", GOSSIP_SENDER_MAIN, 
                    ENCHANT_CLOAK_DARKGLOW_EMBROIDERY);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "bordado de tejido de luz", GOSSIP_SENDER_MAIN, 
                    ENCHANT_CLOAK_LIGHTWEAVE_EMBROIDERY);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "bordado de guardia de espada", GOSSIP_SENDER_MAIN, 
                    ENCHANT_CLOAK_SWORDGUARD_EMBROIDERY);
            }
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Sabiduría - 10 Espíritu + 2% a reducir la amenaza", GOSSIP_SENDER_MAIN, 
                ENCHANT_CLOAK_WISDOM);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Titanweave - 16 Defensa", GOSSIP_SENDER_MAIN,
                ENCHANT_CLOAK_TITANWEAVE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Hechizo Piercing - 35 Mágicas Pen", GOSSIP_SENDER_MAIN, 
                ENCHANT_CLOAK_SPELL_PIERCING);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Armor Mighty - 225 Armor", GOSSIP_SENDER_MAIN,
                ENCHANT_CLOAK_MIGHTY_ARMOR);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayor agilidad - 22 Agilidad", GOSSIP_SENDER_MAIN, 
                ENCHANT_CLOAK_MAJOR_AGILITY);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayor velocidad - 23 Haste", GOSSIP_SENDER_MAIN, 
                ENCHANT_CLOAK_GREATER_SPEED);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }
        
        void ShowChestMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mana Excepcional - 150 Mana", GOSSIP_SENDER_MAIN, 
                ENCHANT_CHEST_EXCEPTIONAL_MANA);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Maná superior Restauración - 10 Mp5", GOSSIP_SENDER_MAIN, 
                ENCHANT_CHEST_GREATER_MANA_RESTO);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Resiliencia Excepcional - 20 Resiliencia", GOSSIP_SENDER_MAIN, 
                ENCHANT_CHEST_EXCEPTIONAL_RESILIENCE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Súper Salud - 225 Salud", GOSSIP_SENDER_MAIN, 
                ENCHANT_CHEST_SUPER_HEALTH);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "10 de todas las estadísticas", GOSSIP_SENDER_MAIN, 
                ENCHANT_CHEST_ALL_STATS);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }
        
        void ShowBracerMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Gran Asalto - 50 poder de ataque", GOSSIP_SENDER_MAIN, 
                ENCHANT_BRACER_GREATER_ASSAULT);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "El intelecto excepcional - 16 Intelecto", GOSSIP_SENDER_MAIN, 
                ENCHANT_BRACER_EXCEPTIONAL_INTELLECT);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayor Espíritu - 18 Espíritu", GOSSIP_SENDER_MAIN, 
                ENCHANT_BRACER_MAJOR_SPIRIT);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Experiencia - 15 Especialización", GOSSIP_SENDER_MAIN, 
                ENCHANT_BRACER_EXPERTISE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayores Stats - 6 TODAS LAS ESTADÍSTICAS", GOSSIP_SENDER_MAIN, 
                ENCHANT_BRACER_GREATER_STATS);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Poder con hechizos superior - 30 poder con hechizos", GOSSIP_SENDER_MAIN, 
                ENCHANT_BRACER_SUPERIOR_SPELLPOWER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayor Resistencia - 40 Stamina", GOSSIP_SENDER_MAIN, 
                ENCHANT_BRACER_MAJOR_STAMINA);
            if (player->HasSkill(SKILL_LEATHERWORKING) && player->GetSkillValue(SKILL_LEATHERWORKING) >= 450) 
            {
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Piel Forro: Poder de Ataque", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BRACER_FUR_LINING_AP);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Piel Forro: Aguante", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BRACER_FUR_LINING_STAMINA);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Piel Forro: poder con hechizos", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BRACER_FUR_LINING_SP);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Piel Forro: Resistir Arcano", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BRACER_ARCANE_RESIST);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Piel Forro: Naturaleza Resist", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BRACER_NATURE_RESIST);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Piel Forro: Shadow Resista", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BRACER_SHADOW_RESIST);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Piel Forro: Helada Resist", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BRACER_FROST_RESIST);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Piel Forro: Resistencia al Fuego", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BRACER_FIRE_RESIST);
            }
            if (player->HasSkill(SKILL_BLACKSMITHING) && player->GetSkillValue(SKILL_BLACKSMITHING) >= 450)
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Socket brazales", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BRACER_SOCKET_BRACER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void ShowGlovesMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Soldado - 2% Amenaza 10 Parry", GOSSIP_SENDER_MAIN, 
                ENCHANT_GLOVES_ARMSMAN);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Poder con hechizos excepcional - 23 poder con hechizos", GOSSIP_SENDER_MAIN, 
                ENCHANT_GLOVES_EXCEPTIONAL_SPELLPOWER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Experiencia - 15 Especialización", GOSSIP_SENDER_MAIN, 
                ENCHANT_GLOVES_EXPERTISE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Gran Asalto - 44 poder de ataque", GOSSIP_SENDER_MAIN, 
                ENCHANT_GLOVES_CRUSHER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayor agilidad - 20 Agilidad", GOSSIP_SENDER_MAIN, 
                ENCHANT_GLOVES_MAJOR_AGILITY);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Precisión - 20 Hit Rating", GOSSIP_SENDER_MAIN, 
                ENCHANT_GLOVES_PRECISION);
            if (player->HasSkill(SKILL_BLACKSMITHING) && player->GetSkillValue(SKILL_BLACKSMITHING) >= 450)
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Guantes Socket", GOSSIP_SENDER_MAIN, 
                    ENCHANT_GLOVES_SOCKET_GLOVES);
            if (player->HasSkill(SKILL_ENGINEERING) && player->GetSkillValue(SKILL_ENGINEERING) >= 450)
            {
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mano-Mounted Pyro Rocket", GOSSIP_SENDER_MAIN, 
                    ENCHANT_GLOVES_PYROROCKET);
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Aceleradores de hipervelocidad", GOSSIP_SENDER_MAIN, 
                    ENCHANT_GLOVES_HYPERSPEED_ACCELERATORS);
            }
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void ShowBeltMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Eterno hebilla de cinturón", GOSSIP_SENDER_MAIN, 
                ENCHANT_BELT_ETERNAL_BELT_BUCKLE);
            if (player->HasSkill(SKILL_ENGINEERING) && player->GetSkillValue(SKILL_ENGINEERING) >= 450)
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Frag Cinturón", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BELT_FRAG_BELT);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void ShowLegsMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Armadura para pierna de pellejo de escarcha - 55 Stam 22 Agil", GOSSIP_SENDER_MAIN, 
                ENCHANT_LEGS_FROSTHIDE_ARMOR);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Icescale Armadura para pierna - 75 AP 22 Crit", GOSSIP_SENDER_MAIN, 
                ENCHANT_LEGS_ICESCALE_ARMOR);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Earthen Armadura para pierna - 40 Resil 28 Stam", GOSSIP_SENDER_MAIN, 
                ENCHANT_LEGS_EARTHEN_ARMOR);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Sapphire hilo de hechizo - 50 SP 30 Stam", GOSSIP_SENDER_MAIN, 
                ENCHANT_LEGS_SAPPHIRE_SPELLTHREAD);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Brillante hilo de hechizo - 50 SP 22 Espíritu", GOSSIP_SENDER_MAIN, 
                ENCHANT_LEGS_BRILLIANT_SPELLTHREAD);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void ShowBootsMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Icewalker - 12 Hit + 12 Crit", GOSSIP_SENDER_MAIN, 
                ENCHANT_BOOTS_ICEWALKER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Gran Asalto - 32 Assult", GOSSIP_SENDER_MAIN, 
                ENCHANT_BOOTS_GREATER_ASSAULT);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayor Fortaleza - 22 stamins", GOSSIP_SENDER_MAIN, 
                ENCHANT_BOOTS_GREATER_FORTITUDE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Gran Espíritu - 18 Espíritu", GOSSIP_SENDER_MAIN, 
                ENCHANT_BOOTS_GREATER_SPIRIT);
            if (player->HasSkill(SKILL_ENGINEERING) && player->GetSkillValue(SKILL_ENGINEERING) >= 450)
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Aumenta Nitro", GOSSIP_SENDER_MAIN, 
                    ENCHANT_BOOTS_NITRO_BOOSTS);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Agilidad Superior - 16 Agilidad", GOSSIP_SENDER_MAIN, 
                ENCHANT_BOOTS_SUPERIOR_AGILITY);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Vitalidad de Tuskarr - 15 Stam + velocidad Aumentar", GOSSIP_SENDER_MAIN, 
                ENCHANT_BOOTS_TUSKARRS_VITALITY);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void ShowRingsMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Asalto", GOSSIP_SENDER_MAIN, 
                ENCHANT_RING_ASSAULT);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Mayor poder con hechizos", GOSSIP_SENDER_MAIN, 
                ENCHANT_RING_GREATER_SPELLPOWER);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Aguante", GOSSIP_SENDER_MAIN, 
                ENCHANT_RING_STAMINA);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        void ShowRangedMenu(Player* player, Creature* creature)
        {
            player->PlayerTalkClass->ClearMenus();
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Buscacorazones Alcance", GOSSIP_SENDER_MAIN, 
                ENCHANT_RANGED_HEARTSEEKER_SCOPE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_1, "Sun Alcance", GOSSIP_SENDER_MAIN, 
                ENCHANT_RANGED_SUN_SCOPE);
            player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Atras", GOSSIP_SENDER_MAIN, -1);
            player->SEND_GOSSIP_MENU(1, creature->GetGUID());
        }

        bool OnGossipSelect(Player* player, Creature* creature, uint32 /*sender*/, uint32 action)
        {
            int slot = -1;
            bool check_adjacent_slot = true;
            switch (action)
            {
                case -1: // Back
                    ShowMainMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 1:
                    Show1HWeaponMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 2:
                    Show2HWeaponMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 3:
                    ShowShieldMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 4:
                    ShowHeadMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 5:
                    ShowShouldersMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 6:
                    ShowCloakMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 7:
                    ShowChestMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 8:
                    ShowBracerMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 9:
                    ShowGlovesMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 10:
                    ShowBeltMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 11:
                    ShowLegsMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 12:
                    ShowBootsMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 13:
                    ShowRangedMenu(player, creature);
                    break;
                case GOSSIP_ACTION_INFO_DEF + 14:
                    ShowRingsMenu(player, creature);
                    break;

                // 1H weapons
                case ENCHANT_WEP_BLADE_WARD:
                case ENCHANT_WEP_BLOOD_DRAINING:
                case ENCHANT_WEP_AGILITY_1H:
                case ENCHANT_WEP_SPIRIT:
                case ENCHANT_WEP_BERSERKING:
                case ENCHANT_WEP_ACCURACY:
                case ENCHANT_WEP_BLACK_MAGIC:
                case ENCHANT_WEP_BATTLEMASTER:
                case ENCHANT_WEP_ICEBREAKER:
                case ENCHANT_WEP_LIFEWARD:
                case ENCHANT_WEP_TITANGUARD:
                case ENCHANT_WEP_POTENCY:
                case ENCHANT_WEP_MONGOOSE:
                case ENCHANT_WEP_MIGHTY_SPELL_POWER:
                case ENCHANT_WEP_EXECUTIONER:
                case ENCHANT_WEP_TITANIUM_CHAIN:

                // 2H weapons
                // case ENCHANT_WEP_BERSERKING:
                // case ENCHANT_WEP_MONGOOSE:
                // case ENCHANT_WEP_EXECUTIONER:
                // case ENCHANT_WEP_TITANIUM_CHAIN:
                case ENCHANT_WEP_GREATER_SPELL_POWER:
                case ENCHANT_WEP_AGILITY_2H:
                case ENCHANT_WEP_MASSACRE:

                // Runeforging
                case ENCHANT_WEP_CINDERGLACIER:
                case ENCHANT_WEP_LICHBANE:
                case ENCHANT_WEP_RAZORICE:
                case ENCHANT_WEP_SPELLBREAKING:
                case ENCHANT_WEP_SPELLSHATTERING:
                case ENCHANT_WEP_SWORDBREAKING:
                case ENCHANT_WEP_SWORDSHATTERING:
                case ENCHANT_WEP_FALLEN_CRUSADER:
                case ENCHANT_WEP_NERUBIAN_CARAPACE:
                case ENCHANT_WEP_STONESKIN_GARGOYLE:
                    slot = EQUIPMENT_SLOT_MAINHAND;
                    break;

                // Shields
                case ENCHANT_SHIELD_DEFENSE:
                case ENCHANT_SHIELD_INTELLECT:
                case ENCHANT_SHIELD_RESILIENCE:
                case ENCHANT_SHIELD_TITANIUM_PLATING:
                case ENCHANT_SHIELD_MAJOR_STAMINA:
                case ENCHANT_SHIELD_TITANIUM_SPIKE:
                    slot = EQUIPMENT_SLOT_OFFHAND;
                    break;

                // Head
                case ENCHANT_HEAD_BLISSFUL_MENDING: 
                case ENCHANT_HEAD_BURNING_MYSTERIES:
                case ENCHANT_HEAD_DOMINANCE:  
                case ENCHANT_HEAD_SAVAGE_GLADIATOR:
                case ENCHANT_HEAD_STALWART_PROTECTOR:
                case ENCHANT_HEAD_TORMENT:           
                case ENCHANT_HEAD_TRIUMPH:
                    slot = EQUIPMENT_SLOT_HEAD;
                    break;

                // Shoulders
                case ENCHANT_SHOULDER_MASTERS_AXE:
                case ENCHANT_SHOULDER_MASTERS_CRAG:
                case ENCHANT_SHOULDER_MASTERS_PINNACLE:
                case ENCHANT_SHOULDER_MASTERS_STORM:
                case ENCHANT_SHOULDER_GREATER_AXE:
                case ENCHANT_SHOULDER_GREATER_CRAG:
                case ENCHANT_SHOULDER_GREATER_GLADIATOR:
                case ENCHANT_SHOULDER_GREATER_PINNACLE:
                case ENCHANT_SHOULDER_GREATER_STORM:
                case ENCHANT_SHOULDER_DOMINANCE:
                case ENCHANT_SHOULDER_TRIUMPH:
                    slot = EQUIPMENT_SLOT_SHOULDERS;
                    break;

                // Cloak
                case ENCHANT_CLOAK_DARKGLOW_EMBROIDERY:
                case ENCHANT_CLOAK_SWORDGUARD_EMBROIDERY:
                case ENCHANT_CLOAK_FLEXWEAVE_UNDERLAY:
                case ENCHANT_CLOAK_LIGHTWEAVE_EMBROIDERY:
                case ENCHANT_CLOAK_SPRINGY_ARACHNOWEAVE:
                case ENCHANT_CLOAK_WISDOM:
                case ENCHANT_CLOAK_TITANWEAVE:
                case ENCHANT_CLOAK_SPELL_PIERCING:
                case ENCHANT_CLOAK_SHADOW_ARMOR:
                case ENCHANT_CLOAK_MIGHTY_ARMOR:
                case ENCHANT_CLOAK_MAJOR_AGILITY:
                case ENCHANT_CLOAK_GREATER_SPEED:
                    slot = EQUIPMENT_SLOT_BACK;
                    break;

                // Chest
                case ENCHANT_CHEST_EXCEPTIONAL_MANA:
                case ENCHANT_CHEST_GREATER_MANA_RESTO:
                case ENCHANT_CHEST_EXCEPTIONAL_RESILIENCE:
                case ENCHANT_CHEST_SUPER_HEALTH:
                case ENCHANT_CHEST_ALL_STATS:
                    slot = EQUIPMENT_SLOT_CHEST;
                    break;

                // Bracers
                case ENCHANT_BRACER_GREATER_ASSAULT:
                case ENCHANT_BRACER_EXCEPTIONAL_INTELLECT:
                case ENCHANT_BRACER_MAJOR_SPIRIT:
                case ENCHANT_BRACER_EXPERTISE:
                case ENCHANT_BRACER_GREATER_STATS:
                case ENCHANT_BRACER_SUPERIOR_SPELLPOWER:
                case ENCHANT_BRACER_MAJOR_STAMINA:
                case ENCHANT_BRACER_FUR_LINING_AP:
                case ENCHANT_BRACER_FUR_LINING_STAMINA:
                case ENCHANT_BRACER_FUR_LINING_SP:
                case ENCHANT_BRACER_ARCANE_RESIST:
                case ENCHANT_BRACER_NATURE_RESIST:
                case ENCHANT_BRACER_SHADOW_RESIST:
                case ENCHANT_BRACER_FROST_RESIST:
                case ENCHANT_BRACER_FIRE_RESIST:
                case ENCHANT_BRACER_SOCKET_BRACER:
                    slot = EQUIPMENT_SLOT_WRISTS;
                    break;

                // Gloves
                case ENCHANT_GLOVES_EXPERTISE:
                case ENCHANT_GLOVES_PRECISION:
                case ENCHANT_GLOVES_GREATER_ASSAULT:
                case ENCHANT_GLOVES_MAJOR_AGILITY:
                case ENCHANT_GLOVES_EXCEPTIONAL_SPELLPOWER:
                case ENCHANT_GLOVES_ARMSMAN:
                case ENCHANT_GLOVES_SOCKET_GLOVES:
                case ENCHANT_GLOVES_PYROROCKET:
                case ENCHANT_GLOVES_HYPERSPEED_ACCELERATORS:
                    slot = EQUIPMENT_SLOT_HANDS;
                    break;

                // Belt
                case ENCHANT_BELT_ETERNAL_BELT_BUCKLE:
                case ENCHANT_BELT_FRAG_BELT:
                    slot = EQUIPMENT_SLOT_WAIST;
                    break;

                // Legs
                case ENCHANT_LEGS_FROSTHIDE_ARMOR:
                case ENCHANT_LEGS_ICESCALE_ARMOR:
                case ENCHANT_LEGS_EARTHEN_ARMOR:
                case ENCHANT_LEGS_SAPPHIRE_SPELLTHREAD :
                case ENCHANT_LEGS_BRILLIANT_SPELLTHREAD:
                    slot = EQUIPMENT_SLOT_LEGS;
                    break;

                // Boots
                case ENCHANT_BOOTS_TUSKARRS_VITALITY:
                case ENCHANT_BOOTS_ICEWALKER:
                case ENCHANT_BOOTS_GREATER_ASSAULT:
                case ENCHANT_BOOTS_GREATER_SPIRIT:
                case ENCHANT_BOOTS_GREATER_FORTITUDE:
                case ENCHANT_BOOTS_SUPERIOR_AGILITY:
                case ENCHANT_BOOTS_NITRO_BOOSTS:
                    slot = EQUIPMENT_SLOT_FEET;
                    break;

                // Rings
                case ENCHANT_RING_STAMINA:
                case ENCHANT_RING_GREATER_SPELLPOWER:
                case ENCHANT_RING_ASSAULT:
                    slot = EQUIPMENT_SLOT_FINGER1;
                    break;
                
                // Ranged weapon
                case ENCHANT_RANGED_HEARTSEEKER_SCOPE:
                case ENCHANT_RANGED_SUN_SCOPE:
                    slot = EQUIPMENT_SLOT_RANGED;
                    break;

                // Main hand
                case GOSSIP_ACTION_INFO_DEF + 20:
                    slot = EQUIPMENT_SLOT_MAINHAND;
                    action = selected_enchant;
                    check_adjacent_slot = false;
                    break;

                // Off hand
                case GOSSIP_ACTION_INFO_DEF + 21:
                    slot = EQUIPMENT_SLOT_OFFHAND;
                    action = selected_enchant;
                    check_adjacent_slot = false;
                    break;

                default:
                    player->CLOSE_GOSSIP_MENU();
                    break;
            }
            if (slot > -1)
            {
                // allows for a maximum of 2 duplicates, and the
                // convenience of using enchant ids as gossip 
                // userdata
                Item* item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, slot);
                if (!item && slot == INVTYPE_RANGEDRIGHT)
                    item   = player->GetItemByPos(INVENTORY_SLOT_BAG_0,
                        INVTYPE_RANGEDRIGHT);
                if (item && check_adjacent_slot && 
                    item->GetEnchantmentId(PERM_ENCHANTMENT_SLOT) != 0)
                {
                    switch (slot)
                    {
                        case EQUIPMENT_SLOT_MAINHAND:
                        {
                            Item* offhand = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);
                            if (offhand)
                            {
                                player->PlayerTalkClass->ClearMenus();
                                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, 
                                    item->GetTemplate()->Name1.c_str(),
                                    GOSSIP_SENDER_MAIN, 
                                    GOSSIP_ACTION_INFO_DEF + 20);
                                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, 
                                    offhand->GetTemplate()->Name1.c_str(),
                                    GOSSIP_SENDER_MAIN, 
                                    GOSSIP_ACTION_INFO_DEF + 21);
                                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, 
                                    "Back",
                                    GOSSIP_SENDER_MAIN, -1);
                                player->SEND_GOSSIP_MENU(1, creature->GetGUID());
                                selected_enchant = action;
                                return true;
                            }
                            break;
                        }
                        case EQUIPMENT_SLOT_FINGER1:
                        {
                            Item* ring2 = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FINGER2);
                            if (ring2)
                            {
                                player->PlayerTalkClass->ClearMenus();
                                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, 
                                    item->GetTemplate()->Name1.c_str(),
                                    GOSSIP_SENDER_MAIN, 
                                    GOSSIP_ACTION_INFO_DEF + 20);
                                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, 
                                    ring2->GetTemplate()->Name1.c_str(),
                                    GOSSIP_SENDER_MAIN, 
                                    GOSSIP_ACTION_INFO_DEF + 21);
                                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, 
                                    "Back",
                                    GOSSIP_SENDER_MAIN, -1);
                                player->SEND_GOSSIP_MENU(1, creature->GetGUID());
                                selected_enchant = action;
                                return true;
                            }
                            break;
                        }
                        default:
                            break;
                    }
                }
                Enchant(player, creature, item, action);
                ShowMainMenu(player, creature);
            }
            return true;
        }
};

void AddSC_npc_enchantment()
{
   new npc_enchantment();
}