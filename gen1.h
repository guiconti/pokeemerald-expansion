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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sWoChienSmogonVariants[] = {
};

static const struct SmogonVariant sChienPaoSmogonVariants[] = {
};

static const struct SmogonVariant sTingLuSmogonVariants[] = {
};

static const struct SmogonVariant sChiYuSmogonVariants[] = {
};

static const struct SmogonVariant sRoaringMoonSmogonVariants[] = {
};

static const struct SmogonVariant sIronValiantSmogonVariants[] = {
};

static const struct SmogonVariant sKoraidonSmogonVariants[] = {
};

static const struct SmogonVariant sMiraidonSmogonVariants[] = {
};

static const struct SmogonVariant sWalkingWakeSmogonVariants[] = {
};

static const struct SmogonVariant sElectrodeSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sIronLeavesSmogonVariants[] = {
};

static const struct SmogonVariant sDipplinSmogonVariants[] = {
};

static const struct SmogonVariant sPoltchageistSmogonVariants[] = {
};

static const struct SmogonVariant sPoltchageistArtisanSmogonVariants[] = {
};

static const struct SmogonVariant sSinistchaSmogonVariants[] = {
};

static const struct SmogonVariant sSinistchaMasterpieceSmogonVariants[] = {
};

static const struct SmogonVariant sOkidogiSmogonVariants[] = {
};

static const struct SmogonVariant sMunkidoriSmogonVariants[] = {
};

static const struct SmogonVariant sFezandipitiSmogonVariants[] = {
};

static const struct SmogonVariant sOgerponSmogonVariants[] = {
};

static const struct SmogonVariant sOgerponCornerstoneSmogonVariants[] = {
};

static const struct SmogonVariant sOgerponHearthflameSmogonVariants[] = {
};

static const struct SmogonVariant sOgerponWellspringSmogonVariants[] = {
};

static const struct SmogonVariant sArchaludonSmogonVariants[] = {
};

static const struct SmogonVariant sHydrappleSmogonVariants[] = {
};

static const struct SmogonVariant sExeggcuteSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sRagingBoltSmogonVariants[] = {
};

static const struct SmogonVariant sIronBoulderSmogonVariants[] = {
};

static const struct SmogonVariant sIronCrownSmogonVariants[] = {
};

static const struct SmogonVariant sTerapagosSmogonVariants[] = {
};

static const struct SmogonVariant sPecharuntSmogonVariants[] = {
};

static const struct SmogonVariant sExeggutorSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sCuboneSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sMarowakAlolaTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sRhyhornSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sTaurosPaldeaBlazeSmogonVariants[] = {
};

static const struct SmogonVariant sTaurosPaldeaCombatSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sVaporeonSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sZapdosSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sMoltresSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sDratiniSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sBayleefSmogonVariants[] = {
};

static const struct SmogonVariant sMeganiumSmogonVariants[] = {
};

static const struct SmogonVariant sCyndaquilSmogonVariants[] = {
};

static const struct SmogonVariant sQuilavaSmogonVariants[] = {
};

static const struct SmogonVariant sTyphlosionSmogonVariants[] = {
};

static const struct SmogonVariant sTyphlosionHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sTotodileSmogonVariants[] = {
};

static const struct SmogonVariant sCroconawSmogonVariants[] = {
};

static const struct SmogonVariant sPidgeySmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sSentretSmogonVariants[] = {
};

static const struct SmogonVariant sFurretSmogonVariants[] = {
};

static const struct SmogonVariant sHoothootSmogonVariants[] = {
};

static const struct SmogonVariant sNoctowlSmogonVariants[] = {
};

static const struct SmogonVariant sLedybaSmogonVariants[] = {
};

static const struct SmogonVariant sLedianSmogonVariants[] = {
};

static const struct SmogonVariant sSpinarakSmogonVariants[] = {
};

static const struct SmogonVariant sAriadosSmogonVariants[] = {
};

static const struct SmogonVariant sCrobatSmogonVariants[] = {
};

static const struct SmogonVariant sPidgeottoSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sLanturnSmogonVariants[] = {
};

static const struct SmogonVariant sPichuSmogonVariants[] = {
};

static const struct SmogonVariant sCleffaSmogonVariants[] = {
};

static const struct SmogonVariant sIgglybuffSmogonVariants[] = {
};

static const struct SmogonVariant sTogepiSmogonVariants[] = {
};

static const struct SmogonVariant sTogeticSmogonVariants[] = {
};

static const struct SmogonVariant sNatuSmogonVariants[] = {
};

static const struct SmogonVariant sXatuSmogonVariants[] = {
};

static const struct SmogonVariant sMareepSmogonVariants[] = {
};

static const struct SmogonVariant sPidgeotSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sAmpharosSmogonVariants[] = {
};

static const struct SmogonVariant sBellossomSmogonVariants[] = {
};

static const struct SmogonVariant sMarillSmogonVariants[] = {
};

static const struct SmogonVariant sAzumarillSmogonVariants[] = {
};

static const struct SmogonVariant sSudowoodoSmogonVariants[] = {
};

static const struct SmogonVariant sPolitoedSmogonVariants[] = {
};

static const struct SmogonVariant sHoppipSmogonVariants[] = {
};

static const struct SmogonVariant sSkiploomSmogonVariants[] = {
};

static const struct SmogonVariant sJumpluffSmogonVariants[] = {
};

static const struct SmogonVariant sRattataSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sAipomSmogonVariants[] = {
};

static const struct SmogonVariant sSunkernSmogonVariants[] = {
};

static const struct SmogonVariant sSunfloraSmogonVariants[] = {
};

static const struct SmogonVariant sYanmaSmogonVariants[] = {
};

static const struct SmogonVariant sWooperSmogonVariants[] = {
};

static const struct SmogonVariant sWooperPaldeaSmogonVariants[] = {
};

static const struct SmogonVariant sQuagsireSmogonVariants[] = {
};

static const struct SmogonVariant sEspeonSmogonVariants[] = {
};

static const struct SmogonVariant sUmbreonSmogonVariants[] = {
};

static const struct SmogonVariant sMurkrowSmogonVariants[] = {
};

static const struct SmogonVariant sSlowkingSmogonVariants[] = {
};

static const struct SmogonVariant sSlowkingGalarSmogonVariants[] = {
};

static const struct SmogonVariant sIvysaurSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sRaticateAlolaTotemSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sUnownSmogonVariants[] = {
};

static const struct SmogonVariant sWobbuffetSmogonVariants[] = {
};

static const struct SmogonVariant sGirafarigSmogonVariants[] = {
};

static const struct SmogonVariant sPinecoSmogonVariants[] = {
};

static const struct SmogonVariant sForretressSmogonVariants[] = {
};

static const struct SmogonVariant sDunsparceSmogonVariants[] = {
};

static const struct SmogonVariant sGligarSmogonVariants[] = {
};

static const struct SmogonVariant sSteelixSmogonVariants[] = {
};

static const struct SmogonVariant sSnubbullSmogonVariants[] = {
};

static const struct SmogonVariant sSpearowSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sQwilfishSmogonVariants[] = {
};

static const struct SmogonVariant sQwilfishHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sScizorSmogonVariants[] = {
};

static const struct SmogonVariant sShuckleSmogonVariants[] = {
};

static const struct SmogonVariant sHeracrossSmogonVariants[] = {
};

static const struct SmogonVariant sSneaselSmogonVariants[] = {
};

static const struct SmogonVariant sSneaselHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sTeddiursaSmogonVariants[] = {
};

static const struct SmogonVariant sUrsaringSmogonVariants[] = {
};

static const struct SmogonVariant sSlugmaSmogonVariants[] = {
};

static const struct SmogonVariant sMagcargoSmogonVariants[] = {
};

static const struct SmogonVariant sFearowSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sPiloswineSmogonVariants[] = {
};

static const struct SmogonVariant sCorsolaSmogonVariants[] = {
};

static const struct SmogonVariant sCorsolaGalarSmogonVariants[] = {
};

static const struct SmogonVariant sRemoraidSmogonVariants[] = {
};

static const struct SmogonVariant sOctillerySmogonVariants[] = {
};

static const struct SmogonVariant sDelibirdSmogonVariants[] = {
};

static const struct SmogonVariant sMantineSmogonVariants[] = {
};

static const struct SmogonVariant sSkarmorySmogonVariants[] = {
};

static const struct SmogonVariant sHoundourSmogonVariants[] = {
};

static const struct SmogonVariant sHoundoomSmogonVariants[] = {
};

static const struct SmogonVariant sEkansSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sPhanpySmogonVariants[] = {
};

static const struct SmogonVariant sDonphanSmogonVariants[] = {
};

static const struct SmogonVariant sPorygon2SmogonVariants[] = {
};

static const struct SmogonVariant sStantlerSmogonVariants[] = {
};

static const struct SmogonVariant sSmeargleSmogonVariants[] = {
};

static const struct SmogonVariant sTyrogueSmogonVariants[] = {
};

static const struct SmogonVariant sHitmontopSmogonVariants[] = {
};

static const struct SmogonVariant sSmoochumSmogonVariants[] = {
};

static const struct SmogonVariant sElekidSmogonVariants[] = {
};

static const struct SmogonVariant sArbokSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sMiltankSmogonVariants[] = {
};

static const struct SmogonVariant sBlisseySmogonVariants[] = {
};

static const struct SmogonVariant sRaikouSmogonVariants[] = {
};

static const struct SmogonVariant sEnteiSmogonVariants[] = {
};

static const struct SmogonVariant sSuicuneSmogonVariants[] = {
};

static const struct SmogonVariant sLarvitarSmogonVariants[] = {
};

static const struct SmogonVariant sPupitarSmogonVariants[] = {
};

static const struct SmogonVariant sTyranitarSmogonVariants[] = {
};

static const struct SmogonVariant sLugiaSmogonVariants[] = {
};

static const struct SmogonVariant sPikachuSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sPikachuUnovaSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sCelebiSmogonVariants[] = {
};

