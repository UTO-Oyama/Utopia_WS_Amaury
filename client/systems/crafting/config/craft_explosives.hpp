class E0 {
	name = "AT Mine";		// receipe name in menu
	allowedClasses[] = {{"Engineer",3}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",5}};	// [itemType,number]
	result[] = {"ATMine_Range_Mag",1}; 					// [itemType,number]

	craft_description = "auto"; //description
};
class E1 {
	name = "APERS Mine";		// receipe name in menu
	allowedClasses[] = {{"Medic",3},{"Sniper",3},{"Assault",3},{"Engineer",3}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",5}};	// [itemType,number]
	result[] = {"APERSMine_Range_Mag",1}; 					// [itemType,number]

	craft_description = "auto"; //description
};
class E2 {
	name = "APERS Bounding Mine";		// receipe name in menu
	allowedClasses[] = {{"Engineer",4}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",5}};	// [itemType,number]
	result[] = {"APERSBoundingMine_Range_Mag",1}; 					// [itemType,number]

	craft_description = "auto"; //description
};
class E3 {
	name = "M6 SLAM Mine";		// receipe name in menu
	allowedClasses[] = {{"Engineer",3}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",5}};	// [itemType,number]
	result[] = {"SLAMDirectionalMine_Wire_Mag",1}; 					// [itemType,number]

	craft_description = "auto"; //description
};

class E4 {
	name = "APERS Tripwire Mine";		// receipe name in menu
	allowedClasses[] = {{"Medic",4},{"Sniper",4},{"Assault",4},{"Engineer",3}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",5}};	// [itemType,number]
	result[] = {"APERSTripMine_Wire_Mag",1}; 					// [itemType,number]

	craft_description = "auto"; //description
};

class E5 {
	name = "Claymore Charge";		// receipe name in menu
	allowedClasses[] = {{"Assault",4},{"Engineer",3}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",5}};	// [itemType,number]
	result[] = {"ClaymoreDirectionalMine_Remote_Mag",1}; 					// [itemType,number]

	craft_description = "auto"; //description
};

class E6 {
	name = "Explosive Satchel";		// receipe name in menu
	allowedClasses[] = {{"Engineer",5}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",5}};	// [itemType,number]
	result[] = {"SatchelCharge_Remote_Mag",1}; 					// [itemType,number]

	craft_description = "auto"; //description
};

class E7 {
	name = "Explosive Charge";		// receipe name in menu
	allowedClasses[] = {{"Engineer",4}}; 	// [class,requiredLevel]
	craftingTime = 20;					// time required in seconds to craft this item

	required[] = {{"metal",5}};	// [itemType,number]
	result[] = {"DemoCharge_Remote_Mag",1}; 					// [itemType,number]

	craft_description = "auto"; //description
};

class E8 {
	name = "RGO Grenade";
	allowedClasses[] = {{"Medic",3},{"Sniper",3},{"Assault",2},{"Engineer",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"HandGrenade",1};

	craft_description = "auto";
};

class E9 {
	name = "RGN Grenade";
	allowedClasses[] = {{"Medic",3},{"Sniper",3},{"Assault",2},{"Engineer",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"MiniGrenade",2};

	craft_description = "auto";
};