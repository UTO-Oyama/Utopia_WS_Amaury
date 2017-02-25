if !(isNil {player getVariable "group_invite_received"}) then {
	_invite = player getVariable "group_invite_received";
	_ok = [format["Vous avez été invité dans le groupe %1",_invite],"Invitation"] call bis_fnc_guiMessage;
	if(_ok) then {
		[_invite,player] remoteExec ["fn_playerJoinGroup",2];
	};
	player setVariable ["group_invite_received",nil,true];
}else{
	[player] remoteExec ["fn_sendGroupData",2];
};
