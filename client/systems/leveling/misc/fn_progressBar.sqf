//@file Version: 1.0
//@file Name: 
//@file Author: [utopia] Amaury 
//@file Created: 27/11/2016
//@file Description: inspired from the actions created by MercyfulFate

private _time = param[0,5,[0]];
private _textBar = param[1,"%1%2 Complete",[""]];
private _anim = param[2,"AinvPknlMstpSnonWnonDnon_healed_1",[""]];
private _error = param[3,"Error",[""]];

private ["_checks", "_hasFailed"];

if(!canSuspend) exitWith {systemChat "progress bar does not work in this context"};

_hasFailed = {
	private ["_progress","_failed", "_text"];
	_progress = _this select 0;
	_text = "";
	_failed = true;
	switch (true) do {
		case (!alive player) : {}; // player is dead, not need for a error message
		case (doCancelAction): {doCancelAction = false; _text = _error;};
		default {
			_failed = false;
			_text = format[_textBar, round(100*_progress), "%"];
		};
	};
	[_failed, _text];
};

_success = [_time, _anim, _hasFailed, []] call a3w_actions_start;
_success;
