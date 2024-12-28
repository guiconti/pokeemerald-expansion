#define SMOGON_VARIANT(heldItem, ability, nature, ev, moves) { .heldItem = heldItem, .ability = ability, .nature = nature, .ev = ev, .moves = moves }

// struct SmogonVariant {
//     u16 heldItem;
//     u16 ability;
//     u8 nature;
//     const u8 *ev;
//     u16 moves[4];
// };

static const struct SmogonVariant sBulbasaurSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_RAZOR_LEAF,
			MOVE_BODY_SLAM,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_RAZOR_LEAF,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_SWORDS_DANCE,
			MOVE_RAZOR_LEAF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_RAZOR_LEAF,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
			MOVE_BODY_SLAM,
			MOVE_RAZOR_LEAF,
		}
	},
};

static const struct SmogonVariant sCaterpieSmogonVariants[] = {
	{
		.heldItem = ITEM_EVIOLITE,
		.ability = ABILITY_NEUTRALIZING_GAS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
		.moves = {
			MOVE_STRING_SHOT,
			MOVE_TACKLE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVoltorbSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_TAKE_DOWN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_TAKE_DOWN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SONIC_BOOM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SWIFT,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_FLASH,
			MOVE_EXPLOSION,
		}
	},
};

static const struct SmogonVariant sVoltorbHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_TAKE_DOWN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_TAKE_DOWN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SONIC_BOOM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SWIFT,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_FLASH,
			MOVE_EXPLOSION,
		}
	},
};

static const struct SmogonVariant sGholdengoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GOOD_AS_GOLD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWoChienSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TABLETS_OF_RUIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sChienPaoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWORD_OF_RUIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTingLuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VESSEL_OF_RUIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sChiYuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEADS_OF_RUIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRoaringMoonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PROTOSYNTHESIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIronValiantSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUARK_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKoraidonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ORICHALCUM_PULSE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMiraidonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HADRON_ENGINE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWalkingWakeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PROTOSYNTHESIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sElectrodeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_EXPLOSION,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_EXPLOSION,
			MOVE_TAKE_DOWN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_EXPLOSION,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SCREECH,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_FLASH,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SCREECH,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_DOUBLE_TEAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER,
			MOVE_THUNDER_WAVE,
			MOVE_SCREECH,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER,
			MOVE_THUNDER_WAVE,
			MOVE_DOUBLE_TEAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_SCREECH,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_SCREECH,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_SCREECH,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_SCREECH,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SONIC_BOOM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER,
			MOVE_THUNDER_WAVE,
			MOVE_SONIC_BOOM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_THUNDER,
			MOVE_THUNDER_WAVE,
			MOVE_SWIFT,
			MOVE_SELF_DESTRUCT,
		}
	},
};

static const struct SmogonVariant sElectrodeHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIronLeavesSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUARK_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDipplinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SUPERSWEET_SYRUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPoltchageistSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HOSPITALITY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPoltchageistArtisanSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HOSPITALITY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSinistchaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HOSPITALITY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSinistchaMasterpieceSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HOSPITALITY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOkidogiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOXIC_CHAIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMunkidoriSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOXIC_CHAIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFezandipitiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOXIC_CHAIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOgerponSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DEFIANT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOgerponCornerstoneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOgerponHearthflameSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MOLD_BREAKER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOgerponWellspringSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArchaludonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STAMINA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHydrappleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SUPERSWEET_SYRUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sExeggcuteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_DOUBLE_EDGE,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_DOUBLE_EDGE,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_DOUBLE_EDGE,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_DOUBLE_EDGE,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_DOUBLE_EDGE,
			MOVE_EXPLOSION,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
		}
	},
};

static const struct SmogonVariant sGougingFireSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PROTOSYNTHESIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRagingBoltSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PROTOSYNTHESIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIronBoulderSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUARK_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIronCrownSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUARK_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTerapagosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TERA_SHIFT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPecharuntSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_PUPPETEER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sExeggutorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_STUN_SPORE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_EDGE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_STUN_SPORE,
			MOVE_SLEEP_POWDER,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_STUN_SPORE,
			MOVE_SLEEP_POWDER,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_STUN_SPORE,
			MOVE_DOUBLE_TEAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_STUN_SPORE,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_STUN_SPORE,
			MOVE_LEECH_SEED,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_STUN_SPORE,
			MOVE_LEECH_SEED,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TOXIC,
			MOVE_SLEEP_POWDER,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TOXIC,
			MOVE_SLEEP_POWDER,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TOXIC,
			MOVE_DOUBLE_TEAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TOXIC,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TOXIC,
			MOVE_LEECH_SEED,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TOXIC,
			MOVE_LEECH_SEED,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TOXIC,
			MOVE_LEECH_SEED,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_STUN_SPORE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_STUN_SPORE,
			MOVE_DOUBLE_EDGE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_STUN_SPORE,
			MOVE_EXPLOSION,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
			MOVE_DOUBLE_EDGE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
			MOVE_DOUBLE_EDGE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
			MOVE_STRENGTH,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
			MOVE_STRENGTH,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(105, 104, 104, 104, 104, 0),
		.moves = {
			MOVE_MEGA_DRAIN,
			MOVE_STUN_SPORE,
			MOVE_LEECH_SEED,
			MOVE_EGG_BOMB,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_LEECH_SEED,
			MOVE_SELF_DESTRUCT,
			MOVE_PSYCHIC,
			MOVE_TOXIC,
		}
	},
};

static const struct SmogonVariant sExeggutorAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FRISK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCuboneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SUBMISSION,
			MOVE_BLIZZARD,
			MOVE_STRENGTH,
		}
	},
};

static const struct SmogonVariant sMarowakSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_BONEMERANG,
			MOVE_THRASH,
			MOVE_FIRE_BLAST,
			MOVE_FOCUS_ENERGY,
		}
	},
};

static const struct SmogonVariant sMarowakAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMarowakAlolaTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_BONEMERANG,
			MOVE_THRASH,
			MOVE_FIRE_BLAST,
			MOVE_FOCUS_ENERGY,
		}
	},
};

static const struct SmogonVariant sHitmonleeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HIGH_JUMP_KICK,
			MOVE_BODY_SLAM,
			MOVE_MEGA_KICK,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HIGH_JUMP_KICK,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HIGH_JUMP_KICK,
			MOVE_MEDITATE,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HIGH_JUMP_KICK,
			MOVE_JUMP_KICK,
			MOVE_ROLLING_KICK,
			MOVE_MEDITATE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HIGH_JUMP_KICK,
			MOVE_JUMP_KICK,
			MOVE_ROLLING_KICK,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_HIGH_JUMP_KICK,
			MOVE_MEGA_KICK,
			MOVE_METRONOME,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sHitmonchanSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_ICE_PUNCH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_THUNDER_PUNCH,
			MOVE_ICE_PUNCH,
			MOVE_STRENGTH,
		}
	},
};

static const struct SmogonVariant sLickitungSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_WRAP,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_WRAP,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_WRAP,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_WRAP,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_STRENGTH,
			MOVE_BLIZZARD,
			MOVE_THUNDER,
			MOVE_FIRE_BLAST,
		}
	},
};

static const struct SmogonVariant sKoffingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLUDGE,
			MOVE_FIRE_BLAST,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLUDGE,
			MOVE_FIRE_BLAST,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_SLUDGE,
			MOVE_TOXIC,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
		}
	},
};

static const struct SmogonVariant sMetapodSmogonVariants[] = {
	{
		.heldItem = ITEM_EVIOLITE,
		.ability = ABILITY_NEUTRALIZING_GAS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
		.moves = {
			MOVE_STRING_SHOT,
			MOVE_TACKLE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWeezingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EXPLOSION,
			MOVE_FIRE_BLAST,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_SLUDGE,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_BLAST,
			MOVE_SELF_DESTRUCT,
		}
	},
};

static const struct SmogonVariant sWeezingGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRhyhornSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_FIRE_BLAST,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_FIRE_BLAST,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 44, 48, 44, 48, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_THUNDER,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_REST,
			MOVE_SUBSTITUTE,
		}
	},
};

static const struct SmogonVariant sRhydonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
			MOVE_LEER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_FIRE_BLAST,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_REST,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBSTITUTE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBSTITUTE,
			MOVE_EARTHQUAKE,
			MOVE_REST,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_HORN_DRILL,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_DIG,
			MOVE_STRENGTH,
			MOVE_THUNDER,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_HORN_DRILL,
			MOVE_DIG,
			MOVE_BUBBLE_BEAM,
			MOVE_EARTHQUAKE,
		}
	},
};

static const struct SmogonVariant sChanseySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_SOFT_BOILED,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_ICE_BEAM,
			MOVE_SOFT_BOILED,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_ICE_BEAM,
			MOVE_SOFT_BOILED,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_SEISMIC_TOSS,
			MOVE_SOFT_BOILED,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_SEISMIC_TOSS,
			MOVE_SOFT_BOILED,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_SEISMIC_TOSS,
			MOVE_SOFT_BOILED,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_ICE_BEAM,
			MOVE_SOFT_BOILED,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LIGHT_SCREEN,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LIGHT_SCREEN,
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SEISMIC_TOSS,
			MOVE_REFLECT,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_REFLECT,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_REFLECT,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_ICE_BEAM,
			MOVE_COUNTER,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_MINIMIZE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_MINIMIZE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_REFLECT,
			MOVE_MINIMIZE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_REFLECT,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_REFLECT,
			MOVE_MINIMIZE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_REFLECT,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_SOFT_BOILED,
			MOVE_THUNDER_WAVE,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_SING,
			MOVE_SEISMIC_TOSS,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_SOFT_BOILED,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_SOFT_BOILED,
			MOVE_SING,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_COUNTER,
			MOVE_SOFT_BOILED,
			MOVE_ICE_BEAM,
			MOVE_SING,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_COUNTER,
			MOVE_SOFT_BOILED,
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_COUNTER,
			MOVE_SOFT_BOILED,
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_COUNTER,
			MOVE_SOFT_BOILED,
			MOVE_SEISMIC_TOSS,
			MOVE_SING,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_COUNTER,
			MOVE_SOFT_BOILED,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_COUNTER,
			MOVE_SOFT_BOILED,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_SEISMIC_TOSS,
			MOVE_SOFT_BOILED,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_ICE_BEAM,
			MOVE_SOFT_BOILED,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_SOFT_BOILED,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBSTITUTE,
			MOVE_SOFT_BOILED,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBSTITUTE,
			MOVE_SOFT_BOILED,
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_FIRE_BLAST,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_THUNDER,
			MOVE_FIRE_BLAST,
			MOVE_MINIMIZE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(96, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SING,
			MOVE_MINIMIZE,
			MOVE_DOUBLE_EDGE,
			MOVE_REFLECT,
		}
	},
};

static const struct SmogonVariant sTangelaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_BIND,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_BIND,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_BIND,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_GROWTH,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_GROWTH,
			MOVE_MEGA_DRAIN,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_MEGA_DRAIN,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_MEGA_DRAIN,
			MOVE_GROWTH,
			MOVE_TOXIC,
			MOVE_DOUBLE_EDGE,
		}
	},
};

static const struct SmogonVariant sKangaskhanSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_FISSURE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_FISSURE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_MEGA_KICK,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 252),
		.moves = {
			MOVE_DIZZY_PUNCH,
			MOVE_ROCK_SLIDE,
			MOVE_SURF,
			MOVE_THUNDERBOLT,
		}
	},
};

static const struct SmogonVariant sHorseaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_HYDRO_PUMP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_AGILITY,
			MOVE_SMOKESCREEN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_TEAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_MIMIC,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_TOXIC,
			MOVE_SMOKESCREEN,
			MOVE_ICE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
		}
	},
};

static const struct SmogonVariant sSeadraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_HYDRO_PUMP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_SURF,
			MOVE_TOXIC,
			MOVE_SMOKESCREEN,
			MOVE_SWIFT,
		}
	},
};

static const struct SmogonVariant sGoldeenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_SURF,
			MOVE_BUBBLE_BEAM,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_SURF,
			MOVE_SUPERSONIC,
			MOVE_HORN_DRILL,
			MOVE_BLIZZARD,
		}
	},
};

static const struct SmogonVariant sSeakingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_AGILITY,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_AGILITY,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SURF,
			MOVE_AGILITY,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_WATERFALL,
			MOVE_SUPERSONIC,
			MOVE_HORN_ATTACK,
			MOVE_ICE_BEAM,
		}
	},
};

static const struct SmogonVariant sButterfreeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_PSYWAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SUPERSONIC,
			MOVE_MEGA_DRAIN,
			MOVE_STUN_SPORE,
		}
	},
};