static const struct SmogonVariant sTreeckoSmogonVariants[] = {
};

static const struct SmogonVariant sGrovyleSmogonVariants[] = {
};

static const struct SmogonVariant sSceptileSmogonVariants[] = {
};

static const struct SmogonVariant sTorchicSmogonVariants[] = {
};

static const struct SmogonVariant sCombuskenSmogonVariants[] = {
};

static const struct SmogonVariant sBlazikenSmogonVariants[] = {
};

static const struct SmogonVariant sMudkipSmogonVariants[] = {
};

static const struct SmogonVariant sMarshtompSmogonVariants[] = {
};

static const struct SmogonVariant sRaichuSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sSwampertSmogonVariants[] = {
};

static const struct SmogonVariant sPoochyenaSmogonVariants[] = {
};

static const struct SmogonVariant sMightyenaSmogonVariants[] = {
};

static const struct SmogonVariant sZigzagoonSmogonVariants[] = {
};

static const struct SmogonVariant sZigzagoonGalarSmogonVariants[] = {
};

static const struct SmogonVariant sLinooneSmogonVariants[] = {
};

static const struct SmogonVariant sLinooneGalarSmogonVariants[] = {
};

static const struct SmogonVariant sWurmpleSmogonVariants[] = {
};

static const struct SmogonVariant sSilcoonSmogonVariants[] = {
};

static const struct SmogonVariant sBeautiflySmogonVariants[] = {
};

static const struct SmogonVariant sCascoonSmogonVariants[] = {
};

static const struct SmogonVariant sDustoxSmogonVariants[] = {
};

static const struct SmogonVariant sSandshrewSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sLotadSmogonVariants[] = {
};

static const struct SmogonVariant sLombreSmogonVariants[] = {
};

static const struct SmogonVariant sLudicoloSmogonVariants[] = {
};

static const struct SmogonVariant sSeedotSmogonVariants[] = {
};

static const struct SmogonVariant sNuzleafSmogonVariants[] = {
};

static const struct SmogonVariant sShiftrySmogonVariants[] = {
};

static const struct SmogonVariant sTaillowSmogonVariants[] = {
};

static const struct SmogonVariant sSwellowSmogonVariants[] = {
};

static const struct SmogonVariant sWingullSmogonVariants[] = {
};

static const struct SmogonVariant sPelipperSmogonVariants[] = {
};

static const struct SmogonVariant sSandslashSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sRaltsSmogonVariants[] = {
};

static const struct SmogonVariant sKirliaSmogonVariants[] = {
};

static const struct SmogonVariant sGardevoirSmogonVariants[] = {
};

static const struct SmogonVariant sSurskitSmogonVariants[] = {
};

static const struct SmogonVariant sMasquerainSmogonVariants[] = {
};

static const struct SmogonVariant sShroomishSmogonVariants[] = {
};

static const struct SmogonVariant sBreloomSmogonVariants[] = {
};

static const struct SmogonVariant sSlakothSmogonVariants[] = {
};

static const struct SmogonVariant sVigorothSmogonVariants[] = {
};

static const struct SmogonVariant sSlakingSmogonVariants[] = {
};

static const struct SmogonVariant sNidoranFSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sNinjaskSmogonVariants[] = {
};

static const struct SmogonVariant sShedinjaSmogonVariants[] = {
};

static const struct SmogonVariant sWhismurSmogonVariants[] = {
};

static const struct SmogonVariant sLoudredSmogonVariants[] = {
};

static const struct SmogonVariant sExploudSmogonVariants[] = {
};

static const struct SmogonVariant sMakuhitaSmogonVariants[] = {
};

static const struct SmogonVariant sHariyamaSmogonVariants[] = {
};

static const struct SmogonVariant sAzurillSmogonVariants[] = {
};

static const struct SmogonVariant sNosepassSmogonVariants[] = {
};

static const struct SmogonVariant sVenusaurSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sDelcattySmogonVariants[] = {
};

static const struct SmogonVariant sSableyeSmogonVariants[] = {
};

static const struct SmogonVariant sMawileSmogonVariants[] = {
};

static const struct SmogonVariant sAronSmogonVariants[] = {
};

static const struct SmogonVariant sLaironSmogonVariants[] = {
};

static const struct SmogonVariant sAggronSmogonVariants[] = {
};

static const struct SmogonVariant sMedititeSmogonVariants[] = {
};

static const struct SmogonVariant sMedichamSmogonVariants[] = {
};

static const struct SmogonVariant sElectrikeSmogonVariants[] = {
};

static const struct SmogonVariant sNidoqueenSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sPlusleSmogonVariants[] = {
};

static const struct SmogonVariant sMinunSmogonVariants[] = {
};

static const struct SmogonVariant sVolbeatSmogonVariants[] = {
};

static const struct SmogonVariant sIllumiseSmogonVariants[] = {
};

static const struct SmogonVariant sRoseliaSmogonVariants[] = {
};

static const struct SmogonVariant sGulpinSmogonVariants[] = {
};

static const struct SmogonVariant sSwalotSmogonVariants[] = {
};

static const struct SmogonVariant sCarvanhaSmogonVariants[] = {
};

static const struct SmogonVariant sSharpedoSmogonVariants[] = {
};

static const struct SmogonVariant sNidoranMSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sWailordSmogonVariants[] = {
};

static const struct SmogonVariant sNumelSmogonVariants[] = {
};

static const struct SmogonVariant sCameruptSmogonVariants[] = {
};

static const struct SmogonVariant sTorkoalSmogonVariants[] = {
};

static const struct SmogonVariant sSpoinkSmogonVariants[] = {
};

static const struct SmogonVariant sGrumpigSmogonVariants[] = {
};

static const struct SmogonVariant sSpindaSmogonVariants[] = {
};

static const struct SmogonVariant sTrapinchSmogonVariants[] = {
};

static const struct SmogonVariant sVibravaSmogonVariants[] = {
};

static const struct SmogonVariant sNidorinoSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sCacneaSmogonVariants[] = {
};

static const struct SmogonVariant sCacturneSmogonVariants[] = {
};

static const struct SmogonVariant sSwabluSmogonVariants[] = {
};

static const struct SmogonVariant sAltariaSmogonVariants[] = {
};

static const struct SmogonVariant sZangooseSmogonVariants[] = {
};

static const struct SmogonVariant sSeviperSmogonVariants[] = {
};

static const struct SmogonVariant sLunatoneSmogonVariants[] = {
};

static const struct SmogonVariant sSolrockSmogonVariants[] = {
};

static const struct SmogonVariant sBarboachSmogonVariants[] = {
};

static const struct SmogonVariant sNidokingSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sCorphishSmogonVariants[] = {
};

static const struct SmogonVariant sCrawdauntSmogonVariants[] = {
};

static const struct SmogonVariant sBaltoySmogonVariants[] = {
};

static const struct SmogonVariant sClaydolSmogonVariants[] = {
};

static const struct SmogonVariant sLileepSmogonVariants[] = {
};

static const struct SmogonVariant sCradilySmogonVariants[] = {
};

static const struct SmogonVariant sAnorithSmogonVariants[] = {
};

static const struct SmogonVariant sArmaldoSmogonVariants[] = {
};

static const struct SmogonVariant sFeebasSmogonVariants[] = {
};

static const struct SmogonVariant sClefairySmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sCastformSmogonVariants[] = {
};

static const struct SmogonVariant sKecleonSmogonVariants[] = {
};

static const struct SmogonVariant sShuppetSmogonVariants[] = {
};

static const struct SmogonVariant sBanetteSmogonVariants[] = {
};

static const struct SmogonVariant sDuskullSmogonVariants[] = {
};

static const struct SmogonVariant sDusclopsSmogonVariants[] = {
};

static const struct SmogonVariant sTropiusSmogonVariants[] = {
};

static const struct SmogonVariant sChimechoSmogonVariants[] = {
};

static const struct SmogonVariant sAbsolSmogonVariants[] = {
};

static const struct SmogonVariant sClefableSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sSnoruntSmogonVariants[] = {
};

static const struct SmogonVariant sGlalieSmogonVariants[] = {
};

static const struct SmogonVariant sSphealSmogonVariants[] = {
};

static const struct SmogonVariant sSealeoSmogonVariants[] = {
};

static const struct SmogonVariant sWalreinSmogonVariants[] = {
};

static const struct SmogonVariant sClamperlSmogonVariants[] = {
};

static const struct SmogonVariant sHuntailSmogonVariants[] = {
};

static const struct SmogonVariant sGorebyssSmogonVariants[] = {
};

static const struct SmogonVariant sRelicanthSmogonVariants[] = {
};

static const struct SmogonVariant sVulpixSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sLuvdiscSmogonVariants[] = {
};

static const struct SmogonVariant sBagonSmogonVariants[] = {
};

static const struct SmogonVariant sShelgonSmogonVariants[] = {
};

static const struct SmogonVariant sSalamenceSmogonVariants[] = {
};

static const struct SmogonVariant sBeldumSmogonVariants[] = {
};

static const struct SmogonVariant sMetangSmogonVariants[] = {
};

static const struct SmogonVariant sMetagrossSmogonVariants[] = {
};

static const struct SmogonVariant sRegirockSmogonVariants[] = {
};

static const struct SmogonVariant sRegiceSmogonVariants[] = {
};

static const struct SmogonVariant sRegisteelSmogonVariants[] = {
};

static const struct SmogonVariant sNinetalesSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sLatiasSmogonVariants[] = {
};

static const struct SmogonVariant sLatiosSmogonVariants[] = {
};

static const struct SmogonVariant sKyogreSmogonVariants[] = {
};

static const struct SmogonVariant sGroudonSmogonVariants[] = {
};

static const struct SmogonVariant sRayquazaSmogonVariants[] = {
};

static const struct SmogonVariant sJirachiSmogonVariants[] = {
};

static const struct SmogonVariant sDeoxysSmogonVariants[] = {
};

