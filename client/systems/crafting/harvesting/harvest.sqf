/**
@Author : [utopia] Amaury
@Creation : 22/11/16
@Modification : 27/11/16
@Description : 
**/

#define ERR_CANCELLED "Harvest Canceled";
#define ANIMATION "AinvPknlMstpSnonWnonDnon_healed_1"

private _cfgEntry = _this;

private _item = getText (_cfgEntry >> "type");
private _itemArray  = _item call mf_inventory_get;
private _hTime = getNumber (_cfgEntry >> "harvestTime");
private _name = _itemArray select 2;

if (_item call mf_inventory_is_full) exitWith {
	hintSilent format["Vous avez trop de %1",_name];
};

private ["_checks", "_hasFailed"];
_hasFailed = {
	private ["_progress","_failed", "_text"];
	_progress = _this select 0;
	_text = "";
	_failed = true;
	switch (true) do {
		case (!alive player) : {}; // player is dead, not need for a error message
		case (doCancelAction): {doCancelAction = false; _text = ERR_CANCELLED;};
		default {
			_failed = false;
			_text = format["Récolte de %3 terminée à %1%2 ", round(100*_progress), "%" , _name];
		};
	};
	[_failed, _text];
};

_success = [_hTime, ANIMATION, _hasFailed, []] call a3w_actions_start;
if (_success) then {
	[_item,1] call mf_inventory_add;
	[format["Vous avez ramassé du %1",_name], 5] call mf_notify_client;
};
_success;
