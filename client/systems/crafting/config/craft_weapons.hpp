/** TLM **/
class T1 {
	name = "Mk20C";
	allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",2},{"repairkit",1}};	// [itemType,number]
	result = "arifle_Mk20C_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class T2 {
	name = "TRG-21 5.56 mm";
	allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",2},{"repairkit",1}};	// [itemType,number]
	result = "arifle_TRG21_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class T3 {
	name = "SDAR 5.56 mm";
	allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",2},{"repairkit",1}};	// [itemType,number]
	result = "arifle_SDAR_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};


/** LANCE ROQUETTES **/
class LR1 {
	name = "Lance-roquettes";		// receipe name in menu
	allowedClasses[] = {{"Engineer",2}}; 	// [class,requiredLevel]
	craftingTime = 30;					// time required in seconds to craft this item

	required[] = {{"metal",6},{"repairkit",1}};	// [itemType,number]
	result = "launch_RPG32_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class LR2 {
	name = "Lance-roquettes NLAW";		// receipe name in menu
	allowedClasses[] = {{"Engineer",3}}; 	// [class,requiredLevel]
	craftingTime = 60;					// time required in seconds to craft this item

	required[] = {{"metal",7},{"repairkit",1}};	// [itemType,number]
	result = "launch_NLAW_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class LR3 {
	name = "Titan AT";		// receipe name in menu
	allowedClasses[] = {{"Engineer",5}}; 	// [class,requiredLevel]
	craftingTime = 60;					// time required in seconds to craft this item

	required[] = {{"metal",15},{"repairkit",2}};	// [itemType,number]
	result = "launch_B_Titan_short_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class LR4 {
	name = "Titan AA";		// receipe name in menu
	allowedClasses[] = {{"Engineer",6}}; 	// [class,requiredLevel]
	craftingTime = 60;					// time required in seconds to craft this item

	required[] = {{"metal",15},{"repairkit",2}};	// [itemType,number]
	result = "launch_Titan_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};

/** PISTOLETS **/
class P1 {
	name = "Simple Pistol";		// receipe name in menu
	allowedClasses[] = {{"Engineer",1},{"Medic",1},{"Sniper",1},{"Assault",1}}; 	// [class,requiredLevel]
	craftingTime = 10;					// time required in seconds to craft this item

	required[] = {{"metal",2},{"repairkit",1}};	// [itemType,number]
	result = "hgun_P07_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class P2 {
	name = "Gros Pistol";		// receipe name in menu
	allowedClasses[] = {{"Assault",3}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",4},{"repairkit",1}};	// [itemType,number]
	result = "hgun_Pistol_heavy_01_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class P3 {
	name = "Yorris";		// receipe name in menu
	allowedClasses[] = {{"Engineer",3},{"Assault",4}}; 	// [class,requiredLevel]
	craftingTime = 30;					// time required in seconds to craft this item

	required[] = {{"metal",8},{"repairkit",1}};	// [itemType,number]
	result = "hgun_Pistol_heavy_02_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class P4 {
	name = "Rook";		// receipe name in menu
	allowedClasses[] = {{"Sniper",2}}; 	// [class,requiredLevel]
	craftingTime = 10;					// time required in seconds to craft this item

	required[] = {{"metal",2},{"repairkit",1}};	// [itemType,number]
	result = "hgun_Rook40_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};

/** SNIPERS **/
class S1 {
	name = "Rahim sniper";		// receipe name in menu
	allowedClasses[] = {{"Sniper",3}}; 	// [class,requiredLevel]
	craftingTime = 45;					// time required in seconds to craft this item

	required[] = {{"metal",8},{"repairkit",2}};	// [itemType,number]
	result = "srifle_DMR_01_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class S2 {
	name = "M320 sniper";		// receipe name in menu
	allowedClasses[] = {{"Sniper",5}}; 	// [class,requiredLevel]
	craftingTime = 100;					// time required in seconds to craft this item

	required[] = {{"metal",10},{"repairkit",2}};	// [itemType,number]
	result = "srifle_LRR_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class S3 {
	name = "GM6 Lynx sniper";
	allowedClasses[] = {{"Sniper",7}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"metal",10},{"repairkit",2}};	// [itemType,number]
	result = "srifle_GM6_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class S4 {
	name = "MAR-10 .338 (Black)";
	allowedClasses[] = {{"Sniper",5}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"metal",6},{"repairkit",2}};	// [itemType,number]
	result = "srifle_DMR_02_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class S5 {
	name = "Mk-I EMR 7.62 mm (Black)";
	allowedClasses[] = {{"Sniper",5}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"metal",6},{"repairkit",2}};	// [itemType,number]
	result = "srifle_DMR_03_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class S6 {
	name = "ASP-1 Kir 12.7 mm (Black)";
	allowedClasses[] = {{"Sniper",4}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"metal",4},{"repairkit",2}};	// [itemType,number]
	result = "srifle_DMR_04_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class S7 {
	name = "Cyrus 9.3 mm (Black)";
	allowedClasses[] = {{"Sniper",4}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"metal",6},{"repairkit",2}};	// [itemType,number]
	result = "srifle_DMR_05_blk_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class S8 {
	name = "Mk14 7.62 mm (Camo)";
	allowedClasses[] = {{"Sniper",5}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"metal",6},{"repairkit",2}};	// [itemType,number]
	result = "srifle_DMR_06_camo_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};