static const struct SmogonVariant sDeoxysAttackSmogonVariants[] = {
};

static const struct SmogonVariant sDeoxysDefenseSmogonVariants[] = {
};

static const struct SmogonVariant sDeoxysSpeedSmogonVariants[] = {
};

static const struct SmogonVariant sTurtwigSmogonVariants[] = {
};

static const struct SmogonVariant sGrotleSmogonVariants[] = {
};

static const struct SmogonVariant sTorterraSmogonVariants[] = {
};

static const struct SmogonVariant sJigglypuffSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sMonfernoSmogonVariants[] = {
};

static const struct SmogonVariant sInfernapeSmogonVariants[] = {
};

static const struct SmogonVariant sPiplupSmogonVariants[] = {
};

static const struct SmogonVariant sPrinplupSmogonVariants[] = {
};

static const struct SmogonVariant sEmpoleonSmogonVariants[] = {
};

static const struct SmogonVariant sStarlySmogonVariants[] = {
};

static const struct SmogonVariant sStaraviaSmogonVariants[] = {
};

static const struct SmogonVariant sStaraptorSmogonVariants[] = {
};

static const struct SmogonVariant sBidoofSmogonVariants[] = {
};

static const struct SmogonVariant sCharmanderSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sKricketotSmogonVariants[] = {
};

static const struct SmogonVariant sKricketuneSmogonVariants[] = {
};

static const struct SmogonVariant sShinxSmogonVariants[] = {
};

static const struct SmogonVariant sLuxioSmogonVariants[] = {
};

static const struct SmogonVariant sLuxraySmogonVariants[] = {
};

static const struct SmogonVariant sBudewSmogonVariants[] = {
};

static const struct SmogonVariant sRoseradeSmogonVariants[] = {
};

static const struct SmogonVariant sCranidosSmogonVariants[] = {
};

static const struct SmogonVariant sRampardosSmogonVariants[] = {
};

static const struct SmogonVariant sZubatSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sBastiodonSmogonVariants[] = {
};

static const struct SmogonVariant sBurmySmogonVariants[] = {
};

static const struct SmogonVariant sWormadamSmogonVariants[] = {
};

static const struct SmogonVariant sWormadamSandySmogonVariants[] = {
};

static const struct SmogonVariant sWormadamTrashSmogonVariants[] = {
};

static const struct SmogonVariant sMothimSmogonVariants[] = {
};

static const struct SmogonVariant sCombeeSmogonVariants[] = {
};

static const struct SmogonVariant sVespiquenSmogonVariants[] = {
};

static const struct SmogonVariant sPachirisuSmogonVariants[] = {
};

static const struct SmogonVariant sBuizelSmogonVariants[] = {
};

static const struct SmogonVariant sFloatzelSmogonVariants[] = {
};

static const struct SmogonVariant sGolbatSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sCherrimSmogonVariants[] = {
};

static const struct SmogonVariant sShellosSmogonVariants[] = {
};

static const struct SmogonVariant sGastrodonSmogonVariants[] = {
};

static const struct SmogonVariant sAmbipomSmogonVariants[] = {
};

static const struct SmogonVariant sDrifloonSmogonVariants[] = {
};

static const struct SmogonVariant sDrifblimSmogonVariants[] = {
};

static const struct SmogonVariant sBunearySmogonVariants[] = {
};

static const struct SmogonVariant sLopunnySmogonVariants[] = {
};

static const struct SmogonVariant sMismagiusSmogonVariants[] = {
};

static const struct SmogonVariant sOddishSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sGlameowSmogonVariants[] = {
};

static const struct SmogonVariant sPuruglySmogonVariants[] = {
};

static const struct SmogonVariant sChinglingSmogonVariants[] = {
};

static const struct SmogonVariant sStunkySmogonVariants[] = {
};

static const struct SmogonVariant sSkuntankSmogonVariants[] = {
};

static const struct SmogonVariant sBronzorSmogonVariants[] = {
};

static const struct SmogonVariant sBronzongSmogonVariants[] = {
};

static const struct SmogonVariant sBonslySmogonVariants[] = {
};

static const struct SmogonVariant sMimeJrSmogonVariants[] = {
};

static const struct SmogonVariant sGloomSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sChatotSmogonVariants[] = {
};

static const struct SmogonVariant sSpiritombSmogonVariants[] = {
};

static const struct SmogonVariant sGibleSmogonVariants[] = {
};

static const struct SmogonVariant sGabiteSmogonVariants[] = {
};

static const struct SmogonVariant sGarchompSmogonVariants[] = {
};

static const struct SmogonVariant sMunchlaxSmogonVariants[] = {
};

static const struct SmogonVariant sRioluSmogonVariants[] = {
};

static const struct SmogonVariant sLucarioSmogonVariants[] = {
};

static const struct SmogonVariant sHippopotasSmogonVariants[] = {
};

static const struct SmogonVariant sVileplumeSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sSkorupiSmogonVariants[] = {
};

static const struct SmogonVariant sDrapionSmogonVariants[] = {
};

static const struct SmogonVariant sCroagunkSmogonVariants[] = {
};

static const struct SmogonVariant sToxicroakSmogonVariants[] = {
};

static const struct SmogonVariant sCarnivineSmogonVariants[] = {
};

static const struct SmogonVariant sFinneonSmogonVariants[] = {
};

static const struct SmogonVariant sLumineonSmogonVariants[] = {
};

static const struct SmogonVariant sMantykeSmogonVariants[] = {
};

static const struct SmogonVariant sSnoverSmogonVariants[] = {
};

static const struct SmogonVariant sParasSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sWeavileSmogonVariants[] = {
};

static const struct SmogonVariant sMagnezoneSmogonVariants[] = {
};

static const struct SmogonVariant sLickilickySmogonVariants[] = {
};

static const struct SmogonVariant sRhyperiorSmogonVariants[] = {
};

static const struct SmogonVariant sTangrowthSmogonVariants[] = {
};

static const struct SmogonVariant sElectivireSmogonVariants[] = {
};

static const struct SmogonVariant sMagmortarSmogonVariants[] = {
};

static const struct SmogonVariant sTogekissSmogonVariants[] = {
};

static const struct SmogonVariant sYanmegaSmogonVariants[] = {
};

static const struct SmogonVariant sParasectSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sGlaceonSmogonVariants[] = {
};

static const struct SmogonVariant sGliscorSmogonVariants[] = {
};

static const struct SmogonVariant sMamoswineSmogonVariants[] = {
};

static const struct SmogonVariant sPorygonZSmogonVariants[] = {
};

static const struct SmogonVariant sGalladeSmogonVariants[] = {
};

static const struct SmogonVariant sProbopassSmogonVariants[] = {
};

static const struct SmogonVariant sDusknoirSmogonVariants[] = {
};

static const struct SmogonVariant sFroslassSmogonVariants[] = {
};

static const struct SmogonVariant sRotomSmogonVariants[] = {
};

static const struct SmogonVariant sRotomFanSmogonVariants[] = {
};

static const struct SmogonVariant sRotomFrostSmogonVariants[] = {
};

static const struct SmogonVariant sRotomHeatSmogonVariants[] = {
};

static const struct SmogonVariant sRotomMowSmogonVariants[] = {
};

static const struct SmogonVariant sRotomWashSmogonVariants[] = {
};

static const struct SmogonVariant sVenonatSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sMespritSmogonVariants[] = {
};

static const struct SmogonVariant sAzelfSmogonVariants[] = {
};

static const struct SmogonVariant sDialgaSmogonVariants[] = {
};

static const struct SmogonVariant sDialgaOriginSmogonVariants[] = {
};

static const struct SmogonVariant sPalkiaSmogonVariants[] = {
};

static const struct SmogonVariant sPalkiaOriginSmogonVariants[] = {
};

static const struct SmogonVariant sHeatranSmogonVariants[] = {
};

static const struct SmogonVariant sRegigigasSmogonVariants[] = {
};

static const struct SmogonVariant sGiratinaSmogonVariants[] = {
};

static const struct SmogonVariant sGiratinaOriginSmogonVariants[] = {
};

static const struct SmogonVariant sCresseliaSmogonVariants[] = {
};

static const struct SmogonVariant sPhioneSmogonVariants[] = {
};

static const struct SmogonVariant sVenomothSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sDarkraiSmogonVariants[] = {
};

static const struct SmogonVariant sShayminSmogonVariants[] = {
};

static const struct SmogonVariant sShayminSkySmogonVariants[] = {
};

static const struct SmogonVariant sArceusSmogonVariants[] = {
};

static const struct SmogonVariant sArceusBugSmogonVariants[] = {
};

static const struct SmogonVariant sArceusDarkSmogonVariants[] = {
};

static const struct SmogonVariant sArceusDragonSmogonVariants[] = {
};

static const struct SmogonVariant sArceusElectricSmogonVariants[] = {
};

static const struct SmogonVariant sArceusFightingSmogonVariants[] = {
};

static const struct SmogonVariant sArceusFireSmogonVariants[] = {
};

static const struct SmogonVariant sArceusFlyingSmogonVariants[] = {
};

static const struct SmogonVariant sArceusGhostSmogonVariants[] = {
};

static const struct SmogonVariant sArceusGrassSmogonVariants[] = {
};

static const struct SmogonVariant sArceusGroundSmogonVariants[] = {
};

static const struct SmogonVariant sArceusIceSmogonVariants[] = {
};

static const struct SmogonVariant sArceusPoisonSmogonVariants[] = {
};

static const struct SmogonVariant sArceusPsychicSmogonVariants[] = {
};

static const struct SmogonVariant sArceusRockSmogonVariants[] = {
};

static const struct SmogonVariant sArceusSteelSmogonVariants[] = {
};

static const struct SmogonVariant sArceusWaterSmogonVariants[] = {
};

static const struct SmogonVariant sArceusFairySmogonVariants[] = {
};

static const struct SmogonVariant sVictiniSmogonVariants[] = {
};

