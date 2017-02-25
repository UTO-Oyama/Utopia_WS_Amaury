// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: applyPlayerInfo.sqf
//	@file Author: AgentRev

// Modification of class and level by [utopia] Amaury

// This is where you load custom player variables that must persist between deaths

private _data = _this;

{
	_x params ["_name", "_value"];

	switch (_name) do 
	{
		case "Level" : {  player_level = _value;  player setVariable ["Level",player_level,true];};
		case "Class" : { player_class = _value; player setVariable ["Class",player_class,true];};
		case "XP" : { player_xp = _value;};
		case "Donator": { player setVariable ["Donator", _value > 0] }; // not used in vanilla
		case "PrivateStorage": { player setVariable ["private_storage", _value] };
		case "ParkedVehicles": { player setVariable ["parked_vehicles", _value] }; // parked vehicles are mostly handled server-side, this is just a ghost copy to populate UI
	};
} forEach _data;
