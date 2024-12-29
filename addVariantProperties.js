const fs = require("fs");

const MANUAL_TRANSLATIONS = {
	"PichuSpikyEared": "Pichu",
	"PikachuCosplay": "Pikachu",
	"PikachuRockStar": "Pikachu",
	"PikachuBelle": "Pikachu",
	"PikachuPopStar": "Pikachu",
	"PikachuPhd": "Pikachu",
	"PikachuLibre": "Pikachu",
	"DudunsparceTwoSegment": "Dunsparce",
	"CastformNormal": "Castform",
	"DeoxysNormal": "Deoxys",
	"BurmyPlant": "Burmy",
	"BurmySandy": "Burmy",
	"BurmyTrash": "Burmy",
	"WormadamPlant": "Wormadam",
	"WormadamSandy": "Wormadam",
	"WormadamTrash": "Wormadam",
	"CherrimOvercast": "Cherrim",
	"ShellosWest": "Shellos",
	"ShellosEast": "Shellos",
	"GastrodonWest": "Gastrodon",
	"GastrodonEast": "Gastrodon",
	"GiratinaAltered": "Giratina",
	"ShayminLand": "Shaymin",
	"BasculinRedStriped": "Basculin",
	"BasculegionM": "Basculegion",
	"DarmanitanStandard": "Darmanitan",
	"DarmanitanGalarStandard": "DarmanitanGalar",
	"DeerlingSpring": "Deerling",
	"DeerlingSummer": "Deerling",
	"DeerlingAutumn": "Deerling",
	"DeerlingWinter": "Deerling",
	"SawsbuckSpring": "Sawsbuck",
	"SawsbuckSummer": "Sawsbuck",
	"SawsbuckAutumn": "Sawsbuck",
	"SawsbuckWinter": "Sawsbuck",
	"TornadusIncarnate": "Tornadus",
	"ThundurusIncarnate": "Thundurus",
	"LandorusIncarnate": "Landorus",
	"KeldeoOrdinary": "Keldeo",
	"MeloettaAria": "Meloetta",
	"GreninjaBattleBond": "Greninja",
	"VivillonIcySnow": "Vivillon",
	"VivillonPolar": "Vivillon",
	"VivillonTundra": "Vivillon",
	"VivillonContinental": "Vivillon",
	"VivillonGarden": "Vivillon",
	"VivillonHighPlains": "Vivillon",
	"VivillonJungle": "Vivillon",
	"VivillonMarine": "Vivillon",
	"VivillonMeadow": "Vivillon",
	"VivillonModern": "Vivillon",
	"VivillonMonsoon": "Vivillon",
	"VivillonOcean": "Vivillon",
	"VivillonRiver": "Vivillon",
	"VivillonSandstorm": "Vivillon",
	"VivillonSavanna": "Vivillon",
	"VivillonSun": "Vivillon",
	"VivillonArchipelago": "Vivillon",
	"VivillonElegant": "Vivillon",
	"VivillonFancy": "Vivillon",
	"FlabebeRed": "Flabebe",
	"FlabebeYellow": "Flabebe",
	"FlabebeBlue": "Flabebe",
	"FlabebeWhite": "Flabebe",
	"FlabebeOrange": "Flabebe",
	"FloetteRed": "Floette",
	"FloetteYellow": "Floette",
	"FloetteBlue": "Floette",
	"FloetteWhite": "Floette",
	"FloetteOrange": "Floette",
	"FloetteEternal": "Floette",
	"FlorgesRed": "Florges",
	"FlorgesYellow": "Florges",
	"FlorgesBlue": "Florges",
	"FlorgesWhite": "Florges",
	"FlorgesOrange": "Florges",
	"AegislashShield": "Aegislash",
	"PumpkabooAverage": "Pumpkaboo",
	"GourgeistAverage": "Gourgeist",
	"XerneasNeutral": "Xerneas",
	"XerneasActive": "Xerneas",
	"Zygarde50": "Zygarde",
	"Zygarde50PowerConstruct": "Zygarde",
	"Zygarde10AuraBreak": "Zygarde",
	"Zygarde10PowerConstruct": "Zygarde",
	"HoopaConfined": "Hoopa",
	"OricorioBaile": "Oricorio",
	"OricorioPomPom": "Oricorio",
	"OricorioPau": "Oricorio",
	"OricorioSensu": "Oricorio",
	"RockruffOwnTempo": "Rockruff",
	"LycanrocMidday": "Lycanroc",
	"WishiwashiSolo": "Wishiwashi",
	"MimikyuDisguised": "Mimikyu",
	"MimikyuTotemDisguised": "Mimikyu",
	"JangmoO": "Jangmoo",
	"HakamoO": "Hakamoo",
	"KommoO": "Kommoo",
	"KommoOTotem": "Kommoo",
	"ToxtricityAmped": "Toxtricity",
	"ToxtricityAmpedGmax": "ToxtricityGmax",
	"SinisteaPhony": "Sinistea",
	"PolteageistPhony": "Polteageist",
	"EiscueIce": "Eiscue",
	"IndeedeeM": "Indeedee",
	"MorpekoFullBelly": "Morpeko",
	"ZacianHero": "Zacian",
	"ZamazentaHero": "Zamazenta",
	"EternatusEternamax": "Eternatus",
	"UrshifuRapidStrike": "Urshifu",
	"UrshifuSingleStrike": "Urshifu",
	"UrshifuSingleStrikeGmax": "UrshifuGmax",
	"EnamorusIncarnate": "Enamorus",
	"OinkologneM": "Oinkologne",
	"MausholdThree": "Maushold",
	"SquawkabillyGreen": "Squawkabilly",
	"PalafinZero": "Palafin",
	"TatsugiriCurly": "Tatsugiri",
	"TatsugiriDroopy": "Tatsugiri",
	"TatsugiriStretchy": "Tatsugiri",
	"GimmighoulChest": "Gimmighoul",
	"PoltchageistCounterfeit": "Poltchageist",
	"SinistchaUnremarkable": "Sinistcha",
	"TerapagosNormal": "Terapagos",
}

