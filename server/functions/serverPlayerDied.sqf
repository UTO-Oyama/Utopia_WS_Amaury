// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Version: 1.0
//	@file Name: serverPlayerDied.sqf
//	@file Author: [404] Pulse, AgentRev
//	@file Created: 20/11/2012 05:19

if (!isServer) exitWith {};

params [["_unit",objNull,[objNull]], "", "", ["_deathCause",[],[[]]]]; // _unit, _killer, _presumedKiller, _deathCause

_unit call A3W_fnc_setItemCleanup;
_unit setVariable ["A3W_deathCause_local", _deathCause];

private _killer = (_this select [0,3]) call A3W_fnc_registerKillScore;

// Remove player save on death
if (isPlayer _unit && {["A3W_playerSaving"] call isConfigOn}) then
{
	(getPlayerUID _unit) call fn_deletePlayerSave;
};

private _backpack = unitBackpack _unit;

if (!isNull _backpack) then
{
	_backpack call A3W_fnc_setItemCleanup;
};

// Eject corpse from vehicle once stopped
if (vehicle _unit != _unit) then
{
	if (local _unit) then
	{
		_unit spawn fn_ejectCorpse;
	}
	else
	{
		_unit remoteExec ["fn_ejectCorpse", _unit];
	};
};

//Added by [utopia] Amaury
if(isPlayer _killer && !(_killer == _unit)) then {
	if !(isPlayer _unit) then { //IA killed
		_reward = _unit getVariable ["xp",100];
		{
			if(_x isEqualTo _killer) then {
				[_reward,1] remoteExec ["lvl_addXp",_killer]; 
			}else{
				[floor (_reward / (count units group _killer)),4] remoteExec ["lvl_addXp",_killer]; 
			};
		}forEach units group _killer;
	};
	if (isPlayer _unit) then { //Player killed
		
	};
}else{
	[100,2] remoteExec ["lvl_removeXP",_unit];
};


//if !(["G_Diving", goggles _unit] call fn_startsWith) then { removeGoggles _unit };
