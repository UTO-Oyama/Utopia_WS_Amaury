_teamName = ["Créez votre team [50 000$]",findDisplay 2001] call fn_editDialog;

if !(_teamName isEqualTo "") then {
	if (_teamName find "'" != -1) exitWith {hintSilent "Votre nom de groupe contient des caractères interdits"};
	if (_teamName find "-" != -1) exitWith {hintSilent "Votre nom de groupe contient des caractères interdits"};
	if (_teamName find "*" != -1) exitWith {hintSilent "Votre nom de groupe contient des caractères interdits"};
	if (_teamName find '"' != -1) exitWith {hintSilent "Votre nom de groupe contient des caractères interdits"};
	[_teamName,player] remoteExec ["fn_createGroupRequest",2];
};