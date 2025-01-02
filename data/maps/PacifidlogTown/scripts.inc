PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_EventScript_NinjaBoy::
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_Text_FastRunningCurrent:
	.string "The sea between PACIFIDLOG and\n"
	.string "SLATEPORT has a fast-running tide.\p"
	.string "If you decide to SURF, you could end\n"
	.string "up swept away somewhere else.$"

PacifidlogTown_Text_NeatHousesOnWater:
	.string "See, isn't it neat?\n"
	.string "These houses are on water!\p"
	.string "I was born here!$"

PacifidlogTown_Text_SkyPillarTooScary:
	.string "The SKY PILLAR?\p"
	.string "…Oh, you must mean that tall, tall\n"
	.string "tower a little further out.\p"
	.string "If you asked me, I wouldn't climb it.\n"
	.string "It's too scary to get up that high.\p"
	.string "Life at sea level in PACIFIDLOG,\n"
	.string "that suits me fine.$"

PacifidlogTown_Text_TownSign:
	.string "PACIFIDLOG TOWN\p"
	.string "“Where the morning sun smiles upon\n"
	.string "the waters.”$"

PacifidlogTown_EventScript_DisguisedOak::
	goto_if_set FLAG_UNUSED_0x493, PacifidlogTown_EventScript_DisguisedOakEnd
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, ScriptGetPokedexInfo
	copyvar VAR_0x8009, VAR_0x8006
	goto_if_gt VAR_0x8009, 99, PacifidlogTown_EventScript_DisguisedOakAllowInSanctuary
	specialvar VAR_RESULT, ScriptGetPokedexInfo
	msgbox PacifidlogTown_DefaultText_DisguisedOak, MSGBOX_NPC
	release
	end

PacifidlogTown_DefaultText_DisguisedOak:
	.string "FISHERMAN: Sorry, could you let me \nkeep fishing?\p"
	.string "You feel like you know this fisherman...$"

PacifidlogTown_EventScript_DisguisedOakAllowInSanctuary::
	msgbox PacifidlogTown_DefaultText_DisguisedOakPreBattle, MSGBOX_NPC
	trainerbattle_no_intro TRAINER_DISGUISED_OAK, PacifidlogTown_DefaultText_DisguisedOakEndBattle
	msgbox PacifidlogTown_DefaultText_DisguisedOakAllowInSanctuary, MSGBOX_DEFAULT
	setflag FLAG_UNUSED_0x493
	release
	end

PacifidlogTown_DefaultText_DisguisedOakPreBattle:
	.string "FISHERMAN: Wow you've caught so \nmany pokémons.\p"
	.string "Sorry, I am actually Professor Oak.\nSometimes I disguise myself so I can fish\p"
	.string "it is hard to find some peaceful times\n"
	.string "these days.\p"
	.string "Would you mind showing me\nyour pokémons?$"

PacifidlogTown_DefaultText_DisguisedOakEndBattle:
	.string "You are really good!$"

PacifidlogTown_DefaultText_DisguisedOakAllowInSanctuary:
	.string "You seen like someone who love pokémons.\nI think you should visit the\p"
	.string "Pokémon sanctuary.\nI'll let the guards know about you.\p"
	.string "I think it is a perfect place for\na pokémon lover like you.$"

PacifidlogTown_EventScript_DisguisedOakEnd::
	msgbox PacifidlogTown_DefaultText_DisguisedOakEnd, MSGBOX_NPC
	release
	end

PacifidlogTown_DefaultText_DisguisedOakEnd:
	.string "Prof Oak: You should visit the\nPokémon Sanctuary.\p"
	.string "Now if you'll excuse me,\nI have to go fishing.$"
