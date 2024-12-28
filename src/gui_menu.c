#include "global.h"
#include "main.h"
#include "menu.h"
#include "scanline_effect.h"
#include "palette.h"
#include "sprite.h"
#include "sound.h"
#include "task.h"
#include "malloc.h"
#include "bg.h"
#include "gpu_regs.h"
#include "window.h"
#include "text.h"
#include "text_window.h"
#include "international_string_util.h"
#include "strings.h"
#include "string_util.h"
#include "gba/m4a_internal.h"
#include "constants/rgb.h"
#include "battle_main.h"
#include "pokemon.h"

// Menu options
enum {
  MENU_RANDOMIZER,
  MENU_NUZLOCKE,
  MENU_DIFFICULTY,
  MENU_QOL,
  MENU_COUNT,
};

// Randomizer options
enum {
  MENUITEM_RANDOMIZER_ENABLED,
  MENUITEM_RANDOM_STARTERS_ENABLED,
  MENUITEM_RANDOM_WILD_ENCOUNTER_ENABLED,
  MENUITEM_RANDOM_BATTLES_ENABLED,
  MENUITEM_CHAOS_MODE,
  MENUITEM_RANDOMIZER_NEXT,
  MENUITEM_RANDOMIZER_COUNT,
};

// Nuzlocke options
enum {
  MENUITEM_NUZLOCKE_ENABLED,
  MENUITEM_NUZLOCKE_PLACEHOLDER_2,
  MENUITEM_NUZLOCKE_PLACEHOLDER_3,
  MENUITEM_NUZLOCKE_PLACEHOLDER_4,
  MENUITEM_NUZLOCKE_PLACEHOLDER_5,
  MENUITEM_NUZLOCKE_NEXT,
  MENUITEM_NUZLOCKE_COUNT,
};

// Difficulty options
enum {
  MENUITEM_DIFFICULTY_INCREASED,
  MENUITEM_DIFFICULTY_LEVEL_CAP,
  MENUITEM_DIFFICULTY_PLACEHOLDER_3,
  MENUITEM_DIFFICULTY_PLACEHOLDER_4,
  MENUITEM_DIFFICULTY_PLACEHOLDER_5,
  MENUITEM_DIFFICULTY_NEXT,
  MENUITEM_DIFFICULTY_COUNT,
};

// QoL options
enum {
  MENUITEM_QOL_EXP_SHARE,
  MENUITEM_QOL_PLACEHOLDER_2,
  MENUITEM_QOL_PLACEHOLDER_3,
  MENUITEM_QOL_PLACEHOLDER_4,
  MENUITEM_QOL_PLACEHOLDER_5,
  MENUITEM_QOL_SAVE,
  MENUITEM_QOL_COUNT,
};

// Window Ids
enum {
  WIN_TOPBAR,
  WIN_OPTIONS,
  WIN_DESCRIPTION
};

#define Y_DIFF 16 // Difference in pixels between items.
#define OPTIONS_ON_SCREEN 5
#define NUM_OPTIONS_FROM_BORDER 1

struct OptionMenu {
    u8 submenu;
    u8 randomizer[MENUITEM_RANDOMIZER_COUNT];
    u8 nuzlocke[MENUITEM_NUZLOCKE_COUNT];
    u8 difficulty[MENUITEM_DIFFICULTY_COUNT];
    u8 qol[MENUITEM_QOL_COUNT];
    // u8 sel_challenges[MENUITEM_CHALLENGES_COUNT];
    int menuCursor[MENU_COUNT];
    int visibleCursor[MENU_COUNT];
    u8 arrowTaskId;
};

// local functions
static void MainCB2(void);
static void VBlankCB(void);
static void DrawTopBarText(void); //top Option text
static void DrawLeftSideOptionText(int selection, int y);
static void DrawRightSideChoiceText(const u8 *str, int x, int y, bool8 choosen, bool8 active);
static void DrawOptionMenuTexts(void); //left side text;
static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style, bool8 active);
static void DrawChoices(u32 id, int y); //right side draw function
static void HighlightOptionMenuItem(void);
static void Task_OptionMenuFadeIn(u8 taskId);
static void Task_OptionMenuProcessInput(u8 taskId);
static void Task_RandomizerChallengesMenuSave(u8 taskId);
static void Task_RandomizerChallengesMenuFadeOut(u8 taskId);
static u8 MenuItemCount(void);
static u8 MenuItemCancel(void);
static const u8 *const OptionTextDescription(void);
static const u8 *const OptionTextRight(u8 menuItem);
static int ProcessInput_Options_Two(int selection);
static void DrawChoices_Randomizer_Toggle(int selection, int y);
static void DrawChoices_Randomize_Starter(int selection, int y);
static void DrawChoices_Randomize_WildEncounters(int selection, int y);
static void DrawChoices_Randomize_Battles(int selection, int y);
static void DrawChoices_Chaos_Mode(int selection, int y);
static void DrawChoices_Random_OffOn(int selection, int y, bool8 active);
static void DrawChoices_Nuzlocke_Toggle(int selection, int y);
static void DrawChoices_DifficultyIncrease_Toggle(int selection, int y);
static void DrawChoices_DifficultyLevelCap_Toggle(int selection, int y);
static void DrawChoices_ExpShare_Toggle(int selection, int y);
static void ReDrawAll(void);
static bool8 CheckConditions(int selection);
static void DrawBgWindowFrames(void);
static void ScrollMenu(int direction);
static void ScrollAll(int direction); // to bottom or top

// EWRAM vars
EWRAM_DATA static struct OptionMenu *options = NULL;

// const data
static const u16 sOptionMenuBg_Pal[] = {RGB(17, 18, 31)};
static const u16 sOptionMenuText_Pal[] = INCBIN_U16("graphics/interface/option_menu_text_custom.gbapal");

#define TEXT_COLOR_OPTIONS_WHITE                1
#define TEXT_COLOR_OPTIONS_GRAY_FG              2
#define TEXT_COLOR_OPTIONS_GRAY_SHADOW          3
#define TEXT_COLOR_OPTIONS_GRAY_LIGHT_FG        4
#define TEXT_COLOR_OPTIONS_ORANGE_FG            5
#define TEXT_COLOR_OPTIONS_ORANGE_SHADOW        6
#define TEXT_COLOR_OPTIONS_RED_FG               7
#define TEXT_COLOR_OPTIONS_RED_SHADOW           8
#define TEXT_COLOR_OPTIONS_GREEN_FG             9
#define TEXT_COLOR_OPTIONS_GREEN_SHADOW         10
#define TEXT_COLOR_OPTIONS_GREEN_DARK_FG        11
#define TEXT_COLOR_OPTIONS_GREEN_DARK_SHADOW    12
#define TEXT_COLOR_OPTIONS_RED_DARK_FG          13
#define TEXT_COLOR_OPTIONS_RED_DARK_SHADOW      14