static const struct SmogonVariant sStaryuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_RECOVER,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
		}
	},
};

static const struct SmogonVariant sStarmieSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
			MOVE_PSYCHIC,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_MINIMIZE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDER,
			MOVE_MINIMIZE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDER,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_MINIMIZE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER,
			MOVE_MINIMIZE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_RECOVER,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_RECOVER,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 252),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDER,
			MOVE_SWIFT,
			MOVE_HARDEN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_THUNDER,
			MOVE_RECOVER,
			MOVE_PSYWAVE,
		}
	},
};

static const struct SmogonVariant sMrMimeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_BARRIER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_BARRIER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_BARRIER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_BARRIER,
			MOVE_PSYCHIC,
			MOVE_METRONOME,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sMrMimeGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_BARRIER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_BARRIER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_BARRIER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_BARRIER,
			MOVE_PSYCHIC,
			MOVE_METRONOME,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sScytherSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_WING_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_SLASH,
			MOVE_WING_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_WING_ATTACK,
			MOVE_LEER,
			MOVE_DOUBLE_TEAM,
		}
	},
};

static const struct SmogonVariant sJynxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_PSYCHIC,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_ICE_BEAM,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_ICE_BEAM,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_LOVELY_KISS,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_LOVELY_KISS,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 44, 48, 40, 48, 0),
		.moves = {
			MOVE_ICE_PUNCH,
			MOVE_MEGA_PUNCH,
			MOVE_PSYCHIC,
			MOVE_LOVELY_KISS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_ICE_PUNCH,
			MOVE_PSYCHIC,
			MOVE_BUBBLE_BEAM,
		}
	},
};

static const struct SmogonVariant sElectabuzzSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_COUNTER,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_COUNTER,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SEISMIC_TOSS,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SEISMIC_TOSS,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_TEAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_TEAM,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_SUBMISSION,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_SUBMISSION,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_COUNTER,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_COUNTER,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_MEGA_KICK,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_MEGA_KICK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SCREECH,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_ICE_PUNCH,
			MOVE_ROLLING_KICK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 28, 28, 0),
		.moves = {
			MOVE_THUNDER_PUNCH,
			MOVE_MEGA_PUNCH,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
		}
	},
};

static const struct SmogonVariant sMagmarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SMOKESCREEN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_SMOKESCREEN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SMOKESCREEN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_SMOKESCREEN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 28, 28, 0),
		.moves = {
			MOVE_FIRE_PUNCH,
			MOVE_MEGA_PUNCH,
			MOVE_PSYCHIC,
			MOVE_SMOKESCREEN,
		}
	},
};

static const struct SmogonVariant sPinsirSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_SUBMISSION,
			MOVE_SEISMIC_TOSS,
			MOVE_BIND,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_SLASH,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_SLASH,
			MOVE_BIND,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BIND,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_BIND,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_BIND,
			MOVE_BIND,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_SLASH,
			MOVE_BIND,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_SUBMISSION,
			MOVE_BIND,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_SLASH,
			MOVE_BIND,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BIND,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_SUBMISSION,
			MOVE_BIND,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_STRENGTH,
			MOVE_HARDEN,
			MOVE_SEISMIC_TOSS,
			MOVE_GUILLOTINE,
		}
	},
};

static const struct SmogonVariant sTaurosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_TEAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_TEAM,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_TEAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_TEAM,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_FIRE_BLAST,
			MOVE_TAIL_WHIP,
			MOVE_BIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_STOMP,
			MOVE_REST,
			MOVE_FISSURE,
			MOVE_RAGE,
		}
	},
};

static const struct SmogonVariant sTaurosPaldeaAquaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTaurosPaldeaBlazeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTaurosPaldeaCombatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_TEAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_TEAM,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_TEAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_TEAM,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_FIRE_BLAST,
			MOVE_TAIL_WHIP,
			MOVE_BIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_STOMP,
			MOVE_REST,
			MOVE_FISSURE,
			MOVE_RAGE,
		}
	},
};

static const struct SmogonVariant sMagikarpSmogonVariants[] = {
	{
		.heldItem = ITEM_EVIOLITE,
		.ability = ABILITY_NEUTRALIZING_GAS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
		.moves = {
			MOVE_SPLASH,
			MOVE_TACKLE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
	{
		.heldItem = ITEM_EVIOLITE,
		.ability = ABILITY_NEUTRALIZING_GAS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
		.moves = {
			MOVE_SPLASH,
			MOVE_TACKLE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWeedleSmogonVariants[] = {
	{
		.heldItem = ITEM_EVIOLITE,
		.ability = ABILITY_NEUTRALIZING_GAS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
		.moves = {
			MOVE_STRING_SHOT,
			MOVE_POISON_STING,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGyaradosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_HYDRO_PUMP,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_HYDRO_PUMP,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_HYDRO_PUMP,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_HYDRO_PUMP,
			MOVE_THUNDER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_HYDRO_PUMP,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_HYDRO_PUMP,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
			MOVE_THUNDER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_THUNDER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_DRAGON_RAGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_SUBSTITUTE,
			MOVE_DRAGON_RAGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_DRAGON_RAGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_SUBSTITUTE,
			MOVE_DRAGON_RAGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(105, 104, 104, 104, 104, 0),
		.moves = {
			MOVE_SURF,
			MOVE_DRAGON_RAGE,
			MOVE_BITE,
			MOVE_FIRE_BLAST,
		}
	},
};

static const struct SmogonVariant sLaprasSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_CONFUSE_RAY,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_SING,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_SING,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_SURF,
			MOVE_DRAGON_RAGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_DRAGON_RAGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_DRAGON_RAGE,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_DRAGON_RAGE,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_SOLAR_BEAM,
			MOVE_BODY_SLAM,
			MOVE_SING,
		}
	},
};

static const struct SmogonVariant sDittoSmogonVariants[] = {
	{
		.heldItem = ITEM_EVIOLITE,
		.ability = ABILITY_NEUTRALIZING_GAS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
		.moves = {
			MOVE_TRANSFORM,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
	{
		.heldItem = ITEM_EVIOLITE,
		.ability = ABILITY_NEUTRALIZING_GAS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
		.moves = {
			MOVE_TRANSFORM,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
	{
		.heldItem = ITEM_EVIOLITE,
		.ability = ABILITY_NEUTRALIZING_GAS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
		.moves = {
			MOVE_TRANSFORM,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEeveeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_SAND_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_SAND_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SWIFT,
			MOVE_SAND_ATTACK,
			MOVE_TOXIC,
		}
	},
};

static const struct SmogonVariant sEeveeStarterSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVaporeonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_HAZE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_DOUBLE_TEAM,
			MOVE_HAZE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_HAZE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_DOUBLE_TEAM,
			MOVE_HAZE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GROWTH,
			MOVE_SURF,
			MOVE_ACID_ARMOR,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_SAND_ATTACK,
			MOVE_ACID_ARMOR,
		}
	},
};

static const struct SmogonVariant sJolteonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_KICK,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_KICK,
			MOVE_PIN_MISSILE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_PIN_MISSILE,
			MOVE_DOUBLE_KICK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PIN_MISSILE,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PIN_MISSILE,
			MOVE_TOXIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_KICK,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_KICK,
			MOVE_THUNDER_WAVE,
			MOVE_GROWTH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_KICK,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_KICK,
			MOVE_PIN_MISSILE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_KICK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_PIN_MISSILE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PIN_MISSILE,
			MOVE_TOXIC,
			MOVE_SAND_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_TOXIC,
			MOVE_PIN_MISSILE,
			MOVE_DOUBLE_EDGE,
		}
	},
};

static const struct SmogonVariant sFlareonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_QUICK_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_SPIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_TAIL_WHIP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_SPIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_TAKE_DOWN,
			MOVE_SMOG,
			MOVE_SAND_ATTACK,
		}
	},
};

static const struct SmogonVariant sPorygonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_RECOVER,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_RECOVER,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_RECOVER,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
			MOVE_PSYCHIC,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
			MOVE_DOUBLE_EDGE,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
			MOVE_DOUBLE_EDGE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_ICE_BEAM,
			MOVE_TRI_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_ICE_BEAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONVERSION,
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONVERSION,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONVERSION,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_ICE_BEAM,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_ICE_BEAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_ICE_BEAM,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_SUBSTITUTE,
			MOVE_ICE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
			MOVE_SUBSTITUTE,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_TRI_ATTACK,
			MOVE_PSYCHIC,
			MOVE_SHARPEN,
			MOVE_CONVERSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_CONVERSION,
			MOVE_DOUBLE_EDGE,
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
		}
	},
};

static const struct SmogonVariant sOmanyteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_REST,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_DOUBLE_EDGE,
			MOVE_DOUBLE_TEAM,
		}
	},
};

static const struct SmogonVariant sOmastarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SEISMIC_TOSS,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_SEISMIC_TOSS,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_SEISMIC_TOSS,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_SEISMIC_TOSS,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_SUBMISSION,
			MOVE_SPIKE_CANNON,
			MOVE_WITHDRAW,
		}
	},
};

static const struct SmogonVariant sKakunaSmogonVariants[] = {
	{
		.heldItem = ITEM_EVIOLITE,
		.ability = ABILITY_NEUTRALIZING_GAS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
		.moves = {
			MOVE_STRING_SHOT,
			MOVE_POISON_STING,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKabutoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_SLASH,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_SLASH,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SLASH,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SLASH,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_SLASH,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SLASH,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 252),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SLASH,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYDRO_PUMP,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
		}
	},
};

static const struct SmogonVariant sKabutopsSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SLASH,
			MOVE_BLIZZARD,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SLASH,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SLASH,
			MOVE_BLIZZARD,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SLASH,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_SURF,
			MOVE_SUBSTITUTE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_SURF,
			MOVE_SWORDS_DANCE,
			MOVE_MEGA_KICK,
			MOVE_SUBMISSION,
		}
	},
};

static const struct SmogonVariant sAerodactylSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_BLAST,
			MOVE_SKY_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_FIRE_BLAST,
			MOVE_TOXIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_DOUBLE_EDGE,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_BLAST,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_BLAST,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
			MOVE_HEADBUTT,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_FLY,
			MOVE_HYPER_BEAM,
			MOVE_SUPERSONIC,
			MOVE_DRAGON_RAGE,
		}
	},
};

static const struct SmogonVariant sSnorlaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_ICE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SELF_DESTRUCT,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SELF_DESTRUCT,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_SELF_DESTRUCT,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_SELF_DESTRUCT,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_AMNESIA,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_AMNESIA,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_ICE_BEAM,
			MOVE_AMNESIA,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_ICE_BEAM,
			MOVE_AMNESIA,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SELF_DESTRUCT,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SELF_DESTRUCT,
			MOVE_HYPER_BEAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SELF_DESTRUCT,
			MOVE_COUNTER,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SELF_DESTRUCT,
			MOVE_COUNTER,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_ICE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_TEAM,
			MOVE_COUNTER,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_TEAM,
			MOVE_COUNTER,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_TEAM,
			MOVE_COUNTER,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_DOUBLE_TEAM,
			MOVE_COUNTER,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_DOUBLE_TEAM,
			MOVE_COUNTER,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_DOUBLE_TEAM,
			MOVE_COUNTER,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_BLIZZARD,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_SURF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_SURF,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_SURF,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDER,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDER,
			MOVE_BLIZZARD,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDER,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDER,
			MOVE_ICE_BEAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDER,
			MOVE_ICE_BEAM,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDER,
			MOVE_ICE_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDER,
			MOVE_SURF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDER,
			MOVE_SURF,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDER,
			MOVE_SURF,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_AMNESIA,
			MOVE_ICE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_LOVELY_KISS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_ICE_BEAM,
			MOVE_LOVELY_KISS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_ICE_BEAM,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_ICE_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_REST,
			MOVE_LOVELY_KISS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_COUNTER,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_EARTHQUAKE,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_COUNTER,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_BODY_SLAM,
			MOVE_REST,
			MOVE_ICE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_BODY_SLAM,
			MOVE_REST,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_BODY_SLAM,
			MOVE_REST,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_ICE_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_ICE_BEAM,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_ICE_BEAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HEADBUTT,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HEADBUTT,
			MOVE_BLIZZARD,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HEADBUTT,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HEADBUTT,
			MOVE_ICE_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HEADBUTT,
			MOVE_ICE_BEAM,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HEADBUTT,
			MOVE_ICE_BEAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_MEGA_KICK,
			MOVE_ROCK_SLIDE,
			MOVE_METRONOME,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BODY_SLAM,
			MOVE_METRONOME,
			MOVE_SELF_DESTRUCT,
		}
	},
};

