const fs = require("fs");
const mapGroups = JSON.parse(fs.readFileSync("./data/maps/map_groups.json"));
const cMapGroups = fs.readFileSync("./include/constants/map_groups.h", "utf8");

const sections = Object.keys(mapGroups).filter((section) => section !== "group_order");
console.log(sections);

let fileContent = `#include "constants/pokemon.h"
#include "constants/map_groups.h"

// Gui stuff
const struct MapTypes mapIdToTypes[] = {\n`;

const defaultTypes = `{
		.land = {
			TYPE_NORMAL,
			TYPE_FIGHTING,
			TYPE_FLYING,
			TYPE_POISON,
			TYPE_GROUND,
			TYPE_BUG,
			TYPE_FIRE,
			TYPE_GRASS,
			TYPE_ELECTRIC,
			TYPE_PSYCHIC,
			TYPE_DRAGON,
			TYPE_DARK,
			TYPE_FAIRY,
		},
		.water = {
			TYPE_WATER,
		},
		.rock = {
			TYPE_GROUND,
			TYPE_ROCK,
			TYPE_STEEL,
		},
		.fishing = {
			TYPE_WATER,
		},
	},`

const MANUAL_TRANSLATIONS = {
	MAP_S_TIDAL_CORRIDOR: "MAP_SS_TIDAL_CORRIDOR",
	MAP_S_TIDAL_LOWER_DECK: "MAP_SS_TIDAL_LOWER_DECK",
	MAP_S_TIDAL_ROOMS: "MAP_SS_TIDAL_ROOMS",
};

for (const section of sections) {
	for (const map of mapGroups[section]) {
		// let splittedName = map.match(/[A-Z][a-z]+|[0-9]+/g);
		let splittedName = map.split(/(?=[A-Z])/g);
		console.log(splittedName);
		for (let i = 0; i < splittedName.length; i++) {
			if (splittedName[i].includes("_") && i < splittedName.length - 1) {
				const underscoreSplitted = splittedName[i].split("_");
				splittedName[i + 1] = underscoreSplitted[1] + splittedName[i + 1];
				splittedName[i] = underscoreSplitted[0];
			}
			splittedName[i] = splittedName[i].replace("_", "");
			if (splittedName[i].length === 1) {
				splittedName[i - 1] += splittedName[i];
				splittedName.splice(i, 1);
			}
			// // Check if last character is a number
			// console.log(splittedName[i][splittedName[i].length - 1]);
			// if (parseInt(splittedName[i][splittedName[i].length - 1]) && i < splittedName.length - 1) {
			// 	splittedName[i] += splittedName[i + 1];
			// 	splittedName.splice(i + 1, 1);
			// }
		}
		let formattedName = `MAP_${splittedName.join("_").toUpperCase()}`;
		if (!cMapGroups.includes(formattedName)) {
			formattedName = MANUAL_TRANSLATIONS[formattedName] || formattedName;
			if (!cMapGroups.includes(formattedName)) {
				console.log(`Missing ${formattedName}`);
				throw new Error(`Missing ${formattedName}`);
			}
		}
		fileContent += `\t[${formattedName}] = ${defaultTypes}\n`;
	}
}

fileContent += "};\n";

fs.writeFileSync("./wild_encounter.h", fileContent);