// Menu draw and input functions
struct { // MENU_RANDOMIZER
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsRandom[MENUITEM_RANDOMIZER_COUNT] =
{
    [MENUITEM_RANDOMIZER_ENABLED]                    = {DrawChoices_Randomizer_Toggle,           ProcessInput_Options_Two},
    [MENUITEM_RANDOM_STARTERS_ENABLED]                   = {DrawChoices_Randomize_Starter,          ProcessInput_Options_Two},
    [MENUITEM_RANDOM_WILD_ENCOUNTER_ENABLED]                 = {DrawChoices_Randomize_WildEncounters,         ProcessInput_Options_Two},
    [MENUITEM_RANDOM_BATTLES_ENABLED]                   = {DrawChoices_Randomize_Battles,          ProcessInput_Options_Two},
    [MENUITEM_CHAOS_MODE]                    = {DrawChoices_Chaos_Mode,           ProcessInput_Options_Two},
    [MENUITEM_RANDOMIZER_NEXT]   = {NULL, NULL},
};

struct // MENU_NUZLOCKE
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsNuzlocke[MENUITEM_NUZLOCKE_COUNT] =
{
    [MENUITEM_NUZLOCKE_ENABLED]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_NUZLOCKE_PLACEHOLDER_2]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_NUZLOCKE_PLACEHOLDER_3]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_NUZLOCKE_PLACEHOLDER_4]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_NUZLOCKE_PLACEHOLDER_5]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_NUZLOCKE_NEXT]            = {NULL, NULL},
};

struct // MENU_DIFFICULTY
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsDifficulty[MENUITEM_DIFFICULTY_COUNT] =
{
    [MENUITEM_DIFFICULTY_INCREASED]        = {DrawChoices_DifficultyIncrease_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_DIFFICULTY_LEVEL_CAP]        = {DrawChoices_DifficultyLevelCap_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_DIFFICULTY_PLACEHOLDER_3]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_DIFFICULTY_PLACEHOLDER_4]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_DIFFICULTY_PLACEHOLDER_5]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_DIFFICULTY_NEXT]            = {NULL, NULL},
};

struct // MENU_QOL
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsQoL[MENUITEM_QOL_COUNT] =
{
    [MENUITEM_QOL_EXP_SHARE]        = {DrawChoices_ExpShare_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_QOL_PLACEHOLDER_2]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_QOL_PLACEHOLDER_3]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_QOL_PLACEHOLDER_4]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_QOL_PLACEHOLDER_5]        = {DrawChoices_Nuzlocke_Toggle,     ProcessInput_Options_Two},
    [MENUITEM_QOL_SAVE]            = {NULL, NULL},
};

static const struct BgTemplate sOptionMenuBgTemplates[] =
{
    {
       .bg = 0,
       .charBaseIndex = 1,
       .mapBaseIndex = 30,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
       .baseTile = 0
    },
    {
       .bg = 1,
       .charBaseIndex = 1,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 0,
       .baseTile = 0
    },
};

static const struct WindowTemplate sOptionMenuWinTemplates[] =
{
    {//WIN_TOPBAR
        .bg = 1,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 2
    },
    {//WIN_OPTIONS
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 26,
        .height = 10,
        .paletteNum = 1,
        .baseBlock = 62
    },
    {//WIN_DESCRIPTION
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 26,
        .height = 4,
        .paletteNum = 1,
        .baseBlock = 500
    },
    DUMMY_WIN_TEMPLATE
};

// Descriptions
static const u8 sText_Empty[]               = _("");
static const u8 sText_Description_Save[]    = _("Save choices and continue...");

static const u8 sText_Description_Randomizer_Off[]                  = _("Game will not be randomized.");
static const u8 sText_Description_Randomizer_On[]                   = _("Play the game randomized.\nSettings below!");
static const u8 sText_Description_Random_Starter_Off[]              = _("Standard starter POKéMON.");
static const u8 sText_Description_Random_Starter_On[]               = _("Randomize starter POKéMON.");
static const u8 sText_Description_Random_WildEncounter_Off[]          = _("Same wild encounter as in the\nbase game.");
static const u8 sText_Description_Random_WildEncounter_On[]           = _("Randomize wild POKéMON.");
static const u8 sText_Description_Random_Trainer_Off[]              = _("Trainer will have their expected\nparty.");
static const u8 sText_Description_Random_Trainer_On[]               = _("Randomize enemy trainer parties.");
static const u8 sText_Description_Chaos_Mode_Off[]              = _("Everything will be randomized.");
static const u8 sText_Description_Chaos_Mode_On[]               = _("There will be some randomness\nbut not everything will be randomized.");
static const u8 sText_Description_Random_Next[]                     = _("Continue to Nuzlocke options.");
static const u8 *const sOptionMenuItemDescriptionsRandomizer[MENUITEM_RANDOMIZER_COUNT][2] =
{
    [MENUITEM_RANDOMIZER_ENABLED]                    = {sText_Description_Randomizer_Off,               sText_Description_Randomizer_On},
    [MENUITEM_RANDOM_STARTERS_ENABLED]                   = {sText_Description_Random_Starter_Off,                  sText_Description_Random_Starter_On},
    [MENUITEM_RANDOM_WILD_ENCOUNTER_ENABLED]                 = {sText_Description_Random_WildEncounter_Off,              sText_Description_Random_WildEncounter_On},
    [MENUITEM_RANDOM_BATTLES_ENABLED]                   = {sText_Description_Random_Trainer_Off,           sText_Description_Random_Trainer_On},
    [MENUITEM_CHAOS_MODE]                    = {sText_Description_Chaos_Mode_Off,            sText_Description_Chaos_Mode_On},
    [MENUITEM_RANDOMIZER_NEXT]                      = {sText_Description_Random_Next,                  sText_Empty},
};
static const u8 *const sOptionMenuItemDescriptionsDisabledRandomizer[MENUITEM_RANDOMIZER_COUNT] = {
    [MENUITEM_RANDOMIZER_ENABLED]                    = sText_Empty,
    [MENUITEM_RANDOM_STARTERS_ENABLED]                   = sText_Empty,
    [MENUITEM_RANDOM_WILD_ENCOUNTER_ENABLED]                 = sText_Empty,
    [MENUITEM_RANDOM_BATTLES_ENABLED]                   = sText_Empty,
    [MENUITEM_CHAOS_MODE]                   = sText_Empty,
    [MENUITEM_RANDOMIZER_NEXT]                   = sText_Empty,
};