static const struct SmogonVariant sArticunoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
			MOVE_REST,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_REST,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_AGILITY,
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_AGILITY,
			MOVE_ICE_BEAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_AGILITY,
			MOVE_REST,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_ICE_BEAM,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_TOXIC,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_FLY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_TOXIC,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_TOXIC,
			MOVE_HYPER_BEAM,
			MOVE_FLY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_ICE_BEAM,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_BLIZZARD,
			MOVE_ICE_BEAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_ICE_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_AGILITY,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 96, 96, 96, 96, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_SKY_ATTACK,
			MOVE_RAZOR_WIND,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_TOXIC,
			MOVE_ICE_BEAM,
			MOVE_PECK,
			MOVE_BUBBLE_BEAM,
		}
	},
};

static const struct SmogonVariant sArticunoGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPETITIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZapdosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_THUNDER_WAVE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_THUNDER_WAVE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_THUNDER_WAVE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_FLY,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_FLY,
			MOVE_THUNDER_WAVE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_FLY,
			MOVE_TOXIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_FLY,
			MOVE_TOXIC,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_FLY,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_FLY,
			MOVE_DOUBLE_TEAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_THUNDER_WAVE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_TOXIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_TOXIC,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_DOUBLE_TEAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_THUNDER,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_THUNDER,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DRILL_PECK,
			MOVE_THUNDER_WAVE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 96, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SKY_ATTACK,
			MOVE_THUNDER_WAVE,
			MOVE_FLASH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(96, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_TOXIC,
			MOVE_THUNDER_SHOCK,
			MOVE_THUNDER_WAVE,
			MOVE_FLY,
		}
	},
};

static const struct SmogonVariant sZapdosGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DEFIANT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMoltresSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_SPIN,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_SPIN,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_TOXIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_FIRE_SPIN,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_REFLECT,
			MOVE_TOXIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_REFLECT,
			MOVE_FIRE_SPIN,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
			MOVE_FIRE_SPIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_SPIN,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_EDGE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_DOUBLE_EDGE,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_TOXIC,
			MOVE_REST,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_TOXIC,
			MOVE_REST,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_DOUBLE_EDGE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 96, 96, 96, 96, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FLY,
			MOVE_SWIFT,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_HYPER_BEAM,
			MOVE_FLY,
		}
	},
};

static const struct SmogonVariant sMoltresGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BERSERK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDratiniSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_HYPER_BEAM,
			MOVE_WRAP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_DRAGON_RAGE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
		}
	},
};

static const struct SmogonVariant sDragonairSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_WRAP,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_WRAP,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_WRAP,
			MOVE_BLIZZARD,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_HYPER_BEAM,
			MOVE_WRAP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_DRAGON_RAGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_DRAGON_RAGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_DRAGON_RAGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 44, 48, 40, 48, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SWIFT,
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
		}
	},
};

static const struct SmogonVariant sDragoniteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_WRAP,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_WRAP,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_WRAP,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_WRAP,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_SURF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_SURF,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_AGILITY,
			MOVE_BLIZZARD,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_WRAP,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_WRAP,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_WRAP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_HORN_DRILL,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_HORN_DRILL,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_WRAP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_HORN_DRILL,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_HORN_DRILL,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_WRAP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_HORN_DRILL,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_HORN_DRILL,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_WRAP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_HORN_DRILL,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_HORN_DRILL,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SURF,
			MOVE_WRAP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SURF,
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SURF,
			MOVE_HORN_DRILL,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SURF,
			MOVE_HORN_DRILL,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_WRAP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_WRAP,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_HORN_DRILL,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_HORN_DRILL,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_HYPER_BEAM,
			MOVE_SURF,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_WRAP,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 96, 96, 96, 96, 0),
		.moves = {
			MOVE_SLAM,
			MOVE_DRAGON_RAGE,
			MOVE_THUNDER,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_HYPER_BEAM,
			MOVE_DRAGON_RAGE,
		}
	},
};

static const struct SmogonVariant sBeedrillSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_SWORDS_DANCE,
			MOVE_TWINEEDLE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_TWINEEDLE,
			MOVE_HYPER_BEAM,
			MOVE_TOXIC,
			MOVE_FOCUS_ENERGY,
		}
	},
};

static const struct SmogonVariant sMewtwoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_THUNDERBOLT,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SUBMISSION,
			MOVE_THUNDERBOLT,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SUBMISSION,
			MOVE_ICE_BEAM,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_RECOVER,
			MOVE_THUNDERBOLT,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 252, 252, 252, 8, 252),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_FLASH,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 252, 252, 252, 8, 252),
		.moves = {
			MOVE_AMNESIA,
			MOVE_THUNDERBOLT,
			MOVE_BARRIER,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 252, 252, 252, 8, 252),
		.moves = {
			MOVE_AMNESIA,
			MOVE_ICE_BEAM,
			MOVE_FLASH,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 252, 252, 252, 8, 252),
		.moves = {
			MOVE_AMNESIA,
			MOVE_ICE_BEAM,
			MOVE_BARRIER,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 252, 252, 252, 8, 252),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_FLASH,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 252, 252, 252, 8, 252),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_BARRIER,
			MOVE_RECOVER,
		}
	},
};

static const struct SmogonVariant sMewSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_REFLECT,
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_SOFT_BOILED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_SWORDS_DANCE,
			MOVE_REFLECT,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_TRANSFORM,
			MOVE_THUNDER_WAVE,
			MOVE_SOFT_BOILED,
			MOVE_REFLECT,
		}
	},
};

static const struct SmogonVariant sChikoritaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBayleefSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMeganiumSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCyndaquilSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sQuilavaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTyphlosionSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTyphlosionHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTotodileSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCroconawSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPidgeySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_WING_ATTACK,
			MOVE_MIRROR_MOVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
			MOVE_MIRROR_MOVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_SUBSTITUTE,
			MOVE_MIRROR_MOVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_WING_ATTACK,
			MOVE_MIRROR_MOVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_FLY,
			MOVE_TOXIC,
			MOVE_DOUBLE_EDGE,
			MOVE_DOUBLE_TEAM,
		}
	},
};

static const struct SmogonVariant sFeraligatrSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSentretSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFurretSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHoothootSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNoctowlSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLedybaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLedianSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSpinarakSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAriadosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCrobatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPidgeottoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_WING_ATTACK,
			MOVE_MIRROR_MOVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_FLY,
			MOVE_QUICK_ATTACK,
			MOVE_SAND_ATTACK,
			MOVE_TAKE_DOWN,
		}
	},
};

static const struct SmogonVariant sChinchouSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLanturnSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPichuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCleffaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIgglybuffSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTogepiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUSTLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTogeticSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUSTLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNatuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sXatuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMareepSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPidgeotSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_SKY_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_MIRROR_MOVE,
			MOVE_FLY,
			MOVE_QUICK_ATTACK,
			MOVE_SAND_ATTACK,
		}
	},
};

static const struct SmogonVariant sFlaaffySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAmpharosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBellossomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMarillSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAzumarillSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSudowoodoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPolitoedSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHoppipSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSkiploomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sJumpluffSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRattataSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BLIZZARD,
			MOVE_SUPER_FANG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BLIZZARD,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUPER_FANG,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_BODY_SLAM,
			MOVE_BUBBLE_BEAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SUPER_FANG,
			MOVE_BLIZZARD,
			MOVE_QUICK_ATTACK,
			MOVE_HYPER_FANG,
		}
	},
};

static const struct SmogonVariant sRattataAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAipomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSunkernSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSunfloraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sYanmaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SPEED_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWooperSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWooperPaldeaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sQuagsireSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEspeonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sUmbreonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMurkrowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSlowkingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSlowkingGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURIOUS_MEDICINE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIvysaurSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_RAZOR_LEAF,
			MOVE_BODY_SLAM,
			MOVE_LEECH_SEED,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_RAZOR_LEAF,
			MOVE_BODY_SLAM,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_RAZOR_LEAF,
			MOVE_GROWTH,
			MOVE_DOUBLE_EDGE,
		}
	},
};

static const struct SmogonVariant sRaticateSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BUBBLE_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BUBBLE_BEAM,
			MOVE_SUPER_FANG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_SUPER_FANG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SUPER_FANG,
			MOVE_BUBBLE_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SUPER_FANG,
			MOVE_BUBBLE_BEAM,
			MOVE_SUPER_FANG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SUPER_FANG,
			MOVE_THUNDERBOLT,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SUPER_FANG,
			MOVE_THUNDERBOLT,
			MOVE_SUPER_FANG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUPER_FANG,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUPER_FANG,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 44, 48, 40, 48, 0),
		.moves = {
			MOVE_HYPER_FANG,
			MOVE_HYPER_BEAM,
			MOVE_FOCUS_ENERGY,
			MOVE_THUNDER,
		}
	},
};

static const struct SmogonVariant sRaticateAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRaticateAlolaTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BUBBLE_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BUBBLE_BEAM,
			MOVE_SUPER_FANG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_SUPER_FANG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SUPER_FANG,
			MOVE_BUBBLE_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SUPER_FANG,
			MOVE_BUBBLE_BEAM,
			MOVE_SUPER_FANG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SUPER_FANG,
			MOVE_THUNDERBOLT,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_SUPER_FANG,
			MOVE_THUNDERBOLT,
			MOVE_SUPER_FANG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUPER_FANG,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUPER_FANG,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 44, 48, 40, 48, 0),
		.moves = {
			MOVE_HYPER_FANG,
			MOVE_HYPER_BEAM,
			MOVE_FOCUS_ENERGY,
			MOVE_THUNDER,
		}
	},
};

static const struct SmogonVariant sMisdreavusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sUnownSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWobbuffetSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHADOW_TAG,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGirafarigSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPinecoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sForretressSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDunsparceSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SERENE_GRACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGligarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSteelixSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSnubbullSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSpearowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_DRILL_PECK,
			MOVE_MIRROR_MOVE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_DRILL_PECK,
			MOVE_MIRROR_MOVE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_DRILL_PECK,
			MOVE_MIRROR_MOVE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_DRILL_PECK,
			MOVE_MIRROR_MOVE,
			MOVE_DOUBLE_TEAM,
			MOVE_DOUBLE_EDGE,
		}
	},
};

static const struct SmogonVariant sGranbullSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sQwilfishSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sQwilfishHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sScizorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShuckleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHeracrossSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSneaselSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSneaselHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTeddiursaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sUrsaringSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSlugmaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGMA_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMagcargoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGMA_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFearowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_DRILL_PECK,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_EDGE,
			MOVE_DRILL_PECK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_EDGE,
			MOVE_DRILL_PECK,
			MOVE_MIRROR_MOVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_DRILL_PECK,
			MOVE_MIRROR_MOVE,
			MOVE_FURY_ATTACK,
			MOVE_SWIFT,
		}
	},
};

static const struct SmogonVariant sSwinubSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPiloswineSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCorsolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUSTLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCorsolaGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WEAK_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRemoraidSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUSTLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOctillerySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SUCTION_CUPS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDelibirdSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMantineSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSkarmorySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHoundourSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHoundoomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEkansSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_BODY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_MEGA_DRAIN,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_WRAP,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_BODY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ACID,
			MOVE_SCREECH,
			MOVE_BODY_SLAM,
		}
	},
};

static const struct SmogonVariant sKingdraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPhanpySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDonphanSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPorygon2SmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStantlerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSmeargleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTyrogueSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHitmontopSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSmoochumSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sElekidSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArbokSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_WRAP,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_WRAP,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_WRAP,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_WRAP,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_WRAP,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_GLARE,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_WRAP,
			MOVE_DIG,
			MOVE_STRENGTH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_GLARE,
			MOVE_WRAP,
			MOVE_EARTHQUAKE,
			MOVE_DIG,
		}
	},
};

static const struct SmogonVariant sMagbySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMiltankSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBlisseySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRaikouSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEnteiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSuicuneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLarvitarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPupitarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTyranitarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_STREAM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLugiaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPikachuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sPikachuAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sPikachuHoennSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sPikachuKalosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sPikachuOriginalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sPikachuPartnerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sPikachuSinnohSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sPikachuStarterSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPikachuUnovaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sPikachuWorldSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sHoOhSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCelebiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTreeckoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGrovyleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSceptileSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTorchicSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCombuskenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBlazikenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMudkipSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMarshtompSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRaichuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_AGILITY,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_COUNTER,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_COUNTER,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SING,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_THUNDER,
			MOVE_THUNDER_WAVE,
			MOVE_FLASH,
			MOVE_MEGA_KICK,
		}
	},
};

