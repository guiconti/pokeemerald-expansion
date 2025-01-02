PokemonSanctuary_MapScripts::
	.byte 0

PokemonSanctuary_EventScript_Shaymin::
	lock
	faceplayer
	waitse
	setwildbattle SPECIES_SHAYMIN, 100
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_UNUSED_0x494
	legendary_save
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	release
	end