static const u8 sText_Description_Nuzlocke_Off[]               = _("Nuzlocke mode is disabled.");
static const u8 sText_Description_Nuzlocke_On[]               = _("Nuzlocke mode is enabled.");
static const u8 sText_Description_Nuzlocke_Next[]                     = _("Continue to Difficulty options.");
static const u8 *const sOptionMenuItemDescriptionsNuzlocke[MENUITEM_NUZLOCKE_COUNT][2] =
{
    [MENUITEM_NUZLOCKE_ENABLED]            = {sText_Description_Nuzlocke_Off,                 sText_Description_Nuzlocke_On,},
    [MENUITEM_NUZLOCKE_PLACEHOLDER_2]= {sText_Description_Nuzlocke_Off,                 sText_Description_Nuzlocke_On,},
    [MENUITEM_NUZLOCKE_PLACEHOLDER_3]= {sText_Description_Nuzlocke_Off,                 sText_Description_Nuzlocke_On,},
    [MENUITEM_NUZLOCKE_PLACEHOLDER_4]= {sText_Description_Nuzlocke_Off,                 sText_Description_Nuzlocke_On,},
    [MENUITEM_NUZLOCKE_PLACEHOLDER_5]= {sText_Description_Nuzlocke_Off,                 sText_Description_Nuzlocke_On,},
    [MENUITEM_NUZLOCKE_NEXT]                = {sText_Description_Nuzlocke_Next,                 sText_Empty,},
};
static const u8 *const sOptionMenuItemDescriptionsDisabledNuzlocke[MENUITEM_NUZLOCKE_COUNT] =
{
    [MENUITEM_NUZLOCKE_ENABLED]            = sText_Empty,
    [MENUITEM_NUZLOCKE_PLACEHOLDER_2]            = sText_Empty,
    [MENUITEM_NUZLOCKE_PLACEHOLDER_3]            = sText_Empty,
    [MENUITEM_NUZLOCKE_PLACEHOLDER_4]            = sText_Empty,
    [MENUITEM_NUZLOCKE_PLACEHOLDER_5]            = sText_Empty,
    [MENUITEM_NUZLOCKE_NEXT]                = sText_Empty,
};

static const u8 sText_Description_Difficulty_Increase_Off[]               = _("Difficulty increase is disabled.");
static const u8 sText_Description_Difficulty_Increase_On[]               = _("Difficulty increase is enabled.");
static const u8 sText_Description_Difficulty_Level_Cap_Off[]               = _("Level cap is disabled.");
static const u8 sText_Description_Difficulty_Level_Cap_On[]               = _("Level cap is enabled.");
static const u8 sText_Description_Difficulty_Next[]                     = _("Continue to QoL options.");
static const u8 *const sOptionMenuItemDescriptionsDifficulty[MENUITEM_DIFFICULTY_COUNT][2] =
{
    [MENUITEM_DIFFICULTY_INCREASED]            = {sText_Description_Difficulty_Increase_Off,                 sText_Description_Difficulty_Increase_On,},
    [MENUITEM_DIFFICULTY_LEVEL_CAP]= {sText_Description_Difficulty_Level_Cap_Off,                 sText_Description_Difficulty_Level_Cap_On,},
    [MENUITEM_DIFFICULTY_PLACEHOLDER_3]= {sText_Description_Difficulty_Increase_Off,                 sText_Description_Difficulty_Increase_On,},
    [MENUITEM_DIFFICULTY_PLACEHOLDER_4]= {sText_Description_Difficulty_Increase_Off,                 sText_Description_Difficulty_Increase_On,},
    [MENUITEM_DIFFICULTY_PLACEHOLDER_5]= {sText_Description_Difficulty_Increase_Off,                 sText_Description_Difficulty_Increase_On,},
    [MENUITEM_DIFFICULTY_NEXT]                = {sText_Description_Save,                 sText_Empty,},
};
static const u8 *const sOptionMenuItemDescriptionsDisabledDifficulty[MENUITEM_DIFFICULTY_COUNT] =
{
    [MENUITEM_DIFFICULTY_INCREASED]            = sText_Empty,
    [MENUITEM_DIFFICULTY_LEVEL_CAP]            = sText_Empty,
    [MENUITEM_DIFFICULTY_PLACEHOLDER_3]            = sText_Empty,
    [MENUITEM_DIFFICULTY_PLACEHOLDER_4]            = sText_Empty,
    [MENUITEM_DIFFICULTY_PLACEHOLDER_5]            = sText_Empty,
    [MENUITEM_DIFFICULTY_NEXT]                = sText_Empty,
};

static const u8 sText_Description_QoL_Exp_Share_Off[]               = _("Exp share is disabled.");
static const u8 sText_Description_QoL_Exp_Share_On[]               = _("Exp share is is enabled.");
static const u8 sText_Description_QoL_Save[]                     = _("Finish settings.");
static const u8 *const sOptionMenuItemDescriptionsQoL[MENUITEM_QOL_COUNT][2] =
{
    [MENUITEM_QOL_EXP_SHARE]            = {sText_Description_QoL_Exp_Share_Off,                 sText_Description_QoL_Exp_Share_On,},
    [MENUITEM_QOL_PLACEHOLDER_2]= {sText_Description_QoL_Exp_Share_Off,                 sText_Description_QoL_Exp_Share_On,},
    [MENUITEM_QOL_PLACEHOLDER_3]= {sText_Description_QoL_Exp_Share_Off,                 sText_Description_QoL_Exp_Share_On,},
    [MENUITEM_QOL_PLACEHOLDER_4]= {sText_Description_QoL_Exp_Share_Off,                 sText_Description_QoL_Exp_Share_On,},
    [MENUITEM_QOL_PLACEHOLDER_5]= {sText_Description_QoL_Exp_Share_Off,                 sText_Description_QoL_Exp_Share_On,},
    [MENUITEM_QOL_SAVE]                = {sText_Description_QoL_Save,                 sText_Empty,},
};
static const u8 *const sOptionMenuItemDescriptionsDisabledQoL[MENUITEM_QOL_COUNT] =
{
    [MENUITEM_QOL_EXP_SHARE]            = sText_Empty,
    [MENUITEM_QOL_PLACEHOLDER_2]            = sText_Empty,
    [MENUITEM_QOL_PLACEHOLDER_3]            = sText_Empty,
    [MENUITEM_QOL_PLACEHOLDER_4]            = sText_Empty,
    [MENUITEM_QOL_PLACEHOLDER_5]            = sText_Empty,
    [MENUITEM_QOL_SAVE]                = sText_Empty,
};