static const struct SmogonVariant sRaichuAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SURGE_SURFER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSwampertSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPoochyenaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMightyenaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZigzagoonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZigzagoonGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLinooneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLinooneGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWurmpleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilcoonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBeautiflySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCascoonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDustoxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSandshrewSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
			MOVE_SLASH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
			MOVE_SLASH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_SLASH,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_SLASH,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SLASH,
			MOVE_SEISMIC_TOSS,
			MOVE_SAND_ATTACK,
		}
	},
};

static const struct SmogonVariant sSandshrewAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_CLOAK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLotadSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLombreSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLudicoloSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSeedotSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNuzleafSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShiftrySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTaillowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSwellowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWingullSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPelipperSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSandslashSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SWORDS_DANCE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SLASH,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_SUBMISSION,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SWORDS_DANCE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SLASH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_DIG,
			MOVE_SWIFT,
			MOVE_SEISMIC_TOSS,
			MOVE_SAND_ATTACK,
		}
	},
};

static const struct SmogonVariant sSandslashAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_CLOAK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRaltsSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKirliaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGardevoirSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSurskitSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMasquerainSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShroomishSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBreloomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSlakothSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRUANT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVigorothSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSlakingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRUANT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNidoranFSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_KICK,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_KICK,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_TOXIC,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
		}
	},
};

static const struct SmogonVariant sNincadaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNinjaskSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SPEED_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShedinjaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WONDER_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWhismurSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLoudredSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sExploudSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMakuhitaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHariyamaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAzurillSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNosepassSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVenusaurSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_SWORDS_DANCE,
			MOVE_RAZOR_LEAF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_RAZOR_LEAF,
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RAZOR_LEAF,
			MOVE_BODY_SLAM,
			MOVE_SLEEP_POWDER,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_LEECH_SEED,
			MOVE_RAZOR_LEAF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_LEECH_SEED,
			MOVE_RAZOR_LEAF,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_TOXIC,
			MOVE_LEECH_SEED,
			MOVE_RAZOR_LEAF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_TOXIC,
			MOVE_LEECH_SEED,
			MOVE_RAZOR_LEAF,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_RAZOR_LEAF,
			MOVE_TOXIC,
			MOVE_LEECH_SEED,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_LEECH_SEED,
			MOVE_POISON_POWDER,
			MOVE_SOLAR_BEAM,
			MOVE_TAKE_DOWN,
		}
	},
};

static const struct SmogonVariant sNidorinaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_TOXIC,
			MOVE_THUNDER,
			MOVE_DOUBLE_EDGE,
			MOVE_ICE_BEAM,
		}
	},
};

static const struct SmogonVariant sSkittySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDelcattySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSableyeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMawileSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAronSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLaironSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAggronSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMedititeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PURE_POWER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMedichamSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PURE_POWER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sElectrikeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNidoqueenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_THUNDERBOLT,
			MOVE_ROCK_SLIDE,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDER,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDER,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDER,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_TOXIC,
			MOVE_DOUBLE_KICK,
			MOVE_BITE,
			MOVE_EARTHQUAKE,
		}
	},
};

static const struct SmogonVariant sManectricSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPlusleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PLUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMinunSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MINUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVolbeatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIllumiseSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRoseliaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGulpinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIQUID_OOZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSwalotSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIQUID_OOZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCarvanhaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROUGH_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSharpedoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROUGH_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNidoranMSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_KICK,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_KICK,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_KICK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(113, 104, 112, 112, 112, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_FOCUS_ENERGY,
			MOVE_THUNDERBOLT,
		}
	},
};

static const struct SmogonVariant sWailmerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWailordSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNumelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCameruptSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGMA_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTorkoalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WHITE_SMOKE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSpoinkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGrumpigSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSpindaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTrapinchSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVibravaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNidorinoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HORN_DRILL,
			MOVE_FOCUS_ENERGY,
			MOVE_THUNDER,
		}
	},
};

static const struct SmogonVariant sFlygonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCacneaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCacturneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSwabluSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAltariaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZangooseSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSeviperSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLunatoneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSolrockSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBarboachSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNidokingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDER,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDER,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDER,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOVELY_KISS,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FOCUS_ENERGY,
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_HORN_DRILL,
			MOVE_RAGE,
			MOVE_SUBSTITUTE,
		}
	},
};

static const struct SmogonVariant sWhiscashSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCorphishSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCrawdauntSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBaltoySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sClaydolSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLileepSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SUCTION_CUPS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCradilySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SUCTION_CUPS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAnorithSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BATTLE_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArmaldoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BATTLE_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFeebasSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sClefairySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
		}
	},
};

static const struct SmogonVariant sMiloticSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MARVEL_SCALE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCastformSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FORECAST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKecleonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COLOR_CHANGE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShuppetSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBanetteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDuskullSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDusclopsSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTropiusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sChimechoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAbsolSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sClefableSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_MEGA_KICK,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_MEGA_KICK,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_SING,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
			MOVE_SING,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
			MOVE_SING,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
			MOVE_SING,
			MOVE_THUNDER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
			MOVE_THUNDER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_TOXIC,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_SING,
			MOVE_TRI_ATTACK,
			MOVE_MINIMIZE,
			MOVE_ICE_BEAM,
		}
	},
};

static const struct SmogonVariant sWynautSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHADOW_TAG,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSnoruntSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGlalieSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSphealSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSealeoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWalreinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sClamperlSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHuntailSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGorebyssSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRelicanthSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVulpixSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_CONFUSE_RAY,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_CONFUSE_RAY,
			MOVE_QUICK_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_BODY_SLAM,
			MOVE_CONFUSE_RAY,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_BODY_SLAM,
			MOVE_CONFUSE_RAY,
			MOVE_QUICK_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_FLAMETHROWER,
			MOVE_BODY_SLAM,
			MOVE_QUICK_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_FIRE_BLAST,
			MOVE_DIG,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_DIG,
			MOVE_CONFUSE_RAY,
			MOVE_DOUBLE_EDGE,
		}
	},
};

static const struct SmogonVariant sVulpixAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_CLOAK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLuvdiscSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBagonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShelgonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSalamenceSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBeldumSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMetangSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMetagrossSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRegirockSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRegiceSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRegisteelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNinetalesSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_BODY_SLAM,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_DIG,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_DIG,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_SKULL_BASH,
			MOVE_CONFUSE_RAY,
			MOVE_TAIL_WHIP,
		}
	},
};

static const struct SmogonVariant sNinetalesAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_CLOAK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLatiasSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLatiosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKyogreSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DRIZZLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGroudonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DROUGHT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRayquazaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AIR_LOCK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sJirachiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SERENE_GRACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDeoxysSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDeoxysAttackSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDeoxysDefenseSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDeoxysSpeedSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTurtwigSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGrotleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTorterraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sJigglypuffSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SING,
			MOVE_BODY_SLAM,
			MOVE_SEISMIC_TOSS,
			MOVE_PSYCHIC,
		}
	},
};

static const struct SmogonVariant sChimcharSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMonfernoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sInfernapeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPiplupSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPrinplupSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEmpoleonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStarlySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStaraviaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStaraptorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBidoofSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SIMPLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCharmanderSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_SLASH,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_SLASH,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_FIRE_SPIN,
			MOVE_SLASH,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_FIRE_SPIN,
			MOVE_SLASH,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_DRAGON_RAGE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_DRAGON_RAGE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_DRAGON_RAGE,
			MOVE_DIG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_SLASH,
			MOVE_DIG,
			MOVE_FIRE_SPIN,
		}
	},
};

static const struct SmogonVariant sWigglytuffSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_HYPER_BEAM,
			MOVE_SEISMIC_TOSS,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_HYPER_BEAM,
			MOVE_SEISMIC_TOSS,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_SING,
			MOVE_DOUBLE_EDGE,
			MOVE_SUBMISSION,
			MOVE_THUNDERBOLT,
		}
	},
};

static const struct SmogonVariant sBibarelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SIMPLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKricketotSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKricketuneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShinxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIVALRY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLuxioSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIVALRY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLuxraySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIVALRY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBudewSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRoseradeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCranidosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MOLD_BREAKER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRampardosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MOLD_BREAKER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZubatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_DOUBLE_EDGE,
			MOVE_MEGA_DRAIN,
			MOVE_LEECH_LIFE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_WING_ATTACK,
			MOVE_MEGA_DRAIN,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HAZE,
			MOVE_WING_ATTACK,
			MOVE_MEGA_DRAIN,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_MEGA_DRAIN,
			MOVE_TOXIC,
			MOVE_DOUBLE_EDGE,
		}
	},
};

static const struct SmogonVariant sShieldonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBastiodonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBurmySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWormadamSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ANTICIPATION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWormadamSandySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ANTICIPATION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWormadamTrashSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ANTICIPATION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMothimSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCombeeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HONEY_GATHER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVespiquenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPachirisuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBuizelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFloatzelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGolbatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_CONFUSE_RAY,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_SCREECH,
			MOVE_DOUBLE_EDGE,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_SCREECH,
			MOVE_HYPER_BEAM,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_HYPER_BEAM,
			MOVE_DOUBLE_EDGE,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_HYPER_BEAM,
			MOVE_HYPER_BEAM,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_MEGA_DRAIN,
			MOVE_BITE,
			MOVE_HAZE,
		}
	},
};

static const struct SmogonVariant sCherubiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCherrimSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLOWER_GIFT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShellosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STICKY_HOLD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGastrodonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STICKY_HOLD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAmbipomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TECHNICIAN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDrifloonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AFTERMATH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDrifblimSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AFTERMATH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBunearySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLopunnySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMismagiusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOddishSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_DOUBLE_EDGE,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_MEGA_DRAIN,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_ACID,
			MOVE_MEGA_DRAIN,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_PETAL_DANCE,
			MOVE_TOXIC,
			MOVE_MEGA_DRAIN,
			MOVE_DOUBLE_EDGE,
		}
	},
};

static const struct SmogonVariant sHonchkrowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGlameowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPuruglySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sChinglingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStunkySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSkuntankSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBronzorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBronzongSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBonslySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMimeJrSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUNDPROOF,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGloomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_MEGA_DRAIN,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_PETAL_DANCE,
			MOVE_TAKE_DOWN,
			MOVE_MEGA_DRAIN,
			MOVE_STUN_SPORE,
		}
	},
};

static const struct SmogonVariant sHappinySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sChatotSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSpiritombSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGibleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGabiteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGarchompSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMunchlaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRioluSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEADFAST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLucarioSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEADFAST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHippopotasSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_STREAM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVileplumeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_PETAL_DANCE,
			MOVE_SLEEP_POWDER,
			MOVE_ACID,
			MOVE_CUT,
		}
	},
};

static const struct SmogonVariant sHippowdonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_STREAM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSkorupiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BATTLE_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDrapionSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BATTLE_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCroagunkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ANTICIPATION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sToxicroakSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ANTICIPATION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCarnivineSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFinneonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLumineonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMantykeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSnoverSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_WARNING,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sParasSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_BODY_SLAM,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_BODY_SLAM,
			MOVE_LEECH_LIFE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SLASH,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SLASH,
			MOVE_LEECH_LIFE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_SLASH,
			MOVE_DIG,
			MOVE_MEGA_DRAIN,
		}
	},
};

static const struct SmogonVariant sAbomasnowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_WARNING,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWeavileSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMagnezoneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLickilickySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRhyperiorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTangrowthSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sElectivireSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MOTOR_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMagmortarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTogekissSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUSTLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sYanmegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SPEED_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sParasectSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SLASH,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SLASH,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SWORDS_DANCE,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_STUN_SPORE,
			MOVE_SLASH,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_TOXIC,
			MOVE_SLASH,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_SPORE,
			MOVE_TAKE_DOWN,
			MOVE_DIG,
			MOVE_SOLAR_BEAM,
		}
	},
};

static const struct SmogonVariant sLeafeonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEAF_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGlaceonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_CLOAK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGliscorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMamoswineSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPorygonZSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ADAPTABILITY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGalladeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEADFAST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sProbopassSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDusknoirSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFroslassSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_CLOAK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRotomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRotomFanSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRotomFrostSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRotomHeatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRotomMowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRotomWashSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVenonatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_LEECH_LIFE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
			MOVE_DOUBLE_EDGE,
			MOVE_STUN_SPORE,
		}
	},
};

