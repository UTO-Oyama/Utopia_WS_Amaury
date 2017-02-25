class Blackfoot {
	name = "Blackfoot";		// receipe name in menu
	allowedClasses[] = {{"Medic",6},{"Sniper",6},{"Assault",6},{"Engineer",5}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"heavy_chopper_part",1},{"metal_plate",8},{"repairkit",2}};	// [itemType,number]
	result = "B_Heli_Attack_01_F"; 					// for weapons , only 1 weapon in output

	craft_description = "Un hélicoptère d'attaque , hyper armé , blindé , bref ... <br/> La crème de la crème des hélicos."; //description
};

class Kajman {
	name = "Kajman";		// receipe name in menu
	allowedClasses[] = {{"Medic",6},{"Sniper",6},{"Assault",6},{"Engineer",5}}; 	// [class,requiredLevel]
	craftingTime = 120;					// time required in seconds to craft this item

	required[] = {{"heavy_chopper_part",1},{"metal_plate",8},{"repairkit",2}};	// [itemType,number]
	result = "O_Heli_Attack_02_black_F"; 					// for weapons , only 1 weapon in output

	craft_description = "Un hélicoptère d'attaque , plus spécialisé dans la démolition et plus lourd que son frère blackfoot."; //description
};

class Osprey {
	name = "Osprey";

	allowedClasses[] = {{"Medic",7},{"Sniper",7},{"Assault",7},{"Engineer",6}}; 	// [class,requiredLevel]
	craftingTime = 180;					// time required in seconds to craft this item

	required[] = {{"heavy_chopper_part",1},{"metal_plate",10},{"repairkit",2}};	// [itemType,number]
	result = "B_T_VTOL_01_armed_olive_F"; 					

	craft_description = "Un hélivion trop cheaté pour en faire une description."; //description
};

class Y32 {
	name = "Y-32 Xi'an";

	allowedClasses[] = {{"Medic",7},{"Sniper",7},{"Assault",7},{"Engineer",6}}; 	// [class,requiredLevel]
	craftingTime = 180;					// time required in seconds to craft this item

	required[] = {{"heavy_chopper_part",1},{"metal_plate",10},{"repairkit",2}};	// [itemType,number]
	result = "O_T_VTOL_02_infantry_F"; 					

	craft_description = "Un hélivion trop cheaté pour en faire une description."; //description
};

	
class Slammer {
	name = "SLAMMER UP";

	allowedClasses[] = {{"Medic",6},{"Sniper",6},{"Assault",6},{"Engineer",5}}; 	// [class,requiredLevel]
	craftingTime = 180;					// time required in seconds to craft this item

	required[] = {{"tank_part",1},{"metal_plate",9},{"repairkit",2}};	// [itemType,number]
	result = "B_T_MBT_01_TUSK_F"; 					

	craft_description = "Un bon char américain des familles. Inspirant la démocratie et la liberté."; //description
};

class T100 {
	name = "T100 Varsuk";

	allowedClasses[] = {{"Medic",6},{"Sniper",6},{"Assault",6},{"Engineer",5}}; 	// [class,requiredLevel]
	craftingTime = 180;					// time required in seconds to craft this item

	required[] = {{"tank_part",1},{"metal_plate",9},{"repairkit",2}};	// [itemType,number]
	result = "O_T_MBT_02_cannon_ghex_F"; 					

	craft_description = ""; //description
};


