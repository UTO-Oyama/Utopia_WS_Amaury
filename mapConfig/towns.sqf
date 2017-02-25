// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2016 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: towns.sqf
//	@file Author: AgentRev

private _towns =
[
	// Marker Name, Diameter, City Name
	["Town_BluePearl", -1, "Blue Pearl Port"],
	["Town_Georgetown", -1, "Georgetown"],
	["Town_Kotomo", -1, "Kotomo"],
	["Town_Lami", -1, "Lami"],
	["Town_Lifou", -1, "Lifou"],
	["Town_Luganville", -1, "Luganville"],
	["Town_Nandai", -1, "Nandai"],
	["Town_Nicolet", -1, "Nicolet"],
	["Town_Oumere", -1, "Ouméré"],
	["Town_Regina", -1, "Regina"],
	["Town_Rochelle", -1, "La Rochelle"],
	["Town_StJulien", -1, "Saint-Julien"],
	["Town_Tanouka", -1, "Tanouka"],
	["Town_Vagalala", -1, "Vagalala"]
];

//copyToClipboard str ((allMapMarkers select {_x select [0,5] == "Town_"}) apply {[_x, -1, markerText _x]})

private "_size";
 
{
	_x params ["_marker"];

	if (markerShape _marker == "ELLIPSE") then
	{
		_size = markerSize _marker;
		_x set [1, (_size select 0) min (_size select 1)];
	};
} forEach _towns;

_towns
