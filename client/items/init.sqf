// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//@file Version: 1.0
//@file Name: init.sqf
//@file Author: MercyfulFate
//@file Created: 21/7/2013 16:00
//@file Description: Initialize Wasteland Items
//@file Argument: the path to the directory holding this file.

[_this, "survival"] call mf_init;
[_this, "misc"] call mf_init;
[_this, "jerrycan"] call mf_init;
[_this, "beacon"] call mf_init;
[_this, "camonet"] call mf_init;
[_this, "warchest"] call mf_init;
[_this, "cratemoney"] call mf_init;

if (["A3W_atmEnabled"] call isConfigOn) then
{
	[_this, "atm"] call mf_init;
};

//added by [utopia] Amaury for new items for crafting
["metal", "Morceaux de métal", {false} , "Land_MetalWire_F", "client\icons\metal.paa", 20] call mf_inventory_create;
["metal_pile", "Pile de métal", {false} , "Land_JunkPile_F", "client\icons\metal.paa", 1] call mf_inventory_create;
["metal_plate", "Plaques de métal", {false} , "Steel_Plate_F", "client\icons\mPlate.paa", 10] call mf_inventory_create;
["cotton", "Coton", {false} , "Land_WaterPurificationTablets_F", "client\icons\cotton.paa", 8] call mf_inventory_create;
["wearings", "Morceaux de vêtements", {false} , "Land_Bandage_F", "client\icons\wearings.paa", 6] call mf_inventory_create;
["wood", "Bûche", {false} , "", "client\icons\wood.paa", 10] call mf_inventory_create;
["stone", "Pierre", {false} , "", "client\icons\stone.paa", 10] call mf_inventory_create;
["sand", "Sable", {false} , "", "client\icons\sand.paa", 10] call mf_inventory_create;

["class_change", "Changement de classe", {closeDialog 0;[] call loadClassChoiceMenu;true} , "", "\A3\ui_f\data\GUI\Cfg\Ranks\general_gs.paa", 1] call mf_inventory_create;

["tank_part", "Carcasse de tank", {false} , "Land_CargoBox_V1_F", "\A3\editorpreviews_f\Data\CfgVehicles\Land_Wreck_Slammer_F.jpg", 1] call mf_inventory_create;
["car_part", "Carcasse de voiture", {false} , "Land_CargoBox_V1_F", "\A3\editorpreviews_f\Data\CfgVehicles\Land_Wreck_Offroad_F.jpg", 1] call mf_inventory_create;
["APC_part", "Carcasse d'APC", {false} , "Land_CargoBox_V1_F", "\A3\editorpreviews_f\Data\CfgVehicles\Land_Wreck_BMP2_F.jpg", 1] call mf_inventory_create;

["chopper_part", "Carcasse d'hélico", {false} , "Land_CargoBox_V1_F", "\A3\editorpreviews_f\Data\CfgVehicles\Land_Wreck_Heli_Attack_01_F.jpg", 1] call mf_inventory_create;
["heavy_chopper_part", "Carcasse d'hélico de combat", {false} , "Land_CargoBox_V1_F", "\A3\editorpreviews_f\Data\CfgVehicles\Land_Wreck_Heli_Attack_02_F.jpg", 1] call mf_inventory_create;