// Menu left side option names text
static const u8 sText_Randomizer[] =                _("RANDOMIZER");
static const u8 sText_Starter[] =                   _("STARTER POKéMON");
static const u8 sText_WildPkmn[] =                  _("WILD ENCOUNTER");
static const u8 sText_Trainer[] =                   _("BATTLES");
static const u8 sText_Chaos[] =                     _("CHAOS MODE");
static const u8 sText_Next[] =                      _("NEXT");
static const u8 sText_Save[] =           _("SAVE");
static const u8 *const sOptionMenuItemsNamesRandom[MENUITEM_RANDOMIZER_COUNT] =
{
    [MENUITEM_RANDOMIZER_ENABLED]                    = sText_Randomizer,
    [MENUITEM_RANDOM_STARTERS_ENABLED]                   = sText_Starter,
    [MENUITEM_RANDOM_WILD_ENCOUNTER_ENABLED]                 = sText_WildPkmn,
    [MENUITEM_RANDOM_BATTLES_ENABLED]                   = sText_Trainer,
    [MENUITEM_CHAOS_MODE]                    = sText_Chaos,
    [MENUITEM_RANDOMIZER_NEXT]                      = sText_Next,
};

// MENU_NUZLOCKE
static const u8 sText_Nuzlocke[]        = _("NUZLOCKE");
static const u8 sText_Placeholder[]        = _("PLACEHOLDER");
static const u8 *const sOptionMenuItemsNamesNuzlocke[MENUITEM_NUZLOCKE_COUNT] =
{
    [MENUITEM_NUZLOCKE_ENABLED]        = sText_Nuzlocke,
    [MENUITEM_NUZLOCKE_PLACEHOLDER_2] = sText_Placeholder,
    [MENUITEM_NUZLOCKE_PLACEHOLDER_3] = sText_Placeholder,
    [MENUITEM_NUZLOCKE_PLACEHOLDER_4] = sText_Placeholder,
    [MENUITEM_NUZLOCKE_PLACEHOLDER_5] = sText_Placeholder,
    [MENUITEM_NUZLOCKE_NEXT]            = sText_Next,
};

// MENU_DIFFICULTY
static const u8 sText_Difficulty[]        = _("DIFFICULTY");
static const u8 sText_LevelCap[]        = _("LEVEL CAP");
static const u8 *const sOptionMenuItemsNamesDifficulty[MENUITEM_DIFFICULTY_COUNT] =
{
    [MENUITEM_DIFFICULTY_INCREASED]        = sText_Difficulty,
    [MENUITEM_DIFFICULTY_LEVEL_CAP] = sText_LevelCap,
    [MENUITEM_DIFFICULTY_PLACEHOLDER_3] = sText_Placeholder,
    [MENUITEM_DIFFICULTY_PLACEHOLDER_4] = sText_Placeholder,
    [MENUITEM_DIFFICULTY_PLACEHOLDER_5] = sText_Placeholder,
    [MENUITEM_DIFFICULTY_NEXT]            = sText_Next,
};

// MENU_QOL
static const u8 sText_ExpShare[]        = _("EXP SHARE");
static const u8 *const sOptionMenuItemsNamesQoL[MENUITEM_QOL_COUNT] =
{
    [MENUITEM_QOL_EXP_SHARE]        = sText_ExpShare,
    [MENUITEM_QOL_PLACEHOLDER_2] = sText_Placeholder,
    [MENUITEM_QOL_PLACEHOLDER_3] = sText_Placeholder,
    [MENUITEM_QOL_PLACEHOLDER_4] = sText_Placeholder,
    [MENUITEM_QOL_PLACEHOLDER_5] = sText_Placeholder,
    [MENUITEM_QOL_SAVE]            = sText_Save,
};

// Functions to dynamically retrieve data

static const u8 *const OptionTextDescription(void) {
    u8 menuItem = options->menuCursor[options->submenu];
    u8 selection;

    switch (options->submenu) {
      case MENU_RANDOMIZER:
          if (!CheckConditions(menuItem) && sOptionMenuItemDescriptionsDisabledRandomizer[menuItem] != sText_Empty)
              return sOptionMenuItemDescriptionsDisabledRandomizer[menuItem];
          selection = options->randomizer[menuItem];  
          return sOptionMenuItemDescriptionsRandomizer[menuItem][selection];
      case MENU_NUZLOCKE:
          if (!CheckConditions(menuItem) && sOptionMenuItemDescriptionsDisabledNuzlocke[menuItem] != sText_Empty)
              return sOptionMenuItemDescriptionsDisabledNuzlocke[menuItem];
          selection = options->nuzlocke[menuItem];
          return sOptionMenuItemDescriptionsNuzlocke[menuItem][selection];
      case MENU_DIFFICULTY:
          if (!CheckConditions(menuItem) && sOptionMenuItemDescriptionsDisabledDifficulty[menuItem] != sText_Empty)
              return sOptionMenuItemDescriptionsDisabledDifficulty[menuItem];
          selection = options->difficulty[menuItem];
          return sOptionMenuItemDescriptionsDifficulty[menuItem][selection];
      case MENU_QOL:
          if (!CheckConditions(menuItem) && sOptionMenuItemDescriptionsDisabledQoL[menuItem] != sText_Empty)
              return sOptionMenuItemDescriptionsDisabledQoL[menuItem];
          selection = options->qol[menuItem];
          return sOptionMenuItemDescriptionsQoL[menuItem][selection];
      default: return sOptionMenuItemDescriptionsRandomizer[0][0];
    }
}

static const u8 *const OptionTextRight(u8 menuItem) {
  switch (options->submenu) {
  case MENU_RANDOMIZER:       return sOptionMenuItemsNamesRandom[menuItem];
  case MENU_NUZLOCKE:         return sOptionMenuItemsNamesNuzlocke[menuItem];
  case MENU_DIFFICULTY:         return sOptionMenuItemsNamesDifficulty[menuItem];
  case MENU_QOL:         return sOptionMenuItemsNamesQoL[menuItem];
  default: return sOptionMenuItemsNamesRandom[0];
  }
}

// Main code
static void MainCB2(void) {
  RunTasks();
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
}

static void VBlankCB(void) {
  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
}

