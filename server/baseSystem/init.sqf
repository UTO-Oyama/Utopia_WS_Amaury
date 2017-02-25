/**
@ Author : [utopia] Amaury
@ Creation : 4/12/16
@
**/

server_bases = [
	["BLUFOR",[
		["Level",0],
		["Money",0],
		["hasFired",false]
	]],
	["OPFOR",[
		["Level",0],
		["Money",0],
		["hasFired",false]
	]]
];

_baseSys = "server\baseSystem\";
fn_loadBaseInfoFromDatabase	 = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_loadBaseInfoFromDatabase.sqf");
fn_saveBaseInfoToDatabase = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_saveBaseInfoToDatabase.sqf");
fn_sendBaseMenu = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_sendBaseMenu.sqf");
fn_loadBase = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_loadBase.sqf");
fn_addBaseMoney = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_addBaseMoney.sqf");

fn_artilleryFire = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_artilleryFire.sqf");
fn_artilleryRequest = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_artilleryRequest.sqf");

fn_mortarFire = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_mortarFire.sqf");
fn_mortarRequest = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_mortarRequest.sqf");

fn_getLevelArray = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_getLevelArray.sqf");

fn_sendServicesMenu = compileFinal preprocessFileLineNumbers  (_baseSys + "fn_sendServicesMenu.sqf");


["OPFOR"] call fn_loadBaseInfoFromDatabase;
["BLUFOR"] call fn_loadBaseInfoFromDatabase;

call compile preprocessFileLineNumbers "server\baseSystem\bases\guillaume_supp.sqf";
call compile preprocessFileLineNumbers "server\baseSystem\bases\guillaume_supp_2.sqf";
call compile preprocessFileLineNumbers "server\baseSystem\bases\guillaume_supp_3.sqf";

["OPFOR",([([server_bases,"OPFOR"] call bis_fnc_getFromPairs),"Level"] call bis_fnc_getFromPairs)] call fn_loadBase;
["BLUFOR",([([server_bases,"BLUFOR"] call bis_fnc_getFromPairs),"Level"] call bis_fnc_getFromPairs)] call fn_loadBase;