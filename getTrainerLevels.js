const fs = require("fs");
const splittedTrainersFile = fs.readFileSync("./src/data/trainers.h", "utf-8").split("\n");

let fileContent = `static const u8 trainerIdToMinLevel[] = {\n`
let currentTrainer;
let currentMaxLevel = 0;
for (let i = 0; i < splittedTrainersFile.length; i++) {
	if (splittedTrainersFile[i].includes("[TRAINER_")) {
		if (currentTrainer) {
			if (currentMaxLevel < 15) {
				currentMaxLevel = Math.ceil(currentMaxLevel * 1.75);
			} else if (currentMaxLevel < 20) {
				currentMaxLevel = Math.ceil(currentMaxLevel * 2);
			} else if (currentMaxLevel < 40) {
				currentMaxLevel = Math.ceil(currentMaxLevel * 2.25);
			} else {
				currentMaxLevel = Math.ceil(currentMaxLevel * 2.5);
			}
			currentMaxLevel = Math.min(currentMaxLevel, 100);
			fileContent += `\t${currentTrainer} ${currentMaxLevel},\n`;
		}
		currentMaxLevel = 0;
		currentTrainer = splittedTrainersFile[i].trim();
	}
	if (splittedTrainersFile[i].includes(".lvl = ")) {
		const level = parseInt(splittedTrainersFile[i].trim().replace(".lvl = ", ""));
		currentMaxLevel = Math.max(currentMaxLevel, level);
	}
}
fileContent += "};";
fs.writeFileSync("./trainer_levels.h", fileContent);