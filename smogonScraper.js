const fs = require("fs");
// const smogonData = JSON.parse(fs.readFileSync("./smogonData.json", "utf8"));
const smogonData = JSON.parse(fs.readFileSync("./smogonLearnsetData.json", "utf8"));
const dexSettings = JSON.parse(fs.readFileSync("./dexSettings.json", "utf8"));
const pokemons = dexSettings.injectRpcs[1][1].pokemon;

const MAIN_URL_PREFIX = "https://www.smogon.com/dex/"
const GENERATIONS = [
	"rb",
	"gs",
	"rs",
	"dp",
	"bw",
	"xy",
	"sm",
	"ss",
	"sv",
];

const FINAL_PREFIX = "/pokemon/"
const TIME_BETWEEN_REQUESTS = 100;

async function sleep(ms) {
	return new Promise(resolve => setTimeout(resolve, ms));
}

async function getSmogonData() {
	const startIndex = 0;
	for (let i = startIndex; i < pokemons.length; i++) {
		if (pokemons[i].isNonstandard === "CAP") continue;
		console.log("Getting data for", pokemons[i].name, " - Index:", i);
		if (!smogonData[pokemons[i].name]) {
			smogonData[pokemons[i].name] = {};
		}
		for (let j = 0; j < GENERATIONS.length; j++) {
			const url = MAIN_URL_PREFIX + GENERATIONS[j] + FINAL_PREFIX + pokemons[i].name;
			// Fetch GET URL
			const response = await fetch(url);
			if (!response.ok) {
				smogonData[pokemons[i].name][GENERATIONS[j]] = [];
				if (response.status === 429) {
					console.log("Rate limited, waiting 10 minutes");
					await sleep(600000);
					j--;
				}
				continue;
			};
			const content = await response.text();
			// console.log(content);
			// const matches = new RegExp(/"strategies":(.*?)}}],/gm).exec(content);
			const matches = new RegExp(/"learnset":(.*?),"strategies"/gm).exec(content);
			await sleep(TIME_BETWEEN_REQUESTS);
			if (!matches) {
				smogonData[pokemons[i].name][GENERATIONS[j]] = [];
				continue;
			};
			// const strategies = JSON.parse("" + matches[1] + "}}]");
			// const formattedStrategies = strategies.map(strategy => {
			// 	return {
			// 		format: strategy.format,
			// 		alternatives: strategy.movesets.map(moveset => {
			// 			return {
			// 				name: moveset.name,
			// 				levels: moveset.levels,
			// 				abilities: moveset.abilities,
			// 				items: moveset.items,
			// 				ev: moveset.evconfigs,
			// 				natures: moveset.natures,
			// 				moves: moveset.moveslots
			// 			}
			// 		})
			// 	};
			// });
			smogonData[pokemons[i].name][GENERATIONS[j]] = JSON.parse(matches[1]);
		}
		fs.writeFileSync("./smogonLearnsetData.json", JSON.stringify(smogonData));
	}
}

getSmogonData();