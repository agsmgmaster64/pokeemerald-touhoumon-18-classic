const struct FacilityMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_SUNKERN] = {
        .species = SPECIES_SUNKERN,
        .moves = {MOVE_MEGA_DRAIN, MOVE_HELPING_HAND, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_AZURILL] = {
        .species = SPECIES_AZURILL,
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SING, MOVE_CHARM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_LILYBLACK] = {
        .species = SPECIES_LILYBLACK,
        .moves = {MOVE_TACKLE, MOVE_WIRE_WEB, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CSHIZUHA] = {
        .species = SPECIES_CSHIZUHA,
        .moves = {MOVE_POISON_STING, MOVE_WIRE_WEB, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WURMPLE] = {
        .species = SPECIES_WURMPLE,
        .moves = {MOVE_TACKLE, MOVE_WIRE_WEB, MOVE_POISON_STING, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RALTS] = {
        .species = SPECIES_RALTS,
        .moves = {MOVE_PSYSHOT, MOVE_IMPRISON, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_WITCHS_ROBE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MAGIKARP] = {
        .species = SPECIES_MAGIKARP,
        .moves = {MOVE_FLAIL, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FEEBAS] = {
        .species = SPECIES_FEEBAS,
        .moves = {MOVE_FLAIL, MOVE_MIRROR_COAT, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_CMOMIJI] = {
        .species = SPECIES_CMOMIJI,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_SHIZUHA] = {
        .species = SPECIES_SHIZUHA,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_PICHU] = {
        .species = SPECIES_PICHU,
        .moves = {MOVE_SWEET_KISS, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_SHOCK_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_SILCOON] = {
        .species = SPECIES_SILCOON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_CASCOON] = {
        .species = SPECIES_CASCOON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_IGGLYBUFF] = {
        .species = SPECIES_IGGLYBUFF,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_SEISMIC_TOSS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_WOOPER] = {
        .species = SPECIES_WOOPER,
        .moves = {MOVE_YAWN, MOVE_DIG, MOVE_WATER_PULSE, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TYROGUE] = {
        .species = SPECIES_TYROGUE,
        .moves = {MOVE_MACH_PUNCH, MOVE_PROTECT, MOVE_DOUBLE_TEAM, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SENTRET] = {
        .species = SPECIES_SENTRET,
        .moves = {MOVE_QUICK_ATTACK, MOVE_DISTURBANCE, MOVE_HELPING_HAND, MOVE_ASSIST},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CLEFFA] = {
        .species = SPECIES_CLEFFA,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_METRONOME},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_SEEDOT] = {
        .species = SPECIES_SEEDOT,
        .moves = {MOVE_BULLET_SEED, MOVE_GUARD, MOVE_DEFENSE_CURL, MOVE_TREMORS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LOTAD] = {
        .species = SPECIES_LOTAD,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_SUNNY_DAY, MOVE_MEGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_POOCHYENA] = {
        .species = SPECIES_POOCHYENA,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_ROAR, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SHEDINJA] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_SILVER_WIND, MOVE_SHADOW_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_MAKUHITA] = {
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_FAKE_OUT, MOVE_SEISMIC_TOSS, MOVE_DETECT, MOVE_WHIRLWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_WHISMUR] = {
        .species = SPECIES_WHISMUR,
        .moves = {MOVE_PERFORMANCE, MOVE_SWAGGER, MOVE_BODY_SLAM, MOVE_SMELLING_SALT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ZIGZAGOON] = {
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_HEADBUTT, MOVE_PIN_MISSILE, MOVE_SWIFT, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIDAL_GOWN,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZUBAT] = {
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_CROSS_POISON, MOVE_WHIRLWIND, MOVE_CONFUSE_RAY, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_TOGEPI] = {
        .species = SPECIES_TOGEPI,
        .moves = {MOVE_RETURN, MOVE_YAWN, MOVE_WISH, MOVE_SWEET_KISS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SPINARAK] = {
        .species = SPECIES_SPINARAK,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_NIGHT_SHADE, MOVE_SPIDER_WEB, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_MARILL] = {
        .species = SPECIES_MARILL,
        .moves = {MOVE_WATER_PULSE, MOVE_RAIN_DANCE, MOVE_LIGHT_SCREEN, MOVE_RETURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SWIMSUIT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_HOPPIP] = {
        .species = SPECIES_HOPPIP,
        .moves = {MOVE_MEGA_DRAIN, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_LAX
    },
    [FRONTIER_MON_SLUGMA] = {
        .species = SPECIES_SLUGMA,
        .moves = {MOVE_EMBER, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SWINUB] = {
        .species = SPECIES_SWINUB,
        .moves = {MOVE_ICY_WIND, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_SMEARGLE] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FAKE_OUT, MOVE_QUICK_ATTACK, MOVE_MACH_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MEDICINE] = {
        .species = SPECIES_MEDICINE,
        .moves = {MOVE_GUST, MOVE_SAND_ATTACK, MOVE_WHIRLWIND, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_STEWARDESS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_CNAZRIN] = {
        .species = SPECIES_CNAZRIN,
        .moves = {MOVE_KILLING_BITE, MOVE_PURSUIT, MOVE_QUICK_ATTACK, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_WYNAUT] = {
        .species = SPECIES_WYNAUT,
        .moves = {MOVE_ENCORE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SKITTY] = {
        .species = SPECIES_SKITTY,
        .moves = {MOVE_SING, MOVE_ATTRACT, MOVE_CHARM, MOVE_BRAVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CTOKIKO] = {
        .species = SPECIES_CTOKIKO,
        .moves = {MOVE_MAGIC_KNIFE, MOVE_PURSUIT, MOVE_DRAWN_LINE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HOOTHOOT] = {
        .species = SPECIES_HOOTHOOT,
        .moves = {MOVE_PSYSHOT, MOVE_HYPNOSIS, MOVE_JAMMING, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DIGLETT] = {
        .species = SPECIES_DIGLETT,
        .moves = {MOVE_MAGNITUDE, MOVE_SLASH, MOVE_ROCK_TOMB, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_LEDYBA] = {
        .species = SPECIES_LEDYBA,
        .moves = {MOVE_PSYBEAM, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_NINCADA] = {
        .species = SPECIES_NINCADA,
        .moves = {MOVE_MUD_SLAP, MOVE_DIG, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SURSKIT] = {
        .species = SPECIES_SURSKIT,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_RAIN_DANCE, MOVE_NATURE_POWER, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SWIMSUIT,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_JIGGLYPUFF] = {
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_SING, MOVE_WISH, MOVE_MIMIC, MOVE_BRAVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TAILLOW] = {
        .species = SPECIES_TAILLOW,
        .moves = {MOVE_FLY, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR, MOVE_FOCUS_ENERGY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_WINGULL] = {
        .species = SPECIES_WINGULL,
        .moves = {MOVE_WATER_PULSE, MOVE_FLY, MOVE_QUICK_ATTACK, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_NIDORAN_M] = {
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_DISABLE, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_NIDORAN_F] = {
        .species = SPECIES_NIDORAN_F,
        .moves = {MOVE_CRUNCH, MOVE_DOUBLE_KICK, MOVE_LUCKY_CHANT, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KIRLIA] = {
        .species = SPECIES_KIRLIA,
        .moves = {MOVE_PSYSHOT, MOVE_WILL_O_WISP, MOVE_PSYCHO_CUT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MAREEP] = {
        .species = SPECIES_MAREEP,
        .moves = {MOVE_SHOCK_WAVE, MOVE_FLASH, MOVE_REFLECT, MOVE_COTTON_SPORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MEDITITE] = {
        .species = SPECIES_MEDITITE,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_SLAKOTH] = {
        .species = SPECIES_SLAKOTH,
        .moves = {MOVE_YAWN, MOVE_SCRATCH, MOVE_ENCORE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PARAS] = {
        .species = SPECIES_PARAS,
        .moves = {MOVE_BURN_POWDER, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CREMILIA] = {
        .species = SPECIES_CREMILIA,
        .moves = {MOVE_POISON_TEARS, MOVE_DIG, MOVE_SCREECH, MOVE_TORMENT},
        .itemTableId = BATTLE_FRONTIER_ITEM_NURSE_OUTFIT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_METAL_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BARBOACH] = {
        .species = SPECIES_BARBOACH,
        .moves = {MOVE_MAGNITUDE, MOVE_WATER_PULSE, MOVE_DISCHARGE, MOVE_PSYCHO_CUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_MEOWTH] = {
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_SCREECH, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PINECO] = {
        .species = SPECIES_PINECO,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_HEAD_SMASH, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TRAPINCH] = {
        .species = SPECIES_TRAPINCH,
        .moves = {MOVE_TOXIC, MOVE_DIG, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_SPHEAL] = {
        .species = SPECIES_SPHEAL,
        .moves = {MOVE_ICE_BALL, MOVE_WATER_PULSE, MOVE_HAIL, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_FUR,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HORSEA] = {
        .species = SPECIES_HORSEA,
        .moves = {MOVE_WATER_GUN, MOVE_AGILITY, MOVE_ICY_WIND, MOVE_TWISTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SHROOMISH] = {
        .species = SPECIES_SHROOMISH,
        .moves = {MOVE_BURN_POWDER, MOVE_BULLET_SEED, MOVE_LEECH_SEED, MOVE_HEADBUTT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CAMOUFLAGE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SHUPPET] = {
        .species = SPECIES_SHUPPET,
        .moves = {MOVE_WILL_O_WISP, MOVE_NIGHT_SHADE, MOVE_SHADOW_DANCE, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_DUSKULL] = {
        .species = SPECIES_DUSKULL,
        .moves = {MOVE_SKILL_SWAP, MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ELECTRIKE] = {
        .species = SPECIES_ELECTRIKE,
        .moves = {MOVE_DISCHARGE, MOVE_THUNDER_WAVE, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VULPIX] = {
        .species = SPECIES_VULPIX,
        .moves = {MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CCIRNO] = {
        .species = SPECIES_CCIRNO,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_ICE_BALL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SANDSHREW] = {
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_DIG, MOVE_ROCK_TOMB, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_GYM_SUIT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_POLIWAG] = {
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_HYPNOSIS, MOVE_ICY_WIND, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SWIMSUIT,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BELLSPROUT] = {
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_RAZOR_LEAF, MOVE_POISON_TEARS, MOVE_STUN_SPORE, MOVE_WRAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_LAX
    },
    [FRONTIER_MON_GEODUDE] = {
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_BLAST, MOVE_STRENGTH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_DRATINI] = {
        .species = SPECIES_DRATINI,
        .moves = {MOVE_OUTRAGE, MOVE_THUNDER_WAVE, MOVE_JAMMING, MOVE_WATER_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SNUBBULL] = {
        .species = SPECIES_SNUBBULL,
        .moves = {MOVE_BITE, MOVE_CHARM, MOVE_SWAGGER, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_REMORAID] = {
        .species = SPECIES_REMORAID,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LARVITAR] = {
        .species = SPECIES_LARVITAR,
        .moves = {MOVE_THRASH, MOVE_ROCK_SLIDE, MOVE_DIG, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_BALTOY] = {
        .species = SPECIES_BALTOY,
        .moves = {MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_LIGHT_SCREEN, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_SNORUNT] = {
        .species = SPECIES_SNORUNT,
        .moves = {MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_LEER, MOVE_BITE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BAGON] = {
        .species = SPECIES_BAGON,
        .moves = {MOVE_LAVA_PLUME, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_BELDUM] = {
        .species = SPECIES_BELDUM,
        .moves = {MOVE_HEAD_SMASH, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GULPIN] = {
        .species = SPECIES_GULPIN,
        .moves = {MOVE_TOXIC, MOVE_YAWN, MOVE_PAIN_SPLIT, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_VENONAT] = {
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYBEAM, MOVE_JAMMING, MOVE_STUN_SPORE, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MANKEY] = {
        .species = SPECIES_MANKEY,
        .moves = {MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SCREECH, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_MISTRESS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_MACHOP] = {
        .species = SPECIES_MACHOP,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHELLDER] = {
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_ICE_SHARD, MOVE_JAMMING, MOVE_MANA_SHIELD, MOVE_WITHDRAW},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SMOOCHUM] = {
        .species = SPECIES_SMOOCHUM,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_MUD_SLAP, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NUMEL] = {
        .species = SPECIES_NUMEL,
        .moves = {MOVE_EMBER, MOVE_MAGNITUDE, MOVE_ROCK_TOMB, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CARVANHA] = {
        .species = SPECIES_CARVANHA,
        .moves = {MOVE_BITE, MOVE_SCREECH, MOVE_SCARY_FACE, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CORPHISH] = {
        .species = SPECIES_CORPHISH,
        .moves = {MOVE_AQUA_JET, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SWIMSUIT,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ALICE] = {
        .species = SPECIES_ALICE,
        .moves = {MOVE_FIRE_SPIN, MOVE_METAL_CLAW, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CYNDAQUIL] = {
        .species = SPECIES_CYNDAQUIL,
        .moves = {MOVE_EMBER, MOVE_SWIFT, MOVE_QUICK_ATTACK, MOVE_SMOKESCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ABRA] = {
        .species = SPECIES_ABRA,
        .moves = {MOVE_MIMIC, MOVE_METRONOME, MOVE_FLASH, MOVE_SEISMIC_TOSS},
        .itemTableId = BATTLE_FRONTIER_ITEM_WITCHS_ROBE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_DODUO] = {
        .species = SPECIES_DODUO,
        .moves = {MOVE_MAGIC_KNIFE, MOVE_PERFORMANCE, MOVE_MUD_SLAP, MOVE_FAINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_GASTLY] = {
        .species = SPECIES_GASTLY,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_SWABLU] = {
        .species = SPECIES_SWABLU,
        .moves = {MOVE_HEAD_SMASH, MOVE_DREAM_EATER, MOVE_SING, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_TREECKO] = {
        .species = SPECIES_TREECKO,
        .moves = {MOVE_BULLET_SEED, MOVE_BLADE_FLASH, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_TORCHIC] = {
        .species = SPECIES_TORCHIC,
        .moves = {MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MUDKIP] = {
        .species = SPECIES_MUDKIP,
        .moves = {MOVE_WHIRLPOOL, MOVE_ENDEAVOR, MOVE_EARTH_POWER, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CLILYWHITE] = {
        .species = SPECIES_CLILYWHITE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_WITHDRAW, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TOTODILE] = {
        .species = SPECIES_TOTODILE,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_SCREECH, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SLOWPOKE] = {
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_PSYSHOT, MOVE_DISABLE, MOVE_WATER_PULSE, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CSANAE] = {
        .species = SPECIES_CSANAE,
        .moves = {MOVE_RAZOR_LEAF, MOVE_NATURE_POWER, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CHIKORITA] = {
        .species = SPECIES_CHIKORITA,
        .moves = {MOVE_SECRET_POWER, MOVE_BULLET_SEED, MOVE_MUD_SLAP, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ODDISH] = {
        .species = SPECIES_ODDISH,
        .moves = {MOVE_POISON_TEARS, MOVE_STUN_SPORE, MOVE_NATURE_POWER, MOVE_LUNATIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PSYDUCK] = {
        .species = SPECIES_PSYDUCK,
        .moves = {MOVE_PSYSHOT, MOVE_FURY_SWIPES, MOVE_BLADE_FLASH, MOVE_DISABLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CUBONE] = {
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONE_CLUB, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_GYM_SUIT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GOLDEEN] = {
        .species = SPECIES_GOLDEEN,
        .moves = {MOVE_WATERFALL, MOVE_MAGIC_KNIFE, MOVE_AGILITY, MOVE_PSYBEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NATU] = {
        .species = SPECIES_NATU,
        .moves = {MOVE_NIGHT_SHADE, MOVE_PSYCHO_CUT, MOVE_CONFUSE_RAY, MOVE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_WITCHS_ROBE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLEFAIRY] = {
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_DISTURBANCE, MOVE_RETURN, MOVE_ENCORE, MOVE_SING},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MAGNEMITE] = {
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_JAMMING, MOVE_BINDING_VOICE, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_SEEL] = {
        .species = SPECIES_SEEL,
        .moves = {MOVE_AURORA_BEAM, MOVE_SHADOW_DIVE, MOVE_BODY_SLAM, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASPEAR_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GRIMER] = {
        .species = SPECIES_GRIMER,
        .moves = {MOVE_GUNK_SHOT, MOVE_ROCK_TOMB, MOVE_DISPERSE, MOVE_MINIMIZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KRABBY] = {
        .species = SPECIES_KRABBY,
        .moves = {MOVE_AQUA_JET, MOVE_MUD_SHOT, MOVE_FLAIL, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_EXEGGCUTE] = {
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_PSYSHOT, MOVE_ANCIENT_POWER, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_EEVEE] = {
        .species = SPECIES_EEVEE,
        .moves = {MOVE_CHARM, MOVE_ATTRACT, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DROWZEE] = {
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYSHOT, MOVE_HEADBUTT, MOVE_DISABLE, MOVE_BARRIER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_VOLTORB] = {
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_DISCHARGE, MOVE_SCREECH, MOVE_TREMORS, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CHINCHOU] = {
        .species = SPECIES_CHINCHOU,
        .moves = {MOVE_DISCHARGE, MOVE_SHADOW_DIVE, MOVE_CONFUSE_RAY, MOVE_HEAD_SMASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TEDDIURSA] = {
        .species = SPECIES_TEDDIURSA,
        .moves = {MOVE_SECRET_POWER, MOVE_FAKE_TEARS, MOVE_FAINT_ATTACK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DELIBIRD] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_PRANK, MOVE_ICE_BALL, MOVE_BLADE_FLASH, MOVE_HAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_FUR,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HOUNDOUR] = {
        .species = SPECIES_HOUNDOUR,
        .moves = {MOVE_CRUNCH, MOVE_EMBER, MOVE_ROAR, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_GOTHIC_DRESS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PHANPY] = {
        .species = SPECIES_PHANPY,
        .moves = {MOVE_TREMORS, MOVE_DEFENSE_CURL, MOVE_ROCK_TOMB, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_SPOINK] = {
        .species = SPECIES_SPOINK,
        .moves = {MOVE_PSYWAVE, MOVE_BOUNCE, MOVE_MAGIC_COAT, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ARON] = {
        .species = SPECIES_ARON,
        .moves = {MOVE_METAL_CLAW, MOVE_BLADE_FLASH, MOVE_BINDING_VOICE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LUVDISC] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_SWEET_KISS, MOVE_ATTRACT, MOVE_SHADOW_DIVE, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TENTACOOL] = {
        .species = SPECIES_TENTACOOL,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_POISON_TEARS, MOVE_BARRIER, MOVE_WRAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CACNEA] = {
        .species = SPECIES_CACNEA,
        .moves = {MOVE_NEEDLE_ARM, MOVE_FAINT_ATTACK, MOVE_COTTON_SPORE, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_UNOWN] = {
        .species = SPECIES_UNOWN,
        .moves = {MOVE_CHARGE_BEAM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_KOFFING] = {
        .species = SPECIES_KOFFING,
        .moves = {MOVE_GUNK_SHOT, MOVE_SMOKESCREEN, MOVE_TORMENT, MOVE_HAZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_NURSE_OUTFIT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_STARYU] = {
        .species = SPECIES_STARYU,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MINIMIZE, MOVE_SWIFT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SKIPLOOM] = {
        .species = SPECIES_SKIPLOOM,
        .moves = {MOVE_MEGA_DRAIN, MOVE_PSYSHOT, MOVE_COTTON_SPORE, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NUZLEAF] = {
        .species = SPECIES_NUZLEAF,
        .moves = {MOVE_EXTRASENSORY, MOVE_FAKE_OUT, MOVE_RAZOR_WIND, MOVE_FAINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LOMBRE] = {
        .species = SPECIES_LOMBRE,
        .moves = {MOVE_WATER_PULSE, MOVE_FAKE_OUT, MOVE_BRICK_BREAK, MOVE_ABSORB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_VIBRAVA] = {
        .species = SPECIES_VIBRAVA,
        .moves = {MOVE_LAVA_PLUME, MOVE_DIG, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RHYHORN] = {
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_ROCK_BLAST, MOVE_DIG, MOVE_SCARY_FACE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CLAMPERL] = {
        .species = SPECIES_CLAMPERL,
        .moves = {MOVE_SHADOW_DIVE, MOVE_TOXIC, MOVE_IRON_DEFENSE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_YATA_MIRROR,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CKOAKUMA] = {
        .species = SPECIES_CKOAKUMA,
        .moves = {MOVE_BLADE_FLASH, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_GROWLITHE] = {
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_FLAME_WHEEL, MOVE_BITE, MOVE_ROAR, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FARFETCHD] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_SLASH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLOOMERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_OMANYTE] = {
        .species = SPECIES_OMANYTE,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ANCIENT_POWER, MOVE_TICKLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KABUTO] = {
        .species = SPECIES_KABUTO,
        .moves = {MOVE_MEGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_SAND_ATTACK, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LILEEP] = {
        .species = SPECIES_LILEEP,
        .moves = {MOVE_ANCIENT_POWER, MOVE_POISON_TEARS, MOVE_INGRAIN, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ANORITH] = {
        .species = SPECIES_ANORITH,
        .moves = {MOVE_METAL_CLAW, MOVE_FURY_CUTTER, MOVE_ANCIENT_POWER, MOVE_WATER_GUN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AIPOM] = {
        .species = SPECIES_AIPOM,
        .moves = {MOVE_FURY_SWIPES, MOVE_SAND_ATTACK, MOVE_BATON_PASS, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIDAL_GOWN,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ELEKID] = {
        .species = SPECIES_ELEKID,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_QUICK_ATTACK, MOVE_SWIFT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_LOUDRED] = {
        .species = SPECIES_LOUDRED,
        .moves = {MOVE_STOMP, MOVE_HOWL, MOVE_ASTONISH, MOVE_JAMMING},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SPINDA] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FAINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_NIDORINA] = {
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_BLADE_FLASH, MOVE_LUCKY_CHANT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CYOUMU] = {
        .species = SPECIES_CYOUMU,
        .moves = {MOVE_DOUBLE_KICK, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_LUCKY_CHANT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_FLAAFFY] = {
        .species = SPECIES_FLAAFFY,
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_COTTON_SPORE, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_NINIJA_GARB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_MAGBY] = {
        .species = SPECIES_MAGBY,
        .moves = {MOVE_FIRE_PUNCH, MOVE_SMOKESCREEN, MOVE_CONFUSE_RAY, MOVE_TOXIC_GAS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NOSEPASS] = {
        .species = SPECIES_NOSEPASS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BUNNY_SUIT,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CORSOLA] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MIRROR_COAT, MOVE_ATTRACT, MOVE_ANCIENT_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MAWILE] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_CRUNCH, MOVE_FAKE_TEARS, MOVE_IRON_DEFENSE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOMIJI] = {
        .species = SPECIES_MOMIJI,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_WHIRLWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CMEDICINE] = {
        .species = SPECIES_CMEDICINE,
        .moves = {MOVE_TWINEEDLE, MOVE_PURSUIT, MOVE_ENDEAVOR, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_POLIWHIRL] = {
        .species = SPECIES_POLIWHIRL,
        .moves = {MOVE_WATER_PULSE, MOVE_BRAVER, MOVE_ICY_WIND, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ONIX] = {
        .species = SPECIES_ONIX,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BIND, MOVE_LAVA_PLUME, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BEAUTIFLY] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_SILVER_WIND, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_WHIRLWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DUSTOX] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_SILVER_WIND, MOVE_TOXIC, MOVE_PSYBEAM, MOVE_WHIRLWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHINA_DRESS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LEDIAN] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_COMET_PUNCH, MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_ARIADOS] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_SPIDER_WEB, MOVE_NIGHT_SHADE, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_YANMA] = {
        .species = SPECIES_YANMA,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_BLADE_FLASH, MOVE_DOUBLE_TEAM, MOVE_DETECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DELCATTY_1] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_SECRET_POWER, MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_HEAL_BELL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_SABLEYE_1] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_FAINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_KNOCK_OFF, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLAZER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_LICKITUNG_1] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_POWER_WHIP, MOVE_BRICK_BREAK, MOVE_LICK, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WEEPINBELL_1] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_POISON_TEARS, MOVE_WRAP, MOVE_NATURE_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GRAVELER_1] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_WRECKER, MOVE_DEFENSE_CURL, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLOOM_1] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_BATTLE_CHANT, MOVE_POISON_TEARS, MOVE_STUN_SPORE, MOVE_LUNATIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PORYGON_1] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_PSYBEAM, MOVE_ICY_WIND, MOVE_RECYCLE, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_KADABRA_1] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYSHOT, MOVE_RECOLLECTION, MOVE_PSYCHO_CUT, MOVE_DISABLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WITCHS_ROBE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WAILMER_1] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_WHIRLPOOL, MOVE_ROAR, MOVE_DEFENSE_CURL, MOVE_TREMORS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ROSELIA_1] = {
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_TOXIC, MOVE_NATURE_SOUND, MOVE_COTTON_SPORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VOLBEAT_1] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_SILVER_WIND, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ILLUMISE_1] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_SILVER_WIND, MOVE_WISH, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SANAE_1] = {
        .species = SPECIES_SANAE,
        .moves = {MOVE_BATTLE_CHANT, MOVE_GROWTH, MOVE_NATURE_POWER, MOVE_FURY_CUTTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_ALICE_1] = {
        .species = SPECIES_ALICE,
        .moves = {MOVE_SLASH, MOVE_FIRE_SPIN, MOVE_SWORDS_DANCE, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_LILYWHITE_1] = {
        .species = SPECIES_LILYWHITE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_MUD_SLAP, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SLASH, MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_MACHOKE_1] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_LOW_KICK, MOVE_ROCK_TOMB, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAUNTER_1] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_SPITE, MOVE_SHADOW_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_BAYLEEF_1] = {
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_RAZOR_LEAF, MOVE_TOXIC, MOVE_SAFEGUARD, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_QUILAVA_1] = {
        .species = SPECIES_QUILAVA,
        .moves = {MOVE_FLAME_WHEEL, MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_SMOKESCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CROCONAW_1] = {
        .species = SPECIES_CROCONAW,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_BITE, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TOGETIC_1] = {
        .species = SPECIES_TOGETIC,
        .moves = {MOVE_BLADE_FLASH, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_DISTURBANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MURKROW_1] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_FAINT_ATTACK, MOVE_FLY, MOVE_TORMENT, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WOBBUFFET_1] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM, MOVE_SAFEGUARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PLUSLE_1] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_DISCHARGE, MOVE_FAKE_TEARS, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MINUN_1] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_DISCHARGE, MOVE_CHARM, MOVE_ENCORE, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GROVYLE_1] = {
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_FURY_CUTTER, MOVE_ENDEAVOR, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_COMBUSKEN_1] = {
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_EMBER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MARSHTOMP_1] = {
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ROCK_TOMB, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PONYTA_1] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FIRE_SPIN, MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AZUMARILL_1] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_FACADE, MOVE_DIG, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SUDOWOODO_1] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FAINT_ATTACK, MOVE_SANDSTORM, MOVE_BLOCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_BUNNY_SUIT,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MAGCARGO_1] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EMBER, MOVE_DISPERSE, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_PUPITAR_1] = {
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_DIG, MOVE_BITE, MOVE_SCARY_FACE, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_GYM_SUIT,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SEALEO_1] = {
        .species = SPECIES_SEALEO,
        .moves = {MOVE_ICE_BALL, MOVE_HAIL, MOVE_SNORE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_NAZRIN_1] = {
        .species = SPECIES_NAZRIN,
        .moves = {MOVE_ENDEAVOR, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIDAL_GOWN,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_MASQUERAIN_1] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_SILVER_WIND, MOVE_BLADE_FLASH, MOVE_ICY_WIND, MOVE_STUN_SPORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FURRET_1] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_POWER_WHIP, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_DISTURBANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_DUNSPARCE_1] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_HEADBUTT, MOVE_COERCE, MOVE_DEFENSE_CURL, MOVE_TREMORS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRAGONAIR_1] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_LAVA_PLUME, MOVE_LEER, MOVE_WRAP, MOVE_SAFEGUARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MIGHTYENA_1] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_BITE, MOVE_CROSS_POISON, MOVE_TAUNT, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LINOONE_1] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_SECRET_POWER, MOVE_SAND_ATTACK, MOVE_COVET, MOVE_TICKLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CASTFORM_1] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_EMBER, MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_SHELGON_1] = {
        .species = SPECIES_SHELGON,
        .moves = {MOVE_HEADBUTT, MOVE_LAVA_PLUME, MOVE_PROTECT, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_METANG_1] = {
        .species = SPECIES_METANG,
        .moves = {MOVE_METAL_CLAW, MOVE_PSYSHOT, MOVE_PURSUIT, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_SING, MOVE_DISABLE, MOVE_WISH, MOVE_SECRET_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIDAL_GOWN,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SUNFLORA_1] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_BATTLE_CHANT, MOVE_INGRAIN, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYWAVE, MOVE_HEAD_SMASH, MOVE_HEAL_BELL, MOVE_SAFEGUARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_WITCHS_ROBE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GLIGAR_1] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_METAL_CLAW, MOVE_DIG, MOVE_BLADE_FLASH, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_QWILFISH_1] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_PIN_MISSILE, MOVE_SPIKES, MOVE_MINIMIZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SNEASEL_1] = {
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_FAINT_ATTACK, MOVE_FAKE_OUT, MOVE_ICY_WIND, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PELIPPER_1] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_WATER_PULSE, MOVE_BLADE_FLASH, MOVE_NASTY_PLOT, MOVE_MYSTIC_WATER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SWELLOW_1] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FLY, MOVE_ENDEAVOR, MOVE_FACADE, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAIRON_1] = {
        .species = SPECIES_LAIRON,
        .moves = {MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_IRON_DEFENSE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_MAID_UNIFORM,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_TANGELA_1] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_MEGA_DRAIN, MOVE_POWER_WHIP, MOVE_TOXIC, MOVE_BIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_REMILIA_1] = {
        .species = SPECIES_REMILIA,
        .moves = {MOVE_CROSS_POISON, MOVE_DIG, MOVE_BITE, MOVE_COERCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FAKE_OUT, MOVE_SLASH, MOVE_TORMENT, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIDAL_GOWN,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SEADRA_1] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_AURORA_BEAM, MOVE_SMOKESCREEN, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SWIMSUIT,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_SECRET_POWER, MOVE_PSYBEAM, MOVE_MAGIC_COAT, MOVE_SEISMIC_TOSS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_VIGOROTH_1] = {
        .species = SPECIES_VIGOROTH,
        .moves = {MOVE_SLASH, MOVE_COUNTER, MOVE_ENCORE, MOVE_PERFORMANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_LUNATONE_1] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_PSYSHOT, MOVE_DRACO_METEOR, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SOLROCK_1] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_PSYSHOT, MOVE_FIRE_SPIN, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_NOCTOWL_1] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_PSYSHOT, MOVE_BLADE_FLASH, MOVE_FAINT_ATTACK, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE, MOVE_SWIFT, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_SLEEP_POWDER, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHANSEY_1] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_METRONOME, MOVE_REFRESH, MOVE_DEFENSE_CURL, MOVE_MINIMIZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_WATER_PULSE, MOVE_PSYBEAM, MOVE_SWIFT, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_JUMPLUFF_1] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_BLADE_FLASH, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PILOSWINE_1] = {
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_DIG, MOVE_ANCIENT_POWER, MOVE_HAIL, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_GYM_SUIT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_GOLBAT_1] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_AIR_SLASH, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PRIMEAPE_1] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_KARATE_CHOP, MOVE_COUNTER, MOVE_SWAGGER, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_ROLLING_KICK, MOVE_BRICK_BREAK, MOVE_FOCUS_ENERGY, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_MISTRESS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_MACH_PUNCH, MOVE_SOAR, MOVE_DETECT, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIRAFARIG_1] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYBEAM, MOVE_STOMP, MOVE_WISH, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_TRIPLE_KICK, MOVE_DIG, MOVE_MACH_PUNCH, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BANETTE_1] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_SPITE, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_ENDURE, MOVE_DIG},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_SEVIPER_1] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_JAB, MOVE_BITE, MOVE_COERCE, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_ZANGOOSE_1] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_SLASH, MOVE_DOUBLE_KICK, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_MAGNITUDE, MOVE_PROTECT, MOVE_SANDSTORM, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SHARPEDO_1] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_WATER_PULSE, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_WHIRLWIND, MOVE_BLADE_FLASH, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MAGNETON_1] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_JAMMING},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MANTINE_1] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_BLADE_FLASH, MOVE_RAIN_DANCE, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SWIMSUIT,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_STANTLER_1] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_EXTRASENSORY, MOVE_CONFUSE_RAY, MOVE_STOMP, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_WITCHS_ROBE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_BITE, MOVE_RAZOR_WIND, MOVE_PSYCHO_CUT, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWALOT_1] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_NASTY_PLOT, MOVE_MYSTIC_WATER, MOVE_MIRROR_SHOT, MOVE_GUNK_SHOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CRAWDAUNT_1] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_NIGHT_SLASH, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KOAKUMA_1] = {
        .species = SPECIES_KOAKUMA,
        .moves = {MOVE_BLADE_FLASH, MOVE_ROOST, MOVE_MUD_SLAP, MOVE_FAINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_STEWARDESS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GRUMPIG_1] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYBEAM, MOVE_CONFUSE_RAY, MOVE_PSYCHO_CUT, MOVE_MAGIC_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TORKOAL_1] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_EMBER, MOVE_FIRE_SPIN, MOVE_SMOKESCREEN, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_AQUA_JET, MOVE_METAL_CLAW, MOVE_MUD_SHOT, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CACTURNE_1] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_NEEDLE_ARM, MOVE_FAINT_ATTACK, MOVE_POISON_TEARS, MOVE_DRAIN_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_BATTLE_CHANT, MOVE_SAFEGUARD, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_OCTILLERY_1] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_BLACK_RIPPLE, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_ROCK_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_HUNTAIL_1] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_WHIRLPOOL, MOVE_SCARY_FACE, MOVE_MUD_SLAP, MOVE_BITE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GOREBYSS_1] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_WHIRLPOOL, MOVE_AMNESIA, MOVE_ICY_WIND, MOVE_PSYSHOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_RELICANTH_1] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_HARDEN, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_FEINT, MOVE_TICKLE, MOVE_ANCIENT_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SLASH, MOVE_DIG, MOVE_FURY_CUTTER, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_SUBMISSION, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_BUBBLE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_MISTRESS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCYTHER_1] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_FURY_CUTTER, MOVE_BLADE_FLASH, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_SUBMISSION, MOVE_FOCUS_ENERGY, MOVE_SWORDS_DANCE, MOVE_REVENGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_MISTRESS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SHADOW_DIVE, MOVE_DIG, MOVE_HYPNOSIS, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLOYSTER_1] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_AURORA_BEAM, MOVE_FEINT, MOVE_JAMMING, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_FUR,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DELCATTY_2] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SABLEYE_2] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FAINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LICKITUNG_2] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WEEPINBELL_2] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_POISON_BOMB, MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_GRAVELER_2] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLOOM_2] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_POISON_BOMB, MOVE_LUNATIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PORYGON_2] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_TRI_ATTACK, MOVE_MANA_BURST, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_KADABRA_2] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_WITCHS_ROBE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WAILMER_2] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_AQUA_SHOWER, MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ROSELIA_2] = {
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_POISON_BOMB, MOVE_NATURE_SOUND, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VOLBEAT_2] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_MANA_CHARGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ILLUMISE_2] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_SILVER_WIND, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SANAE_2] = {
        .species = SPECIES_SANAE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_POISON_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ALICE_2] = {
        .species = SPECIES_ALICE,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_ANCIENT_POWER, MOVE_DARK_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LILYWHITE_2] = {
        .species = SPECIES_LILYWHITE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_BURN_POWDER, MOVE_GIGA_DRAIN, MOVE_DIG, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MACHOKE_2] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAUNTER_2] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_MANA_BURST, MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BAYLEEF_2] = {
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_GIGA_DRAIN, MOVE_BODY_SLAM, MOVE_NATURE_SOUND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_QUILAVA_2] = {
        .species = SPECIES_QUILAVA,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUSH_CLAW, MOVE_BODY_SLAM, MOVE_SMOKESCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CROCONAW_2] = {
        .species = SPECIES_CROCONAW,
        .moves = {MOVE_GIGA_IMPACT, MOVE_BLADE_FLASH, MOVE_ROCK_SLIDE, MOVE_DIG},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TOGETIC_2] = {
        .species = SPECIES_TOGETIC,
        .moves = {MOVE_RETURN, MOVE_SWEET_KISS, MOVE_BLADE_FLASH, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MURKROW_2] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_PERISH_SONG, MOVE_CHARMING_LOOK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WOBBUFFET_2] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PLUSLE_2] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SEISMIC_TOSS, MOVE_WISH},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MINUN_2] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_THUNDERBOLT, MOVE_ATTRACT, MOVE_CHARM, MOVE_WISH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GROVYLE_2] = {
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_CRUSH_CLAW, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_COMBUSKEN_2] = {
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_SOAR, MOVE_SLASH, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MARSHTOMP_2] = {
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PONYTA_2] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_AZUMARILL_2] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_GIGA_IMPACT, MOVE_BRICK_BREAK, MOVE_STEEL_FIST, MOVE_DIG},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUDOWOODO_2] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_LOW_KICK, MOVE_SELF_DESTRUCT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MAGCARGO_2] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_PUPITAR_2] = {
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SEALEO_2] = {
        .species = SPECIES_SEALEO,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM, MOVE_HAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_NAZRIN_2] = {
        .species = SPECIES_NAZRIN,
        .moves = {MOVE_HEAT_CLAW, MOVE_KILLING_BITE, MOVE_SHADOW_BALL, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MASQUERAIN_2] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_FURRET_2] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_DISTURBANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUNSPARCE_2] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_ICE_BEAM, MOVE_ROCK_TOMB, MOVE_BITE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_DRAGONAIR_2] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_RETURN, MOVE_REST, MOVE_THUNDER_WAVE, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MIGHTYENA_2] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LINOONE_2] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_THUNDER_WAVE, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CASTFORM_2] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_WATER_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHELGON_2] = {
        .species = SPECIES_SHELGON,
        .moves = {MOVE_FRUSTRATION, MOVE_TAILWIND, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_METANG_2] = {
        .species = SPECIES_METANG,
        .moves = {MOVE_METEOR_MASH, MOVE_MANA_BURST, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_DREAM_EATER, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SUNFLORA_2] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_NATURE_SOUND, MOVE_GROWTH, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_MANA_BURST, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEAL_BELL},
        .itemTableId = BATTLE_FRONTIER_ITEM_WITCHS_ROBE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GLIGAR_2] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_JUDGEMENT, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QWILFISH_2] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_REVENGE, MOVE_POISON_BOMB, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNEASEL_2] = {
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_CRUSH_CLAW, MOVE_BRICK_BREAK, MOVE_BLADE_FLASH, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PELIPPER_2] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_BLADE_FLASH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SWELLOW_2] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FACADE, MOVE_BLADE_FLASH, MOVE_PURSUIT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAIRON_2] = {
        .species = SPECIES_LAIRON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEEL_FIST, MOVE_ROAR, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_TANGELA_2] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_REST, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REMILIA_2] = {
        .species = SPECIES_REMILIA,
        .moves = {MOVE_POISON_BOMB, MOVE_EARTHQUAKE, MOVE_STEEL_FIST, MOVE_COERCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_ROAR, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIDAL_GOWN,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SEADRA_2] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FRUSTRATION, MOVE_LAVA_PLUME, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_TRICK, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VIGOROTH_2] = {
        .species = SPECIES_VIGOROTH,
        .moves = {MOVE_CRUSH_CLAW, MOVE_REVERSAL, MOVE_ENDURE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUNATONE_2] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_MANA_BURST, MOVE_ICE_BEAM, MOVE_DRACO_METEOR, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SOLROCK_2] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRACO_METEOR, MOVE_FLARE_BLITZ},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_NOCTOWL_2] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_MANA_BURST, MOVE_FAINT_ATTACK, MOVE_BLADE_FLASH, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUSH_CLAW, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_MANA_BURST, MOVE_POISON_BOMB, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CHANSEY_2] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_SCULPTURE, MOVE_BRAVE_BIRD, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_JUMPLUFF_2] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PILOSWINE_2] = {
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLBAT_2] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_POISON_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_AIR_SLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PRIMEAPE_2] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_TOMB, MOVE_FLARE_BLITZ, MOVE_BULK_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_GIGA_IMPACT, MOVE_BRICK_BREAK, MOVE_FORESIGHT, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_MACH_PUNCH, MOVE_DETECT, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIRAFARIG_2] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_MANA_BURST, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SEISMIC_TOSS, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BANETTE_2] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCREECH, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINJASK_2] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_SLASH, MOVE_SHADOW_BALL, MOVE_SWORDS_DANCE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SEVIPER_2] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_BOMB, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ZANGOOSE_2] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CAMERUPT_2] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SHARPEDO_2] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MAGNETON_2] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_BINDING_VOICE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MANTINE_2] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STANTLER_2] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_BLADE_FLASH, MOVE_STEEL_FIST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWALOT_2] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_POISON_BOMB, MOVE_SHADOW_BALL, MOVE_BODY_SLAM, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRAWDAUNT_2] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_JUDGEMENT, MOVE_FRUSTRATION, MOVE_ANCIENT_POWER, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KOAKUMA_2] = {
        .species = SPECIES_KOAKUMA,
        .moves = {MOVE_RETURN, MOVE_BLADE_FLASH, MOVE_STEEL_WING, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRUMPIG_2] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_MANA_BURST, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TORKOAL_2] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_FLARE_BLITZ, MOVE_BODY_SLAM, MOVE_SMOKESCREEN, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_JUDGEMENT, MOVE_ROCK_TOMB, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CACTURNE_2] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_GIGA_IMPACT, MOVE_TEETER_DANCE, MOVE_FAINT_ATTACK, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_ATTRACT, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OCTILLERY_2] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_BLACK_RIPPLE, MOVE_FIRE_BLAST, MOVE_THUNDER_WAVE, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GOREBYSS_2] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_MANA_BURST, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SLASH, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BRICK_BREAK, MOVE_HYPNOSIS, MOVE_REST, MOVE_BELLY_DRUM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCYTHER_2] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_SILVER_WIND, MOVE_BLADE_FLASH, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_JUDGEMENT, MOVE_SWORDS_DANCE, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SURF, MOVE_MANA_BURST, MOVE_MUD_SLAP, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLOYSTER_2] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_SHADOW_DIVE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_TRI_ATTACK, MOVE_SLASH, MOVE_SAND_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_GYM_SUIT,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_1] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_MANA_BURST, MOVE_HI_JUMP_KICK, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MISDREAVUS_1] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_PAIN_SPLIT, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TOKIKO_1] = {
        .species = SPECIES_TOKIKO,
        .moves = {MOVE_GALE, MOVE_TRI_ATTACK, MOVE_FACADE, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_STEWARDESS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_1] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_GIGA_IMPACT, MOVE_SMELLING_SALT, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_ICE_BEAM, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DUSCLOPS_1] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_WILL_O_WISP, MOVE_SEISMIC_TOSS, MOVE_PAIN_SPLIT, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DODRIO_1] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_GALE, MOVE_TRI_ATTACK, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_MANA_BURST, MOVE_MAGICAL_LEAF, MOVE_FAKE_OUT, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_LANTURN_1] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BRELOOM_1] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SOAR, MOVE_MACH_PUNCH, MOVE_HEADBUTT, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FORRETRESS_1] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_LIGHT_SCREEN, MOVE_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WHISCASH_1] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_XATU_1] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_GALE, MOVE_NIGHT_SHADE, MOVE_WISH, MOVE_PSYCHO_CUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_STEWARDESS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SKARMORY_1] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_STEEL_WING, MOVE_AIR_SLASH, MOVE_COUNTER, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_HEADBUTT},
        .itemTableId = BATTLE_FRONTIER_ITEM_DARK_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QUAGSIRE_1] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METRONOME, MOVE_DOUBLE_TEAM, MOVE_REFLECT, MOVE_DISTURBANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_HARIYAMA_1] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CIRNO_1] = {
        .species = SPECIES_CIRNO,
        .moves = {MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DEWGONG_1] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_FUR,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MANECTRIC_1] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH, MOVE_QUICK_ATTACK, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_NINIJA_GARB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_POISON_BOMB, MOVE_BATTLE_CHANT, MOVE_LUNATIC, MOVE_AROMATHERAPY},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_VICTREEBEL_1] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_NATURE_POWER, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_EXPLOUD_1] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SHIFTRY_1] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FAINT_ATTACK, MOVE_QUICK_ATTACK, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CAMOUFLAGE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GLALIE_1] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_ICE_BEAM, MOVE_CRUNCH, MOVE_HAIL, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUDICOLO_1] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_HYPNOSIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_WITCHS_ROBE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GOLEM_1] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_COUNTER, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_1] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_1] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_POISON_BOMB, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_SMOKESCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_1] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_EARTHQUAKE, MOVE_THRASH, MOVE_SWAGGER, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_1] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_HEADBUTT, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_MANA_BURST, MOVE_BRICK_BREAK, MOVE_AMNESIA, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MILTANK_1] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_MILK_DRINK},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ALTARIA_1] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_HEART_BREAK, MOVE_BLADE_FLASH, MOVE_REFRESH, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_POISON_BOMB, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_YOUMU_1] = {
        .species = SPECIES_YOUMU,
        .moves = {MOVE_SCULPTURE, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMAR_1] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_SMOKESCREEN, MOVE_BRICK_BREAK, MOVE_BARRIER},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CRADILY_1] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ROCK_SLIDE, MOVE_BARRIER, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ARMALDO_1] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_SLASH, MOVE_BLADE_FLASH, MOVE_ANCIENT_POWER, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DIG, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_RAPIDASH_1] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_GOTHIC_DRESS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_POISON_BOMB, MOVE_BODY_SLAM, MOVE_SCREECH, MOVE_MINIMIZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_NURSE_OUTFIT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GENGAR_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_NINIJA_GARB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_METAL_CLAW, MOVE_BLADE_FLASH, MOVE_COUNTER, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HERACROSS_1] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_BRAVE_BIRD, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_1] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_CRUNCH, MOVE_BLADE_FLASH, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HOUNDOOM_1] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DONPHAN_1] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAYDOL_1] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_BODY_SLAM, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MACHAMP_1] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHUCKLE_1] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_TREMORS, MOVE_DEFENSE_CURL, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_LAVA_PLUME, MOVE_ROCK_TOMB, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_1] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_POISON_BOMB, MOVE_ICY_WIND, MOVE_BARRIER, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_LAVA_PLUME, MOVE_BLADE_FLASH, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_BLADE_FLASH, MOVE_SHADOW_BALL, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_MAGICAL_LEAF, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_MANA_BURST, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEEL_WING, MOVE_FAINT_ATTACK, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CALICE_1] = {
        .species = SPECIES_CALICE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SLEEP_POWDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ROAR, MOVE_BITE, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SWIMSUIT,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEGANIUM_1] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_MANA_BURST, MOVE_CHARM, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLILYBLACK_1] = {
        .species = SPECIES_CLILYBLACK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_BITE, MOVE_SEISMIC_TOSS},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FERALIGATR_1] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_BLADE_FLASH, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_AGGRON_1] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_STEEL_FIST, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_1] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_WALREIN_1] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_BLIZZARD, MOVE_HAIL, MOVE_YAWN, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_LEECH_SEED, MOVE_BLADE_FLASH, MOVE_DETECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REISEN_1] = {
        .species = SPECIES_REISEN,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_ROAR, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYPHLOSION_1] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SMOKESCREEN, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ATTRACT, MOVE_CONFUSE_RAY, MOVE_SING},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_POISON_BOMB, MOVE_BITE, MOVE_ASTONISH, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_REST, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_RETURN, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_LAVA_PLUME, MOVE_ICY_WIND, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_SING, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_1] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_HEART_BREAK, MOVE_BLADE_FLASH, MOVE_HEADBUTT, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_METAGROSS_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_BLADE_FLASH, MOVE_FACADE, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_1] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_YAWN, MOVE_BULK_UP, MOVE_SWAGGER, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_BLADE_FLASH, MOVE_TRI_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_2] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_MANA_BURST, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_DARK_RIBBON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QUAGSIRE_2] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_YAWN, MOVE_ANCIENT_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_MISDREAVUS_2] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_MANA_BURST, MOVE_ATTRACT, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TOKIKO_2] = {
        .species = SPECIES_TOKIKO,
        .moves = {MOVE_GALE, MOVE_TRI_ATTACK, MOVE_ATTRACT, MOVE_PURSUIT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_2] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_FLARE_BLITZ, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PERISH_SONG, MOVE_CHARMING_LOOK, MOVE_LOVELY_KISS, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DUSCLOPS_2] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DODRIO_2] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_GALE, MOVE_DOUBLE_EDGE, MOVE_FAINT_ATTACK, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_BATON_PASS, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_MANA_BURST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LANTURN_2] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BRELOOM_2] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_FOCUS_PUNCH, MOVE_BURN_POWDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FORRETRESS_2] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_COUNTER, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SKARMORY_2] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SPIKES, MOVE_ROAR, MOVE_GALE, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_DISCHARGE, MOVE_PSYCHO_CUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_XATU_2] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_FLY, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METEOR_MASH, MOVE_DRACO_METEOR, MOVE_DOUBLE_TEAM, MOVE_DISTURBANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HARIYAMA_2] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CIRNO_2] = {
        .species = SPECIES_CIRNO,
        .moves = {MOVE_THUNDERBOLT, MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEWGONG_2] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_ENCORE, MOVE_DISABLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MANECTRIC_2] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_INGRAIN, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VICTREEBEL_2] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_POISON_BOMB, MOVE_SLEEP_POWDER, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXPLOUD_2] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SHIFTRY_2] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_LEECH_SEED, MOVE_DIG, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLALIE_2] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_EXPLOSION, MOVE_ENDURE, MOVE_BODY_SLAM, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LUDICOLO_2] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_DREAM_EATER, MOVE_MANA_BURST},
        .itemTableId = BATTLE_FRONTIER_ITEM_WITCHS_ROBE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_2] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_2] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SCULPTURE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_2] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_MANA_BURST, MOVE_CALM_MIND, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_MEMENTO, MOVE_POISON_BOMB, MOVE_FACADE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_2] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_ATTRACT, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_2] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_YAWN, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_MANA_BURST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MILTANK_2] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ALTARIA_2] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_PERISH_SONG, MOVE_LAVA_PLUME, MOVE_PURSUIT, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_YOUMU_2] = {
        .species = SPECIES_YOUMU,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMAR_2] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_SMOKESCREEN, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CRADILY_2] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARMALDO_2] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_STEEL_FIST, MOVE_ANCIENT_POWER, MOVE_BRICK_BREAK, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_CROSS_CHOP, MOVE_SURF, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RAPIDASH_2] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FIRE_BLAST, MOVE_BOUNCE, MOVE_DOUBLE_TEAM, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_POISON_BOMB, MOVE_DYNAMIC_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GENGAR_2] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_POISON_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_STEEL_WING, MOVE_SWORDS_DANCE, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HERACROSS_2] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_ATTRACT, MOVE_BULK_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSARING_2] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HOUNDOOM_2] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_ROAR, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DONPHAN_2] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLAYDOL_2] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_MANA_BURST, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_DRACO_METEOR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_CURSE, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_HEAT_WAVE, MOVE_BODY_SLAM, MOVE_SHADOW_DANCE, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_MACHAMP_2] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHUCKLE_2] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SANDSTORM, MOVE_DIG, MOVE_FLASH, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_LAVA_PLUME, MOVE_SANDSTORM, MOVE_BLOCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TENTACRUEL_2] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_ANCIENT_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MANA_BURST, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_RETURN, MOVE_CURSE, MOVE_SLEEP_POWDER, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CALICE_2] = {
        .species = SPECIES_CALICE,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DIG, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MEGANIUM_2] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_NATURE_SOUND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_MANA_BURST, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CURSE, MOVE_SCREECH, MOVE_DOUBLE_TEAM, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLILYBLACK_2] = {
        .species = SPECIES_CLILYBLACK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_GIGA_IMPACT, MOVE_BRICK_BREAK, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SURF, MOVE_HEART_BREAK, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_AGGRON_2] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_2] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BLAZE_KICK, MOVE_GIGA_IMPACT, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_WALREIN_2] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_THUNDER_PUNCH, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REISEN_2] = {
        .species = SPECIES_REISEN,
        .moves = {MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_TAILWIND, MOVE_SMOKESCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYPHLOSION_2] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH, MOVE_BLADE_FLASH, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_LAVA_PLUME, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SING, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_2] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SAFEGUARD, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_CRUNCH, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_METAGROSS_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_PSYCH_UP, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_2] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUGTRIO_3] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_POISON_BOMB, MOVE_FISSURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_3] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MISDREAVUS_3] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_PERISH_SONG, MOVE_CHARMING_LOOK, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TOKIKO_3] = {
        .species = SPECIES_TOKIKO,
        .moves = {MOVE_GALE, MOVE_RETURN, MOVE_STEEL_WING, MOVE_FAINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GRANBULL_3] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_POISON_BOMB, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_3] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_DREAM_EATER, MOVE_LOVELY_KISS, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_DUSCLOPS_3] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DODRIO_3] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_GALE, MOVE_STEEL_WING, MOVE_FAINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_3] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_TRICK, MOVE_TORMENT, MOVE_MANA_BURST, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LANTURN_3] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_CONFUSE_RAY, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRELOOM_3] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_STEEL_FIST, MOVE_FOCUS_PUNCH, MOVE_ATTRACT, MOVE_BURN_POWDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FORRETRESS_3] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WHISCASH_3] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_SLEEP_TALK, MOVE_REST, MOVE_SURF, MOVE_FISSURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_XATU_3] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_GALE, MOVE_MANA_BURST, MOVE_GIGA_DRAIN, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SKARMORY_3] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_TOXIC, MOVE_CURSE, MOVE_REST, MOVE_FLY},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MAROWAK_3] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_DARK_RIBBON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QUAGSIRE_3] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_BOMB, MOVE_DOUBLE_EDGE, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFABLE_3] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_MAGICAL_LEAF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HARIYAMA_3] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CIRNO_3] = {
        .species = SPECIES_CIRNO,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_STEEL_FIST, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DEWGONG_3] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SCULPTURE, MOVE_SHEER_COLD, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MANECTRIC_3] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_STEEL_FIST, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_VILEPLUME_3] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_ATTRACT, MOVE_STUN_SPORE, MOVE_POISON_BOMB, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_VICTREEBEL_3] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_STUN_SPORE, MOVE_INGRAIN, MOVE_GIGA_DRAIN, MOVE_POISON_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ELECTRODE_3] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_EXPLOUD_3] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_FLARE_BLITZ, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_EXTRASENSORY},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHIFTRY_3] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_GLALIE_3] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LUDICOLO_3] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HYPNO_3] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_GIGA_IMPACT, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLEM_3] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_3] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CRUSH_CLAW, MOVE_EARTHQUAKE, MOVE_SCULPTURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_3] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_TRICK, MOVE_DISABLE, MOVE_MANA_BURST, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_3] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_POISON_BOMB, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KANGASKHAN_3] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELECTABUZZ_3] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDERBOLT, MOVE_CROSS_CHOP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TAUROS_3] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SLOWBRO_3] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_MANA_BURST, MOVE_SHADOW_BALL, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLOWKING_3] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_MANA_BURST, MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MILTANK_3] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALTARIA_3] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_SING, MOVE_TAILWIND, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOQUEEN_3] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_YOUMU_3] = {
        .species = SPECIES_YOUMU,
        .moves = {MOVE_SCULPTURE, MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGMAR_3] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_GIGA_IMPACT, MOVE_CROSS_CHOP, MOVE_STEEL_FIST, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CRADILY_3] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_SUBSTITUTE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARMALDO_3] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLDUCK_3] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CROSS_CHOP, MOVE_BLIZZARD, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_RAPIDASH_3] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_HYPNOSIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MUK_3] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_POISON_BOMB, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GENGAR_3] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_GIGA_DRAIN, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AMPHAROS_3] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_GIGA_IMPACT, MOVE_STEEL_FIST, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SCIZOR_3] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY, MOVE_SLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_HERACROSS_3] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_3] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HOUNDOOM_3] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BALL, MOVE_POISON_BOMB, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DONPHAN_3] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SECRET_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAYDOL_3] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_MANA_BURST, MOVE_ICE_BEAM, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WAILORD_3] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FISSURE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NINETALES_3] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FIRE_BLAST, MOVE_STEEL_FIST, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_MACHAMP_3] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SHUCKLE_3] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_3] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FIRE_BLAST, MOVE_HEART_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PORYGON2_3] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_MANA_BURST, MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARDEVOIR_3] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MANA_BURST, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_MAGICAL_LEAF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_3] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_STARMIE_3] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_3] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_HEART_BREAK, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CALICE_3] = {
        .species = SPECIES_CALICE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_POISON_BOMB, MOVE_EARTHQUAKE, MOVE_SLEEP_POWDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VAPOREON_3] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DISPERSE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JOLTEON_3] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_AGILITY, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLAREON_3] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAIL, MOVE_ENDURE, MOVE_FLARE_BLITZ},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEGANIUM_3] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_ENDURE, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ESPEON_3] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_MANA_BURST, MOVE_BITE, MOVE_WISH, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_UMBREON_3] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ATTRACT, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLILYBLACK_3] = {
        .species = SPECIES_CLILYBLACK,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FERALIGATR_3] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AGGRON_3] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_SURF, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLAZIKEN_3] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_ENDURE, MOVE_REVERSAL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_WALREIN_3] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SHEER_COLD, MOVE_FISSURE, MOVE_SURF, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SCEPTILE_3] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_REISEN_3] = {
        .species = SPECIES_REISEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_HEART_BREAK, MOVE_BITE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYPHLOSION_3] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLARE_BLITZ, MOVE_ENDURE, MOVE_REVERSAL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAPRAS_3] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_MANA_BURST, MOVE_CONFUSE_RAY, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CROBAT_3] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_AIR_SLASH, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GYARADOS_3] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_SURF, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SNORLAX_3] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_GIGA_IMPACT, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_3] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_FLAIL, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLISSEY_3] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_CALM_MIND, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_3] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_ATTRACT, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCANINE_3] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SALAMENCE_3] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_METAGROSS_3] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_3] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BLADE_FLASH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUGTRIO_4] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FISSURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_4] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_GIGA_IMPACT, MOVE_MANA_BURST, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MISDREAVUS_4] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_DESTINY_BOND, MOVE_MANA_BURST, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOKIKO_4] = {
        .species = SPECIES_TOKIKO,
        .moves = {MOVE_GALE, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_SKY_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GRANBULL_4] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_JYNX_4] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_MANA_BURST, MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_FAKE_TEARS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DUSCLOPS_4] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DODRIO_4] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_GALE, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_4] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LANTURN_4] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRELOOM_4] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_POISON_BOMB, MOVE_BURN_POWDER, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FORRETRESS_4] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WHISCASH_4] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_FISSURE, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_XATU_4] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_MANA_BURST, MOVE_GALE, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SKARMORY_4] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_GALE, MOVE_STEEL_WING, MOVE_COUNTER, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_4] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_GIGA_IMPACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_DARK_RIBBON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QUAGSIRE_4] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CLEFABLE_4] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_GIGA_IMPACT, MOVE_MANA_BURST, MOVE_SHADOW_BALL, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HARIYAMA_4] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CIRNO_4] = {
        .species = SPECIES_CIRNO,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_PROTECT, MOVE_GIGA_IMPACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DEWGONG_4] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SHEER_COLD, MOVE_ICE_BEAM, MOVE_SURF, MOVE_SIGNAL_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MANECTRIC_4] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_4] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SOLAR_BEAM, MOVE_POISON_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_VICTREEBEL_4] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DOUBLE_EDGE, MOVE_POISON_BOMB, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ELECTRODE_4] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_EXPLOUD_4] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_FLARE_BLITZ},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SHIFTRY_4] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_EXPLOSION, MOVE_GIGA_DRAIN, MOVE_GIGA_IMPACT, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GLALIE_4] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LUDICOLO_4] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HYPNO_4] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_4] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_4] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SCULPTURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_4] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_4] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_POISON_BOMB, MOVE_FRUSTRATION, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KANGASKHAN_4] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_4] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERBOLT, MOVE_MANA_BURST, MOVE_GIGA_IMPACT, MOVE_CROSS_CHOP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TAUROS_4] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB, MOVE_THUNDERBOLT, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SLOWBRO_4] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_MANA_BURST, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SLOWKING_4] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_MANA_BURST, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MILTANK_4] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CURSE, MOVE_DOUBLE_TEAM, MOVE_MILK_DRINK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALTARIA_4] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_HEART_BREAK, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NIDOQUEEN_4] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SUPERPOWER, MOVE_POISON_BOMB, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_YOUMU_4] = {
        .species = SPECIES_YOUMU,
        .moves = {MOVE_BRAVE_BIRD, MOVE_POISON_BOMB, MOVE_EARTHQUAKE, MOVE_THUNDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MAGMAR_4] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_MANA_BURST, MOVE_CROSS_CHOP, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CRADILY_4] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_TOXIC, MOVE_INGRAIN, MOVE_MIRROR_COAT, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARMALDO_4] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLDUCK_4] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_SURF, MOVE_CROSS_CHOP, MOVE_ICE_BEAM, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_RAPIDASH_4] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_STEEL_FIST, MOVE_DOUBLE_KICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MUK_4] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_POISON_BOMB, MOVE_BRICK_BREAK, MOVE_GIGA_DRAIN, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GENGAR_4] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_MANA_BURST, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AMPHAROS_4] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCIZOR_4] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_HERACROSS_4] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_REVERSAL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_4] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HOUNDOOM_4] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SOLAR_BEAM, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DONPHAN_4] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_STEEL_FIST},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAYDOL_4] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_MANA_BURST, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WAILORD_4] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_FISSURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_NINETALES_4] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_MACHAMP_4] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SHUCKLE_4] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_WRAP, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_4] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEEL_FIST, MOVE_DOUBLE_EDGE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_4] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_POISON_BOMB, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_AERODACTYL_4] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_BITE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PORYGON2_4] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARDEVOIR_4] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_4] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_MANA_BURST, MOVE_GIGA_DRAIN, MOVE_POISON_BOMB, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_STARMIE_4] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_4] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_HEART_BREAK, MOVE_DOUBLE_EDGE, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CALICE_4] = {
        .species = SPECIES_CALICE,
        .moves = {MOVE_SOLAR_BEAM, MOVE_POISON_BOMB, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VAPOREON_4] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DISPERSE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JOLTEON_4] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BITE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLAREON_4] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SUNNY_DAY, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MEGANIUM_4] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_ESPEON_4] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_MANA_BURST, MOVE_BITE, MOVE_ATTRACT, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_UMBREON_4] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLILYBLACK_4] = {
        .species = SPECIES_CLILYBLACK,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FERALIGATR_4] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AGGRON_4] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_4] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_WALREIN_4] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_SHEER_COLD},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SCEPTILE_4] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_HEART_BREAK, MOVE_CRUNCH, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REISEN_4] = {
        .species = SPECIES_REISEN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TYPHLOSION_4] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FLARE_BLITZ, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LAPRAS_4] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_MANA_BURST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CROBAT_4] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_POISON_BOMB, MOVE_BLADE_FLASH, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWAMPERT_4] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GYARADOS_4] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_TAILWIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_4] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_4] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ICE_BEAM, MOVE_TAILWIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BLISSEY_4] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_COUNTER, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_4] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_4] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SALAMENCE_4] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAGROSS_4] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_MANA_BURST, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SLAKING_4] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_GALE, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_BLADE_FLASH, MOVE_MUD_SLAP, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_RAIKOU_1] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_1] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_1] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_AMNESIA, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_METAL_CLAW, MOVE_CURSE, MOVE_AMNESIA, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_HEART_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_HEART_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_BLIZZARD, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_GALE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLARE_BLITZ, MOVE_BLADE_FLASH, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_RAIKOU_2] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_2] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_2] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_TOXIC, MOVE_SHADOW_DIVE, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_FACADE, MOVE_BLADE_FLASH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ZAPDOS_3] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_GALE, MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_3] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAIKOU_3] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_3] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_EDGE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SUICUNE_3] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIROCK_3] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_3] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_REGISTEEL_3] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_AMNESIA, MOVE_COUNTER, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_3] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_HEART_BREAK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_HEART_BREAK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ZAPDOS_4] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_GALE, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_4] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_SAFEGUARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_RAIKOU_4] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_4] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_BITE, MOVE_DOUBLE_TEAM, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_4] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BITE, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIROCK_4] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_REGICE_4] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_HAIL, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REGISTEEL_4] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LATIAS_4] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_SHADOW_BALL, MOVE_CHARM, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LATIOS_4] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_HEART_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_5] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_MANA_BURST, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_6] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_MANA_BURST, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_7] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_8] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_URSARING_5] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_BLADE_FLASH, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BOW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_6] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_HYPER_BEAM, MOVE_YAWN, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_7] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BULK_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_URSARING_8] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MACHAMP_5] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_6] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_7] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_8] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_REVENGE, MOVE_ROCK_SLIDE, MOVE_FACADE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARDEVOIR_5] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MANA_BURST, MOVE_SHADOW_BALL, MOVE_ENDURE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GARDEVOIR_6] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARDEVOIR_7] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MANA_BURST, MOVE_CALM_MIND, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARDEVOIR_8] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MANA_BURST, MOVE_MAGICAL_LEAF, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_5] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_MANA_BURST, MOVE_RECOVER, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_6] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_STARMIE_7] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_MANA_BURST, MOVE_ICE_BEAM, MOVE_DRACO_METEOR, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_8] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_5] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_MANA_BURST, MOVE_THUNDERBOLT, MOVE_STEEL_FIST, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LAPRAS_6] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_7] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SHEER_COLD, MOVE_SCULPTURE, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LAPRAS_8] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SHEER_COLD, MOVE_SCULPTURE, MOVE_SING, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SNORLAX_5] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_GIGA_IMPACT, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_6] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_7] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_HYPER_BEAM, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_8] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_RETURN, MOVE_SHADOW_BALL, MOVE_BELLY_DRUM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_5] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_6] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_HEADBUTT, MOVE_BLADE_FLASH, MOVE_CRUNCH, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SALAMENCE_7] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FLAMETHROWER, MOVE_HEART_BREAK, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SALAMENCE_8] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FLAMETHROWER, MOVE_HEART_BREAK, MOVE_CRUNCH, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_METAGROSS_5] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_6] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_MANA_BURST, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_METAGROSS_7] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_METAGROSS_8] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIROCK_5] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_HYPER_BEAM, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIROCK_6] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_5] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_REGICE_6] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGISTEEL_5] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGISTEEL_6] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_SUPERPOWER, MOVE_BLADE_FLASH, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_5] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_HEART_BREAK, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIAS_6] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_HEART_BREAK, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIAS_7] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_8] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MANA_BURST, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LATIOS_5] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_HEART_BREAK, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_6] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_SHADOW_BALL, MOVE_HEART_BREAK, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LATIOS_7] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_TAILWIND, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIOS_8] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_MANA_BURST, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_BRICK_BREAK, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_BLADE_FLASH, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_HYPER_BEAM, MOVE_ATTRACT, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_4] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_HYPER_BEAM, MOVE_THUNDER_WAVE, MOVE_TAILWIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_5] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRAGONITE_6] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_HEART_BREAK, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_7] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_HEART_BREAK, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_8] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_HEART_BREAK, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_9] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRAGONITE_10] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_THUNDERBOLT, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TYRANITAR_3] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_4] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_CRUNCH, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYRANITAR_5] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_TAILWIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_6] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_7] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BLADE_FLASH, MOVE_BRICK_BREAK, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_8] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE, MOVE_TAILWIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_9] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_BLADE_FLASH, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TYRANITAR_10] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARTICUNO_5] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_AGILITY, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_RIBBON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ARTICUNO_6] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_BLADE_FLASH, MOVE_REFLECT, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ZAPDOS_5] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_GALE, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ZAPDOS_6] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_GALE, MOVE_RAIN_DANCE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_5] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SUNNY_DAY, MOVE_SWAGGER, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_6] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_BLADE_FLASH, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_RAIKOU_5] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_DOUBLE_EDGE, MOVE_ROAR, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAIKOU_6] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_SUBSTITUTE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_5] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FIRE_BLAST, MOVE_DOUBLE_EDGE, MOVE_ENDURE, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ENTEI_6] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_CALM_MIND, MOVE_ROAR, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_5] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_6] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    }
};
