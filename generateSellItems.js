// [ITEM_TM_FOCUS_PUNCH] =
//     {
//         .name = _("TM01"),
//         .price = 10000,
//         .description = COMPOUND_STRING(
//             "Powerful, but makes\n"
//             "the user flinch if\n"
//             "hit by the foe."),
//         .importance = I_REUSABLE_TMS,
//         .pocket = POCKET_TM_HM,
//         .type = "ITEM_USE_PARTY_MENU,
//         .fieldUseFunc = ItemUseOutOfBattle_TMHM,
//         .secondaryId = MOVE_FOCUS_PUNCH,
//     },

const fs = require("fs");
const DEFAULT_TM_PRICE = 10000;
const DEFAULT_ITEM_PRICE = 30000;

let generatedTms = ``;

const TMS = [
	"ITEM_TM01",
	"ITEM_TM02",
	"ITEM_TM03",
	"ITEM_TM04",
	"ITEM_TM05",
	"ITEM_TM06",
	"ITEM_TM07",
	"ITEM_TM08",
	"ITEM_TM09",
	"ITEM_TM10",
	"ITEM_TM11",
	"ITEM_TM12",
	"ITEM_TM13",
	"ITEM_TM14",
	"ITEM_TM15",
	"ITEM_TM16",
	"ITEM_TM17",
	"ITEM_TM18",
	"ITEM_TM19",
	"ITEM_TM20",
	"ITEM_TM21",
	"ITEM_TM22",
	"ITEM_TM23",
	"ITEM_TM24",
	"ITEM_TM25",
	"ITEM_TM26",
	"ITEM_TM27",
	"ITEM_TM28",
	"ITEM_TM29",
	"ITEM_TM30",
	"ITEM_TM31",
	"ITEM_TM32",
	"ITEM_TM33",
	"ITEM_TM34",
	"ITEM_TM35",
	"ITEM_TM36",
	"ITEM_TM37",
	"ITEM_TM38",
	"ITEM_TM39",
	"ITEM_TM40",
	"ITEM_TM41",
	"ITEM_TM42",
	"ITEM_TM43",
	"ITEM_TM44",
	"ITEM_TM45",
	"ITEM_TM46",
	"ITEM_TM47",
	"ITEM_TM48",
	"ITEM_TM49",
	"ITEM_TM50",
	"ITEM_TM51",
	"ITEM_TM52",
	"ITEM_TM53",
	"ITEM_TM54",
	"ITEM_TM55",
	"ITEM_TM56",
	"ITEM_TM57",
	"ITEM_TM58",
	"ITEM_TM59",
	"ITEM_TM60",
	"ITEM_TM61",
	"ITEM_TM62",
	"ITEM_TM63",
	"ITEM_TM64",
	"ITEM_TM65",
	"ITEM_TM66",
	"ITEM_TM67",
	"ITEM_TM68",
	"ITEM_TM69",
	"ITEM_TM70",
	"ITEM_TM71",
	"ITEM_TM72",
	"ITEM_TM73",
	"ITEM_TM74",
	"ITEM_TM75",
	"ITEM_TM76",
	"ITEM_TM77",
	"ITEM_TM78",
	"ITEM_TM79",
	"ITEM_TM80",
	"ITEM_TM81",
	"ITEM_TM82",
	"ITEM_TM83",
	"ITEM_TM84",
	"ITEM_TM85",
	"ITEM_TM86",
	"ITEM_TM87",
	"ITEM_TM88",
	"ITEM_TM89",
	"ITEM_TM90",
	"ITEM_TM91",
	"ITEM_TM92",
	"ITEM_TM93",
	"ITEM_TM94",
	"ITEM_TM95",
	"ITEM_TM96",
	"ITEM_TM97",
	"ITEM_TM98",
	"ITEM_TM99",
	"ITEM_TM100",
];