static const u8 sText_TopBar_Left[]             = _("{L_BUTTON}GENERAL");
static const u8 sText_TopBar_Right[]            = _("{R_BUTTON}CUSTOM");
static const u8 sText_TopBar_Randomizer[]       = _("RANDOMIZER");
static const u8 sText_TopBar_Nuzlocke[]         = _("NUZLOCKE");
static const u8 sText_TopBar_Difficulty[]       = _("DIFFICULTY");
static const u8 sText_TopBar_QoL[]       = _("QOL");
static void DrawTopBarText(void)
{
    const u8 color[3] = { TEXT_DYNAMIC_COLOR_6, TEXT_COLOR_WHITE, TEXT_COLOR_OPTIONS_GRAY_FG };
    int width = 0;
    int right = 240 - GetStringWidth(FONT_SMALL, sText_TopBar_Right, 0) - 5;

    FillWindowPixelBuffer(WIN_TOPBAR, PIXEL_FILL(15));
    switch (options->submenu) {
        case MENU_RANDOMIZER:
            width = GetStringWidth(FONT_SMALL, sText_TopBar_Randomizer, 0) / 2;
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 120-width, 1, color, 0, sText_TopBar_Randomizer);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, right, 1, color, 0, sText_TopBar_Right);
            break;
        case MENU_NUZLOCKE:
            width = GetStringWidth(FONT_SMALL, sText_TopBar_Nuzlocke, 0) / 2;
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 5, 1, color, 0, sText_TopBar_Left);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 120-width, 1, color, 0, sText_TopBar_Nuzlocke);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, right, 1, color, 0, sText_TopBar_Right);
            break;
        case MENU_DIFFICULTY:
            width = GetStringWidth(FONT_SMALL, sText_TopBar_Difficulty, 0) / 2;
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 5, 1, color, 0, sText_TopBar_Left);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 120-width, 1, color, 0, sText_TopBar_Difficulty);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, right, 1, color, 0, sText_TopBar_Right);
            break;
        case MENU_QOL:
            width = GetStringWidth(FONT_SMALL, sText_TopBar_QoL, 0) / 2;
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 5, 1, color, 0, sText_TopBar_Left);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 120-width, 1, color, 0, sText_TopBar_QoL);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, right, 1, color, 0, sText_TopBar_Right);
            break;
    }
    PutWindowTilemap(WIN_TOPBAR);
    CopyWindowToVram(WIN_TOPBAR, COPYWIN_FULL);
}

static void DrawOptionMenuTexts(void) //left side text
{
    u8 i;

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));
    for (i = 0; i < MenuItemCount(); i++)
        DrawLeftSideOptionText(i, (i * Y_DIFF) + 1);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

static void DrawDescriptionText(void)
{
    u8 color_gray[3];
    color_gray[0] = TEXT_COLOR_TRANSPARENT;
    color_gray[1] = TEXT_COLOR_OPTIONS_GRAY_FG;
    color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;
        
    FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(1));
    AddTextPrinterParameterized4(WIN_DESCRIPTION, FONT_NORMAL, 8, 1, 0, 0, color_gray, TEXT_SKIP_DRAW, OptionTextDescription());
    CopyWindowToVram(WIN_DESCRIPTION, COPYWIN_FULL);
}

static void DrawLeftSideOptionText(int selection, int y)
{
    u8 color_yellow[3];
    u8 color_gray[3];

    color_yellow[0] = TEXT_COLOR_TRANSPARENT;
    color_yellow[1] = TEXT_COLOR_OPTIONS_ORANGE_FG;
    color_yellow[2] = TEXT_COLOR_OPTIONS_ORANGE_SHADOW;
    color_gray[0] = TEXT_COLOR_TRANSPARENT;
    color_gray[1] = TEXT_COLOR_OPTIONS_GRAY_LIGHT_FG;
    color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;

    if (CheckConditions(selection))
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, 8, y, 0, 0, color_yellow, TEXT_SKIP_DRAW, OptionTextRight(selection));
    else
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, 8, y, 0, 0, color_gray, TEXT_SKIP_DRAW, OptionTextRight(selection));
}

static void DrawRightSideChoiceText(const u8 *text, int x, int y, bool8 choosen, bool8 active) {
  u8 color_red[3];
  u8 color_gray[3];

  if (active) {
    color_red[0] = TEXT_COLOR_TRANSPARENT;
    color_red[1] = TEXT_COLOR_OPTIONS_RED_FG;
    color_red[2] = TEXT_COLOR_OPTIONS_RED_SHADOW;
    color_gray[0] = TEXT_COLOR_TRANSPARENT;
    color_gray[1] = TEXT_COLOR_OPTIONS_GRAY_FG;
    color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;
  }
  else {
    color_red[0] = TEXT_COLOR_TRANSPARENT;
    color_red[1] = TEXT_COLOR_OPTIONS_RED_DARK_FG;
    color_red[2] = TEXT_COLOR_OPTIONS_RED_DARK_SHADOW;
    color_gray[0] = TEXT_COLOR_TRANSPARENT;
    color_gray[1] = TEXT_COLOR_OPTIONS_GRAY_LIGHT_FG;
    color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;
  }

  if (choosen)
    AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, x, y, 0, 0, color_red, TEXT_SKIP_DRAW, text);
  else
    AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, x, y, 0, 0, color_gray, TEXT_SKIP_DRAW, text);
}

static void DrawChoices(u32 id, int y) { //right side draw function 
  switch (options->submenu) {
    case MENU_RANDOMIZER:
      if (sItemFunctionsRandom[id].drawChoices != NULL)
          sItemFunctionsRandom[id].drawChoices(options->randomizer[id], y);
      break;
    case MENU_NUZLOCKE:
      if (sItemFunctionsNuzlocke[id].drawChoices != NULL)
          sItemFunctionsNuzlocke[id].drawChoices(options->nuzlocke[id], y);
    case MENU_DIFFICULTY:
      if (sItemFunctionsDifficulty[id].drawChoices != NULL)
          sItemFunctionsDifficulty[id].drawChoices(options->difficulty[id], y);
    case MENU_QOL:
      if (sItemFunctionsQoL[id].drawChoices != NULL)
          sItemFunctionsQoL[id].drawChoices(options->qol[id], y);
      break;
  }
}

static void HighlightOptionMenuItem(void) {
  int cursor = options->visibleCursor[options->submenu];
  SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(Y_DIFF, 224));
  SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(cursor * Y_DIFF + 24, cursor * Y_DIFF + 40));
}

static u8 MenuItemCount(void) {
  switch (options->submenu) {
    case MENU_RANDOMIZER:   return MENUITEM_RANDOMIZER_COUNT;
    case MENU_NUZLOCKE:     return MENUITEM_NUZLOCKE_COUNT;
    case MENU_DIFFICULTY:     return MENUITEM_DIFFICULTY_COUNT;
    case MENU_QOL:     return MENUITEM_QOL_COUNT;
    default: return MENUITEM_RANDOMIZER_COUNT;
  }
}

