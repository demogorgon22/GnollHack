/* GnollHack 4.0	objects.c	$NHDT-Date: 1535422421 2018/08/28 02:13:41 $  $NHDT-Branch: GnollHack-3.6.2-beta01 $:$NHDT-Revision: 1.51 $ */
/* Copyright (c) Janne Gustafsson 2019.                           */
/* GnollHack may be freely redistributed.  See license for details. */

#include "hack.h"

struct materialcomponentlist matlists[] =
{
	{STRANGE_OBJECT,
	"",
	1,
	{NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_WISH,
	"Blessed diamond",
	1,
	{{DIAMOND, NOT_APPLICABLE, 1, MATCOMP_BLESSED_REQUIRED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_TIME_STOP,
	"Sapphire",
	1,
	{{SAPPHIRE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_ARMAGEDDON,
	"Black pearl, death bone dagger",
	1,
	{{BLACK_PEARL, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED},
	 {BONE_DAGGER, NOT_APPLICABLE, 1, MATCOMP_DEATH_ENCHANTMENT_REQUIRED | MATCOMP_NOT_SPENT | MATCOMP_NOT_CURSED},
	 NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_BLACK_BLADE_OF_DISASTER,
	"Black opal, jet stone",
	1,
	{{BLACK_OPAL, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, {JET, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_DISINTEGRATE,
	"Black opal",
	1,
	{{BLACK_OPAL, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_IDENTIFY,
	"Jade stone",
	2,
	{{JADE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_TOUCH_OF_DEATH,
	"Obsidian stone",
	2,
	{{OBSIDIAN, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_FINGER_OF_DEATH,
	"Obsidian stone",
	1,
	{{OBSIDIAN, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_DEATHSPELL,
	"Obsidian stone, fungal spore",
	1,
	{{OBSIDIAN, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, {FUNGAL_SPORE, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_POLYMORPH,
	"Amethyst",
	3,
	{{AMETHYST, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_FULL_HEALING,
	"Emerald",
	3,
	{{EMERALD, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_DIG,
	"Bat guano",
	5,
	{{CLUMP_OF_BAT_GUANO, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_MAGIC_MAPPING,
	"Raven feather, bat guano",
	1,
	{{FEATHER, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, {CLUMP_OF_BAT_GUANO, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_CURSE,
	"Mandrake root, holy symbol",
	2,
	{{MANDRAKE_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, {HOLY_SYMBOL, NOT_APPLICABLE, 1, MATCOMP_NOT_SPENT}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_BLESS,
	"Potion of water, holy symbol",
	2,
	{{POT_WATER, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, {HOLY_SYMBOL, NOT_APPLICABLE, 1, MATCOMP_NOT_SPENT | MATCOMP_NOT_CURSED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_ENCHANT_WEAPON,
	"Garnet stone",
	2,
	{{GARNET, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_ENCHANT_ARMOR,
	"Jasper stone",
	2,
	{{JASPER, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_PROTECT_WEAPON,
	"Fluorite stone",
	3,
	{{FLUORITE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_PROTECT_ARMOR,
	"Agate stone",
	3,
	{{AGATE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{SPE_NEGATE_UNDEATH,
	"Clove of garlic, holy symbol",
	2,
	{{CLOVE_OF_GARLIC, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, {HOLY_SYMBOL, NOT_APPLICABLE, 1, MATCOMP_NOT_SPENT | MATCOMP_NOT_CURSED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP}},

	{ SPE_BANISH_DEMON,
	"Silver arrow, holy symbol",
	2,
	{{SILVER_ARROW, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, {HOLY_SYMBOL, NOT_APPLICABLE, 1, MATCOMP_NOT_SPENT | MATCOMP_NOT_CURSED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_RESURRECTION,
	"Garlic, ginseng, holy symbol",
	2,
	{{CLOVE_OF_GARLIC, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, {GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, {HOLY_SYMBOL, NOT_APPLICABLE, 1, MATCOMP_NOT_SPENT | MATCOMP_NOT_CURSED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_GLOBE_OF_INVULNERABILITY,
	"Pearl",
	1,
	{{PEARL, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_DIVINE_INTERVENTION,
	"Blessed pearl, spider silk",
	1,
	{{PEARL, NOT_APPLICABLE, 1, MATCOMP_BLESSED_REQUIRED}, {THREAD_OF_SPIDER_SILK, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_CANCELLATION,
	"Jet stone",
	5,
	{{JET, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_CALL_DEMOGORGON,
	"Csd ape corpse, bat guano, mandrake",
	1,
	{{CORPSE, PM_APE, 1, MATCOMP_CURSED_REQUIRED}, {CLUMP_OF_BAT_GUANO, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, {MANDRAKE_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_WATER_BREATHING,
	"Pearl",
	5,
	{{PEARL, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_WATER_WALKING,
	"Raven feather",
	5,
	{{FEATHER, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_SLEEP,
	"Ginseng root",
	5,
	{{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_MASS_SLEEP,
	"Ginseng root, fungal spore",
	3,
	{{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, {FUNGAL_SPORE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_FEAR,
	"Mandrake root",
	5,
	{{MANDRAKE_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_MASS_FEAR,
	"Mandrake root, fungal spore",
	3,
	{{MANDRAKE_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},  {FUNGAL_SPORE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_CHARM_MONSTER,
	"Ginseng, wolfsbane",
	5,
	{{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, {SPRIG_OF_WOLFSBANE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_SPHERE_OF_CHARMING,
	"Ginseng, wolfsbane, fungal spore",
	4,
	{{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, {SPRIG_OF_WOLFSBANE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, {FUNGAL_SPORE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_MASS_CHARM,
	"Ginseng, wolfsbane, bsd fungal spore",
	3,
	{{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, {SPRIG_OF_WOLFSBANE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, {FUNGAL_SPORE, NOT_APPLICABLE, 1, MATCOMP_BLESSED_REQUIRED}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_DOMINATE_MONSTER,
	"Blessed ginseng, wolfsbane",
	1,
	{{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_BLESSED_REQUIRED}, {SPRIG_OF_WOLFSBANE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP} },

	{ SPE_SPHERE_OF_DOMINATION,
	"Bsd ginseng, wolfsbane, fungal spore",
	1,
		{
			{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_BLESSED_REQUIRED},
			{SPRIG_OF_WOLFSBANE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{FUNGAL_SPORE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, 
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_MASS_DOMINATION,
	"Bsd ginseng, wolfsbane, bsd fgl spore",
	1,
		{
			{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_BLESSED_REQUIRED},
			{SPRIG_OF_WOLFSBANE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{FUNGAL_SPORE, NOT_APPLICABLE, 1, MATCOMP_BLESSED_REQUIRED},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},


	{ SPE_CREATE_GOLD_GOLEM,
	"200 gold pieces, spider silk",
	1,
		{
			{GOLD_PIECE, NOT_APPLICABLE, 200, MATCOMP_NO_FLAGS},
			{THREAD_OF_SPIDER_SILK, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, 
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_CREATE_GLASS_GOLEM,
	"One piece of each type of glass",
	1,
		{
			{LAST_GEM + 1, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{LAST_GEM + 2, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{LAST_GEM + 3, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{LAST_GEM + 4, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, 
			{LAST_GEM + 5, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{LAST_GEM + 6, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{LAST_GEM + 7, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{LAST_GEM + 8, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_CREATE_GEMSTONE_GOLEM,
	"Jade, agate, obsidian, fluorite",
	1,
		{
			{JADE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{AGATE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{OBSIDIAN, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{FLUORITE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_CREATE_CLAY_GOLEM,
	"10 clay pebbles, spider silk, ginseng",
	1,
		{
			{CLAY_PEBBLE, NOT_APPLICABLE, 10, MATCOMP_BLESSED_REQUIRED}, 
			{THREAD_OF_SPIDER_SILK, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_CREATE_STONE_GOLEM,
	"10 stone pebbles, spider silk, ginseng",
	1,
		{
			{STONE_PEBBLE, NOT_APPLICABLE, 10, MATCOMP_NO_FLAGS},
			{THREAD_OF_SPIDER_SILK, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_CREATE_IRON_GOLEM,
	"3 nuggets of iron, spider silk, wolfsbane",
	1,
		{
			{NUGGET_OF_IRON_ORE, NOT_APPLICABLE, 3, MATCOMP_NO_FLAGS}, 
			{THREAD_OF_SPIDER_SILK, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, 
			{SPRIG_OF_WOLFSBANE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		} 
	},

	{ SPE_CREATE_SILVER_GOLEM,
	"3 nuggets of silver, spider silk, ginseng",
	1,
		{
			{NUGGET_OF_SILVER_ORE, NOT_APPLICABLE, 3, MATCOMP_NO_FLAGS},
			{THREAD_OF_SPIDER_SILK, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_CREATE_PAPER_GOLEM,
	"Blank scroll, spider silk, ginseng",
	1,
		{
			{SCR_BLANK_PAPER, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, 
			{THREAD_OF_SPIDER_SILK, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, 
			{GINSENG_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_CREATE_WOOD_GOLEM,
	"Quarterstaff, spider silk",
	1,
		{
			{QUARTERSTAFF, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, 
			{THREAD_OF_SPIDER_SILK, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS}, 
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		} 
	},

	{ SPE_CREATE_MONSTER,
	"Bat guano",
	1,
		{
			{CLUMP_OF_BAT_GUANO, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP,
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_GUARDIAN_ANGEL,
	"Opal",
	3,
		{
			{OPAL, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED},
			NO_MATCOMP,
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_CALL_HIERARCH_MODRON,
	"Modronite icosahedron",
	5,
		{
			{MODRONITE_ICOSAHEDRON, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED},
			NO_MATCOMP,
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_DIVINE_MOUNT,
	"Opal, apple",
	3,
		{
			{OPAL, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED},
			{APPLE, NOT_APPLICABLE, 1, MATCOMP_NOT_CURSED},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_HEAVENLY_ARMY,
	"Blessed opal",
	1,
		{
			{OPAL, NOT_APPLICABLE, 1, MATCOMP_BLESSED_REQUIRED},
			NO_MATCOMP,
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_TOUCH_OF_PETRIFICATION,
	"Rock, bat guano",
	3,
		{
			{ROCK, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{CLUMP_OF_BAT_GUANO, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_FLESH_TO_STONE,
	"Rock, bat guano",
	2,
		{
			{ROCK, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{CLUMP_OF_BAT_GUANO, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_COLD_ENCHANT_ITEM,
	"Nugget of iron ore",
	5,
		{
			{NUGGET_OF_IRON_ORE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP,
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_FIRE_ENCHANT_ITEM,
	"Tallow candle",
	5,
		{
			{TALLOW_CANDLE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP,
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_LIGHTNING_ENCHANT_ITEM,
	"Nugget of copper ore",
	5,
		{
			{NUGGET_OF_COPPER_ORE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP,
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_DEATH_ENCHANT_ITEM,
	"Obsidian stone",
	2,
		{
			{OBSIDIAN, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP,
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_TELEPATHY,
	"Fungal spore",
	3,
		{
			{FUNGAL_SPORE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP,
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_DETECT_TRAPS,
	"Bat guano",
	3,
		{
			{CLUMP_OF_BAT_GUANO, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP,
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_MIRROR_IMAGE,
	"White glass, mirror",
	3,
		{
			{LAST_GEM + 1, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{MIRROR, NOT_APPLICABLE, 1, MATCOMP_NOT_SPENT},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_MASS_CONFLICT,
	"Wolfsbane, mandrake, fungal spore",
	2,
		{
			{SPRIG_OF_WOLFSBANE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{MANDRAKE_ROOT, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{FUNGAL_SPORE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_STINKING_CLOUD,
	"Bat guano, egg",
	5,
		{
			{CLUMP_OF_BAT_GUANO, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{EGG, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_CALL_GHOUL,
	"Bat guano, corpse",
	1,
		{
			{CLUMP_OF_BAT_GUANO, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{CORPSE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

	{ SPE_GREAT_YENDORIAN_SUMMONING,
	"Jacinth stone, fungal spore",
	1,
		{
			{JACINTH, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			{FUNGAL_SPORE, NOT_APPLICABLE, 1, MATCOMP_NO_FLAGS},
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},



	//Array terminator, uses spellsgained
	{STRANGE_OBJECT,
	"",
	0,
		{
			NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP, NO_MATCOMP
		}
	},

};


void matcomps_init();

/* dummy routine used to force linkage */
void
matcomps_init()
{
    return;
}

/*matcomps.c*/