/** MEDIC **/
class M1 {
	name = "Mk200 6.5 mm";		// receipe name in menu
	allowedClasses[] = {{"Medic",2}}; 	// [class,requiredLevel]
	craftingTime = 100;					// time required in seconds to craft this item

	required[] = {{"metal",2},{"repairkit",1}};	// [itemType,number]
	result = "LMG_Mk200_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class M2 {
	name = "Zafir 7.62 mm";
	allowedClasses[] = {{"Medic",4}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"metal",4},{"repairkit",1}};	// [itemType,number]
	result = "LMG_Zafir_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class M3 {
	name = "Navid 9.3 mm (Hex)";
	allowedClasses[] = {{"Medic",6}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"metal",8},{"repairkit",2}};	// [itemType,number]
	result = "MMG_01_hex_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class M4 {
	name = "SPMG .338 (MTP)";
	allowedClasses[] = {{"Medic",5}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"metal",6},{"repairkit",1}};	// [itemType,number]
	result = "MMG_02_camo_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};

/** ASSAULT **/
class A1 {
	name = "Fusil MX";		// receipe name in menu
	allowedClasses[] = {{"Assault",2},{"Engineer",2},{"Medic",2}}; 	// [class,requiredLevel]
	craftingTime = 50;					// time required in seconds to craft this item

	required[] = {{"metal",3},{"repairkit",1}};	// [itemType,number]
	result = "arifle_MX_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class A2 {
	name = "Katiba";		// receipe name in menu
	allowedClasses[] = {{"Assault",2}}; 	// [class,requiredLevel]
	craftingTime = 30;					// time required in seconds to craft this item

	required[] = {{"metal",3},{"repairkit",1}};	// [itemType,number]
	result = "arifle_Katiba_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class A3 {
	name = "Fusil MX3GL";
	allowedClasses[] = {{"Assault",4}}; 	// [class,requiredLevel]
	craftingTime = 60;					// time required in seconds to craft this item

	required[] = {{"metal",6},{"repairkit",1}};	// [itemType,number]
	result = "arifle_MX_GL_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class A4 {
	name = "Katiba GL";
	allowedClasses[] = {{"Assault",4}}; 	// [class,requiredLevel]
	craftingTime = 45;					// time required in seconds to craft this item

	required[] = {{"metal",5},{"repairkit",1}};	// [itemType,number]
	result = "arifle_Katiba_GL_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class A6 {
	name = "Mk20C GL";
	allowedClasses[] = {{"Assault",2}}; 	// [class,requiredLevel]
	craftingTime = 30;					// time required in seconds to craft this item

	required[] = {{"metal",5},{"repairkit",1}};	// [itemType,number]
	result = "arifle_Mk20_GL_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class A7 {
	name = "AKM";
	allowedClasses[] = {{"Assault",3}}; 	// [class,requiredLevel]
	craftingTime = 30;					// time required in seconds to craft this item

	required[] = {{"metal",5},{"repairkit",2}};	// [itemType,number]
	result = "arifle_AKM_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class A8 {
	name = "AK-12";
	allowedClasses[] = {{"Assault",3}}; 	// [class,requiredLevel]
	craftingTime = 30;					// time required in seconds to craft this item

	required[] = {{"metal",4},{"repairkit",2}};	// [itemType,number]
	result = "arifle_AK12_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class A9 {
	name = "AK-12 GL";
	allowedClasses[] = {{"Assault",5}}; 	// [class,requiredLevel]
	craftingTime = 60;					// time required in seconds to craft this item

	required[] = {{"metal",6},{"repairkit",1}};	// [itemType,number]
	result = "arifle_AK12_GL_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class A10 {
	name = "AKS";
	allowedClasses[] = {{"Assault",4}}; 	// [class,requiredLevel]
	craftingTime = 30;					// time required in seconds to craft this item

	required[] = {{"metal",7},{"repairkit",2}};	// [itemType,number]
	result = "arifle_AKS_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class A11 {
	name = "Type 115";
	allowedClasses[] = {{"Assault",5}}; 	// [class,requiredLevel]
	craftingTime = 30;					// time required in seconds to craft this item

	required[] = {{"metal",8},{"repairkit",2}};	// [itemType,number]
	result = "arifle_ARX_blk_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};
class A12 {
	name = "CAR-95";
	allowedClasses[] = {{"Assault",6}}; 	// [class,requiredLevel]
	craftingTime = 30;					// time required in seconds to craft this item

	required[] = {{"metal",8},{"repairkit",2}};	// [itemType,number]
	result = "arifle_CTAR_blk_F"; 					// for weapons , only 1 weapon in output

	craft_description = "auto"; //description
};