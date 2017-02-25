// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Version: 1.0
//	@file Name: onKeyPress.sqf
//	@file Author: [404] Deadbeat, [404] Costlyy, AgentRev
//	@file Created: 20/11/2012 05:19
//	@file Args:

private ["_key", "_shift", "_ctrl", "_alt", "_handled"];

_key = _this select 1;
_shift = _this select 2;
_ctrl = _this select 3;
_alt = _this select 4;

_handled = false;

if !(alive player) exitWith {_handled};

{
	_pkey = [profileNamespace getVariable "utopia_keys",_x select 0,-1] call bis_fnc_getFrompairs;

	if(_pkey isEqualTo _key && (_x select 0) call lvl_haveCapacity) exitWith {

		_activeCapacity = [uiNamespace getVariable "utopia_activeCapacities",_x select 0] call bis_fnc_getFrompairs;
		_activatedTime = _activeCapacity select 0;
		_isActive = _activeCapacity select 1;

		if(_isActive) then {
			if(diag_tickTime - _activatedTime >= (_x select 8)) then {
				_isActive = false;
				[uiNamespace getVariable "utopia_activeCapacities",_x select 0,[0,false]] call bis_fnc_setTopairs;
			};
		};

		if !(_isActive) then {
			[] execVM (_x select 6);
			[uiNamespace getVariable "utopia_activeCapacities",_x select 0,[diag_tickTime,true]] call bis_fnc_setTopairs;
			hintSilent format["Capacité %1 activée",_x select 1];
			_handled = true;
		}else{
			hintSilent "La capacité est en cours de rechargement";
		};
	};
}foreach (call lvl_capacitiesToArray);

_handled