static const struct SmogonVariant sSnivySmogonVariants[] = {
};

static const struct SmogonVariant sServineSmogonVariants[] = {
};

static const struct SmogonVariant sSerperiorSmogonVariants[] = {
};

static const struct SmogonVariant sTepigSmogonVariants[] = {
};

static const struct SmogonVariant sPigniteSmogonVariants[] = {
};

static const struct SmogonVariant sCharmeleonSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sEmboarSmogonVariants[] = {
};

static const struct SmogonVariant sOshawottSmogonVariants[] = {
};

static const struct SmogonVariant sDewottSmogonVariants[] = {
};

static const struct SmogonVariant sSamurottSmogonVariants[] = {
};

static const struct SmogonVariant sSamurottHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sPatratSmogonVariants[] = {
};

static const struct SmogonVariant sWatchogSmogonVariants[] = {
};

static const struct SmogonVariant sLillipupSmogonVariants[] = {
};

static const struct SmogonVariant sHerdierSmogonVariants[] = {
};

static const struct SmogonVariant sStoutlandSmogonVariants[] = {
};

static const struct SmogonVariant sPurrloinSmogonVariants[] = {
};

static const struct SmogonVariant sDugtrioSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sLiepardSmogonVariants[] = {
};

static const struct SmogonVariant sPansageSmogonVariants[] = {
};

static const struct SmogonVariant sSimisageSmogonVariants[] = {
};

static const struct SmogonVariant sPansearSmogonVariants[] = {
};

static const struct SmogonVariant sSimisearSmogonVariants[] = {
};

static const struct SmogonVariant sPanpourSmogonVariants[] = {
};

static const struct SmogonVariant sSimipourSmogonVariants[] = {
};

static const struct SmogonVariant sMunnaSmogonVariants[] = {
};

static const struct SmogonVariant sMusharnaSmogonVariants[] = {
};

static const struct SmogonVariant sPidoveSmogonVariants[] = {
};

static const struct SmogonVariant sMeowthSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sMeowthGalarSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sUnfezantSmogonVariants[] = {
};

static const struct SmogonVariant sBlitzleSmogonVariants[] = {
};

static const struct SmogonVariant sZebstrikaSmogonVariants[] = {
};

static const struct SmogonVariant sRoggenrolaSmogonVariants[] = {
};

static const struct SmogonVariant sBoldoreSmogonVariants[] = {
};

static const struct SmogonVariant sGigalithSmogonVariants[] = {
};

static const struct SmogonVariant sWoobatSmogonVariants[] = {
};

static const struct SmogonVariant sSwoobatSmogonVariants[] = {
};

static const struct SmogonVariant sDrilburSmogonVariants[] = {
};

static const struct SmogonVariant sPersianSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sExcadrillSmogonVariants[] = {
};

static const struct SmogonVariant sAudinoSmogonVariants[] = {
};

static const struct SmogonVariant sTimburrSmogonVariants[] = {
};

static const struct SmogonVariant sGurdurrSmogonVariants[] = {
};

static const struct SmogonVariant sConkeldurrSmogonVariants[] = {
};

static const struct SmogonVariant sTympoleSmogonVariants[] = {
};

static const struct SmogonVariant sPalpitoadSmogonVariants[] = {
};

static const struct SmogonVariant sSeismitoadSmogonVariants[] = {
};

static const struct SmogonVariant sThrohSmogonVariants[] = {
};

static const struct SmogonVariant sSawkSmogonVariants[] = {
};

static const struct SmogonVariant sPsyduckSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sSwadloonSmogonVariants[] = {
};

static const struct SmogonVariant sLeavannySmogonVariants[] = {
};

static const struct SmogonVariant sVenipedeSmogonVariants[] = {
};

static const struct SmogonVariant sWhirlipedeSmogonVariants[] = {
};

static const struct SmogonVariant sScolipedeSmogonVariants[] = {
};

static const struct SmogonVariant sCottoneeSmogonVariants[] = {
};

static const struct SmogonVariant sWhimsicottSmogonVariants[] = {
};

static const struct SmogonVariant sPetililSmogonVariants[] = {
};

static const struct SmogonVariant sLilligantSmogonVariants[] = {
};

static const struct SmogonVariant sLilligantHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sGolduckSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sBasculinBlueStripedSmogonVariants[] = {
};

static const struct SmogonVariant sBasculinWhiteStripedSmogonVariants[] = {
};

static const struct SmogonVariant sSandileSmogonVariants[] = {
};

static const struct SmogonVariant sKrokorokSmogonVariants[] = {
};

static const struct SmogonVariant sKrookodileSmogonVariants[] = {
};

static const struct SmogonVariant sDarumakaSmogonVariants[] = {
};

static const struct SmogonVariant sDarumakaGalarSmogonVariants[] = {
};

static const struct SmogonVariant sDarmanitanSmogonVariants[] = {
};

static const struct SmogonVariant sDarmanitanGalarSmogonVariants[] = {
};

static const struct SmogonVariant sMaractusSmogonVariants[] = {
};

static const struct SmogonVariant sDwebbleSmogonVariants[] = {
};

static const struct SmogonVariant sCrustleSmogonVariants[] = {
};

static const struct SmogonVariant sScraggySmogonVariants[] = {
};

static const struct SmogonVariant sMankeySmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sSigilyphSmogonVariants[] = {
};

static const struct SmogonVariant sYamaskSmogonVariants[] = {
};

static const struct SmogonVariant sYamaskGalarSmogonVariants[] = {
};

static const struct SmogonVariant sCofagrigusSmogonVariants[] = {
};

static const struct SmogonVariant sTirtougaSmogonVariants[] = {
};

static const struct SmogonVariant sCarracostaSmogonVariants[] = {
};

static const struct SmogonVariant sArchenSmogonVariants[] = {
};

static const struct SmogonVariant sArcheopsSmogonVariants[] = {
};

static const struct SmogonVariant sTrubbishSmogonVariants[] = {
};

static const struct SmogonVariant sGarbodorSmogonVariants[] = {
};

static const struct SmogonVariant sPrimeapeSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sZoruaHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sZoroarkSmogonVariants[] = {
};

static const struct SmogonVariant sZoroarkHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sMinccinoSmogonVariants[] = {
};

static const struct SmogonVariant sCinccinoSmogonVariants[] = {
};

static const struct SmogonVariant sGothitaSmogonVariants[] = {
};

static const struct SmogonVariant sGothoritaSmogonVariants[] = {
};

static const struct SmogonVariant sGothitelleSmogonVariants[] = {
};

static const struct SmogonVariant sSolosisSmogonVariants[] = {
};

static const struct SmogonVariant sDuosionSmogonVariants[] = {
};

static const struct SmogonVariant sReuniclusSmogonVariants[] = {
};

static const struct SmogonVariant sGrowlitheSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sDucklettSmogonVariants[] = {
};

static const struct SmogonVariant sSwannaSmogonVariants[] = {
};

static const struct SmogonVariant sVanilliteSmogonVariants[] = {
};

static const struct SmogonVariant sVanillishSmogonVariants[] = {
};

static const struct SmogonVariant sVanilluxeSmogonVariants[] = {
};

static const struct SmogonVariant sDeerlingSmogonVariants[] = {
};

static const struct SmogonVariant sSawsbuckSmogonVariants[] = {
};

static const struct SmogonVariant sEmolgaSmogonVariants[] = {
};

static const struct SmogonVariant sKarrablastSmogonVariants[] = {
};

static const struct SmogonVariant sEscavalierSmogonVariants[] = {
};

static const struct SmogonVariant sArcanineSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sFoongusSmogonVariants[] = {
};

static const struct SmogonVariant sAmoongussSmogonVariants[] = {
};

static const struct SmogonVariant sFrillishSmogonVariants[] = {
};

static const struct SmogonVariant sJellicentSmogonVariants[] = {
};

static const struct SmogonVariant sAlomomolaSmogonVariants[] = {
};

static const struct SmogonVariant sJoltikSmogonVariants[] = {
};

static const struct SmogonVariant sGalvantulaSmogonVariants[] = {
};

static const struct SmogonVariant sFerroseedSmogonVariants[] = {
};

static const struct SmogonVariant sFerrothornSmogonVariants[] = {
};

static const struct SmogonVariant sKlinkSmogonVariants[] = {
};

static const struct SmogonVariant sCharizardSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sKlinklangSmogonVariants[] = {
};

static const struct SmogonVariant sTynamoSmogonVariants[] = {
};

static const struct SmogonVariant sEelektrikSmogonVariants[] = {
};

static const struct SmogonVariant sEelektrossSmogonVariants[] = {
};

static const struct SmogonVariant sElgyemSmogonVariants[] = {
};

static const struct SmogonVariant sBeheeyemSmogonVariants[] = {
};

static const struct SmogonVariant sLitwickSmogonVariants[] = {
};

static const struct SmogonVariant sLampentSmogonVariants[] = {
};

static const struct SmogonVariant sChandelureSmogonVariants[] = {
};

static const struct SmogonVariant sPoliwhirlSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sFraxureSmogonVariants[] = {
};

static const struct SmogonVariant sHaxorusSmogonVariants[] = {
};

static const struct SmogonVariant sCubchooSmogonVariants[] = {
};

static const struct SmogonVariant sBearticSmogonVariants[] = {
};

static const struct SmogonVariant sCryogonalSmogonVariants[] = {
};

static const struct SmogonVariant sShelmetSmogonVariants[] = {
};

static const struct SmogonVariant sAccelgorSmogonVariants[] = {
};

static const struct SmogonVariant sStunfiskSmogonVariants[] = {
};

static const struct SmogonVariant sStunfiskGalarSmogonVariants[] = {
};

static const struct SmogonVariant sMienfooSmogonVariants[] = {
};

static const struct SmogonVariant sPoliwrathSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sDruddigonSmogonVariants[] = {
};

static const struct SmogonVariant sGolettSmogonVariants[] = {
};

static const struct SmogonVariant sGolurkSmogonVariants[] = {
};