static const struct SmogonVariant sUxieSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMespritSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAzelfSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDialgaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDialgaOriginSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPalkiaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPalkiaOriginSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHeatranSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRegigigasSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SLOW_START,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGiratinaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGiratinaOriginSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCresseliaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPhioneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYDRATION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVenomothSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_TOXIC,
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_TOXIC,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_SLEEP_POWDER,
			MOVE_PSYCHIC,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_MEGA_DRAIN,
			MOVE_PSYCHIC,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SUPERSONIC,
			MOVE_SOLAR_BEAM,
			MOVE_SWIFT,
		}
	},
};

static const struct SmogonVariant sManaphySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYDRATION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDarkraiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BAD_DREAMS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShayminSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShayminSkySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SERENE_GRACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusBugSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusDarkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusDragonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusElectricSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusFightingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusFireSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusFlyingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusGhostSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusGrassSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusGroundSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusIceSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusPoisonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusPsychicSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusRockSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusSteelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusWaterSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArceusFairySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MULTITYPE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVictiniSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VICTORY_STAR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSnivySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sServineSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSerperiorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTepigSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPigniteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCharmeleonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_SEISMIC_TOSS,
			MOVE_FIRE_SPIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(65, 56, 64, 56, 64, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_COUNTER,
			MOVE_SEISMIC_TOSS,
			MOVE_STRENGTH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
};

static const struct SmogonVariant sDiglettSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SLASH,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_FISSURE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SLASH,
			MOVE_SAND_ATTACK,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
};

static const struct SmogonVariant sDiglettAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEmboarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOshawottSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDewottSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSamurottSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSamurottHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPatratSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWatchogSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLillipupSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHerdierSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStoutlandSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPurrloinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDugtrioSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SLASH,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SLASH,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_FISSURE,
			MOVE_DOUBLE_TEAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_FISSURE,
			MOVE_DOUBLE_TEAM,
			MOVE_SAND_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_FISSURE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_FISSURE,
			MOVE_ROCK_SLIDE,
			MOVE_SAND_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_DIG,
			MOVE_DOUBLE_TEAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_DIG,
			MOVE_DOUBLE_TEAM,
			MOVE_SAND_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_DIG,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_DIG,
			MOVE_ROCK_SLIDE,
			MOVE_SAND_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_FISSURE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_DIG,
			MOVE_SAND_ATTACK,
			MOVE_TOXIC,
			MOVE_HYPER_BEAM,
		}
	},
};

static const struct SmogonVariant sDugtrioAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLiepardSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPansageSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSimisageSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPansearSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSimisearSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPanpourSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSimipourSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMunnaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FOREWARN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMusharnaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FOREWARN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPidoveSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BIG_PECKS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMeowthSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_SCREECH,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_SCREECH,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_THUNDERBOLT,
			MOVE_SWIFT,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_THUNDER,
			MOVE_BUBBLE_BEAM,
			MOVE_MIMIC,
		}
	},
};

static const struct SmogonVariant sMeowthAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMeowthGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_SCREECH,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_SCREECH,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_THUNDERBOLT,
			MOVE_SWIFT,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_THUNDER,
			MOVE_BUBBLE_BEAM,
			MOVE_MIMIC,
		}
	},
};

static const struct SmogonVariant sTranquillSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BIG_PECKS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sUnfezantSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BIG_PECKS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBlitzleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZebstrikaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRoggenrolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBoldoreSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGigalithSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWoobatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNAWARE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSwoobatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNAWARE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDrilburSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_RUSH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPersianSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_BUBBLE_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_BUBBLE_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_BUBBLE_BEAM,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_SCREECH,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_SCREECH,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_SCREECH,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_BODY_SLAM,
			MOVE_SCREECH,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SLASH,
			MOVE_THUNDERBOLT,
			MOVE_AMNESIA,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SLASH,
			MOVE_THUNDERBOLT,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_BUBBLE_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_BUBBLE_BEAM,
			MOVE_MIMIC,
			MOVE_GROWL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_TEAM,
			MOVE_PAY_DAY,
			MOVE_SLASH,
		}
	},
};

static const struct SmogonVariant sPersianAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FUR_COAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sExcadrillSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_RUSH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAudinoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HEALER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTimburrSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGurdurrSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sConkeldurrSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTympoleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPalpitoadSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSeismitoadSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sThrohSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSawkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPsyduckSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SURF,
			MOVE_CONFUSION,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
		}
	},
};

static const struct SmogonVariant sSewaddleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSwadloonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEAF_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLeavannySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVenipedeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWhirlipedeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sScolipedeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCottoneeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRANKSTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWhimsicottSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRANKSTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPetililSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLilligantSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLilligantHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGolduckSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_HYDRO_PUMP,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_HYDRO_PUMP,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_HYDRO_PUMP,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_HYDRO_PUMP,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_HYDRO_PUMP,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_HYDRO_PUMP,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_BLIZZARD,
			MOVE_AMNESIA,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAMP,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_SURF,
			MOVE_TOXIC,
			MOVE_DISABLE,
		}
	},
};

static const struct SmogonVariant sBasculinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RECKLESS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBasculinBlueStripedSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBasculinWhiteStripedSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RATTLED,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSandileSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKrokorokSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKrookodileSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDarumakaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUSTLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDarumakaGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUSTLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDarmanitanSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHEER_FORCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDarmanitanGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GORILLA_TACTICS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMaractusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDwebbleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCrustleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sScraggySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMankeySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_ROCK_SLIDE,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_ROCK_SLIDE,
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_THUNDERBOLT,
			MOVE_ROCK_SLIDE,
			MOVE_KARATE_CHOP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_THUNDERBOLT,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_THUNDERBOLT,
			MOVE_ROCK_SLIDE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_ROCK_SLIDE,
			MOVE_SEISMIC_TOSS,
			MOVE_SCREECH,
		}
	},
};

static const struct SmogonVariant sScraftySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSigilyphSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WONDER_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sYamaskSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MUMMY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sYamaskGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WANDERING_SPIRIT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCofagrigusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MUMMY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTirtougaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOLID_ROCK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCarracostaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOLID_ROCK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArchenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DEFEATIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArcheopsSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DEFEATIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTrubbishSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGarbodorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPrimeapeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SEISMIC_TOSS,
			MOVE_ROCK_SLIDE,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SEISMIC_TOSS,
			MOVE_ROCK_SLIDE,
			MOVE_HYPER_BEAM,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SEISMIC_TOSS,
			MOVE_ROCK_SLIDE,
			MOVE_HYPER_BEAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_SCREECH,
			MOVE_ROCK_SLIDE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_SCREECH,
			MOVE_ROCK_SLIDE,
			MOVE_LOW_KICK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_SCREECH,
			MOVE_ROCK_SLIDE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_FURY_SWIPES,
			MOVE_ROCK_SLIDE,
			MOVE_LOW_KICK,
			MOVE_SCREECH,
		}
	},
};

static const struct SmogonVariant sZoruaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUSION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZoruaHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUSION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZoroarkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUSION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZoroarkHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUSION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMinccinoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCinccinoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGothitaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FRISK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGothoritaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FRISK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGothitelleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FRISK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSolosisSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERCOAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDuosionSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERCOAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sReuniclusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERCOAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGrowlitheSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_BODY_SLAM,
			MOVE_FIRE_BLAST,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_BODY_SLAM,
			MOVE_FIRE_BLAST,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_BODY_SLAM,
			MOVE_FLAMETHROWER,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_BODY_SLAM,
			MOVE_FLAMETHROWER,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_DRAGON_RAGE,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_DRAGON_RAGE,
			MOVE_BODY_SLAM,
			MOVE_DIG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_DRAGON_RAGE,
			MOVE_DIG,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_DRAGON_RAGE,
			MOVE_DIG,
			MOVE_DIG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_FLAMETHROWER,
			MOVE_BODY_SLAM,
			MOVE_REFLECT,
			MOVE_DIG,
		}
	},
};

static const struct SmogonVariant sGrowlitheHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDucklettSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSwannaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVanilliteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ICE_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVanillishSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ICE_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVanilluxeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ICE_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDeerlingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSawsbuckSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEmolgaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKarrablastSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEscavalierSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArcanineSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_DRAGON_RAGE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_SUBSTITUTE,
			MOVE_DRAGON_RAGE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(105, 104, 104, 104, 104, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_TAKE_DOWN,
			MOVE_DRAGON_RAGE,
			MOVE_SUBSTITUTE,
		}
	},
};

static const struct SmogonVariant sArcanineHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFoongusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAmoongussSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EFFECT_SPORE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFrillishSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sJellicentSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAlomomolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HEALER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sJoltikSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGalvantulaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFerroseedSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IRON_BARBS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFerrothornSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IRON_BARBS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKlinkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PLUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCharizardSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_SLASH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_FIRE_SPIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_EARTHQUAKE,
			MOVE_SLASH,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_EARTHQUAKE,
			MOVE_SLASH,
			MOVE_SLASH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_EARTHQUAKE,
			MOVE_SLASH,
			MOVE_FIRE_SPIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_SPIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_SLASH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_SPIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_FIRE_BLAST,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_FIRE_BLAST,
			MOVE_EARTHQUAKE,
			MOVE_SLASH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_DIG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_DIG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_SLASH,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_FLY,
			MOVE_SWORDS_DANCE,
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
		}
	},
};

static const struct SmogonVariant sPoliwagSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_BLIZZARD,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_SURF,
			MOVE_AMNESIA,
		}
	},
};

static const struct SmogonVariant sKlangSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PLUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKlinklangSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PLUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTynamoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEelektrikSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEelektrossSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sElgyemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TELEPATHY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBeheeyemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TELEPATHY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLitwickSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLampentSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sChandelureSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPoliwhirlSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_HYPNOSIS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_EARTHQUAKE,
		}
	},
};

static const struct SmogonVariant sAxewSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIVALRY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFraxureSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIVALRY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHaxorusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIVALRY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCubchooSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_CLOAK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBearticSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_CLOAK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCryogonalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShelmetSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYDRATION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAccelgorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYDRATION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStunfiskSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStunfiskGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MIMICRY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMienfooSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPoliwrathSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HYDRO_PUMP,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_HYPNOSIS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_HYPNOSIS,
			MOVE_HYPNOSIS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_HYPNOSIS,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYDRO_PUMP,
			MOVE_HYPNOSIS,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_HYPNOSIS,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_EARTHQUAKE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_HYPNOSIS,
			MOVE_SUBMISSION,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_AMNESIA,
			MOVE_SUBMISSION,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_SUBMISSION,
			MOVE_COUNTER,
			MOVE_HYDRO_PUMP,
		}
	},
};

static const struct SmogonVariant sMienshaoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDruddigonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROUGH_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGolettSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IRON_FIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGolurkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IRON_FIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPawniardSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DEFIANT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBisharpSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DEFIANT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBouffalantSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RECKLESS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRuffletSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBraviarySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBraviaryHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVullabySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BIG_PECKS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAbraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_REFLECT,
			MOVE_THUNDER_WAVE,
		}
	},
};

static const struct SmogonVariant sMandibuzzSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BIG_PECKS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHeatmorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDurantSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDeinoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUSTLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZweilousSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUSTLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHydreigonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLarvestaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVolcaronaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCobalionSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_JUSTIFIED,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTerrakionSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_JUSTIFIED,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKadabraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_COUNTER,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_COUNTER,
			MOVE_RECOVER,
			MOVE_DIG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_PSYBEAM,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sVirizionSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_JUSTIFIED,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTornadusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRANKSTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTornadusTherianSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_REGENERATOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sThundurusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRANKSTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sThundurusTherianSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sReshiramSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TURBOBLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZekromSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TERAVOLT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLandorusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_FORCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLandorusTherianSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKyuremSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKyuremBlackSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TERAVOLT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKyuremWhiteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TURBOBLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKeldeoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_JUSTIFIED,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKeldeoResoluteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_JUSTIFIED,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMeloettaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SERENE_GRACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGenesectSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DOWNLOAD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGenesectBurnSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DOWNLOAD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGenesectChillSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DOWNLOAD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGenesectDouseSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DOWNLOAD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGenesectShockSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DOWNLOAD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAlakazamSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_REFLECT,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
			MOVE_PSYCHIC,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
			MOVE_PSYCHIC,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_DOUBLE_TEAM,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_REFLECT,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TOXIC,
			MOVE_DOUBLE_TEAM,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TOXIC,
			MOVE_REFLECT,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_TOXIC,
			MOVE_RECOVER,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_ICE_PUNCH,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER_PUNCH,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_SUBSTITUTE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_PSYBEAM,
			MOVE_METRONOME,
			MOVE_DISABLE,
			MOVE_TRI_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_PSYBEAM,
			MOVE_RECOVER,
			MOVE_KINESIS,
			MOVE_DIG,
		}
	},
};

