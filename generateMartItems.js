const fs = require("fs");

const splittedItemsFile = fs.readFileSync("./src/data/items.h", "utf-8").split("\n");

let items = ``;

for (const line of splittedItemsFile) {
	if (!line.includes("ITEM_") || line.includes("ITEM_TM_") || line.includes("battleUsage") || line.includes(".type"))
		continue;
	const itemId = line.replace("[", "").replace("]", "").replace("=", "").trim();
	items += `\t.2byte ${itemId}\n`;
}

fs.writeFileSync("./itemstosell.inc", items);
