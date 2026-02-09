#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoCeastil[] =
{
#endif

#if P_FAMILY_RINGAPPLE
[SPECIES_RINGAPPLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ringapple"),
        .cryId = CRY_RINGAPPLE,
        .natDexNum = NATIONAL_DEX_RINGAPPLE,
        .categoryName = _("Apple"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Ringapples are very smart in schools,\n"
            "but they take on a Math test to determine\n"
            "what's the logic all about. They also love\n"
            "exams, and periodical tests"),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ringapple
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sprigatito,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Ringapple,
        .shinyPalette = gMonShinyPalette_Ringapple,
        .iconSprite = gMonIcon_Ringapple,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Ringapple)
        .levelUpLearnset = sRingappleLevelUpLearnset,
        .teachableLearnset = sRingappleTeachableLearnset,
        .eggMoveLearnset = sRingappleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_BRILLAPPLE}),
    },

[SPECIES_BRILLAPPLE] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 141,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Brilliapple"),
        .cryId = CRY_BRILLAPPLE
        .natDexNum = NATIONAL_DEX_BRILLAPPLE,
        .categoryName = _("Logical"),
        .height = 8,
        .weight = 18,
        .description = COMPOUND_STRING(
            "They solve scientific-related live gravity\n"
            "space, and mathematics. One Brilliapple said\n"
            "in one word: \qoSolved it!\qc during most\n"
            "math exams."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Brilliapple
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Brilliapple,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Brilliapple,
        .shinyPalette = gMonShinyPalette_Brilliapple,
        .iconSprite = gMonIcon_Brilliapple,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 5, SHADOW_SIZE_S)
          FOOTPRINT(Brilliapple)
        .levelUpLearnset = sBrilliappleLevelUpLearnset,
        .teachableLearnset = sBrilliappleTeachableLearnset,
        .eggMoveLearnset = sBrilliappleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_RINGOTISTA}),
    },

[SPECIES_RINGOTISTA] =
    {
        .baseHP        = 85,
        .baseAttack    = 50,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 150,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 208,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ringotista"),
        .cryId = CRY_RINGOTISTA
        .natDexNum = NATIONAL_DEX_RINGOTISTA,
        .categoryName = _("Genius"),
        .height = 14,
        .weight = 42,
        .description = COMPOUND_STRING(
            "Ringotista can think fast using it's brain\n"
            "which has tons of IQ. With the help of apples,\n"
            "it uses it's gravity method. However, it\n"
            "determines mathematical consequences."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ringotista
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Ringotista,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Ringotista,
        .shinyPalette = gMonShinyPalette_Ringotista,
        .iconSprite = gMonIcon_Ringotista,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 5, SHADOW_SIZE_S)
          FOOTPRINT(Ringotista)
        .levelUpLearnset = sRingotistaLevelUpLearnset,
        .teachableLearnset = sRingotistaTeachableLearnset,
    },
#endif //P_FAMILY_RINGAPPLE

#ifdef __INTELLISENSE__
};
#endif