static const struct SmogonVariant sChespinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sQuilladinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sChesnaughtSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFennekinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBraixenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDelphoxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFroakieSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFrogadierSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGreninjaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGreninjaBondSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BATTLE_BOND,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBunnelbySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMachopSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_FOCUS_ENERGY,
		}
	},
};

static const struct SmogonVariant sDiggersbySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFletchlingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BIG_PECKS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFletchinderSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTalonflameSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLAME_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sScatterbugSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSpewpaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVivillonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVivillonFancySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVivillonPokeballSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLitleoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIVALRY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPyroarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIVALRY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFlabebeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLOWER_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMachokeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_STRENGTH,
			MOVE_ROCK_SLIDE,
			MOVE_FOCUS_ENERGY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_FIRE_BLAST,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		}
	},
};

static const struct SmogonVariant sFloetteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLOWER_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFlorgesSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLOWER_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSkiddoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAP_SIPPER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGogoatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAP_SIPPER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPanchamSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IRON_FIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPangoroSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IRON_FIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFurfrouSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FUR_COAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEspurrSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMeowsticFSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMeowsticMSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHonedgeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NO_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMachampSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SUBMISSION,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_HYPER_BEAM,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_LOW_KICK,
			MOVE_STRENGTH,
			MOVE_COUNTER,
			MOVE_FOCUS_ENERGY,
		}
	},
};

static const struct SmogonVariant sDoubladeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NO_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAegislashSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STANCE_CHANGE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSpritzeeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HEALER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAromatisseSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HEALER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSwirlixSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWEET_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSlurpuffSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWEET_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sInkaySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CONTRARY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMalamarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CONTRARY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBinacleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOUGH_CLAWS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBarbaracleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOUGH_CLAWS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBellsproutSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_DOUBLE_EDGE,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_SWORDS_DANCE,
			MOVE_DOUBLE_EDGE,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_SWORDS_DANCE,
			MOVE_MEGA_DRAIN,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_SWORDS_DANCE,
			MOVE_DOUBLE_EDGE,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_SWORDS_DANCE,
			MOVE_MEGA_DRAIN,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_SWORDS_DANCE,
			MOVE_DOUBLE_EDGE,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_RAZOR_LEAF,
			MOVE_GROWTH,
			MOVE_MEGA_DRAIN,
			MOVE_STUN_SPORE,
		}
	},
};

static const struct SmogonVariant sSkrelpSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDragalgeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sClauncherSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MEGA_LAUNCHER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sClawitzerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MEGA_LAUNCHER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHelioptileSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DRY_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHelioliskSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DRY_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTyruntSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STRONG_JAW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTyrantrumSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STRONG_JAW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAmauraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_REFRIGERATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAurorusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_REFRIGERATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSquirtleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_DIG,
		}
	},
};

static const struct SmogonVariant sWeepinbellSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_RAZOR_LEAF,
			MOVE_DOUBLE_EDGE,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_RAZOR_LEAF,
			MOVE_SWORDS_DANCE,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_RAZOR_LEAF,
			MOVE_DOUBLE_EDGE,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_RAZOR_LEAF,
			MOVE_SWORDS_DANCE,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_RAZOR_LEAF,
			MOVE_ACID,
			MOVE_WRAP,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_SUBSTITUTE,
			MOVE_RAZOR_LEAF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_DOUBLE_EDGE,
			MOVE_RAZOR_LEAF,
		}
	},
};

static const struct SmogonVariant sSylveonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHawluchaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDedenneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHEEK_POUCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCarbinkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGoomySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAP_SIPPER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSliggooSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAP_SIPPER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSliggooHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAP_SIPPER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGoodraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAP_SIPPER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGoodraHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAP_SIPPER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKlefkiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRANKSTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPhantumpSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTrevenantSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NATURAL_CURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVictreebelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_STUN_SPORE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_RAZOR_LEAF,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_RAZOR_LEAF,
			MOVE_SLEEP_POWDER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_RAZOR_LEAF,
			MOVE_STUN_SPORE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_SLEEP_POWDER,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_SLEEP_POWDER,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_SWORDS_DANCE,
			MOVE_RAZOR_LEAF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_SWORDS_DANCE,
			MOVE_RAZOR_LEAF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_STUN_SPORE,
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_RAZOR_LEAF,
			MOVE_STUN_SPORE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_RAZOR_LEAF,
			MOVE_SLEEP_POWDER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_RAZOR_LEAF,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
			MOVE_RAZOR_LEAF,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_SLEEP_POWDER,
			MOVE_STUN_SPORE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_SLEEP_POWDER,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_STUN_SPORE,
			MOVE_STUN_SPORE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_RAZOR_LEAF,
			MOVE_STUN_SPORE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_RAZOR_LEAF,
			MOVE_SLEEP_POWDER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_RAZOR_LEAF,
			MOVE_STUN_SPORE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_STUN_SPORE,
			MOVE_RAZOR_LEAF,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_SOLAR_BEAM,
			MOVE_ACID,
			MOVE_REFLECT,
			MOVE_SLAM,
		}
	},
};

static const struct SmogonVariant sPumpkabooSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPumpkabooLargeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPumpkabooSmallSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPumpkabooSuperSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGourgeistSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGourgeistLargeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGourgeistSmallSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGourgeistSuperSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBergmiteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAvaluggSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAvaluggHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STRONG_JAW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNoibatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FRISK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNoivernSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FRISK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sXerneasSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FAIRY_AURA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sYveltalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DARK_AURA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZygardeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AURA_BREAK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZygarde10SmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AURA_BREAK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDiancieSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTentacoolSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_HYDRO_PUMP,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_HYDRO_PUMP,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_HYDRO_PUMP,
			MOVE_BARRIER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_MEGA_DRAIN,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_MEGA_DRAIN,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_SURF,
			MOVE_DOUBLE_EDGE,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_WRAP,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_SURF,
			MOVE_SUPERSONIC,
			MOVE_MEGA_DRAIN,
			MOVE_BLIZZARD,
		}
	},
};

static const struct SmogonVariant sHoopaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGICIAN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHoopaUnboundSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGICIAN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVolcanionSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRowletSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDartrixSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDecidueyeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDecidueyeHisuiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLittenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTorracatSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIncineroarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPopplioSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBrionneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTentacruelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_SURF,
			MOVE_WRAP,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BARRIER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_WRAP,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_WRAP,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_WRAP,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_WRAP,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_SURF,
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_SURF,
			MOVE_SWORDS_DANCE,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_WRAP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_ACID,
			MOVE_SUPERSONIC,
			MOVE_HYDRO_PUMP,
			MOVE_CUT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_WRAP,
			MOVE_TOXIC,
			MOVE_HYDRO_PUMP,
			MOVE_CUT,
		}
	},
};

static const struct SmogonVariant sPrimarinaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPikipekSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTrumbeakSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sToucannonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sYungoosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STAKEOUT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGumshoosSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STAKEOUT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGumshoosTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ADAPTABILITY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGrubbinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCharjabugSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BATTERY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVikavoltSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVikavoltTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCrabrawlerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGeodudeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SEISMIC_TOSS,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SEISMIC_TOSS,
			MOVE_ROCK_SLIDE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_TAKE_DOWN,
			MOVE_STRENGTH,
			MOVE_ROCK_SLIDE,
			MOVE_EXPLOSION,
		}
	},
};

static const struct SmogonVariant sGeodudeAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCrabominableSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOricorioSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DANCER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOricorioPauSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DANCER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOricorioPomPomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DANCER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOricorioSensuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DANCER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCutieflySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HONEY_GATHER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRibombeeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HONEY_GATHER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRibombeeTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWEET_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRockruffSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLycanrocSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLycanrocDuskSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOUGH_CLAWS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLycanrocMidnightSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWishiwashiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SCHOOLING,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMareanieSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MERCILESS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sToxapexSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MERCILESS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMudbraySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGravelerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_COUNTER,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 44, 48, 44, 48, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SEISMIC_TOSS,
			MOVE_STRENGTH,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SELF_DESTRUCT,
			MOVE_EARTHQUAKE,
			MOVE_SEISMIC_TOSS,
			MOVE_METRONOME,
		}
	},
};

static const struct SmogonVariant sGravelerAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_COUNTER,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 44, 48, 44, 48, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_SEISMIC_TOSS,
			MOVE_STRENGTH,
			MOVE_SELF_DESTRUCT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_SELF_DESTRUCT,
			MOVE_EARTHQUAKE,
			MOVE_SEISMIC_TOSS,
			MOVE_METRONOME,
		}
	},
};

static const struct SmogonVariant sMudsdaleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDewpiderSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_BUBBLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAraquanidSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_BUBBLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAraquanidTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_BUBBLE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFomantisSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEAF_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLurantisSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEAF_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLurantisTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEAF_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMorelullSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShiinoticSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ILLUMINATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSalanditSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CORROSION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSalazzleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CORROSION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSalazzleTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CORROSION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStuffulSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLUFFY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGolemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUBSTITUTE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_EXPLOSION,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_EXPLOSION,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_FIRE_BLAST,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_TOXIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
			MOVE_ROCK_SLIDE,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
			MOVE_BODY_SLAM,
			MOVE_FIRE_BLAST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_SLAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_DIG,
			MOVE_SEISMIC_TOSS,
			MOVE_FIRE_BLAST,
			MOVE_METRONOME,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_ROCK_THROW,
			MOVE_MEGA_PUNCH,
			MOVE_DIG,
			MOVE_SELF_DESTRUCT,
		}
	},
};

static const struct SmogonVariant sGolemAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBewearSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLUFFY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBounsweetSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEAF_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSteeneeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEAF_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTsareenaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEAF_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sComfeySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLOWER_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOranguruSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPassimianSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RECEIVER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWimpodSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WIMP_OUT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGolisopodSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EMERGENCY_EXIT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSandygastSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_COMPACTION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPonytaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AGILITY,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_BODY_SLAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_AGILITY,
			MOVE_HORN_DRILL,
			MOVE_BODY_SLAM,
		}
	},
};

static const struct SmogonVariant sPonytaGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPalossandSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_COMPACTION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPyukumukuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNARDS_OUT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTypeNullSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BATTLE_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyBugSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyDarkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyDragonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyElectricSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyFairySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyFightingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyFireSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyFlyingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyGhostSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyGrassSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyGroundSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyIceSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyPoisonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyPsychicSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyRockSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallySteelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilvallyWaterSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RKS_SYSTEM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMiniorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELDS_DOWN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKomalaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMATOSE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTurtonatorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTogedemaruSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IRON_BARBS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTogedemaruTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMimikyuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DISGUISE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMimikyuTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DISGUISE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBruxishSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAZZLING,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRapidashSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_FIRE_SPIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_TOXIC,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_TOXIC,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_AGILITY,
			MOVE_HORN_DRILL,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_FIRE_SPIN,
			MOVE_AGILITY,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_BODY_SLAM,
			MOVE_FIRE_SPIN,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_HORN_DRILL,
			MOVE_FIRE_SPIN,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_FIRE_SPIN,
			MOVE_FIRE_BLAST,
			MOVE_DOUBLE_KICK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_FIRE_SPIN,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_FIRE_SPIN,
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_KICK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_FIRE_BLAST,
			MOVE_STOMP,
			MOVE_TOXIC,
			MOVE_FIRE_SPIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_STOMP,
			MOVE_FIRE_BLAST,
			MOVE_TOXIC,
			MOVE_FIRE_SPIN,
		}
	},
};

static const struct SmogonVariant sRapidashGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDrampaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BERSERK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDhelmiseSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEELWORKER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sJangmooSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BULLETPROOF,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHakamooSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BULLETPROOF,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKommooSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BULLETPROOF,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKommooTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERCOAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTapuKokoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ELECTRIC_SURGE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTapuLeleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PSYCHIC_SURGE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTapuBuluSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GRASSY_SURGE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTapuFiniSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MISTY_SURGE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCosmogSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNAWARE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSlowpokeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 252),
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_AMNESIA,
		}
	},
};

static const struct SmogonVariant sSlowpokeGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_SURF,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GLUTTONY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 252),
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_AMNESIA,
		}
	},
};

static const struct SmogonVariant sCosmoemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STURDY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSolgaleoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FULL_METAL_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLunalaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHADOW_SHIELD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNihilegoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBuzzwoleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPheromosaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sXurkitreeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCelesteelaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKartanaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGuzzlordSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWartortleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_SURF,
			MOVE_STRENGTH,
			MOVE_REST,
			MOVE_ICE_BEAM,
		}
	},
};

