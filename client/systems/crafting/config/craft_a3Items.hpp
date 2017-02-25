class receipe1 {
	name = "Jerrycan rempli";		// receipe name in menu
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}}; 	// [class,requiredLevel]
	craftingTime = 5;					// time required in seconds to craft this item

	required[] = {{"jerrycanempty",1},{"cannedfood",4},{"water",4}};	// [itemType,number]
	result[] = {"jerrycanfull",1}; 					// [itemType,number]

	craft_description = "C'est l'histoire de comment faire de l'essence avec de l'eau et de la nourriture..."; //description
};
class receipe2 {
	name = "Eau";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 5;

	required[] = {{"cannedfood",2}};
	result[] = {"water",1};

	craft_description = "Extraire l'eau de la nourriture ? ça marche ? ... hein ?";
};
class receipe3 {
	name = "Métal";
	allowedClasses[] = {{"Medic",5},{"Sniper",5},{"Assault",5},{"Engineer",2}};
	craftingTime = 10;

	required[] = {{"repairkit",1}};
	result[] = {"metal",3};

	craft_description = "Peut être égalemet obtenu en démantelant des véhicules.<br/>Utile pour le craft d'armes.";
};
class receipe4 {
	name = "Beaucoup de métal";
	allowedClasses[] = {{"Medic",0},{"Sniper",0},{"Assault",0},{"Engineer",0}};
	craftingTime = 10;

	required[] = {{"metal_pile",1}};
	result[] = {"metal",10};

	craft_description = "ça fait beaucoup de métal. (obtenu lors d'une mission)";
};
class receipe5 {
	name = "Morceaux de vêtements";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 10;

	required[] = {{"cotton",4}};
	result[] = {"wearings",1};

	craft_description = "Des morceaux de vêtements , assez polyvalents. <br/> Utilisé dans le craft de vêtements";
};
class receipe6 {
	name = "Plaques de métal";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 10;

	required[] = {{"metal",3}};
	result[] = {"metal_plate",1};

	craft_description = "Plaque de métal renforcée , utile pour faire cuire des omelettes. <br/> Utilisé dans le craft de vêtements renforcés ou paramilittaires.";
};