function addVariantProperties(genNumber) {
	const file = fs.readFileSync(`src/data/pokemon/species_info/gen_${genNumber}_families-backup.h`, "utf8");
	const smogonVariantsFile = fs.readFileSync(`src/data/pokemon/smogon_variants/gen_9.h`, "utf8");
	const fileSplitedByLines = file.split("\n");
	let currentName = "";
	for (let i = 0; i < fileSplitedByLines.length; i++) {
		if (fileSplitedByLines[i].trim().startsWith("[SPECIES_")) {
			const matches = new RegExp(/\[SPECIES_(.*?)\]/gm).exec(fileSplitedByLines[i]);
			if (!matches) throw new Error("Name not found");
			// Format camel case
			currentName = matches[1].split("_").map(word => word.charAt(0) + word.slice(1).toLowerCase()).join("");
			console.log("Current name: " + currentName);
		}
		if (fileSplitedByLines[i].trim() !== "},") continue;
		let smogonVariantName = `s${currentName}SmogonVariants`;
		if (!smogonVariantsFile.includes(smogonVariantName)) {
			console.log(`${smogonVariantName} not found. Trying manual translation`);
			smogonVariantName = `s${MANUAL_TRANSLATIONS[currentName]}SmogonVariants`;
			if (!smogonVariantsFile.includes(smogonVariantName)) {
				throw new Error(`${smogonVariantName} not found`);
			}
		}
		fileSplitedByLines[i] = fileSplitedByLines[i].replace("},", `    .smogonVariants = ${smogonVariantName},\n    },`);
	}
	fs.writeFileSync(`src/data/pokemon/species_info/gen_${genNumber}_families.h`, fileSplitedByLines.join("\n"));
}

addVariantProperties(9);