static const struct SmogonVariant sSlowbroSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_AMNESIA,
			MOVE_REST,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_EARTHQUAKE,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_AMNESIA,
			MOVE_REST,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_AMNESIA,
			MOVE_REST,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_AMNESIA,
			MOVE_REST,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_REST,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_REST,
			MOVE_SURF,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_REST,
			MOVE_SURF,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_REST,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_REST,
			MOVE_PSYCHIC,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_REST,
			MOVE_PSYCHIC,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_SURF,
			MOVE_SUBSTITUTE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OBLIVIOUS,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_DISABLE,
			MOVE_WITHDRAW,
		}
	},
};

static const struct SmogonVariant sSlowbroGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUICK_DRAW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNecrozmaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRISM_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNecrozmaDawnWingsSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRISM_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNecrozmaDuskManeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRISM_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMagearnaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUL_HEART,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMagearnaOriginalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOUL_HEART,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMarshadowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TECHNICIAN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPoipoleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNaganadelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStakatakaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBlacephalonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BEAST_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZeraoraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMeltanSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMelmetalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IRON_FIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMagnemiteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_DOUBLE_EDGE,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_DOUBLE_EDGE,
			MOVE_THUNDER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_DOUBLE_EDGE,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_SUPERSONIC,
			MOVE_DOUBLE_EDGE,
		}
	},
};

static const struct SmogonVariant sGrookeySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sThwackeySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRillaboomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sScorbunnySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRabootSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCinderaceSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSobbleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDrizzileSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sInteleonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSkwovetSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHEEK_POUCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMagnetonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_DOUBLE_EDGE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_DOUBLE_EDGE,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_THUNDER,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_REST,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_REST,
			MOVE_REFLECT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_REST,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_HYPER_BEAM,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_HYPER_BEAM,
			MOVE_THUNDER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_THUNDER_WAVE,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_TOXIC,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGNET_PULL,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(24, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_THUNDER,
			MOVE_SCREECH,
			MOVE_SUPERSONIC,
			MOVE_SWIFT,
		}
	},
};

static const struct SmogonVariant sGreedentSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHEEK_POUCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRookideeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCorvisquireSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCorviknightSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBlipbugSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDottlerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOrbeetleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNickitSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sThievulSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGossifleurSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COTTON_DOWN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFarfetchdSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_AGILITY,
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_AGILITY,
			MOVE_SWORDS_DANCE,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_FLY,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_KEEN_EYE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_SLASH,
			MOVE_SAND_ATTACK,
			MOVE_TOXIC,
			MOVE_FLY,
		}
	},
};

static const struct SmogonVariant sFarfetchdGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEADFAST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEldegossSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COTTON_DOWN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWoolooSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLUFFY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDubwoolSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLUFFY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sChewtleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STRONG_JAW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDrednawSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STRONG_JAW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sYamperSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BALL_FETCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBoltundSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STRONG_JAW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRolycolySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEAM_ENGINE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCarkolSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEAM_ENGINE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCoalossalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEAM_ENGINE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDoduoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
			MOVE_DRILL_PECK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
			MOVE_DRILL_PECK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_DRILL_PECK,
			MOVE_TRI_ATTACK,
			MOVE_DOUBLE_TEAM,
			MOVE_REFLECT,
		}
	},
};

static const struct SmogonVariant sApplinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIPEN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFlappleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIPEN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAppletunSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIPEN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSilicobraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_SPIT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSandacondaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_SPIT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCramorantSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GULP_MISSILE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArrokudaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBarraskewdaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sToxelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RATTLED,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sToxtricitySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PUNK_ROCK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sToxtricityLowKeySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PUNK_ROCK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDodrioSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DRILL_PECK,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DRILL_PECK,
			MOVE_HYPER_BEAM,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_DRILL_PECK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_DRILL_PECK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_DRILL_PECK,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_DRILL_PECK,
			MOVE_AGILITY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_DOUBLE_EDGE,
			MOVE_HYPER_BEAM,
			MOVE_DRILL_PECK,
			MOVE_TOXIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_FLY,
			MOVE_TRI_ATTACK,
			MOVE_AGILITY,
			MOVE_REFLECT,
		}
	},
};

static const struct SmogonVariant sSizzlipedeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCentiskorchSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sClobbopusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGrapploctSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIMBER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSinisteaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WEAK_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSinisteaAntiqueSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WEAK_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPolteageistSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WEAK_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPolteageistAntiqueSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WEAK_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHatennaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HEALER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHattremSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HEALER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHattereneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HEALER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sImpidimpSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRANKSTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSeelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_BUBBLE_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_BODY_SLAM,
			MOVE_HORN_DRILL,
			MOVE_SURF,
		}
	},
};

static const struct SmogonVariant sMorgremSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRANKSTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGrimmsnarlSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRANKSTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sObstagoonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RECKLESS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPerrserkerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BATTLE_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCursolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WEAK_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSirfetchdSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEADFAST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMrRimeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TANGLED_FEET,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRunerigusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WANDERING_SPIRIT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMilcerySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWEET_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAlcremieSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWEET_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDewgongSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_SURF,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_ICE_BEAM,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_HORN_DRILL,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_HORN_DRILL,
			MOVE_DOUBLE_TEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_HORN_DRILL,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_AURORA_BEAM,
			MOVE_HEADBUTT,
			MOVE_REST,
			MOVE_SURF,
		}
	},
};

static const struct SmogonVariant sFalinksSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BATTLE_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPincurchinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSnomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFrosmothSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELD_DUST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sStonjournerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POWER_SPOT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEiscueSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ICE_FACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIndeedeeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIndeedeeFSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMorpekoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUNGER_SWITCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCufantSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHEER_FORCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCopperajahSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHEER_FORCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGrimerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_FIRE_BLAST,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_MEGA_DRAIN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLUDGE,
			MOVE_THUNDERBOLT,
			MOVE_FIRE_BLAST,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLUDGE,
			MOVE_THUNDERBOLT,
			MOVE_MEGA_DRAIN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SLUDGE,
			MOVE_THUNDERBOLT,
			MOVE_MEGA_DRAIN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_SLUDGE,
			MOVE_BODY_SLAM,
			MOVE_SCREECH,
			MOVE_EXPLOSION,
		}
	},
};

static const struct SmogonVariant sGrimerAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_TOUCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDracozoltSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArctozoltSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDracovishSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArctovishSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDuraludonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHT_METAL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDreepySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDrakloakSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDragapultSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CLEAR_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZacianSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTREPID_SWORD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZacianCrownedSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTREPID_SWORD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZamazentaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAUNTLESS_SHIELD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZamazentaCrownedSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DAUNTLESS_SHIELD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMukSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EXPLOSION,
			MOVE_BODY_SLAM,
			MOVE_FIRE_BLAST,
			MOVE_THUNDERBOLT,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ACID_ARMOR,
			MOVE_BODY_SLAM,
			MOVE_REST,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_FIRE_BLAST,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_BODY_SLAM,
			MOVE_MEGA_DRAIN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(25, 32, 32, 24, 24, 0),
		.moves = {
			MOVE_SLUDGE,
			MOVE_THUNDERBOLT,
			MOVE_HYPER_BEAM,
			MOVE_SELF_DESTRUCT,
		}
	},
};

static const struct SmogonVariant sMukAlolaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_TOUCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEternatusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKubfuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sUrshifuSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNSEEN_FIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sUrshifuRapidStrikeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNSEEN_FIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZarudeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEAF_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZarudeDadaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEAF_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRegielekiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRANSISTOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRegidragoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DRAGONS_MAW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGlastrierSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHILLING_NEIGH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSpectrierSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GRIM_NEIGH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCalyrexSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNNERVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCalyrexIceSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AS_ONE_SHADOW_RIDER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCalyrexShadowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AS_ONE_SHADOW_RIDER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWyrdeerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBlastoiseSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_SEISMIC_TOSS,
			MOVE_COUNTER,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_EARTHQUAKE,
			MOVE_HYDRO_PUMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_DIG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_FISSURE,
			MOVE_BODY_SLAM,
			MOVE_DIG,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_BODY_SLAM,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_COUNTER,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(8, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_HYDRO_PUMP,
			MOVE_SKULL_BASH,
			MOVE_WITHDRAW,
			MOVE_SEISMIC_TOSS,
		}
	},
};

static const struct SmogonVariant sShellderSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_SURF,
			MOVE_DOUBLE_EDGE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_DOUBLE_EDGE,
			MOVE_BLIZZARD,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_DOUBLE_EDGE,
			MOVE_DOUBLE_EDGE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_CLAMP,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_CLAMP,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_CLAMP,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_SURF,
			MOVE_EXPLOSION,
			MOVE_BLIZZARD,
			MOVE_TRI_ATTACK,
		}
	},
};

static const struct SmogonVariant sKleavorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sUrsalunaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sUrsalunaBloodmoonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MINDS_EYE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBasculegionSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBasculegionFSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSneaslerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOverqwilSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEnamorusSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUTE_CHARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEnamorusTherianSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERCOAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSprigatitoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFloragatoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMeowscaradaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFuecocoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCloysterSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_BLIZZARD,
			MOVE_REST,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_CLAMP,
			MOVE_EXPLOSION,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_BLIZZARD,
			MOVE_SURF,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_BLIZZARD,
			MOVE_SURF,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_BLIZZARD,
			MOVE_REST,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_BLIZZARD,
			MOVE_REST,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_CLAMP,
			MOVE_TOXIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_CLAMP,
			MOVE_SURF,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_CLAMP,
			MOVE_HYPER_BEAM,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_CLAMP,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_SURF,
			MOVE_TOXIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_SURF,
			MOVE_HYPER_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_LEER,
			MOVE_TOXIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BLIZZARD,
			MOVE_LEER,
			MOVE_HYPER_BEAM,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_EXPLOSION,
			MOVE_BLIZZARD,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_EXPLOSION,
			MOVE_BLIZZARD,
			MOVE_HYPER_BEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_EXPLOSION,
			MOVE_BLIZZARD,
			MOVE_SCREECH,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_BLIZZARD,
			MOVE_REST,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_ICE_BEAM,
			MOVE_SURF,
			MOVE_REST,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_DOUBLE_EDGE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_TRI_ATTACK,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(105, 104, 104, 104, 104, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_SPIKE_CANNON,
			MOVE_ICE_BEAM,
			MOVE_SUPERSONIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_CLAMP,
			MOVE_SELF_DESTRUCT,
			MOVE_SPIKE_CANNON,
			MOVE_ICE_BEAM,
		}
	},
};

static const struct SmogonVariant sCrocalorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSkeledirgeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sQuaxlySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sQuaxwellSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sQuaquavalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLechonkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AROMA_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOinkologneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LINGERING_AROMA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOinkologneFSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AROMA_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTarountulaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSpidopsSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNymbleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGastlySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_MEGA_DRAIN,
			MOVE_NIGHT_SHADE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_MEGA_DRAIN,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_NIGHT_SHADE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_PSYCHIC,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_MEGA_DRAIN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_MEGA_DRAIN,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_MEGA_DRAIN,
			MOVE_MEGA_DRAIN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_NIGHT_SHADE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_NIGHT_SHADE,
			MOVE_EXPLOSION,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_DREAM_EATER,
			MOVE_PSYCHIC,
			MOVE_CONFUSE_RAY,
		}
	},
};

static const struct SmogonVariant sLokixSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPawmiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPawmoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPawmotSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VOLT_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTandemausSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMausholdSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FRIEND_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMausholdFourSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FRIEND_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFidoughSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDachsbunSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WELL_BAKED_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSmolivSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDollivSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARLY_BIRD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHaunterSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
			MOVE_PSYCHIC,
			MOVE_NIGHT_SHADE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
			MOVE_PSYCHIC,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_NIGHT_SHADE,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_NIGHT_SHADE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_CONFUSE_RAY,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER,
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER,
			MOVE_PSYCHIC,
			MOVE_NIGHT_SHADE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER,
			MOVE_PSYCHIC,
			MOVE_CONFUSE_RAY,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 44, 48, 40, 48, 0),
		.moves = {
			MOVE_MEGA_DRAIN,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_MEGA_DRAIN,
			MOVE_THUNDERBOLT,
			MOVE_MIMIC,
			MOVE_PSYCHIC,
		}
	},
};

