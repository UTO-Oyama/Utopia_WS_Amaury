disableSerialization;
if !(isNull findDisplay 666) exitWith {};

createDialog "bugBox";

if(isNil "debug_send") then {
	debug_send = false;
};

private _display = findDisplay 666;
private _send_btn = _display displayCtrl 1600;

[player] remoteExec ["fn_debugBoxRequest",2];

_send_btn ctrlAddEventHandler ["ButtonClick",{
	private _display = findDisplay 666;
	private _titleCtrl = _display displayCtrl 1400;
	private _textCtrl = _display displayCtrl 1401;

	private _title = ctrlText _titleCtrl;
	private _text = ctrlText _textCtrl;

	if(debug_send) exitWith {hintSilent "Vous avez déjà envoyé un ticket , veuillez attendre une petite minute."};

	if(count _title > 30) exitWith {hintSilent "Votre titre est trop long"};
	if(count _text > 500) exitWith {hintSilent "Votre corps de texte est trop long"};

	if(count _title < 5) exitWith {hintSilent "Votre titre est trop court"};
	if(count _text < 5) exitWith {hintSilent "Votre corps de texte est trop court"};

	[player,_title,_text] remoteExec ["fn_debugBoxAddTicket",2];

	_titleCtrl ctrlSetText "";
	_textCtrl ctrlSetText "";
	debug_send = true;
	[] spawn {
		uiSleep 60;
		debug_send = false;
	};
}];