static const struct SmogonVariant sPawniardSmogonVariants[] = {
};

static const struct SmogonVariant sBisharpSmogonVariants[] = {
};

static const struct SmogonVariant sBouffalantSmogonVariants[] = {
};

static const struct SmogonVariant sRuffletSmogonVariants[] = {
};

static const struct SmogonVariant sBraviarySmogonVariants[] = {
};

static const struct SmogonVariant sBraviaryHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sVullabySmogonVariants[] = {
};

static const struct SmogonVariant sAbraSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sHeatmorSmogonVariants[] = {
};

static const struct SmogonVariant sDurantSmogonVariants[] = {
};

static const struct SmogonVariant sDeinoSmogonVariants[] = {
};

static const struct SmogonVariant sZweilousSmogonVariants[] = {
};

static const struct SmogonVariant sHydreigonSmogonVariants[] = {
};

static const struct SmogonVariant sLarvestaSmogonVariants[] = {
};

static const struct SmogonVariant sVolcaronaSmogonVariants[] = {
};

static const struct SmogonVariant sCobalionSmogonVariants[] = {
};

static const struct SmogonVariant sTerrakionSmogonVariants[] = {
};

static const struct SmogonVariant sKadabraSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sTornadusSmogonVariants[] = {
};

static const struct SmogonVariant sTornadusTherianSmogonVariants[] = {
};

static const struct SmogonVariant sThundurusSmogonVariants[] = {
};

static const struct SmogonVariant sThundurusTherianSmogonVariants[] = {
};

static const struct SmogonVariant sReshiramSmogonVariants[] = {
};

static const struct SmogonVariant sZekromSmogonVariants[] = {
};

static const struct SmogonVariant sLandorusSmogonVariants[] = {
};

static const struct SmogonVariant sLandorusTherianSmogonVariants[] = {
};

static const struct SmogonVariant sKyuremSmogonVariants[] = {
};

static const struct SmogonVariant sKyuremBlackSmogonVariants[] = {
};

static const struct SmogonVariant sKyuremWhiteSmogonVariants[] = {
};

static const struct SmogonVariant sKeldeoSmogonVariants[] = {
};

static const struct SmogonVariant sKeldeoResoluteSmogonVariants[] = {
};

static const struct SmogonVariant sMeloettaSmogonVariants[] = {
};

static const struct SmogonVariant sGenesectSmogonVariants[] = {
};

static const struct SmogonVariant sGenesectBurnSmogonVariants[] = {
};

static const struct SmogonVariant sGenesectChillSmogonVariants[] = {
};

static const struct SmogonVariant sGenesectDouseSmogonVariants[] = {
};

static const struct SmogonVariant sGenesectShockSmogonVariants[] = {
};

static const struct SmogonVariant sAlakazamSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sQuilladinSmogonVariants[] = {
};

static const struct SmogonVariant sChesnaughtSmogonVariants[] = {
};

static const struct SmogonVariant sFennekinSmogonVariants[] = {
};

static const struct SmogonVariant sBraixenSmogonVariants[] = {
};

static const struct SmogonVariant sDelphoxSmogonVariants[] = {
};

static const struct SmogonVariant sFroakieSmogonVariants[] = {
};

static const struct SmogonVariant sFrogadierSmogonVariants[] = {
};

static const struct SmogonVariant sGreninjaSmogonVariants[] = {
};

static const struct SmogonVariant sGreninjaBondSmogonVariants[] = {
};

static const struct SmogonVariant sBunnelbySmogonVariants[] = {
};

static const struct SmogonVariant sMachopSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sFletchlingSmogonVariants[] = {
};

static const struct SmogonVariant sFletchinderSmogonVariants[] = {
};

static const struct SmogonVariant sTalonflameSmogonVariants[] = {
};

static const struct SmogonVariant sScatterbugSmogonVariants[] = {
};

static const struct SmogonVariant sSpewpaSmogonVariants[] = {
};

static const struct SmogonVariant sVivillonSmogonVariants[] = {
};

static const struct SmogonVariant sVivillonFancySmogonVariants[] = {
};

static const struct SmogonVariant sVivillonPokeballSmogonVariants[] = {
};

static const struct SmogonVariant sLitleoSmogonVariants[] = {
};

static const struct SmogonVariant sPyroarSmogonVariants[] = {
};

static const struct SmogonVariant sFlabebeSmogonVariants[] = {
};

static const struct SmogonVariant sMachokeSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sFlorgesSmogonVariants[] = {
};

static const struct SmogonVariant sSkiddoSmogonVariants[] = {
};

static const struct SmogonVariant sGogoatSmogonVariants[] = {
};

static const struct SmogonVariant sPanchamSmogonVariants[] = {
};

static const struct SmogonVariant sPangoroSmogonVariants[] = {
};

static const struct SmogonVariant sFurfrouSmogonVariants[] = {
};

static const struct SmogonVariant sEspurrSmogonVariants[] = {
};

static const struct SmogonVariant sMeowsticFSmogonVariants[] = {
};

static const struct SmogonVariant sMeowsticMSmogonVariants[] = {
};

static const struct SmogonVariant sHonedgeSmogonVariants[] = {
};

static const struct SmogonVariant sMachampSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sAegislashSmogonVariants[] = {
};

static const struct SmogonVariant sSpritzeeSmogonVariants[] = {
};

static const struct SmogonVariant sAromatisseSmogonVariants[] = {
};

static const struct SmogonVariant sSwirlixSmogonVariants[] = {
};

static const struct SmogonVariant sSlurpuffSmogonVariants[] = {
};

static const struct SmogonVariant sInkaySmogonVariants[] = {
};

static const struct SmogonVariant sMalamarSmogonVariants[] = {
};

static const struct SmogonVariant sBinacleSmogonVariants[] = {
};

static const struct SmogonVariant sBarbaracleSmogonVariants[] = {
};

static const struct SmogonVariant sBellsproutSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sDragalgeSmogonVariants[] = {
};

static const struct SmogonVariant sClauncherSmogonVariants[] = {
};

static const struct SmogonVariant sClawitzerSmogonVariants[] = {
};

static const struct SmogonVariant sHelioptileSmogonVariants[] = {
};

static const struct SmogonVariant sHelioliskSmogonVariants[] = {
};

static const struct SmogonVariant sTyruntSmogonVariants[] = {
};

static const struct SmogonVariant sTyrantrumSmogonVariants[] = {
};

static const struct SmogonVariant sAmauraSmogonVariants[] = {
};

static const struct SmogonVariant sAurorusSmogonVariants[] = {
};

static const struct SmogonVariant sSquirtleSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sHawluchaSmogonVariants[] = {
};

static const struct SmogonVariant sDedenneSmogonVariants[] = {
};

static const struct SmogonVariant sCarbinkSmogonVariants[] = {
};

static const struct SmogonVariant sGoomySmogonVariants[] = {
};

static const struct SmogonVariant sSliggooSmogonVariants[] = {
};

static const struct SmogonVariant sSliggooHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sGoodraSmogonVariants[] = {
};

static const struct SmogonVariant sGoodraHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sKlefkiSmogonVariants[] = {
};

static const struct SmogonVariant sPhantumpSmogonVariants[] = {
};

static const struct SmogonVariant sTrevenantSmogonVariants[] = {
};

static const struct SmogonVariant sVictreebelSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sPumpkabooLargeSmogonVariants[] = {
};

static const struct SmogonVariant sPumpkabooSmallSmogonVariants[] = {
};

static const struct SmogonVariant sPumpkabooSuperSmogonVariants[] = {
};

static const struct SmogonVariant sGourgeistSmogonVariants[] = {
};

static const struct SmogonVariant sGourgeistLargeSmogonVariants[] = {
};

static const struct SmogonVariant sGourgeistSmallSmogonVariants[] = {
};

static const struct SmogonVariant sGourgeistSuperSmogonVariants[] = {
};

static const struct SmogonVariant sBergmiteSmogonVariants[] = {
};

static const struct SmogonVariant sAvaluggSmogonVariants[] = {
};

static const struct SmogonVariant sAvaluggHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sNoibatSmogonVariants[] = {
};

static const struct SmogonVariant sNoivernSmogonVariants[] = {
};

static const struct SmogonVariant sXerneasSmogonVariants[] = {
};

static const struct SmogonVariant sYveltalSmogonVariants[] = {
};

static const struct SmogonVariant sZygardeSmogonVariants[] = {
};

static const struct SmogonVariant sZygarde10SmogonVariants[] = {
};

static const struct SmogonVariant sDiancieSmogonVariants[] = {
};

static const struct SmogonVariant sTentacoolSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sHoopaUnboundSmogonVariants[] = {
};

static const struct SmogonVariant sVolcanionSmogonVariants[] = {
};

static const struct SmogonVariant sRowletSmogonVariants[] = {
};

static const struct SmogonVariant sDartrixSmogonVariants[] = {
};

static const struct SmogonVariant sDecidueyeSmogonVariants[] = {
};

static const struct SmogonVariant sDecidueyeHisuiSmogonVariants[] = {
};

static const struct SmogonVariant sLittenSmogonVariants[] = {
};

static const struct SmogonVariant sTorracatSmogonVariants[] = {
};

static const struct SmogonVariant sIncineroarSmogonVariants[] = {
};

static const struct SmogonVariant sPopplioSmogonVariants[] = {
};

static const struct SmogonVariant sBrionneSmogonVariants[] = {
};

static const struct SmogonVariant sTentacruelSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sPikipekSmogonVariants[] = {
};

static const struct SmogonVariant sTrumbeakSmogonVariants[] = {
};

static const struct SmogonVariant sToucannonSmogonVariants[] = {
};

static const struct SmogonVariant sYungoosSmogonVariants[] = {
};

static const struct SmogonVariant sGumshoosSmogonVariants[] = {
};

static const struct SmogonVariant sGumshoosTotemSmogonVariants[] = {
};

