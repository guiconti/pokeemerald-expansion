#include "global.h"
// I might not need all of this
#include "main.h"
#include "menu.h"
#include "window.h"
#include "text.h"
#include "text_window.h"
#include "international_string_util.h"
#include "strings.h"
#include "string_util.h"

// TODO: Implement menu
void SaveData(void) {
	gSaveBlock1Ptr->randomizeStarters = 1;
	gSaveBlock1Ptr->randomizeWildEncounters = 1;
  gSaveBlock1Ptr->randomizeBattles = 1;
  gSaveBlock1Ptr->chaosModeActive = 0;
  gSaveBlock1Ptr->nuzlockeModeActive = 1;
}