static u8 MenuItemCancel(void) {
  switch (options->submenu) {
    case MENU_RANDOMIZER:   return MENUITEM_RANDOMIZER_NEXT;
    case MENU_NUZLOCKE:     return MENUITEM_NUZLOCKE_NEXT;
    case MENU_DIFFICULTY:     return MENUITEM_DIFFICULTY_NEXT;
    case MENU_QOL:     return MENUITEM_QOL_SAVE;
    default: return MENUITEM_RANDOMIZER_NEXT;
  }
}

void CB2_InitGuiMenu(void) {
  u32 i, taskId;
  switch (gMain.state) {
    default:
    case 0:
      SetVBlankCallback(NULL);
      gMain.state++;
      break;
    case 1:
      DmaClearLarge16(3, (void *)(VRAM), VRAM_SIZE, 0x1000);
      DmaClear32(3, OAM, OAM_SIZE);
      DmaClear16(3, PLTT, PLTT_SIZE);
      SetGpuReg(REG_OFFSET_DISPCNT, 0);
      ResetBgsAndClearDma3BusyFlags(0);
      InitBgsFromTemplates(0, sOptionMenuBgTemplates, ARRAY_COUNT(sOptionMenuBgTemplates));
      ResetBgPositions();
      InitWindows(sOptionMenuWinTemplates);
      DeactivateAllTextPrinters();
      SetGpuReg(REG_OFFSET_WIN0H, 0);
      SetGpuReg(REG_OFFSET_WIN0V, 0);
      SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0 | WININ_WIN1_BG0 | WININ_WIN0_OBJ);
      SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
      SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_BG0);
      SetGpuReg(REG_OFFSET_BLDALPHA, 0);
      SetGpuReg(REG_OFFSET_BLDY, 4);
      SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_WIN1_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
      ShowBg(0);
      ShowBg(1);
      gMain.state++;
      break;
    case 2:
      ResetPaletteFade();
      ScanlineEffect_Stop();
      ResetTasks();
      ResetSpriteData();
      gMain.state++;
      break;
    case 3:
      LoadBgTiles(1, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, 0x1A2);
      gMain.state++;
      break;
    case 4:
      LoadPalette(sOptionMenuBg_Pal, 0, sizeof(sOptionMenuBg_Pal));
      LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, 0x70, 0x20);
      gMain.state++;
      break;
    case 5:
      LoadPalette(sOptionMenuText_Pal, 16, sizeof(sOptionMenuText_Pal));
      gMain.state++;
      break;
    case 6:
      options = AllocZeroed(sizeof(*options));
      // Menu randomizer
      options->randomizer[MENUITEM_RANDOMIZER_ENABLED] = 1;
      options->randomizer[MENUITEM_RANDOM_STARTERS_ENABLED] = 1;
      options->randomizer[MENUITEM_RANDOM_WILD_ENCOUNTER_ENABLED] = 1;
      options->randomizer[MENUITEM_RANDOM_BATTLES_ENABLED] = 1;
      options->randomizer[MENUITEM_CHAOS_MODE] = 0;
      // Menu nuzlocke
      options->nuzlocke[MENUITEM_NUZLOCKE_ENABLED] = 1;
      // Menu difficulty
      options->difficulty[MENUITEM_DIFFICULTY_INCREASED] = 1;
      options->difficulty[MENUITEM_DIFFICULTY_LEVEL_CAP] = 1;
      // Menu QoL
      options->qol[MENUITEM_QOL_EXP_SHARE] = 1;
      options->submenu = MENU_RANDOMIZER;
      gMain.state++;
      break;
    case 7:
        PutWindowTilemap(WIN_TOPBAR);
        DrawTopBarText();
        gMain.state++;
        break;
    case 8:
        PutWindowTilemap(WIN_DESCRIPTION);
        DrawDescriptionText();
        gMain.state++;
        break;
    case 9:
        PutWindowTilemap(WIN_OPTIONS);
        DrawOptionMenuTexts();
        gMain.state++;
        break;
    case 10:
        taskId = CreateTask(Task_OptionMenuFadeIn, 0);
        
        options->arrowTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP, 240 / 2, 20, 110, MENUITEM_RANDOMIZER_COUNT - 1, 110, 110, 0);

        for (i = 0; i < OPTIONS_ON_SCREEN; i++)
            DrawChoices(i, i * Y_DIFF);

        HighlightOptionMenuItem();

        CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
        gMain.state++;
        break;
    case 11:
        DrawBgWindowFrames();
        gMain.state++;
        break;
    case 12:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB);
        SetMainCallback2(MainCB2);
        return;
  }
}

static void Task_OptionMenuFadeIn(u8 taskId) {
  if (!gPaletteFade.active)
      gTasks[taskId].func = Task_OptionMenuProcessInput;
}

