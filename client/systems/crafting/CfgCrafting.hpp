/**
@Author : [utopia] Amaury
@Creation : 11/11/16
@Modification : 24/11/16
@Description : Crafting config
**/

class Harvesting {
	class zone1 {
		markerName = "harvest_stone";		 	//marker name or position
		radius = 250;							//zone radius
		type = "stone";					//zone item
		tool = ""; 					  			//tool required , leave empty for nothing	  
		harvestTime = 5;					    //time required to harvest
	};
	class zone3 {
		markerName = "harvest_sand";
		radius = 250;						
		type = "sand";							
		tool = "";
		harvestTime = 2;
	};
	class zone2 {
		markerName = "harvest_cotton";
		radius = 100;						
		type = "cotton";							
		tool = "";
		harvestTime = 10;
	};
};



class Crafting {
	class weapons {
		name = "Armes";
		#include "config\craft_weapons.hpp"
	};
	class items {
		name = "Items A3Wasteland";
		#include "config\craft_a3Items.hpp"
	};
	class magazines {
		name = "Chargeurs";
		#include "config\craft_magazines.hpp"
	};
	class buildings {
		name = "Bâtiments";
		#include "config\craft_buildings.hpp"
	};
	class attachments {
		name = "Viseurs";
		#include "config\craft_attachments.hpp"
	};
	class muzzles {
		name = "Silencieux";
		#include "config\craft_muzzles.hpp"
	};
	class explosives {
		name = "Explosifs";
		#include "config\craft_explosives.hpp"
	};
	class uniforms {
		name = "Uniformes";
		#include "config\craft_uniforms.hpp"
	};
	class vests {
		name = "Vestes";
		#include "config\craft_vests.hpp"
	};
	class headgears {
		name = "Casques";
		#include "config\craft_headgears.hpp"
	};
	class vehicles {
		name = "Véhicules";
		#include "config\craft_vehicles.hpp"
	};
};