static const struct SmogonVariant sGrubbinSmogonVariants[] = {
};

static const struct SmogonVariant sCharjabugSmogonVariants[] = {
};

static const struct SmogonVariant sVikavoltSmogonVariants[] = {
};

static const struct SmogonVariant sVikavoltTotemSmogonVariants[] = {
};

static const struct SmogonVariant sCrabrawlerSmogonVariants[] = {
};

static const struct SmogonVariant sGeodudeSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sCrabominableSmogonVariants[] = {
};

static const struct SmogonVariant sOricorioSmogonVariants[] = {
};

static const struct SmogonVariant sOricorioPauSmogonVariants[] = {
};

static const struct SmogonVariant sOricorioPomPomSmogonVariants[] = {
};

static const struct SmogonVariant sOricorioSensuSmogonVariants[] = {
};

static const struct SmogonVariant sCutieflySmogonVariants[] = {
};

static const struct SmogonVariant sRibombeeSmogonVariants[] = {
};

static const struct SmogonVariant sRibombeeTotemSmogonVariants[] = {
};

static const struct SmogonVariant sRockruffSmogonVariants[] = {
};

static const struct SmogonVariant sLycanrocSmogonVariants[] = {
};

static const struct SmogonVariant sLycanrocDuskSmogonVariants[] = {
};

static const struct SmogonVariant sLycanrocMidnightSmogonVariants[] = {
};

static const struct SmogonVariant sWishiwashiSmogonVariants[] = {
};

static const struct SmogonVariant sMareanieSmogonVariants[] = {
};

static const struct SmogonVariant sToxapexSmogonVariants[] = {
};

static const struct SmogonVariant sMudbraySmogonVariants[] = {
};

static const struct SmogonVariant sGravelerSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sDewpiderSmogonVariants[] = {
};

static const struct SmogonVariant sAraquanidSmogonVariants[] = {
};

static const struct SmogonVariant sAraquanidTotemSmogonVariants[] = {
};

static const struct SmogonVariant sFomantisSmogonVariants[] = {
};

static const struct SmogonVariant sLurantisSmogonVariants[] = {
};

static const struct SmogonVariant sLurantisTotemSmogonVariants[] = {
};

static const struct SmogonVariant sMorelullSmogonVariants[] = {
};

static const struct SmogonVariant sShiinoticSmogonVariants[] = {
};

static const struct SmogonVariant sSalanditSmogonVariants[] = {
};

static const struct SmogonVariant sSalazzleSmogonVariants[] = {
};

static const struct SmogonVariant sSalazzleTotemSmogonVariants[] = {
};

static const struct SmogonVariant sStuffulSmogonVariants[] = {
};

static const struct SmogonVariant sGolemSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sBewearSmogonVariants[] = {
};

static const struct SmogonVariant sBounsweetSmogonVariants[] = {
};

static const struct SmogonVariant sSteeneeSmogonVariants[] = {
};

static const struct SmogonVariant sTsareenaSmogonVariants[] = {
};

static const struct SmogonVariant sComfeySmogonVariants[] = {
};

static const struct SmogonVariant sOranguruSmogonVariants[] = {
};

static const struct SmogonVariant sPassimianSmogonVariants[] = {
};

static const struct SmogonVariant sWimpodSmogonVariants[] = {
};

static const struct SmogonVariant sGolisopodSmogonVariants[] = {
};

static const struct SmogonVariant sSandygastSmogonVariants[] = {
};

static const struct SmogonVariant sPonytaSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sPalossandSmogonVariants[] = {
};

static const struct SmogonVariant sPyukumukuSmogonVariants[] = {
};

static const struct SmogonVariant sTypeNullSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallySmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyBugSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyDarkSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyDragonSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyElectricSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyFairySmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyFightingSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyFireSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyFlyingSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyGhostSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyGrassSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyGroundSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyIceSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyPoisonSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyPsychicSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyRockSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallySteelSmogonVariants[] = {
};

static const struct SmogonVariant sSilvallyWaterSmogonVariants[] = {
};

static const struct SmogonVariant sMiniorSmogonVariants[] = {
};

static const struct SmogonVariant sKomalaSmogonVariants[] = {
};

static const struct SmogonVariant sTurtonatorSmogonVariants[] = {
};

static const struct SmogonVariant sTogedemaruSmogonVariants[] = {
};

static const struct SmogonVariant sTogedemaruTotemSmogonVariants[] = {
};

static const struct SmogonVariant sMimikyuSmogonVariants[] = {
};

static const struct SmogonVariant sMimikyuTotemSmogonVariants[] = {
};

static const struct SmogonVariant sBruxishSmogonVariants[] = {
};

static const struct SmogonVariant sRapidashSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sDrampaSmogonVariants[] = {
};

static const struct SmogonVariant sDhelmiseSmogonVariants[] = {
};

static const struct SmogonVariant sJangmooSmogonVariants[] = {
};

static const struct SmogonVariant sHakamooSmogonVariants[] = {
};

static const struct SmogonVariant sKommooSmogonVariants[] = {
};

static const struct SmogonVariant sKommooTotemSmogonVariants[] = {
};

static const struct SmogonVariant sTapuKokoSmogonVariants[] = {
};

static const struct SmogonVariant sTapuLeleSmogonVariants[] = {
};

static const struct SmogonVariant sTapuBuluSmogonVariants[] = {
};

static const struct SmogonVariant sTapuFiniSmogonVariants[] = {
};

static const struct SmogonVariant sCosmogSmogonVariants[] = {
};

static const struct SmogonVariant sSlowpokeSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sSolgaleoSmogonVariants[] = {
};

static const struct SmogonVariant sLunalaSmogonVariants[] = {
};

static const struct SmogonVariant sNihilegoSmogonVariants[] = {
};

static const struct SmogonVariant sBuzzwoleSmogonVariants[] = {
};

static const struct SmogonVariant sPheromosaSmogonVariants[] = {
};

static const struct SmogonVariant sXurkitreeSmogonVariants[] = {
};

static const struct SmogonVariant sCelesteelaSmogonVariants[] = {
};

static const struct SmogonVariant sKartanaSmogonVariants[] = {
};

static const struct SmogonVariant sGuzzlordSmogonVariants[] = {
};

static const struct SmogonVariant sWartortleSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sNecrozmaSmogonVariants[] = {
};

static const struct SmogonVariant sNecrozmaDawnWingsSmogonVariants[] = {
};

static const struct SmogonVariant sNecrozmaDuskManeSmogonVariants[] = {
};

static const struct SmogonVariant sMagearnaSmogonVariants[] = {
};

static const struct SmogonVariant sMagearnaOriginalSmogonVariants[] = {
};

static const struct SmogonVariant sMarshadowSmogonVariants[] = {
};

static const struct SmogonVariant sPoipoleSmogonVariants[] = {
};

static const struct SmogonVariant sNaganadelSmogonVariants[] = {
};

static const struct SmogonVariant sStakatakaSmogonVariants[] = {
};

static const struct SmogonVariant sBlacephalonSmogonVariants[] = {
};

static const struct SmogonVariant sZeraoraSmogonVariants[] = {
};

static const struct SmogonVariant sMeltanSmogonVariants[] = {
};

static const struct SmogonVariant sMelmetalSmogonVariants[] = {
};

static const struct SmogonVariant sMagnemiteSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sThwackeySmogonVariants[] = {
};

static const struct SmogonVariant sRillaboomSmogonVariants[] = {
};

static const struct SmogonVariant sScorbunnySmogonVariants[] = {
};

static const struct SmogonVariant sRabootSmogonVariants[] = {
};

static const struct SmogonVariant sCinderaceSmogonVariants[] = {
};

static const struct SmogonVariant sSobbleSmogonVariants[] = {
};

static const struct SmogonVariant sDrizzileSmogonVariants[] = {
};

static const struct SmogonVariant sInteleonSmogonVariants[] = {
};

static const struct SmogonVariant sSkwovetSmogonVariants[] = {
};

static const struct SmogonVariant sMagnetonSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sRookideeSmogonVariants[] = {
};

static const struct SmogonVariant sCorvisquireSmogonVariants[] = {
};

static const struct SmogonVariant sCorviknightSmogonVariants[] = {
};

static const struct SmogonVariant sBlipbugSmogonVariants[] = {
};

static const struct SmogonVariant sDottlerSmogonVariants[] = {
};

static const struct SmogonVariant sOrbeetleSmogonVariants[] = {
};

static const struct SmogonVariant sNickitSmogonVariants[] = {
};

static const struct SmogonVariant sThievulSmogonVariants[] = {
};

static const struct SmogonVariant sGossifleurSmogonVariants[] = {
};

static const struct SmogonVariant sFarfetchdSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sEldegossSmogonVariants[] = {
};

static const struct SmogonVariant sWoolooSmogonVariants[] = {
};

static const struct SmogonVariant sDubwoolSmogonVariants[] = {
};

static const struct SmogonVariant sChewtleSmogonVariants[] = {
};

static const struct SmogonVariant sDrednawSmogonVariants[] = {
};

static const struct SmogonVariant sYamperSmogonVariants[] = {
};

static const struct SmogonVariant sBoltundSmogonVariants[] = {
};

static const struct SmogonVariant sRolycolySmogonVariants[] = {
};

static const struct SmogonVariant sCarkolSmogonVariants[] = {
};

static const struct SmogonVariant sCoalossalSmogonVariants[] = {
};

static const struct SmogonVariant sDoduoSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sFlappleSmogonVariants[] = {
};

static const struct SmogonVariant sAppletunSmogonVariants[] = {
};

static const struct SmogonVariant sSilicobraSmogonVariants[] = {
};

static const struct SmogonVariant sSandacondaSmogonVariants[] = {
};

static const struct SmogonVariant sCramorantSmogonVariants[] = {
};

static const struct SmogonVariant sArrokudaSmogonVariants[] = {
};

static const struct SmogonVariant sBarraskewdaSmogonVariants[] = {
};

static const struct SmogonVariant sToxelSmogonVariants[] = {
};