const TM_TO_MOVE = {
	"ITEM_TM01": "MOVE_TAKE_DOWN",
	"ITEM_TM02": "MOVE_CHARM",
	"ITEM_TM03": "MOVE_FAKE_TEARS",
	"ITEM_TM04": "MOVE_AGILITY",
	"ITEM_TM05": "MOVE_MUD_SLAP",
	"ITEM_TM06": "MOVE_SCARY_fACE",
	"ITEM_TM07": "MOVE_PROTECT",
	"ITEM_TM08": "MOVE_FIRE_FANG",
	"ITEM_TM09": "MOVE_THUNDER_FANG",
	"ITEM_TM10": "MOVE_ICE_FANG",
	"ITEM_TM11": "MOVE_WATER_PULSE",
	"ITEM_TM12": "MOVE_LOW_KICK",
	"ITEM_TM13": "MOVE_ACID_SPRAY",
	"ITEM_TM14": "MOVE_ACROBATICS",
	"ITEM_TM15": "MOVE_STRUGGLE_BUG",
	"ITEM_TM16": "MOVE_PSYBEAM",
	"ITEM_TM17": "MOVE_CONFUSE_RAY",
	"ITEM_TM18": "MOVE_THIEF",
	"ITEM_TM19": "MOVE_DISARMING_VOICE",
	"ITEM_TM20": "MOVE_TRAILBLAZE",
	"ITEM_TM21": "MOVE_POUNCE",
	"ITEM_TM22": "MOVE_CHILLING_WATER",
	"ITEM_TM23": "MOVE_CHARGE_BEAM",
	"ITEM_TM24": "MOVE_FIRE_SPIN",
	"ITEM_TM25": "MOVE_FACADE",
	"ITEM_TM26": "MOVE_POISON_TAIL",
	"ITEM_TM27": "MOVE_AERIAL_ACE",
	"ITEM_TM28": "MOVE_BULLDOZE",
	"ITEM_TM29": "MOVE_HEX",
	"ITEM_TM30": "MOVE_SNARL",
	"ITEM_TM31": "MOVE_METAL_CLAW",
	"ITEM_TM32": "MOVE_SWIFT",
	"ITEM_TM33": "MOVE_MAGICAL_LEAF",
	"ITEM_TM34": "MOVE_ICY_WIND",
	"ITEM_TM35": "MOVE_MUD_SHOT",
	"ITEM_TM36": "MOVE_ROCK_TOMB",
	"ITEM_TM37": "MOVE_DRAINING_KISS",
	"ITEM_TM38": "MOVE_FLAME_CHARGE",
	"ITEM_TM39": "MOVE_LOW_SWEEP",
	"ITEM_TM40": "MOVE_AIR_CUTTER",
	"ITEM_TM41": "MOVE_STORED_POWER",
	"ITEM_TM42": "MOVE_NIGHT_SHADE",
	"ITEM_TM43": "MOVE_FLING",
	"ITEM_TM44": "MOVE_DRAGON_TAIL",
	"ITEM_TM45": "MOVE_VENOSHOCK",
	"ITEM_TM46": "MOVE_AVALANCHE",
	"ITEM_TM47": "MOVE_ENDURE",
	"ITEM_TM48": "MOVE_VOLT_SWITCH",
	"ITEM_TM49": "MOVE_SUNNY_DAY",
	"ITEM_TM50": "MOVE_RAIN_DANCE",
	"ITEM_TM51": "MOVE_SANDSTORM",
	"ITEM_TM52": "MOVE_SNOWSCAPE",
	"ITEM_TM53": "MOVE_SMART_STRIKE",
	"ITEM_TM54": "MOVE_PSYSHOCK",
	"ITEM_TM55": "MOVE_DIG",
	"ITEM_TM56": "MOVE_BULLET_SEED",
	"ITEM_TM57": "MOVE_FALSE_SWIPE",
	"ITEM_TM58": "MOVE_BRICK_BREAK",
	"ITEM_TM59": "MOVE_ZEN_HEADBUTT",
	"ITEM_TM60": "MOVE_U_TURN",
	"ITEM_TM61": "MOVE_SHADOW_CLAW",
	"ITEM_TM62": "MOVE_FOUL_PLAY",
	"ITEM_TM63": "MOVE_PSYCHIC_FANGS",
	"ITEM_TM64": "MOVE_BULK_UP",
	"ITEM_TM65": "MOVE_AIR_SLASH",
	"ITEM_TM66": "MOVE_BODY_SLAM",
	"ITEM_TM67": "MOVE_FIRE_PUCH",
	"ITEM_TM68": "MOVE_THUNDER_PUCH",
	"ITEM_TM69": "MOVE_ICE_PUNCH",
	"ITEM_TM70": "MOVE_SLEEP_TALK",
	"ITEM_TM71": "MOVE_SEED_BOMB",
	"ITEM_TM72": "MOVE_ELECTRO_BALL",
	"ITEM_TM73": "MOVE_DRAIN_PUNCH",
	"ITEM_TM74": "MOVE_REFLECT",
	"ITEM_TM75": "MOVE_LIGHT_SCREEN",
	"ITEM_TM76": "MOVE_ROCK_BLAST",
	"ITEM_TM77": "MOVE_POWER_GEM",
	"ITEM_TM78": "MOVE_DRAGON_CLAW",
	"ITEM_TM79": "MOVE_DAZZLING_GLEAM",
	"ITEM_TM80": "MOVE_METRONOME",
	"ITEM_TM81": "MOVE_GRASS_KNOT",
	"ITEM_TM82": "MOVE_THUNDER_WAVE",
	"ITEM_TM83": "MOVE_POISON_JAB",
	"ITEM_TM84": "MOVE_STOMPING_TANTRUM",
	"ITEM_TM85": "MOVE_REST",
	"ITEM_TM86": "MOVE_ROCK_SLIDE",
	"ITEM_TM87": "MOVE_TAUNT",
	"ITEM_TM88": "MOVE_SWORDS_DANCE",
	"ITEM_TM89": "MOVE_BODY_PRESS",
	"ITEM_TM90": "MOVE_SPIKES",
	"ITEM_TM91": "MOVE_TOXIC_SPIKES",
	"ITEM_TM92": "MOVE_IMPRISON",
	"ITEM_TM93": "MOVE_FLASH_CANNON",
	"ITEM_TM94": "MOVE_DARK_PULSE",
	"ITEM_TM95": "MOVE_LEECH_LIFE",
	"ITEM_TM96": "MOVE_EERIE_IMPULSE",
	"ITEM_TM97": "MOVE_GUNK_SHOT",
	"ITEM_TM98": "MOVE_SKILL_SWAP",
	"ITEM_TM99": "MOVE_IRON_HEAD",
	"ITEM_TM100": "MOVE_DRAGON_DANCE",
}

