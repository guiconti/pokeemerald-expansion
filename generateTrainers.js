const fs = require("fs");

let fileContent = `#include "constants/species.h"
#include "constants/pokemon.h"
#include "constants/opponents.h"

struct TrainerMetadata {
	u8 tier;
	const u8 types[NUMBER_OF_MON_TYPES];
};

const struct TrainerMetadata trainerIdToMetadata[] = {\n`;

const defaultTypes = `{TYPE_NORMAL, TYPE_FIGHTING, TYPE_FIGHTING, TYPE_FLYING, TYPE_POISON, TYPE_GROUND, TYPE_ROCK, TYPE_GHOST, TYPE_STEEL, TYPE_FIRE, TYPE_WATER, TYPE_GRASS, TYPE_ELECTRIC, TYPE_PSYCHIC, TYPE_ICE, TYPE_DRAGON, TYPE_DARK, TYPE_FAIRY}`;

const TRAINER_IDS = [
	"TRAINER_NONE",
	"TRAINER_SAWYER_1",
	"TRAINER_GRUNT_AQUA_HIDEOUT_1",
	"TRAINER_GRUNT_AQUA_HIDEOUT_2",
	"TRAINER_GRUNT_AQUA_HIDEOUT_3",
	"TRAINER_GRUNT_AQUA_HIDEOUT_4",
	"TRAINER_GRUNT_SEAFLOOR_CAVERN_1",
	"TRAINER_GRUNT_SEAFLOOR_CAVERN_2",
	"TRAINER_GRUNT_SEAFLOOR_CAVERN_3",
	"TRAINER_GABRIELLE_1",
	"TRAINER_GRUNT_PETALBURG_WOODS",
	"TRAINER_MARCEL",
	"TRAINER_ALBERTO",
	"TRAINER_ED",
	"TRAINER_GRUNT_SEAFLOOR_CAVERN_4",
	"TRAINER_DECLAN",
	"TRAINER_GRUNT_RUSTURF_TUNNEL",
	"TRAINER_GRUNT_WEATHER_INST_1",
	"TRAINER_GRUNT_WEATHER_INST_2",
	"TRAINER_GRUNT_WEATHER_INST_3",
	"TRAINER_GRUNT_MUSEUM_1",
	"TRAINER_GRUNT_MUSEUM_2",
	"TRAINER_GRUNT_SPACE_CENTER_1",
	"TRAINER_GRUNT_MT_PYRE_1",
	"TRAINER_GRUNT_MT_PYRE_2",
	"TRAINER_GRUNT_MT_PYRE_3",
	"TRAINER_GRUNT_WEATHER_INST_4",
	"TRAINER_GRUNT_AQUA_HIDEOUT_5",
	"TRAINER_GRUNT_AQUA_HIDEOUT_6",
	"TRAINER_FREDRICK",
	"TRAINER_MATT",
	"TRAINER_ZANDER",
	"TRAINER_SHELLY_WEATHER_INSTITUTE",
	"TRAINER_SHELLY_SEAFLOOR_CAVERN",
	"TRAINER_ARCHIE",
	"TRAINER_LEAH",
	"TRAINER_DAISY",
	"TRAINER_ROSE_1",
	"TRAINER_FELIX",
	"TRAINER_VIOLET",
	"TRAINER_ROSE_2",
	"TRAINER_ROSE_3",
	"TRAINER_ROSE_4",
	"TRAINER_ROSE_5",
	"TRAINER_DUSTY_1",
	"TRAINER_CHIP",
	"TRAINER_FOSTER",
	"TRAINER_DUSTY_2",
	"TRAINER_DUSTY_3",
	"TRAINER_DUSTY_4",
	"TRAINER_DUSTY_5",
	"TRAINER_GABBY_AND_TY_1",
	"TRAINER_GABBY_AND_TY_2",
	"TRAINER_GABBY_AND_TY_3",
	"TRAINER_GABBY_AND_TY_4",
	"TRAINER_GABBY_AND_TY_5",
	"TRAINER_GABBY_AND_TY_6",
	"TRAINER_LOLA_1",
	"TRAINER_AUSTINA",
	"TRAINER_GWEN",
	"TRAINER_LOLA_2",
	"TRAINER_LOLA_3",
	"TRAINER_LOLA_4",
	"TRAINER_LOLA_5",
	"TRAINER_RICKY_1",
	"TRAINER_SIMON",
	"TRAINER_CHARLIE",
	"TRAINER_RICKY_2",
	"TRAINER_RICKY_3",
	"TRAINER_RICKY_4",
	"TRAINER_RICKY_5",
	"TRAINER_RANDALL",
	"TRAINER_PARKER",
	"TRAINER_GEORGE",
	"TRAINER_BERKE",
	"TRAINER_BRAXTON",
	"TRAINER_VINCENT",
	"TRAINER_LEROY",
	"TRAINER_WILTON_1",
	"TRAINER_EDGAR",
	"TRAINER_ALBERT",
	"TRAINER_SAMUEL",
	"TRAINER_VITO",
	"TRAINER_OWEN",
	"TRAINER_WILTON_2",
	"TRAINER_WILTON_3",
	"TRAINER_WILTON_4",
	"TRAINER_WILTON_5",
	"TRAINER_WARREN",
	"TRAINER_MARY",
	"TRAINER_ALEXIA",
	"TRAINER_JODY",
	"TRAINER_WENDY",
	"TRAINER_KEIRA",
	"TRAINER_BROOKE_1",
	"TRAINER_JENNIFER",
	"TRAINER_HOPE",
	"TRAINER_SHANNON",
	"TRAINER_MICHELLE",
	"TRAINER_CAROLINE",
	"TRAINER_JULIE",
	"TRAINER_BROOKE_2",
	"TRAINER_BROOKE_3",
	"TRAINER_BROOKE_4",
	"TRAINER_BROOKE_5",
	"TRAINER_PATRICIA",
	"TRAINER_KINDRA",
	"TRAINER_TAMMY",
	"TRAINER_VALERIE_1",
	"TRAINER_TASHA",
	"TRAINER_VALERIE_2",
	"TRAINER_VALERIE_3",
	"TRAINER_VALERIE_4",
	"TRAINER_VALERIE_5",
	"TRAINER_CINDY_1",
	"TRAINER_DAPHNE",
	"TRAINER_GRUNT_SPACE_CENTER_2",
	"TRAINER_CINDY_2",
	"TRAINER_BRIANNA",
	"TRAINER_NAOMI",
	"TRAINER_CINDY_3",
	"TRAINER_CINDY_4",
	"TRAINER_CINDY_5",
	"TRAINER_CINDY_6",
	"TRAINER_MELISSA",
	"TRAINER_SHEILA",
	"TRAINER_SHIRLEY",
	"TRAINER_JESSICA_1",
	"TRAINER_CONNIE",
	"TRAINER_BRIDGET",
	"TRAINER_OLIVIA",
	"TRAINER_TIFFANY",
	"TRAINER_JESSICA_2",
	"TRAINER_JESSICA_3",
	"TRAINER_JESSICA_4",
	"TRAINER_JESSICA_5",
	"TRAINER_WINSTON_1",
	"TRAINER_MOLLIE",
	"TRAINER_GARRET",
	"TRAINER_WINSTON_2",
	"TRAINER_WINSTON_3",
	"TRAINER_WINSTON_4",
	"TRAINER_WINSTON_5",
	"TRAINER_STEVE_1",
	"TRAINER_THALIA_1",
	"TRAINER_MARK",
	"TRAINER_GRUNT_MT_CHIMNEY_1",
	"TRAINER_STEVE_2",
	"TRAINER_STEVE_3",
	"TRAINER_STEVE_4",
	"TRAINER_STEVE_5",
	"TRAINER_LUIS",
	"TRAINER_DOMINIK",
	"TRAINER_DOUGLAS",
	"TRAINER_DARRIN",
	"TRAINER_TONY_1",
	"TRAINER_JEROME",
	"TRAINER_MATTHEW",
	"TRAINER_DAVID",
	"TRAINER_SPENCER",
	"TRAINER_ROLAND",
	"TRAINER_NOLEN",
	"TRAINER_STAN",
	"TRAINER_BARRY",
	"TRAINER_DEAN",
	"TRAINER_RODNEY",
	"TRAINER_RICHARD",
	"TRAINER_HERMAN",
	"TRAINER_SANTIAGO",
	"TRAINER_GILBERT",
	"TRAINER_FRANKLIN",
	"TRAINER_KEVIN",
	"TRAINER_JACK",
	"TRAINER_DUDLEY",
	"TRAINER_CHAD",
	"TRAINER_TONY_2",
	"TRAINER_TONY_3",
	"TRAINER_TONY_4",
	"TRAINER_TONY_5",
	"TRAINER_TAKAO",
	"TRAINER_HITOSHI",
	"TRAINER_KIYO",
	"TRAINER_KOICHI",
	"TRAINER_NOB_1",
	"TRAINER_NOB_2",
	"TRAINER_NOB_3",
	"TRAINER_NOB_4",
	"TRAINER_NOB_5",
	"TRAINER_YUJI",
	"TRAINER_DAISUKE",
	"TRAINER_ATSUSHI",
	"TRAINER_KIRK",
	"TRAINER_GRUNT_AQUA_HIDEOUT_7",
	"TRAINER_GRUNT_AQUA_HIDEOUT_8",
	"TRAINER_SHAWN",
	"TRAINER_FERNANDO_1",
	"TRAINER_DALTON_1",
	"TRAINER_DALTON_2",
	"TRAINER_DALTON_3",
	"TRAINER_DALTON_4",
	"TRAINER_DALTON_5",
	"TRAINER_COLE",
	"TRAINER_JEFF",
	"TRAINER_AXLE",
	"TRAINER_JACE",
	"TRAINER_KEEGAN",
	"TRAINER_BERNIE_1",
	"TRAINER_BERNIE_2",
	"TRAINER_BERNIE_3",
	"TRAINER_BERNIE_4",
	"TRAINER_BERNIE_5",
	"TRAINER_DREW",
	"TRAINER_BEAU",
	"TRAINER_LARRY",
	"TRAINER_SHANE",
	"TRAINER_JUSTIN",
	"TRAINER_ETHAN_1",
	"TRAINER_AUTUMN",
	"TRAINER_TRAVIS",
	"TRAINER_ETHAN_2",
	"TRAINER_ETHAN_3",
	"TRAINER_ETHAN_4",
	"TRAINER_ETHAN_5",
	"TRAINER_BRENT",
	"TRAINER_DONALD",
	"TRAINER_TAYLOR",
	"TRAINER_JEFFREY_1",
	"TRAINER_DEREK",
	"TRAINER_JEFFREY_2",
	"TRAINER_JEFFREY_3",
	"TRAINER_JEFFREY_4",
	"TRAINER_JEFFREY_5",
	"TRAINER_EDWARD",
	"TRAINER_PRESTON",
	"TRAINER_VIRGIL",
	"TRAINER_BLAKE",
	"TRAINER_WILLIAM",
	"TRAINER_JOSHUA",
	"TRAINER_CAMERON_1",
	"TRAINER_CAMERON_2",
	"TRAINER_CAMERON_3",
	"TRAINER_CAMERON_4",
	"TRAINER_CAMERON_5",
	"TRAINER_JACLYN",
	"TRAINER_HANNAH",
	"TRAINER_SAMANTHA",
	"TRAINER_MAURA",
	"TRAINER_KAYLA",
	"TRAINER_ALEXIS",
	"TRAINER_JACKI_1",
	"TRAINER_JACKI_2",
	"TRAINER_JACKI_3",
	"TRAINER_JACKI_4",
	"TRAINER_JACKI_5",
	"TRAINER_WALTER_1",
	"TRAINER_MICAH",
	"TRAINER_THOMAS",
	"TRAINER_WALTER_2",
	"TRAINER_WALTER_3",
	"TRAINER_WALTER_4",
	"TRAINER_WALTER_5",
	"TRAINER_SIDNEY",
	"TRAINER_PHOEBE",
	"TRAINER_GLACIA",
	"TRAINER_DRAKE",
	"TRAINER_ROXANNE_1",
	"TRAINER_BRAWLY_1",
	"TRAINER_WATTSON_1",
	"TRAINER_FLANNERY_1",
	"TRAINER_NORMAN_1",
	"TRAINER_WINONA_1",
	"TRAINER_TATE_AND_LIZA_1",
	"TRAINER_JUAN_1",
	"TRAINER_JERRY_1",
	"TRAINER_TED",
	"TRAINER_PAUL",
	"TRAINER_JERRY_2",
	"TRAINER_JERRY_3",
	"TRAINER_JERRY_4",
	"TRAINER_JERRY_5",
	"TRAINER_KAREN_1",
	"TRAINER_GEORGIA",
	"TRAINER_KAREN_2",
	"TRAINER_KAREN_3",
	"TRAINER_KAREN_4",
	"TRAINER_KAREN_5",
	"TRAINER_KATE_AND_JOY",
	"TRAINER_ANNA_AND_MEG_1",
	"TRAINER_ANNA_AND_MEG_2",
	"TRAINER_ANNA_AND_MEG_3",
	"TRAINER_ANNA_AND_MEG_4",
	"TRAINER_ANNA_AND_MEG_5",
	"TRAINER_VICTOR",
	"TRAINER_MIGUEL_1",
	"TRAINER_COLTON",
	"TRAINER_MIGUEL_2",
	"TRAINER_MIGUEL_3",
	"TRAINER_MIGUEL_4",
	"TRAINER_MIGUEL_5",
	"TRAINER_VICTORIA",
	"TRAINER_VANESSA",
	"TRAINER_BETHANY",
	"TRAINER_ISABEL_1",
	"TRAINER_ISABEL_2",
	"TRAINER_ISABEL_3",
	"TRAINER_ISABEL_4",
	"TRAINER_ISABEL_5",
	"TRAINER_TIMOTHY_1",
	"TRAINER_TIMOTHY_2",
	"TRAINER_TIMOTHY_3",
	"TRAINER_TIMOTHY_4",
	"TRAINER_TIMOTHY_5",
	"TRAINER_VICKY",
	"TRAINER_SHELBY_1",
	"TRAINER_SHELBY_2",
	"TRAINER_SHELBY_3",
	"TRAINER_SHELBY_4",
	"TRAINER_SHELBY_5",
	"TRAINER_CALVIN_1",
	"TRAINER_BILLY",
	"TRAINER_JOSH",
	"TRAINER_TOMMY",
	"TRAINER_JOEY",
	"TRAINER_BEN",
	"TRAINER_QUINCY",
	"TRAINER_KATELYNN",
	"TRAINER_JAYLEN",
	"TRAINER_DILLON",
	"TRAINER_CALVIN_2",
	"TRAINER_CALVIN_3",
	"TRAINER_CALVIN_4",
	"TRAINER_CALVIN_5",
	"TRAINER_EDDIE",
	"TRAINER_ALLEN",
	"TRAINER_TIMMY",
	"TRAINER_WALLACE",
	"TRAINER_ANDREW",
	"TRAINER_IVAN",
	"TRAINER_CLAUDE",
	"TRAINER_ELLIOT_1",
	"TRAINER_NED",
	"TRAINER_DALE",
	"TRAINER_NOLAN",
	"TRAINER_BARNY",
	"TRAINER_WADE",
	"TRAINER_CARTER",
	"TRAINER_ELLIOT_2",
	"TRAINER_ELLIOT_3",
	"TRAINER_ELLIOT_4",
	"TRAINER_ELLIOT_5",
	"TRAINER_RONALD",
	"TRAINER_JACOB",
	"TRAINER_ANTHONY",
	"TRAINER_BENJAMIN_1",
	"TRAINER_BENJAMIN_2",
	"TRAINER_BENJAMIN_3",
	"TRAINER_BENJAMIN_4",
	"TRAINER_BENJAMIN_5",
	"TRAINER_ABIGAIL_1",
	"TRAINER_JASMINE",
	"TRAINER_ABIGAIL_2",
	"TRAINER_ABIGAIL_3",
	"TRAINER_ABIGAIL_4",
	"TRAINER_ABIGAIL_5",
	"TRAINER_DYLAN_1",
	"TRAINER_DYLAN_2",
	"TRAINER_DYLAN_3",
	"TRAINER_DYLAN_4",
	"TRAINER_DYLAN_5",
	"TRAINER_MARIA_1",
	"TRAINER_MARIA_2",
	"TRAINER_MARIA_3",
	"TRAINER_MARIA_4",
	"TRAINER_MARIA_5",
	"TRAINER_CAMDEN",
	"TRAINER_DEMETRIUS",
	"TRAINER_ISAIAH_1",
	"TRAINER_PABLO_1",
	"TRAINER_CHASE",
	"TRAINER_ISAIAH_2",
	"TRAINER_ISAIAH_3",
	"TRAINER_ISAIAH_4",
	"TRAINER_ISAIAH_5",
	"TRAINER_ISOBEL",
	"TRAINER_DONNY",
	"TRAINER_TALIA",
	"TRAINER_KATELYN_1",
	"TRAINER_ALLISON",
	"TRAINER_KATELYN_2",
	"TRAINER_KATELYN_3",
	"TRAINER_KATELYN_4",
	"TRAINER_KATELYN_5",
	"TRAINER_NICOLAS_1",
	"TRAINER_NICOLAS_2",
	"TRAINER_NICOLAS_3",
	"TRAINER_NICOLAS_4",
	"TRAINER_NICOLAS_5",
	"TRAINER_AARON",
	"TRAINER_PERRY",
	"TRAINER_HUGH",
	"TRAINER_PHIL",
	"TRAINER_JARED",
	"TRAINER_HUMBERTO",
	"TRAINER_PRESLEY",
	"TRAINER_EDWARDO",
	"TRAINER_COLIN",
	"TRAINER_ROBERT_1",
	"TRAINER_BENNY",
	"TRAINER_CHESTER",
	"TRAINER_ROBERT_2",
	"TRAINER_ROBERT_3",
	"TRAINER_ROBERT_4",
	"TRAINER_ROBERT_5",
	"TRAINER_ALEX",
	"TRAINER_BECK",
	"TRAINER_YASU",
	"TRAINER_TAKASHI",
	"TRAINER_DIANNE",
	"TRAINER_JANI",
	"TRAINER_LAO_1",
	"TRAINER_LUNG",
	"TRAINER_LAO_2",
	"TRAINER_LAO_3",
	"TRAINER_LAO_4",
	"TRAINER_LAO_5",
	"TRAINER_JOCELYN",
	"TRAINER_LAURA",
	"TRAINER_CYNDY_1",
	"TRAINER_CORA",
	"TRAINER_PAULA",
	"TRAINER_CYNDY_2",
	"TRAINER_CYNDY_3",
	"TRAINER_CYNDY_4",
	"TRAINER_CYNDY_5",
	"TRAINER_MADELINE_1",
	"TRAINER_CLARISSA",
	"TRAINER_ANGELICA",
	"TRAINER_MADELINE_2",
	"TRAINER_MADELINE_3",
	"TRAINER_MADELINE_4",
	"TRAINER_MADELINE_5",
	"TRAINER_BEVERLY",
	"TRAINER_IMANI",
	"TRAINER_KYLA",
	"TRAINER_DENISE",
	"TRAINER_BETH",
	"TRAINER_TARA",
	"TRAINER_MISSY",
	"TRAINER_ALICE",
	"TRAINER_JENNY_1",
	"TRAINER_GRACE",
	"TRAINER_TANYA",
	"TRAINER_SHARON",
	"TRAINER_NIKKI",
	"TRAINER_BRENDA",
	"TRAINER_KATIE",
	"TRAINER_SUSIE",
	"TRAINER_KARA",
	"TRAINER_DANA",
	"TRAINER_SIENNA",
	"TRAINER_DEBRA",
	"TRAINER_LINDA",
	"TRAINER_KAYLEE",
	"TRAINER_LAUREL",
	"TRAINER_CARLEE",
	"TRAINER_JENNY_2",
	"TRAINER_JENNY_3",
	"TRAINER_JENNY_4",
	"TRAINER_JENNY_5",
	"TRAINER_HEIDI",
	"TRAINER_BECKY",
	"TRAINER_CAROL",
	"TRAINER_NANCY",
	"TRAINER_MARTHA",
	"TRAINER_DIANA_1",
	"TRAINER_CEDRIC",
	"TRAINER_IRENE",
	"TRAINER_DIANA_2",
	"TRAINER_DIANA_3",
	"TRAINER_DIANA_4",
	"TRAINER_DIANA_5",
	"TRAINER_AMY_AND_LIV_1",
	"TRAINER_AMY_AND_LIV_2",
	"TRAINER_GINA_AND_MIA_1",
	"TRAINER_MIU_AND_YUKI",
	"TRAINER_AMY_AND_LIV_3",
	"TRAINER_GINA_AND_MIA_2",
	"TRAINER_AMY_AND_LIV_4",
	"TRAINER_AMY_AND_LIV_5",
	"TRAINER_AMY_AND_LIV_6",
	"TRAINER_HUEY",
	"TRAINER_EDMOND",
	"TRAINER_ERNEST_1",
	"TRAINER_DWAYNE",
	"TRAINER_PHILLIP",
	"TRAINER_LEONARD",
	"TRAINER_DUNCAN",
	"TRAINER_ERNEST_2",
	"TRAINER_ERNEST_3",
	"TRAINER_ERNEST_4",
	"TRAINER_ERNEST_5",
	"TRAINER_ELI",
	"TRAINER_ANNIKA",
	"TRAINER_JAZMYN",
	"TRAINER_JONAS",
	"TRAINER_KAYLEY",
	"TRAINER_AURON",
	"TRAINER_KELVIN",
	"TRAINER_MARLEY",
	"TRAINER_REYNA",
	"TRAINER_HUDSON",
	"TRAINER_CONOR",
	"TRAINER_EDWIN_1",
	"TRAINER_HECTOR",
	"TRAINER_TABITHA_MOSSDEEP",
	"TRAINER_EDWIN_2",
	"TRAINER_EDWIN_3",
	"TRAINER_EDWIN_4",
	"TRAINER_EDWIN_5",
	"TRAINER_WALLY_VR_1",
	"TRAINER_BRENDAN_ROUTE_103_MUDKIP",
	"TRAINER_BRENDAN_ROUTE_110_MUDKIP",
	"TRAINER_BRENDAN_ROUTE_119_MUDKIP",
	"TRAINER_BRENDAN_ROUTE_103_TREECKO",
	"TRAINER_BRENDAN_ROUTE_110_TREECKO",
	"TRAINER_BRENDAN_ROUTE_119_TREECKO",
	"TRAINER_BRENDAN_ROUTE_103_TORCHIC",
	"TRAINER_BRENDAN_ROUTE_110_TORCHIC",
	"TRAINER_BRENDAN_ROUTE_119_TORCHIC",
	"TRAINER_MAY_ROUTE_103_MUDKIP",
	"TRAINER_MAY_ROUTE_110_MUDKIP",
	"TRAINER_MAY_ROUTE_119_MUDKIP",
	"TRAINER_MAY_ROUTE_103_TREECKO",
	"TRAINER_MAY_ROUTE_110_TREECKO",
	"TRAINER_MAY_ROUTE_119_TREECKO",
	"TRAINER_MAY_ROUTE_103_TORCHIC",
	"TRAINER_MAY_ROUTE_110_TORCHIC",
	"TRAINER_MAY_ROUTE_119_TORCHIC",
	"TRAINER_ISAAC_1",
	"TRAINER_DAVIS",
	"TRAINER_MITCHELL",
	"TRAINER_ISAAC_2",
	"TRAINER_ISAAC_3",
	"TRAINER_ISAAC_4",
	"TRAINER_ISAAC_5",
	"TRAINER_LYDIA_1",
	"TRAINER_HALLE",
	"TRAINER_GARRISON",
	"TRAINER_LYDIA_2",
	"TRAINER_LYDIA_3",
	"TRAINER_LYDIA_4",
	"TRAINER_LYDIA_5",
	"TRAINER_JACKSON_1",
	"TRAINER_LORENZO",
	"TRAINER_SEBASTIAN",
	"TRAINER_JACKSON_2",
	"TRAINER_JACKSON_3",
	"TRAINER_JACKSON_4",
	"TRAINER_JACKSON_5",
	"TRAINER_CATHERINE_1",
	"TRAINER_JENNA",
	"TRAINER_SOPHIA",
	"TRAINER_CATHERINE_2",
	"TRAINER_CATHERINE_3",
	"TRAINER_CATHERINE_4",
	"TRAINER_CATHERINE_5",
	"TRAINER_JULIO",
	"TRAINER_GRUNT_SEAFLOOR_CAVERN_5",
	"TRAINER_GRUNT_UNUSED",
	"TRAINER_GRUNT_MT_PYRE_4",
	"TRAINER_GRUNT_JAGGED_PASS",
	"TRAINER_MARC",
	"TRAINER_BRENDEN",
	"TRAINER_LILITH",
	"TRAINER_CRISTIAN",
	"TRAINER_SYLVIA",
	"TRAINER_LEONARDO",
	"TRAINER_ATHENA",
	"TRAINER_HARRISON",
	"TRAINER_GRUNT_MT_CHIMNEY_2",
	"TRAINER_CLARENCE",
	"TRAINER_TERRY",
	"TRAINER_NATE",
	"TRAINER_KATHLEEN",
	"TRAINER_CLIFFORD",
	"TRAINER_NICHOLAS",
	"TRAINER_GRUNT_SPACE_CENTER_3",
	"TRAINER_GRUNT_SPACE_CENTER_4",
	"TRAINER_GRUNT_SPACE_CENTER_5",
	"TRAINER_GRUNT_SPACE_CENTER_6",
	"TRAINER_GRUNT_SPACE_CENTER_7",
	"TRAINER_MACEY",
	"TRAINER_BRENDAN_RUSTBORO_TREECKO",
	"TRAINER_BRENDAN_RUSTBORO_MUDKIP",
	"TRAINER_PAXTON",
	"TRAINER_ISABELLA",
	"TRAINER_GRUNT_WEATHER_INST_5",
	"TRAINER_TABITHA_MT_CHIMNEY",
	"TRAINER_JONATHAN",
	"TRAINER_BRENDAN_RUSTBORO_TORCHIC",
	"TRAINER_MAY_RUSTBORO_MUDKIP",
	"TRAINER_MAXIE_MAGMA_HIDEOUT",
	"TRAINER_MAXIE_MT_CHIMNEY",
	"TRAINER_TIANA",
	"TRAINER_HALEY_1",
	"TRAINER_JANICE",
	"TRAINER_VIVI",
	"TRAINER_HALEY_2",
	"TRAINER_HALEY_3",
	"TRAINER_HALEY_4",
	"TRAINER_HALEY_5",
	"TRAINER_SALLY",
	"TRAINER_ROBIN",
	"TRAINER_ANDREA",
	"TRAINER_CRISSY",
	"TRAINER_RICK",
	"TRAINER_LYLE",
	"TRAINER_JOSE",
	"TRAINER_DOUG",
	"TRAINER_GREG",
	"TRAINER_KENT",
	"TRAINER_JAMES_1",
	"TRAINER_JAMES_2",
	"TRAINER_JAMES_3",
	"TRAINER_JAMES_4",
	"TRAINER_JAMES_5",
	"TRAINER_BRICE",
	"TRAINER_TRENT_1",
	"TRAINER_LENNY",
	"TRAINER_LUCAS_1",
	"TRAINER_ALAN",
	"TRAINER_CLARK",
	"TRAINER_ERIC",
	"TRAINER_LUCAS_2",
	"TRAINER_MIKE_1",
	"TRAINER_MIKE_2",
	"TRAINER_TRENT_2",
	"TRAINER_TRENT_3",
	"TRAINER_TRENT_4",
	"TRAINER_TRENT_5",
	"TRAINER_DEZ_AND_LUKE",
	"TRAINER_LEA_AND_JED",
	"TRAINER_KIRA_AND_DAN_1",
	"TRAINER_KIRA_AND_DAN_2",
	"TRAINER_KIRA_AND_DAN_3",
	"TRAINER_KIRA_AND_DAN_4",
	"TRAINER_KIRA_AND_DAN_5",
	"TRAINER_JOHANNA",
	"TRAINER_GERALD",
	"TRAINER_VIVIAN",
	"TRAINER_DANIELLE",
	"TRAINER_HIDEO",
	"TRAINER_KEIGO",
	"TRAINER_RILEY",
	"TRAINER_FLINT",
	"TRAINER_ASHLEY",
	"TRAINER_WALLY_MAUVILLE",
	"TRAINER_WALLY_VR_2",
	"TRAINER_WALLY_VR_3",
	"TRAINER_WALLY_VR_4",
	"TRAINER_WALLY_VR_5",
	"TRAINER_BRENDAN_LILYCOVE_MUDKIP",
	"TRAINER_BRENDAN_LILYCOVE_TREECKO",
	"TRAINER_BRENDAN_LILYCOVE_TORCHIC",
	"TRAINER_MAY_LILYCOVE_MUDKIP",
	"TRAINER_MAY_LILYCOVE_TREECKO",
	"TRAINER_MAY_LILYCOVE_TORCHIC",
	"TRAINER_JONAH",
	"TRAINER_HENRY",
	"TRAINER_ROGER",
	"TRAINER_ALEXA",
	"TRAINER_RUBEN",
	"TRAINER_KOJI_1",
	"TRAINER_WAYNE",
	"TRAINER_AIDAN",
	"TRAINER_REED",
	"TRAINER_TISHA",
	"TRAINER_TORI_AND_TIA",
	"TRAINER_KIM_AND_IRIS",
	"TRAINER_TYRA_AND_IVY",
	"TRAINER_MEL_AND_PAUL",
	"TRAINER_JOHN_AND_JAY_1",
	"TRAINER_JOHN_AND_JAY_2",
	"TRAINER_JOHN_AND_JAY_3",
	"TRAINER_JOHN_AND_JAY_4",
	"TRAINER_JOHN_AND_JAY_5",
	"TRAINER_RELI_AND_IAN",
	"TRAINER_LILA_AND_ROY_1",
	"TRAINER_LILA_AND_ROY_2",
	"TRAINER_LILA_AND_ROY_3",
	"TRAINER_LILA_AND_ROY_4",
	"TRAINER_LILA_AND_ROY_5",
	"TRAINER_LISA_AND_RAY",
	"TRAINER_CHRIS",
	"TRAINER_DAWSON",
	"TRAINER_SARAH",
	"TRAINER_DARIAN",
	"TRAINER_HAILEY",
	"TRAINER_CHANDLER",
	"TRAINER_KALEB",
	"TRAINER_JOSEPH",
	"TRAINER_ALYSSA",
	"TRAINER_MARCOS",
	"TRAINER_RHETT",
	"TRAINER_TYRON",
	"TRAINER_CELINA",
	"TRAINER_BIANCA",
	"TRAINER_HAYDEN",
	"TRAINER_SOPHIE",
	"TRAINER_COBY",
	"TRAINER_LAWRENCE",
	"TRAINER_WYATT",
	"TRAINER_ANGELINA",
	"TRAINER_KAI",
	"TRAINER_CHARLOTTE",
	"TRAINER_DEANDRE",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_1",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_2",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_3",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_4",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_5",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_6",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_7",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_8",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_9",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_10",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_11",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_12",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_13",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_14",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_15",
	"TRAINER_GRUNT_MAGMA_HIDEOUT_16",
	"TRAINER_TABITHA_MAGMA_HIDEOUT",
	"TRAINER_DARCY",
	"TRAINER_MAXIE_MOSSDEEP",
	"TRAINER_PETE",
	"TRAINER_ISABELLE",
	"TRAINER_ANDRES_1",
	"TRAINER_JOSUE",
	"TRAINER_CAMRON",
	"TRAINER_CORY_1",
	"TRAINER_CAROLINA",
	"TRAINER_ELIJAH",
	"TRAINER_CELIA",
	"TRAINER_BRYAN",
	"TRAINER_BRANDEN",
	"TRAINER_BRYANT",
	"TRAINER_SHAYLA",
	"TRAINER_KYRA",
	"TRAINER_JAIDEN",
	"TRAINER_ALIX",
	"TRAINER_HELENE",
	"TRAINER_MARLENE",
	"TRAINER_DEVAN",
	"TRAINER_JOHNSON",
	"TRAINER_MELINA",
	"TRAINER_BRANDI",
	"TRAINER_AISHA",
	"TRAINER_MAKAYLA",
	"TRAINER_FABIAN",
	"TRAINER_DAYTON",
	"TRAINER_RACHEL",
	"TRAINER_LEONEL",
	"TRAINER_CALLIE",
	"TRAINER_CALE",
	"TRAINER_MYLES",
	"TRAINER_PAT",
	"TRAINER_CRISTIN_1",
	"TRAINER_MAY_RUSTBORO_TREECKO",
	"TRAINER_MAY_RUSTBORO_TORCHIC",
	"TRAINER_ROXANNE_2",
	"TRAINER_ROXANNE_3",
	"TRAINER_ROXANNE_4",
	"TRAINER_ROXANNE_5",
	"TRAINER_BRAWLY_2",
	"TRAINER_BRAWLY_3",
	"TRAINER_BRAWLY_4",
	"TRAINER_BRAWLY_5",
	"TRAINER_WATTSON_2",
	"TRAINER_WATTSON_3",
	"TRAINER_WATTSON_4",
	"TRAINER_WATTSON_5",
	"TRAINER_FLANNERY_2",
	"TRAINER_FLANNERY_3",
	"TRAINER_FLANNERY_4",
	"TRAINER_FLANNERY_5",
	"TRAINER_NORMAN_2",
	"TRAINER_NORMAN_3",
	"TRAINER_NORMAN_4",
	"TRAINER_NORMAN_5",
	"TRAINER_WINONA_2",
	"TRAINER_WINONA_3",
	"TRAINER_WINONA_4",
	"TRAINER_WINONA_5",
	"TRAINER_TATE_AND_LIZA_2",
	"TRAINER_TATE_AND_LIZA_3",
	"TRAINER_TATE_AND_LIZA_4",
	"TRAINER_TATE_AND_LIZA_5",
	"TRAINER_JUAN_2",
	"TRAINER_JUAN_3",
	"TRAINER_JUAN_4",
	"TRAINER_JUAN_5",
	"TRAINER_ANGELO",
	"TRAINER_DARIUS",
	"TRAINER_STEVEN",
	"TRAINER_ANABEL",
	"TRAINER_TUCKER",
	"TRAINER_SPENSER",
	"TRAINER_GRETA",
	"TRAINER_NOLAND",
	"TRAINER_LUCY",
	"TRAINER_BRANDON",
	"TRAINER_ANDRES_2",
	"TRAINER_ANDRES_3",
	"TRAINER_ANDRES_4",
	"TRAINER_ANDRES_5",
	"TRAINER_CORY_2",
	"TRAINER_CORY_3",
	"TRAINER_CORY_4",
	"TRAINER_CORY_5",
	"TRAINER_PABLO_2",
	"TRAINER_PABLO_3",
	"TRAINER_PABLO_4",
	"TRAINER_PABLO_5",
	"TRAINER_KOJI_2",
	"TRAINER_KOJI_3",
	"TRAINER_KOJI_4",
	"TRAINER_KOJI_5",
	"TRAINER_CRISTIN_2",
	"TRAINER_CRISTIN_3",
	"TRAINER_CRISTIN_4",
	"TRAINER_CRISTIN_5",
	"TRAINER_FERNANDO_2",
	"TRAINER_FERNANDO_3",
	"TRAINER_FERNANDO_4",
	"TRAINER_FERNANDO_5",
	"TRAINER_SAWYER_2",
	"TRAINER_SAWYER_3",
	"TRAINER_SAWYER_4",
	"TRAINER_SAWYER_5",
	"TRAINER_GABRIELLE_2",
	"TRAINER_GABRIELLE_3",
	"TRAINER_GABRIELLE_4",
	"TRAINER_GABRIELLE_5",
	"TRAINER_THALIA_2",
	"TRAINER_THALIA_3",
	"TRAINER_THALIA_4",
	"TRAINER_THALIA_5",
	"TRAINER_MARIELA",
	"TRAINER_ALVARO",
	"TRAINER_EVERETT",
	"TRAINER_RED",
	"TRAINER_LEAF",
	"TRAINER_BRENDAN_PLACEHOLDER",
	"TRAINER_MAY_PLACEHOLDER",
];