static const struct SmogonVariant sToxtricitySmogonVariants[] = {
};

static const struct SmogonVariant sToxtricityLowKeySmogonVariants[] = {
};

static const struct SmogonVariant sDodrioSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sCentiskorchSmogonVariants[] = {
};

static const struct SmogonVariant sClobbopusSmogonVariants[] = {
};

static const struct SmogonVariant sGrapploctSmogonVariants[] = {
};

static const struct SmogonVariant sSinisteaSmogonVariants[] = {
};

static const struct SmogonVariant sSinisteaAntiqueSmogonVariants[] = {
};

static const struct SmogonVariant sPolteageistSmogonVariants[] = {
};

static const struct SmogonVariant sPolteageistAntiqueSmogonVariants[] = {
};

static const struct SmogonVariant sHatennaSmogonVariants[] = {
};

static const struct SmogonVariant sHattremSmogonVariants[] = {
};

static const struct SmogonVariant sHattereneSmogonVariants[] = {
};

static const struct SmogonVariant sImpidimpSmogonVariants[] = {
};

static const struct SmogonVariant sSeelSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sGrimmsnarlSmogonVariants[] = {
};

static const struct SmogonVariant sObstagoonSmogonVariants[] = {
};

static const struct SmogonVariant sPerrserkerSmogonVariants[] = {
};

static const struct SmogonVariant sCursolaSmogonVariants[] = {
};

static const struct SmogonVariant sSirfetchdSmogonVariants[] = {
};

static const struct SmogonVariant sMrRimeSmogonVariants[] = {
};

static const struct SmogonVariant sRunerigusSmogonVariants[] = {
};

static const struct SmogonVariant sMilcerySmogonVariants[] = {
};

static const struct SmogonVariant sAlcremieSmogonVariants[] = {
};

static const struct SmogonVariant sDewgongSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sPincurchinSmogonVariants[] = {
};

static const struct SmogonVariant sSnomSmogonVariants[] = {
};

static const struct SmogonVariant sFrosmothSmogonVariants[] = {
};

static const struct SmogonVariant sStonjournerSmogonVariants[] = {
};

static const struct SmogonVariant sEiscueSmogonVariants[] = {
};

static const struct SmogonVariant sIndeedeeSmogonVariants[] = {
};

static const struct SmogonVariant sIndeedeeFSmogonVariants[] = {
};

static const struct SmogonVariant sMorpekoSmogonVariants[] = {
};

static const struct SmogonVariant sCufantSmogonVariants[] = {
};

static const struct SmogonVariant sCopperajahSmogonVariants[] = {
};

static const struct SmogonVariant sGrimerSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sDracozoltSmogonVariants[] = {
};

static const struct SmogonVariant sArctozoltSmogonVariants[] = {
};

static const struct SmogonVariant sDracovishSmogonVariants[] = {
};

static const struct SmogonVariant sArctovishSmogonVariants[] = {
};

static const struct SmogonVariant sDuraludonSmogonVariants[] = {
};

static const struct SmogonVariant sDreepySmogonVariants[] = {
};

static const struct SmogonVariant sDrakloakSmogonVariants[] = {
};

static const struct SmogonVariant sDragapultSmogonVariants[] = {
};

static const struct SmogonVariant sZacianSmogonVariants[] = {
};

static const struct SmogonVariant sZacianCrownedSmogonVariants[] = {
};

static const struct SmogonVariant sZamazentaSmogonVariants[] = {
};

static const struct SmogonVariant sZamazentaCrownedSmogonVariants[] = {
};

static const struct SmogonVariant sMukSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sEternatusSmogonVariants[] = {
};

static const struct SmogonVariant sKubfuSmogonVariants[] = {
};

static const struct SmogonVariant sUrshifuSmogonVariants[] = {
};

static const struct SmogonVariant sUrshifuRapidStrikeSmogonVariants[] = {
};

static const struct SmogonVariant sZarudeSmogonVariants[] = {
};

static const struct SmogonVariant sZarudeDadaSmogonVariants[] = {
};

static const struct SmogonVariant sRegielekiSmogonVariants[] = {
};

static const struct SmogonVariant sRegidragoSmogonVariants[] = {
};

static const struct SmogonVariant sGlastrierSmogonVariants[] = {
};

static const struct SmogonVariant sSpectrierSmogonVariants[] = {
};

static const struct SmogonVariant sCalyrexSmogonVariants[] = {
};

static const struct SmogonVariant sCalyrexIceSmogonVariants[] = {
};

static const struct SmogonVariant sCalyrexShadowSmogonVariants[] = {
};

static const struct SmogonVariant sWyrdeerSmogonVariants[] = {
};

static const struct SmogonVariant sBlastoiseSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sUrsalunaSmogonVariants[] = {
};

static const struct SmogonVariant sUrsalunaBloodmoonSmogonVariants[] = {
};

static const struct SmogonVariant sBasculegionSmogonVariants[] = {
};

static const struct SmogonVariant sBasculegionFSmogonVariants[] = {
};

static const struct SmogonVariant sSneaslerSmogonVariants[] = {
};

static const struct SmogonVariant sOverqwilSmogonVariants[] = {
};

static const struct SmogonVariant sEnamorusSmogonVariants[] = {
};

static const struct SmogonVariant sEnamorusTherianSmogonVariants[] = {
};

static const struct SmogonVariant sSprigatitoSmogonVariants[] = {
};

static const struct SmogonVariant sFloragatoSmogonVariants[] = {
};

static const struct SmogonVariant sMeowscaradaSmogonVariants[] = {
};

static const struct SmogonVariant sFuecocoSmogonVariants[] = {
};

static const struct SmogonVariant sCloysterSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sSkeledirgeSmogonVariants[] = {
};

static const struct SmogonVariant sQuaxlySmogonVariants[] = {
};

static const struct SmogonVariant sQuaxwellSmogonVariants[] = {
};

static const struct SmogonVariant sQuaquavalSmogonVariants[] = {
};

static const struct SmogonVariant sLechonkSmogonVariants[] = {
};

static const struct SmogonVariant sOinkologneSmogonVariants[] = {
};

static const struct SmogonVariant sOinkologneFSmogonVariants[] = {
};

static const struct SmogonVariant sTarountulaSmogonVariants[] = {
};

static const struct SmogonVariant sSpidopsSmogonVariants[] = {
};

static const struct SmogonVariant sNymbleSmogonVariants[] = {
};

static const struct SmogonVariant sGastlySmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sPawmiSmogonVariants[] = {
};

static const struct SmogonVariant sPawmoSmogonVariants[] = {
};

static const struct SmogonVariant sPawmotSmogonVariants[] = {
};

static const struct SmogonVariant sTandemausSmogonVariants[] = {
};

static const struct SmogonVariant sMausholdSmogonVariants[] = {
};

static const struct SmogonVariant sMausholdFourSmogonVariants[] = {
};

static const struct SmogonVariant sFidoughSmogonVariants[] = {
};

static const struct SmogonVariant sDachsbunSmogonVariants[] = {
};

static const struct SmogonVariant sSmolivSmogonVariants[] = {
};

static const struct SmogonVariant sDollivSmogonVariants[] = {
};

static const struct SmogonVariant sHaunterSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sSquawkabillySmogonVariants[] = {
};

static const struct SmogonVariant sSquawkabillyBlueSmogonVariants[] = {
};

static const struct SmogonVariant sSquawkabillyWhiteSmogonVariants[] = {
};

static const struct SmogonVariant sSquawkabillyYellowSmogonVariants[] = {
};

static const struct SmogonVariant sNacliSmogonVariants[] = {
};

static const struct SmogonVariant sNaclstackSmogonVariants[] = {
};

static const struct SmogonVariant sGarganaclSmogonVariants[] = {
};

static const struct SmogonVariant sCharcadetSmogonVariants[] = {
};

static const struct SmogonVariant sArmarougeSmogonVariants[] = {
};

static const struct SmogonVariant sCeruledgeSmogonVariants[] = {
};

static const struct SmogonVariant sTadbulbSmogonVariants[] = {
};

static const struct SmogonVariant sBelliboltSmogonVariants[] = {
};

static const struct SmogonVariant sGengarSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sKilowattrelSmogonVariants[] = {
};

static const struct SmogonVariant sMaschiffSmogonVariants[] = {
};

static const struct SmogonVariant sMabosstiffSmogonVariants[] = {
};

static const struct SmogonVariant sShroodleSmogonVariants[] = {
};

static const struct SmogonVariant sGrafaiaiSmogonVariants[] = {
};

static const struct SmogonVariant sBramblinSmogonVariants[] = {
};

static const struct SmogonVariant sBrambleghastSmogonVariants[] = {
};

static const struct SmogonVariant sToedscoolSmogonVariants[] = {
};

static const struct SmogonVariant sToedscruelSmogonVariants[] = {
};

static const struct SmogonVariant sOnixSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sCapsakidSmogonVariants[] = {
};

static const struct SmogonVariant sScovillainSmogonVariants[] = {
};

static const struct SmogonVariant sRellorSmogonVariants[] = {
};

static const struct SmogonVariant sRabscaSmogonVariants[] = {
};

static const struct SmogonVariant sFlittleSmogonVariants[] = {
};

static const struct SmogonVariant sEspathraSmogonVariants[] = {
};

static const struct SmogonVariant sTinkatinkSmogonVariants[] = {
};

static const struct SmogonVariant sTinkatuffSmogonVariants[] = {
};

static const struct SmogonVariant sTinkatonSmogonVariants[] = {
};

static const struct SmogonVariant sDrowzeeSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sWugtrioSmogonVariants[] = {
};

static const struct SmogonVariant sBombirdierSmogonVariants[] = {
};

static const struct SmogonVariant sFinizenSmogonVariants[] = {
};

static const struct SmogonVariant sPalafinSmogonVariants[] = {
};

static const struct SmogonVariant sVaroomSmogonVariants[] = {
};