for (const TM of TMS) {
	const TM_NAME = TM.replace("ITEM_", "");
	const MOVE = TM_TO_MOVE[TM];
	const MOVE_NAME = MOVE.replace("MOVE_", "").split("_").map(word => (word.charAt(0).toUpperCase() + word.slice(1))).join(" ");
	generatedTms += `	[${TM}] = 
		{
			.name = _("${TM_NAME}"),
			.price = ${DEFAULT_TM_PRICE},
			.description = COMPOUND_STRING("${MOVE_NAME}"),
			.importance = I_REUSABLE_TMS,
			.pocket = POCKET_TM_HM,
			.fielddUseFunc = ItemUseOutOfBattle_TMHM,
			.secondaryId = ${MOVE},
		},
	`
}

fs.writeFileSync("generatedTms.c", generatedTms);

const ITEMS = [
	"ITEM_SILK_SCARF",
	"ITEM_CHARCOAL",
	"ITEM_MYSTIC_WATER",
	"ITEM_MAGNET",
	"ITEM_MIRACLE_SEED",
	"ITEM_NEVER_MELT_ICE",
	"ITEM_BLACK_BELT",
	"ITEM_POISON_BARB",
	"ITEM_SOFT_SAND",
	"ITEM_SHARP_BEAK",
	"ITEM_TWISTED_SPOON",
	"ITEM_SILVER_POWDER",
	"ITEM_HARD_STONE",
	"ITEM_SPELL_TAG",
	"ITEM_DRAGON_FANG",
	"ITEM_BLACK_GLASSES",
	"ITEM_METAL_COAT",
	"ITEM_CHOICE_BAND",
	"ITEM_CHOICE_SPECS",
	"ITEM_CHOICE_SCARF",
	"ITEM_FLAME_ORB",
	"ITEM_TOXIC_ORB",
	"ITEM_DAMP_ROCK",
	"ITEM_HEAT_ROCK",
	"ITEM_SMOOTH_ROCK",
	"ITEM_ICY_ROCK",
	"ITEM_ELECTRIC_SEED",
	"ITEM_PSYCHIC_SEED",
	"ITEM_MISTY_SEED",
	"ITEM_GRASSY_SEED",
	"ITEM_ABSORB_BULB",
	"ITEM_CELL_BATTERY",
	"ITEM_LUMINOUS_MOSS",
	"ITEM_SNOWBALL",
	"ITEM_WHITE_HERB",
	"ITEM_SOOTHE_BELL",
	"ITEM_MENTAL_HERB",
	"ITEM_KINGS_ROCK",
	"ITEM_AMULET_COIN",
	"ITEM_CLEANSE_TAG",
	"ITEM_SMOKE_BALL",
	"ITEM_FOCUS_BAND",
	"ITEM_LUCKY_EGG",
	"ITEM_SCOPE_LENS",
	"ITEM_LEFTOVERS",
	"ITEM_SHELL_BELL",
	"ITEM_WIDE_LENS",
	"ITEM_MUSCLE_BAND",
	"ITEM_WISE_GLASSES",
	"ITEM_EXPERT_BELT",
	"ITEM_LIGHT_CLAY",
	"ITEM_LIFE_ORB",
	"ITEM_POWER_HERB",
	"ITEM_FOCUS_SASH",
	"ITEM_ZOOM_LENS",
	"ITEM_METRONOME",
	"ITEM_IRON_BALL",
	"ITEM_LAGGING_TAIL",
	"ITEM_DESTINY_KNOT",
	"ITEM_BLACK_SLUDGE",
	"ITEM_GRIP_CLAW",
	"ITEM_STICKY_BARB",
	"ITEM_SHED_SHELL",
	"ITEM_BIG_ROOT",
	"ITEM_RAZOR_CLAW",
	"ITEM_RAZOR_FANG",
	"ITEM_EVIOLITE",
	"ITEM_FLOAT_STONE",
	"ITEM_ROCKY_HELMET",
	"ITEM_AIR_BALLOON",
	"ITEM_RED_CARD",
	"ITEM_RING_TARGET",
	"ITEM_BINDING_BAND",
	"ITEM_EJECT_BUTTON",
	"ITEM_WEAKNESS_POLICY",
	"ITEM_ASSAULT_VEST",
	"ITEM_SAFETY_GOGGLES",
	"ITEM_ADRENALINE_ORB",
	"ITEM_TERRAIN_EXTENDER",
	"ITEM_PROTECTIVE_PADS",
	"ITEM_THROAT_SPRAY",
	"ITEM_EJECT_PACK",
	"ITEM_HEAVY_DUTY_BOOTS",
	"ITEM_FLAME_PLATE",
	"ITEM_SPLASH_PLATE",
	"ITEM_ZAP_PLATE",
	"ITEM_MEADOW_PLATE",
	"ITEM_ICICLE_PLATE",
	"ITEM_FIST_PLATE",
	"ITEM_TOXIC_PLATE",
	"ITEM_EARTH_PLATE",
	"ITEM_SKY_PLATE",
	"ITEM_MIND_PLATE",
	"ITEM_INSECT_PLATE",
	"ITEM_STONE_PLATE",
	"ITEM_SPOOKY_PLATE",
	"ITEM_DRACO_PLATE",
	"ITEM_DREAD_PLATE",
	"ITEM_IRON_PLATE",
	"ITEM_PIXIE_PLATE",
];