static const struct SmogonVariant sArbolivaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SEED_SOWER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSquawkabillySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSquawkabillyBlueSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSquawkabillyWhiteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSquawkabillyYellowSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNacliSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PURIFYING_SALT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNaclstackSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PURIFYING_SALT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGarganaclSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PURIFYING_SALT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCharcadetSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArmarougeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCeruledgeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTadbulbSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OWN_TEMPO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBelliboltSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ELECTROMORPHOSIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGengarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_NIGHT_SHADE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_NIGHT_SHADE,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_DREAM_EATER,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_DREAM_EATER,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDER,
			MOVE_PSYCHIC,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDER,
			MOVE_PSYCHIC,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDER,
			MOVE_DREAM_EATER,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDER,
			MOVE_DREAM_EATER,
			MOVE_DOUBLE_TEAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_REST,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_REST,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_ICE_PUNCH,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDERBOLT,
			MOVE_NIGHT_SHADE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NIGHT_SHADE,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NIGHT_SHADE,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
			MOVE_HYPNOSIS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NIGHT_SHADE,
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
			MOVE_MEGA_DRAIN,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_MEGA_DRAIN,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_NIGHT_SHADE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_THUNDERBOLT,
			MOVE_NIGHT_SHADE,
			MOVE_HYPNOSIS,
			MOVE_CONFUSE_RAY,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(97, 88, 96, 96, 96, 0),
		.moves = {
			MOVE_CONFUSE_RAY,
			MOVE_NIGHT_SHADE,
			MOVE_SELF_DESTRUCT,
			MOVE_METRONOME,
		}
	},
};

static const struct SmogonVariant sWattrelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WIND_POWER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKilowattrelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WIND_POWER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMaschiffSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMabosstiffSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sShroodleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNBURDEN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGrafaiaiSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNBURDEN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBramblinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WIND_RIDER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBrambleghastSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WIND_RIDER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sToedscoolSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MYCELIUM_MIGHT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sToedscruelSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MYCELIUM_MIGHT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOnixSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_EXPLOSION,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_EXPLOSION,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BIND,
			MOVE_TOXIC,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BIND,
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BIND,
			MOVE_TOXIC,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ROCK_HEAD,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(49, 40, 48, 40, 48, 0),
		.moves = {
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_STRENGTH,
			MOVE_EXPLOSION,
		}
	},
};

static const struct SmogonVariant sKlawfSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ANGER_SHELL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCapsakidSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sScovillainSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CHLOROPHYLL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRellorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRabscaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SYNCHRONIZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFlittleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ANTICIPATION,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEspathraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OPPORTUNIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTinkatinkSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MOLD_BREAKER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTinkatuffSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MOLD_BREAKER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTinkatonSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MOLD_BREAKER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDrowzeeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_HYPNOSIS,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_HYPNOSIS,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_HYPNOSIS,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_HYPNOSIS,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_HYPNOSIS,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_BODY_SLAM,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_HYPNOSIS,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_DREAM_EATER,
			MOVE_PSYCHIC,
			MOVE_TRI_ATTACK,
		}
	},
};

static const struct SmogonVariant sWiglettSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GOOEY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWugtrioSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GOOEY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBombirdierSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BIG_PECKS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFinizenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPalafinSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ZERO_TO_HERO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVaroomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERCOAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRevavroomSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERCOAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCyclizarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHED_SKIN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOrthwormSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EARTH_EATER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGlimmetSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOXIC_DEBRIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHypnoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_HYPNOSIS,
			MOVE_THUNDER_WAVE,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_HYPNOSIS,
			MOVE_THUNDER_WAVE,
			MOVE_SUBMISSION,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_HYPNOSIS,
			MOVE_THUNDER_WAVE,
			MOVE_COUNTER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_THUNDER_WAVE,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_TOXIC,
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_TOXIC,
			MOVE_PSYCHIC,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_REFLECT,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_REFLECT,
			MOVE_HYPNOSIS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_ICE_PUNCH,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_ICE_PUNCH,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_ICE_PUNCH,
			MOVE_HYPNOSIS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_THUNDER_PUNCH,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_THUNDER_PUNCH,
			MOVE_THUNDER_WAVE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_AMNESIA,
			MOVE_PSYCHIC,
			MOVE_THUNDER_PUNCH,
			MOVE_HYPNOSIS,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_COUNTER,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_PSYCHIC,
			MOVE_SEISMIC_TOSS,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_HYPNOSIS,
			MOVE_HEADBUTT,
			MOVE_DREAM_EATER,
			MOVE_MEDITATE,
		}
	},
};

static const struct SmogonVariant sGlimmoraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOXIC_DEBRIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGreavardSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHoundstoneSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_RUSH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFlamigoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SCRAPPY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCetoddleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCetitanSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVeluzaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MOLD_BREAKER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDondozoSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNAWARE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTatsugiriSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMMANDER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAnnihilapeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_VITAL_SPIRIT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKrabbySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_CRABHAMMER,
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_CRABHAMMER,
			MOVE_BLIZZARD,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_CRABHAMMER,
			MOVE_STOMP,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_CRABHAMMER,
			MOVE_STOMP,
			MOVE_SWORDS_DANCE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_CRABHAMMER,
			MOVE_BODY_SLAM,
			MOVE_STOMP,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_CRABHAMMER,
			MOVE_BODY_SLAM,
			MOVE_BLIZZARD,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_CRABHAMMER,
			MOVE_GUILLOTINE,
			MOVE_DOUBLE_EDGE,
			MOVE_BLIZZARD,
		}
	},
};

static const struct SmogonVariant sClodsireSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POISON_POINT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFarigirafSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CUD_CHEW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDudunsparceSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SERENE_GRACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDudunsparceThreeSegmentSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SERENE_GRACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKingambitSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DEFIANT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGreatTuskSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PROTOSYNTHESIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sScreamTailSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PROTOSYNTHESIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBruteBonnetSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PROTOSYNTHESIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFlutterManeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PROTOSYNTHESIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSlitherWingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PROTOSYNTHESIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSandyShocksSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PROTOSYNTHESIS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKinglerSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_CRABHAMMER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_CRABHAMMER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_CRABHAMMER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_CRABHAMMER,
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_CRABHAMMER,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_CRABHAMMER,
			MOVE_GUILLOTINE,
			MOVE_STOMP,
			MOVE_SUBSTITUTE,
		}
	},
};

static const struct SmogonVariant sIronTreadsSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUARK_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIronBundleSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUARK_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIronHandsSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUARK_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIronJugulisSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUARK_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIronMothSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUARK_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sIronThornsSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_QUARK_DRIVE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFrigibaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THERMAL_EXCHANGE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sArctibaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THERMAL_EXCHANGE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBaxcaliburSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THERMAL_EXCHANGE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGimmighoulSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RATTLED,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGimmighoulRoamingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVenusaurMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_THICK_FAT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDiancieMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGIC_BOUNCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEiscueNoiceSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ICE_FACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOrbeetleGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWARM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCoalossalGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEAM_ENGINE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMorpekoHangrySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUNGER_SWITCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTerapagosStellarSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TERAFORM_ZERO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOgerponHearthflameTeraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOgerponWellspringTeraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EMBODY_ASPECT_WELLSPRING_MASK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRayquazaMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DELTA_STREAM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGardevoirMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PIXILATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDarmanitanGalarZenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ZEN_MODE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCharizardGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLaprasGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_WATER_ABSORB,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSandacondaGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_SPIT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMetagrossMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOUGH_CLAWS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOgerponCornerstoneTeraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGyaradosMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MOLD_BREAKER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTerapagosTerastalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TERA_SHELL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sScizorMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TECHNICIAN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBeedrillMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ADAPTABILITY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAmpharosMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MOLD_BREAKER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPinsirMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AERILATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sManectricMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INTIMIDATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGrimmsnarlGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRANKSTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGreninjaAshSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BATTLE_BOND,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGengarGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_CURSED_BODY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMelmetalGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IRON_FIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAegislashBladeSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STANCE_CHANGE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGalladeMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INNER_FOCUS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMimikyuBustedSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DISGUISE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHeracrossMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SKILL_LINK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sUrshifuGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNSEEN_FIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBlastoiseMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MEGA_LAUNCHER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sWishiwashiSchoolSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SCHOOLING,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCastformSunnySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FORECAST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLopunnyMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SCRAPPY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCameruptMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHEER_FORCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCramorantGorgingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GULP_MISSILE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKangaskhanMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PARENTAL_BOND,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCastformSnowySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FORECAST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBlastoiseGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sTyranitarMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_STREAM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPidgeotMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NO_GUARD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGarchompMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_FORCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMiniorMeteorSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHIELDS_DOWN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sOgerponTealTeraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_EMBODY_ASPECT_TEAL_MASK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCharizardMegaYSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DROUGHT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGengarMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHADOW_TAG,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAudinoMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HEALER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAerodactylMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOUGH_CLAWS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMedichamMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PURE_POWER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCharizardMegaXSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TOUGH_CLAWS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSwampertMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWIFT_SWIM,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDrednawGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STRONG_JAW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMeowthGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PICKUP,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPalafinHeroSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ZERO_TO_HERO,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBanetteMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRANKSTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCentiskorchGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLASH_FIRE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAlcremieGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SWEET_VEIL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sNecrozmaUltraSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_NEUROFORCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMawileMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HUGE_POWER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMachampGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GUTS,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLucarioMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ADAPTABILITY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCastformRainySmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FORECAST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLatiosMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sToxtricityLowKeyGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PUNK_ROCK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMewtwoMegaXSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STEADFAST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDuraludonGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHT_METAL,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sPikachuGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STATIC,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sBlazikenMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SPEED_BOOST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAbsolMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGIC_BOUNCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCherrimSunshineSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FLOWER_GIFT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGlalieMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_REFRIGERATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKinglerGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_BODY_SLAM,
			MOVE_HYPER_BEAM,
			MOVE_CRABHAMMER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_CRABHAMMER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_HYPER_BEAM,
			MOVE_BODY_SLAM,
			MOVE_CRABHAMMER,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_CRABHAMMER,
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_SWORDS_DANCE,
			MOVE_CRABHAMMER,
			MOVE_BODY_SLAM,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HYPER_CUTTER,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(9, 8, 8, 16, 8, 0),
		.moves = {
			MOVE_CRABHAMMER,
			MOVE_GUILLOTINE,
			MOVE_STOMP,
			MOVE_SUBSTITUTE,
		}
	},
};

static const struct SmogonVariant sCopperajahGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHEER_FORCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sEeveeGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_SAND_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_SUBSTITUTE,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
			MOVE_SAND_ATTACK,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_DOUBLE_EDGE,
			MOVE_REFLECT,
			MOVE_REST,
		}
	},
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RUN_AWAY,
		.nature = NATURE_ADAMANT,
		.ev = TRAINER_PARTY_EVS(73, 72, 64, 64, 72, 0),
		.moves = {
			MOVE_BODY_SLAM,
			MOVE_SWIFT,
			MOVE_SAND_ATTACK,
			MOVE_TOXIC,
		}
	},
};

static const struct SmogonVariant sToxtricityGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PUNK_ROCK,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMimikyuBustedTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DISGUISE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSableyeMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_MAGIC_BOUNCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sFlappleGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIPEN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSalamenceMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_AERILATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSlowbroMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SHELL_ARMOR,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGarbodorGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STENCH,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAggronMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_FILTER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sLatiasMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LEVITATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCinderaceGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_BLAZE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHattereneGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_HEALER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sButterfreeGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_COMPOUND_EYES,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAbomasnowMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SNOW_WARNING,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAltariaMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PIXILATE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sGroudonPrimalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_DESOLATE_LAND,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSteelixMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SAND_FORCE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sZygardeCompleteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_POWER_CONSTRUCT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sHoundoomMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SOLAR_POWER,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSharpedoMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_STRONG_JAW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAlakazamMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TRACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sRillaboomGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMewtwoMegaYSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_INSOMNIA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCorviknightGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRESSURE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sVenusaurGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_OVERGROW,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSnorlaxGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_IMMUNITY,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sDarmanitanZenSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_ZEN_MODE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sSceptileMegaSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_LIGHTNING_ROD,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sUrshifuRapidStrikeGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_UNSEEN_FIST,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sMeloettaPirouetteSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_SERENE_GRACE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sInteleonGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_TORRENT,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sKyogrePrimalSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_PRIMORDIAL_SEA,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sCramorantGulpingSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_GULP_MISSILE,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

static const struct SmogonVariant sAppletunGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_LEFTOVERS,
		.ability = ABILITY_RIPEN,
		.nature = NATURE_BOLD,
		.ev = TRAINER_PARTY_EVS(252, 0, 6, 252, 0, 0),
		.moves = {
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		}
	},
};