static const struct SmogonVariant sRevavroomSmogonVariants[] = {
};

static const struct SmogonVariant sCyclizarSmogonVariants[] = {
};

static const struct SmogonVariant sOrthwormSmogonVariants[] = {
};

static const struct SmogonVariant sGlimmetSmogonVariants[] = {
};

static const struct SmogonVariant sHypnoSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sGreavardSmogonVariants[] = {
};

static const struct SmogonVariant sHoundstoneSmogonVariants[] = {
};

static const struct SmogonVariant sFlamigoSmogonVariants[] = {
};

static const struct SmogonVariant sCetoddleSmogonVariants[] = {
};

static const struct SmogonVariant sCetitanSmogonVariants[] = {
};

static const struct SmogonVariant sVeluzaSmogonVariants[] = {
};

static const struct SmogonVariant sDondozoSmogonVariants[] = {
};

static const struct SmogonVariant sTatsugiriSmogonVariants[] = {
};

static const struct SmogonVariant sAnnihilapeSmogonVariants[] = {
};

static const struct SmogonVariant sKrabbySmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sFarigirafSmogonVariants[] = {
};

static const struct SmogonVariant sDudunsparceSmogonVariants[] = {
};

static const struct SmogonVariant sDudunsparceThreeSegmentSmogonVariants[] = {
};

static const struct SmogonVariant sKingambitSmogonVariants[] = {
};

static const struct SmogonVariant sGreatTuskSmogonVariants[] = {
};

static const struct SmogonVariant sScreamTailSmogonVariants[] = {
};

static const struct SmogonVariant sBruteBonnetSmogonVariants[] = {
};

static const struct SmogonVariant sFlutterManeSmogonVariants[] = {
};

static const struct SmogonVariant sSlitherWingSmogonVariants[] = {
};

static const struct SmogonVariant sSandyShocksSmogonVariants[] = {
};

static const struct SmogonVariant sKinglerSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sIronBundleSmogonVariants[] = {
};

static const struct SmogonVariant sIronHandsSmogonVariants[] = {
};

static const struct SmogonVariant sIronJugulisSmogonVariants[] = {
};

static const struct SmogonVariant sIronMothSmogonVariants[] = {
};

static const struct SmogonVariant sIronThornsSmogonVariants[] = {
};

static const struct SmogonVariant sFrigibaxSmogonVariants[] = {
};

static const struct SmogonVariant sArctibaxSmogonVariants[] = {
};

static const struct SmogonVariant sBaxcaliburSmogonVariants[] = {
};

static const struct SmogonVariant sGimmighoulSmogonVariants[] = {
};

static const struct SmogonVariant sGimmighoulRoamingSmogonVariants[] = {
};

static const struct SmogonVariant sVenusaurMegaSmogonVariants[] = {
};

static const struct SmogonVariant sDiancieMegaSmogonVariants[] = {
};

static const struct SmogonVariant sEiscueNoiceSmogonVariants[] = {
};

static const struct SmogonVariant sOrbeetleGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sCoalossalGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sMorpekoHangrySmogonVariants[] = {
};

static const struct SmogonVariant sTerapagosStellarSmogonVariants[] = {
};

static const struct SmogonVariant sOgerponHearthflameTeraSmogonVariants[] = {
};

static const struct SmogonVariant sOgerponWellspringTeraSmogonVariants[] = {
};

static const struct SmogonVariant sRayquazaMegaSmogonVariants[] = {
};

static const struct SmogonVariant sGardevoirMegaSmogonVariants[] = {
};

static const struct SmogonVariant sDarmanitanGalarZenSmogonVariants[] = {
};

static const struct SmogonVariant sCharizardGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sLaprasGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sSandacondaGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sMetagrossMegaSmogonVariants[] = {
};

static const struct SmogonVariant sOgerponCornerstoneTeraSmogonVariants[] = {
};

static const struct SmogonVariant sGyaradosMegaSmogonVariants[] = {
};

static const struct SmogonVariant sTerapagosTerastalSmogonVariants[] = {
};

static const struct SmogonVariant sScizorMegaSmogonVariants[] = {
};

static const struct SmogonVariant sBeedrillMegaSmogonVariants[] = {
};

static const struct SmogonVariant sAmpharosMegaSmogonVariants[] = {
};

static const struct SmogonVariant sPinsirMegaSmogonVariants[] = {
};

static const struct SmogonVariant sManectricMegaSmogonVariants[] = {
};

static const struct SmogonVariant sGrimmsnarlGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sGreninjaAshSmogonVariants[] = {
};

static const struct SmogonVariant sGengarGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sMelmetalGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sAegislashBladeSmogonVariants[] = {
};

static const struct SmogonVariant sGalladeMegaSmogonVariants[] = {
};

static const struct SmogonVariant sMimikyuBustedSmogonVariants[] = {
};

static const struct SmogonVariant sHeracrossMegaSmogonVariants[] = {
};

static const struct SmogonVariant sUrshifuGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sBlastoiseMegaSmogonVariants[] = {
};

static const struct SmogonVariant sWishiwashiSchoolSmogonVariants[] = {
};

static const struct SmogonVariant sCastformSunnySmogonVariants[] = {
};

static const struct SmogonVariant sLopunnyMegaSmogonVariants[] = {
};

static const struct SmogonVariant sCameruptMegaSmogonVariants[] = {
};

static const struct SmogonVariant sCramorantGorgingSmogonVariants[] = {
};

static const struct SmogonVariant sKangaskhanMegaSmogonVariants[] = {
};

static const struct SmogonVariant sCastformSnowySmogonVariants[] = {
};

static const struct SmogonVariant sBlastoiseGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sTyranitarMegaSmogonVariants[] = {
};

static const struct SmogonVariant sPidgeotMegaSmogonVariants[] = {
};

static const struct SmogonVariant sGarchompMegaSmogonVariants[] = {
};

static const struct SmogonVariant sMiniorMeteorSmogonVariants[] = {
};

static const struct SmogonVariant sOgerponTealTeraSmogonVariants[] = {
};

static const struct SmogonVariant sCharizardMegaYSmogonVariants[] = {
};

static const struct SmogonVariant sGengarMegaSmogonVariants[] = {
};

static const struct SmogonVariant sAudinoMegaSmogonVariants[] = {
};

static const struct SmogonVariant sAerodactylMegaSmogonVariants[] = {
};

static const struct SmogonVariant sMedichamMegaSmogonVariants[] = {
};

static const struct SmogonVariant sCharizardMegaXSmogonVariants[] = {
};

static const struct SmogonVariant sSwampertMegaSmogonVariants[] = {
};

static const struct SmogonVariant sDrednawGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sMeowthGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sPalafinHeroSmogonVariants[] = {
};

static const struct SmogonVariant sBanetteMegaSmogonVariants[] = {
};

static const struct SmogonVariant sCentiskorchGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sAlcremieGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sNecrozmaUltraSmogonVariants[] = {
};

static const struct SmogonVariant sMawileMegaSmogonVariants[] = {
};

static const struct SmogonVariant sMachampGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sLucarioMegaSmogonVariants[] = {
};

static const struct SmogonVariant sCastformRainySmogonVariants[] = {
};

static const struct SmogonVariant sLatiosMegaSmogonVariants[] = {
};

static const struct SmogonVariant sToxtricityLowKeyGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sMewtwoMegaXSmogonVariants[] = {
};

static const struct SmogonVariant sDuraludonGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sPikachuGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sBlazikenMegaSmogonVariants[] = {
};

static const struct SmogonVariant sAbsolMegaSmogonVariants[] = {
};

static const struct SmogonVariant sCherrimSunshineSmogonVariants[] = {
};

static const struct SmogonVariant sGlalieMegaSmogonVariants[] = {
};

static const struct SmogonVariant sKinglerGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sEeveeGmaxSmogonVariants[] = {
	{
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
		.heldItem = ITEM_NONE,
		.ability = ABILITY_NONE,
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
};

static const struct SmogonVariant sMimikyuBustedTotemSmogonVariants[] = {
};

static const struct SmogonVariant sSableyeMegaSmogonVariants[] = {
};

static const struct SmogonVariant sFlappleGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sSalamenceMegaSmogonVariants[] = {
};

static const struct SmogonVariant sSlowbroMegaSmogonVariants[] = {
};

static const struct SmogonVariant sGarbodorGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sAggronMegaSmogonVariants[] = {
};

static const struct SmogonVariant sLatiasMegaSmogonVariants[] = {
};

static const struct SmogonVariant sCinderaceGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sHattereneGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sButterfreeGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sAbomasnowMegaSmogonVariants[] = {
};

static const struct SmogonVariant sAltariaMegaSmogonVariants[] = {
};

static const struct SmogonVariant sGroudonPrimalSmogonVariants[] = {
};

static const struct SmogonVariant sSteelixMegaSmogonVariants[] = {
};

static const struct SmogonVariant sZygardeCompleteSmogonVariants[] = {
};

static const struct SmogonVariant sHoundoomMegaSmogonVariants[] = {
};

static const struct SmogonVariant sSharpedoMegaSmogonVariants[] = {
};

static const struct SmogonVariant sAlakazamMegaSmogonVariants[] = {
};

static const struct SmogonVariant sRillaboomGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sMewtwoMegaYSmogonVariants[] = {
};

static const struct SmogonVariant sCorviknightGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sVenusaurGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sSnorlaxGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sDarmanitanZenSmogonVariants[] = {
};

static const struct SmogonVariant sSceptileMegaSmogonVariants[] = {
};

static const struct SmogonVariant sUrshifuRapidStrikeGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sMeloettaPirouetteSmogonVariants[] = {
};

static const struct SmogonVariant sInteleonGmaxSmogonVariants[] = {
};

static const struct SmogonVariant sKyogrePrimalSmogonVariants[] = {
};

static const struct SmogonVariant sCramorantGulpingSmogonVariants[] = {
};

static const struct SmogonVariant sAppletunGmaxSmogonVariants[] = {
};