static void Task_OptionMenuProcessInput(u8 taskId) {
  if (JOY_NEW(A_BUTTON))
  {
      if (options->menuCursor[options->submenu] == MenuItemCancel())
      {
          if (options->submenu == MENU_COUNT-1)
              gTasks[taskId].func = Task_RandomizerChallengesMenuSave;
          else
          {
              options->submenu++;
              DrawTopBarText();
              ReDrawAll();
              HighlightOptionMenuItem();
              DrawDescriptionText();
          }
      }
  }
  else if (JOY_NEW(DPAD_UP))
  {
      if (options->visibleCursor[options->submenu] == NUM_OPTIONS_FROM_BORDER) // don't advance visible cursor until scrolled to the bottom
      {
          if (--options->menuCursor[options->submenu] == 0)
              options->visibleCursor[options->submenu]--;
          else
              ScrollMenu(1);
      }
      else
      {
          if (--options->menuCursor[options->submenu] < 0) // Scroll all the way to the bottom.
          {
              options->visibleCursor[options->submenu] = options->menuCursor[options->submenu] = 3;
              ScrollAll(0);
              options->visibleCursor[options->submenu] = 4;
              options->menuCursor[options->submenu] = MenuItemCount() - 1;
          }
          else
          {
              options->visibleCursor[options->submenu]--;
          }
      }
      HighlightOptionMenuItem();
      DrawDescriptionText();
  }
  else if (JOY_NEW(DPAD_DOWN))
  {
      if (options->visibleCursor[options->submenu] == 3) // don't advance visible cursor until scrolled to the bottom
      {
          if (++options->menuCursor[options->submenu] == MenuItemCount() - 1)
              options->visibleCursor[options->submenu]++;
          else
              ScrollMenu(0);
      }
      else
      {
          if (++options->menuCursor[options->submenu] >= MenuItemCount()-1) // Scroll all the way to the top.
          {
              options->visibleCursor[options->submenu] = 3;
              options->menuCursor[options->submenu] = MenuItemCount() - 4;
              ScrollAll(1);
              options->visibleCursor[options->submenu] = options->menuCursor[options->submenu] = 0;
          }
          else
          {
              options->visibleCursor[options->submenu]++;
          }
      }
      HighlightOptionMenuItem();
      DrawDescriptionText();
  }
  else if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
  {
      if (options->submenu == MENU_RANDOMIZER)
      {
          int cursor = options->menuCursor[options->submenu];
          u8 previousOption = options->randomizer[cursor];
          if (CheckConditions(cursor))
          {
              if (sItemFunctionsRandom[cursor].processInput != NULL)
              {
                  options->randomizer[cursor] = sItemFunctionsRandom[cursor].processInput(previousOption);
                  ReDrawAll();
                  DrawDescriptionText();
              }

              if (previousOption != options->randomizer[cursor])
                  DrawChoices(cursor, options->visibleCursor[options->submenu] * Y_DIFF);
          }
      }
      else if (options->submenu == MENU_NUZLOCKE)
      {
          int cursor = options->menuCursor[options->submenu];
          u8 previousOption = options->nuzlocke[cursor];
          if (CheckConditions(cursor))
          {
              if (sItemFunctionsNuzlocke[cursor].processInput != NULL)
              {
                  options->nuzlocke[cursor] = sItemFunctionsNuzlocke[cursor].processInput(previousOption);
                  ReDrawAll();
                  DrawDescriptionText();
              }

              if (previousOption != options->nuzlocke[cursor])
                  DrawChoices(cursor, options->visibleCursor[options->submenu] * Y_DIFF);
          }
      }
      else if (options->submenu == MENU_DIFFICULTY)
      {
          int cursor = options->menuCursor[options->submenu];
          u8 previousOption = options->difficulty[cursor];
          if (CheckConditions(cursor))
          {
              if (sItemFunctionsDifficulty[cursor].processInput != NULL)
              {
                  options->difficulty[cursor] = sItemFunctionsDifficulty[cursor].processInput(previousOption);
                  ReDrawAll();
                  DrawDescriptionText();
              }

              if (previousOption != options->difficulty[cursor])
                  DrawChoices(cursor, options->visibleCursor[options->submenu] * Y_DIFF);
          }
      }
      else if (options->submenu == MENU_QOL)
      {
          int cursor = options->menuCursor[options->submenu];
          u8 previousOption = options->qol[cursor];
          if (CheckConditions(cursor))
          {
              if (sItemFunctionsQoL[cursor].processInput != NULL)
              {
                  options->qol[cursor] = sItemFunctionsQoL[cursor].processInput(previousOption);
                  ReDrawAll();
                  DrawDescriptionText();
              }

              if (previousOption != options->qol[cursor])
                  DrawChoices(cursor, options->visibleCursor[options->submenu] * Y_DIFF);
          }
      }
  }
  else if (JOY_NEW(R_BUTTON))
  {
      if (options->submenu != MENU_COUNT-1)
          options->submenu++;

      DrawTopBarText();
      ReDrawAll();
      HighlightOptionMenuItem();
      DrawDescriptionText();
  }
  else if (JOY_NEW(L_BUTTON))
  {
      if (options->submenu != 0)
          options->submenu--;
      
      DrawTopBarText();
      ReDrawAll();
      HighlightOptionMenuItem();
      DrawDescriptionText();
  }
}

static void ReDrawAll(void)
{
    u8 menuItem = options->menuCursor[options->submenu] - options->visibleCursor[options->submenu];
    u8 i;

    u8 loopSize = OPTIONS_ON_SCREEN;
    if (MenuItemCount() <= OPTIONS_ON_SCREEN) // Draw or delete the scrolling arrows based on options in the menu
    {
        if (options->arrowTaskId != TASK_NONE)
        {
            RemoveScrollIndicatorArrowPair(options->arrowTaskId);
            options->arrowTaskId = TASK_NONE;
        }
        loopSize = MenuItemCount();
    }
    else
    {
        if (options->arrowTaskId == TASK_NONE)
            options->arrowTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP, 240 / 2, 20, 110, MenuItemCount() - 1, 110, 110, 0);

    }

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));
    for (i = 0; i < loopSize; i++)
    {
        DrawChoices(menuItem+i, i * Y_DIFF);
        DrawLeftSideOptionText(menuItem+i, (i * Y_DIFF) + 1);
    }
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}

static int ProcessInput_Options_Two(int selection) {
  if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    selection ^= 1;

  return selection;
}

static bool8 CheckConditions(int selection)
{
  switch (options->submenu) {
    case MENU_RANDOMIZER:
      switch(selection) {
        case MENUITEM_RANDOM_STARTERS_ENABLED:                   return options->randomizer[MENUITEM_RANDOMIZER_ENABLED];
        case MENUITEM_RANDOM_WILD_ENCOUNTER_ENABLED:                   return options->randomizer[MENUITEM_RANDOMIZER_ENABLED];
        case MENUITEM_RANDOM_BATTLES_ENABLED:                   return options->randomizer[MENUITEM_RANDOMIZER_ENABLED];
        case MENUITEM_CHAOS_MODE:                   return options->randomizer[MENUITEM_RANDOMIZER_ENABLED];
        default:                                        return TRUE;
      }
    case MENU_NUZLOCKE:
      switch(selection) {
        default:                                return TRUE;
      }
    default: return TRUE;
  }
}

static const u8 sText_Randomize[]  = _("RANDOMIZE");
static const u8 sText_Off[]  = _("OFF");
static const u8 sText_On[]   = _("ON");

// Menu Randomizer
static void DrawChoices_Random_OffOn(int selection, int y, bool8 active) {
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(sText_Off, 104, y, styles[0], active);
    DrawOptionMenuChoice(sText_On, GetStringRightAlignXOffset(1, sText_On, 198), y, styles[1], active);
}

static void DrawChoices_Randomizer_Toggle(int selection, int y) {
  bool8 active = options->randomizer[MENUITEM_RANDOMIZER_ENABLED];
  DrawChoices_Random_OffOn(selection, y, active);
}

