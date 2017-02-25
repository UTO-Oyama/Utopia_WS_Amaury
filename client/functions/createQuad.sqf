if(isNil {player getVariable ["spawnedQuad",nil]}) then {
	_obj = "B_quadbike_01_f" createVehicle (position player);
	_obj setPosATL (getPosATL _obj);
	clearItemCargoGlobal _obj;
	clearWeaponCargoGlobal _obj;
	player moveInDriver _obj;
	hintSilent "Véhicule créé.";
	player setVariable ["spawnedQuad",true];
}else{
	hintSilent "Désolé , véhicule déjà créé.";
};