const mapDirs = fs.readdirSync("./data/maps");
console.log(mapDirs);
process.exit();

const trainersPartyContentLines = fs.readFileSync("./src/data/trainers.party", "utf-8").split("\n");

for (const trainerId of TRAINER_IDS) {
	let trainerLineIndex = trainersPartyContentLines.findIndex(line => line.includes(trainerId));
	if (trainerLineIndex === -1) {
		throw new Error("Could not find trainer " + trainerId);
	}
	console.log("Trainer line index", trainerLineIndex);
	trainerLineIndex++;
	let maxLevel = -1;
	while (trainerLineIndex < trainersPartyContentLines.length && !trainersPartyContentLines[trainerLineIndex].includes("===")) {
		if (trainersPartyContentLines[trainerLineIndex].includes("Level: ")) {
			maxLevel = Math.max(maxLevel, parseInt(trainersPartyContentLines[trainerLineIndex].replace("Level: ", "")));
		}
		trainerLineIndex++;
	}
	maxLevel *= 1.25;
	let tier = "TIER_ONE";
	if (maxLevel < 16) {
		tier = "TIER_THREE"
	} else if (maxLevel < 30) {
		tier = "TIER_TWO";
	}
	fileContent += `\t[${trainerId}] = {\n`
	fileContent += `\t\t.tier = ${tier},\n`
	fileContent += `\t\t.types = ${defaultTypes},\n`
	fileContent += `\t},\n`
}

fileContent += "};\n";

fs.writeFileSync("./opponents.h", fileContent);