static void DrawChoices_Randomize_Starter(int selection, int y) {
  bool8 active = options->randomizer[MENUITEM_RANDOM_STARTERS_ENABLED];
  DrawChoices_Random_OffOn(selection, y, active);
}
static void DrawChoices_Randomize_WildEncounters(int selection, int y) {
  bool8 active = options->randomizer[MENUITEM_RANDOM_WILD_ENCOUNTER_ENABLED];
  DrawChoices_Random_OffOn(selection, y, active);
}

static void DrawChoices_Randomize_Battles(int selection, int y) {
  bool8 active = options->randomizer[MENUITEM_RANDOM_BATTLES_ENABLED];
  DrawChoices_Random_OffOn(selection, y, active);
}

static void DrawChoices_Chaos_Mode(int selection, int y) {
  bool8 active = options->randomizer[MENUITEM_CHAOS_MODE];
  DrawChoices_Random_OffOn(selection, y, active);
}

// Menu Nuzlocke
static void DrawChoices_Nuzlocke_Toggle(int selection, int y) {
    bool8 active = options->nuzlocke[MENUITEM_NUZLOCKE_ENABLED];
    DrawChoices_Random_OffOn(selection, y, active);
}

static void DrawChoices_DifficultyIncrease_Toggle(int selection, int y) {
    bool8 active = options->difficulty[MENUITEM_DIFFICULTY_INCREASED];
    DrawChoices_Random_OffOn(selection, y, active);
}

static void DrawChoices_DifficultyLevelCap_Toggle(int selection, int y) {
    bool8 active = options->difficulty[MENUITEM_DIFFICULTY_LEVEL_CAP];
    DrawChoices_Random_OffOn(selection, y, active);
}

static void DrawChoices_ExpShare_Toggle(int selection, int y) {
    bool8 active = options->qol[MENUITEM_QOL_EXP_SHARE];
    DrawChoices_Random_OffOn(selection, y, active);
}

static void Task_RandomizerChallengesMenuSave(u8 taskId) {
  BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
  gTasks[taskId].func = Task_RandomizerChallengesMenuFadeOut;
}

static void Task_RandomizerChallengesMenuFadeOut(u8 taskId) {
  if (!gPaletteFade.active) {
    DestroyTask(taskId);
    FreeAllWindowBuffers();
    SetMainCallback2(gMain.savedCallback);
  }
}

static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style, bool8 active) {
  bool8 choosen = FALSE;
  if (style != 0)
      choosen = TRUE;
  DrawRightSideChoiceText(text, x, y+1, choosen, active);
}

static void ScrollMenu(int direction)
{
    int menuItem, pos;

    if (direction == 0) // scroll down
        menuItem = options->menuCursor[options->submenu] + NUM_OPTIONS_FROM_BORDER, pos = OPTIONS_ON_SCREEN - 1;
    else
        menuItem = options->menuCursor[options->submenu] - NUM_OPTIONS_FROM_BORDER, pos = 0;

    // Hide one
    ScrollWindow(WIN_OPTIONS, direction, Y_DIFF, PIXEL_FILL(0));
    // Show one
    FillWindowPixelRect(WIN_OPTIONS, PIXEL_FILL(1), 0, Y_DIFF * pos, 26 * 8, Y_DIFF);
    // Print
    DrawChoices(menuItem, pos * Y_DIFF);
    DrawLeftSideOptionText(menuItem, (pos * Y_DIFF) + 1);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}
static void ScrollAll(int direction) // to bottom or top
{
    int i, y, menuItem, pos;
    int scrollCount;

    scrollCount = MenuItemCount() - OPTIONS_ON_SCREEN;

    // Move items up/down
    ScrollWindow(WIN_OPTIONS, direction, Y_DIFF * scrollCount, PIXEL_FILL(1));

    // Clear moved items
    if (direction == 0)
    {
        y = OPTIONS_ON_SCREEN - scrollCount;
        if (y < 0)
            y = OPTIONS_ON_SCREEN;
        y *= Y_DIFF;
    }
    else
    {
        y = 0;
    }

    FillWindowPixelRect(WIN_OPTIONS, PIXEL_FILL(1), 0, y, 26 * 8, Y_DIFF * scrollCount);
    // Print new texts
    for (i = 0; i < scrollCount; i++)
    {
        if (direction == 0) // From top to bottom
            menuItem = MenuItemCount() - 1 - i, pos = OPTIONS_ON_SCREEN - 1 - i;
        else // From bottom to top
            menuItem = i, pos = i;
        DrawChoices(menuItem, pos * Y_DIFF);
        DrawLeftSideOptionText(menuItem, (pos * Y_DIFF) + 1);
    }
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}

// Background tilemap
#define TILE_TOP_CORNER_L 0x1A2 // 418
#define TILE_TOP_EDGE     0x1A3 // 419
#define TILE_TOP_CORNER_R 0x1A4 // 420
#define TILE_LEFT_EDGE    0x1A5 // 421
#define TILE_RIGHT_EDGE   0x1A7 // 423
#define TILE_BOT_CORNER_L 0x1A8 // 424
#define TILE_BOT_EDGE     0x1A9 // 425
#define TILE_BOT_CORNER_R 0x1AA // 426

static void DrawBgWindowFrames(void) {
    //                     bg, tile,              x, y, width, height, palNum
    // Option Texts window
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  2,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  2, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  2,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  3,  1, 16,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  3,  1, 16,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 13,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 13, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 13,  1,  1,  7);

    // Description window
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1, 14,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2, 14, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28, 14,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1, 15,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28, 15,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 19,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 19, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 19,  1,  1,  7);

    CopyBgTilemapBufferToVram(1);
}

void SaveData(void) {
  gSaveBlock1Ptr->randomizeStarters = options->randomizer[MENUITEM_RANDOM_STARTERS_ENABLED];
  gSaveBlock1Ptr->randomizeWildEncounters = options->randomizer[MENUITEM_RANDOM_WILD_ENCOUNTER_ENABLED];
  gSaveBlock1Ptr->randomizeBattles = options->randomizer[MENUITEM_RANDOM_BATTLES_ENABLED];
  gSaveBlock1Ptr->chaosModeActive = options->randomizer[MENUITEM_CHAOS_MODE];
  gSaveBlock1Ptr->nuzlockeModeActive = options->nuzlocke[MENUITEM_NUZLOCKE_ENABLED];
  gSaveBlock1Ptr->difficultyIncreased = options->difficulty[MENUITEM_DIFFICULTY_INCREASED];
  gSaveBlock1Ptr->levelCapIsActive = options->difficulty[MENUITEM_DIFFICULTY_LEVEL_CAP];
  gSaveBlock1Ptr->expShare = options->qol[MENUITEM_QOL_EXP_SHARE];
}