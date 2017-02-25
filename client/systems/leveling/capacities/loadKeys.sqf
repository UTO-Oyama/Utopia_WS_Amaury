private _capacities = ("true" configClasses (missionConfigFile >> "CfgLeveling" >> player_class >> "capacities")) apply {
	[configName _x,getText (_x >> "name"),getText (_x >> "icon"),getText (_x >> "description"),getNumber (_x >> "requiredLevel"),getNumber (_x >> 'active'),getText (_x >> 'actionScript'),getNumber (_x >> 'key'),getNumber (_x >> 'coolDown')]
};

if(isnil {profileNamespace getVariable "utopia_keys"}) then {
	profileNamespace setVariable ["utopia_keys",[]];
};
if(isnil {uiNamespace getVariable "utopia_keys"}) then {
	uiNamespace setVariable ["utopia_activeCapacities",[]];
};

{
	_isActive = [false,true] select (_x select 5);
	if(_isActive) then {
		_userKey = [profileNamespace getVariable "utopia_keys",_x select 0,0] call bis_fnc_getFromPairs;
		_activeCapacities = [uiNamespace getVariable "utopia_activeCapacities",_x select 0,nil] call bis_fnc_getFromPairs;

		_keyVal = if(_userKey isEqualTo 0) then {_x select 7}else{_userKey};

		[profileNamespace getVariable "utopia_keys",_x select 0,_keyVal] call bis_fnc_setToPairs;

		if(isnil "_activeCapacities") then {
			[uiNamespace getVariable "utopia_activeCapacities",_x select 0,[0,false]] call bis_fnc_setToPairs;
		};
	};
}foreach _capacities;

(findDisplay 46) displayAddEventHandler ["KeyDown",lvl_keysHandle];