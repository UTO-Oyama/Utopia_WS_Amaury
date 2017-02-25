// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: playerSetupGear.sqf
//	@file Author: [GoT] JoSchaap, AgentRev

private ["_player", "_uniform", "_vest", "_headgear", "_goggles","_handgun","_primary","_secondary"];
_player = _this;

// Clothing is now defined in "client\functions\getDefaultClothing.sqf"

_uniform = getText (missionConfigFile >> "cfgLeveling" >> player_class >> "gear" >> str playerSide >> "uniform");
_vest = getText (missionConfigFile >> "cfgLeveling" >> player_class >> "gear" >> str playerSide >> "vest");
_headgear = getText (missionConfigFile >> "cfgLeveling" >> player_class >> "gear" >> str playerSide >> "headgear");
_goggles = getText (missionConfigFile >> "cfgLeveling" >> player_class >> "gear" >> str playerSide >> "goggles");

_magazines = getArray (missionConfigFile >> "cfgLeveling" >> player_class >> "gear" >> str playerSide >> "magazines");
_items = getArray (missionConfigFile >> "cfgLeveling" >> player_class >> "gear" >> str playerSide >> "items");

_handgun = getText (missionConfigFile >> "cfgLeveling" >> player_class >> "gear" >> str playerSide >> "handgunWeapon"); 
_primary = getText (missionConfigFile >> "cfgLeveling" >> player_class >> "gear" >> str playerSide >> "primaryweapon"); 
_secondary = getText (missionConfigFile >> "cfgLeveling" >> player_class >> "gear" >> str playerSide >> "secondaryweapon"); 


if (_uniform != "") then { _player addUniform _uniform };
if (_vest != "") then { _player addVest _vest };
if (_headgear != "") then { _player addHeadgear _headgear };
if (_goggles != "") then { _player addGoggles _goggles };


sleep 0.1;

// Remove GPS
_player unlinkItem "ItemGPS";

// Remove radio
//_player unlinkItem "ItemRadio";

// Remove NVG
if (hmd _player != "") then { _player unlinkItem hmd _player };

// Add NVG
_player linkItem "NVGoggles";

_player addBackpack "B_AssaultPack_rgr";

{
	for "_i" from 0 to (_x select 1) do {
	_player addItem (_x select 0);
	};
}forEach _items;

{
	_player addMagazines [_x select 0,_x select 1];
}forEach _magazines;


switch (player_class) do
{
	case "Sniper":
	{
		_player addWeapon "Rangefinder";
	};
};

if (_player == player) then
{
	thirstLevel = 100;
	hungerLevel = 100;
};

_player addWeapon _secondary;
_player addWeapon _primary;
_player addWeapon _handgun;;