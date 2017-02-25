_groupInfos = param[0,[],[[]]];
_members = param[1,[],[[]]];

_groupID = _groupInfos param [0,0];
_groupSide = _groupInfos param [1,sideEmpty];
_groupOwner = _groupInfos param [2,""];
_groupName =  _groupInfos param [3,""];
_groupBank = _groupInfos param [4,0];

disableSerialization;

if !(isNull findDisplay 12399) exitWith {};

createDialog "groupManagement";

_display = findDisplay 12399;
_money = _display displayCtrl 1001;
_groupMembersCapacity = _display displayCtrl 1003;
_leader = _display displayCtrl 1006;
_groupHeader = _display displayCtrl 1082;
_leaderActionsHeader = _display displayCtrl 1004;
_members_list = _display displayCtrl 1500;
_p_list = _display displayCtrl 2100;
_invite_btn = _display displayCtrl 1600;
_add_money_btn = _display displayCtrl 1605;
_withdraw_money_btn = _display displayCtrl 1606;
_leaderBckGround = _display displayCtrl 2201;
_money_cb = _display displayCtrl 2101;
_leave_group_btn = _display displayCtrl 1601;
_delete_group = _display displayCtrl 1604;
_new_leader_btn = _display displayCtrl 1603;
_kick_btn = _display displayCtrl 1602;

_groupHeader ctrlSetText groupId group player;
_groupMembersCapacity ctrlSetText format ["Capacité : %1 / %2",count _members,12];
_money ctrlSetText format ["En banque : %1$",_groupBank];

_delete_group ctrlShow false;
_new_leader_btn ctrlShow false;
_kick_btn ctrlShow false;
_leaderBckGround ctrlShow false;
_p_list ctrlShow false;
_invite_btn ctrlShow false;
_leaderActionsHeader ctrlShow false;

_withdraw_money_btn ctrlEnable false;
_add_money_btn ctrlEnable false;
_withdraw_money_btn ctrlSetTooltip "Vous avez besoin d'être chef de groupe pour retirer de l'argent";

{
 	_idx = _money_cb lbAdd format ["%1$",_x];
 	_money_cb lbSetValue [_idx,_x];
} forEach [25,50,100,500,1000,5000,10000];


_add_money_btn ctrlAddEventHandler ["ButtonClick",{
	_display = findDisplay 12399;
	_money_cb = _display displayCtrl 2101;
	_val = _money_cb lbValue (lbCurSel _money_cb);

	if(_val == 0) exitWith {hintSilent "Pas de valeur sélectionnée"};

	[player,_val] remoteExec ["fn_addGroupMoney",2];
}];

_leave_group_btn ctrlAddEventHandler ["ButtonClick",{
	[player] remoteExec ["fn_playerLeaveGroup",2];
	findDisplay 12399 closeDisplay 0;
}];

_withdraw_money_btn ctrlAddEventHandler ["ButtonClick",{
	_display = findDisplay 12399;
	_money_cb = _display displayCtrl 2101;
	_val = _money_cb lbValue (lbCurSel _money_cb);

	if(_val == 0) exitWith {hintSilent "Pas de valeur sélectionnée"};

	[player,_val] remoteExec ["fn_withDrawMoney",2];
}];

_delete_group ctrlAddEventHandler ["ButtonClick",{
	[groupID group player] remoteExec ["fn_deleteGroupRequest",2];
	findDisplay 12399 closeDisplay 0;
}];

_invite_btn ctrlAddEventHandler ["ButtonClick",{
	_display = findDisplay 12399;
	_members_list = _display displayCtrl 1500;
	_p_list = _display displayCtrl 2100;
	_uid = _p_list lbData (lbCurSel _p_list); //UID

	if(lbSize _members_list >= 12) exitWith {hintSilent "Le groupe est plein :/"};
	if(_uid isEqualTo "") exitWith {hintSilent "Aucun joueur sélectionné"};

	_pList = allPlayers;
	_pListUids = _pList apply {getPlayerUID _x};

	(_pList select (_pListUids find _uid)) setVariable ["group_invite_received",groupId group player,true];
}];

_new_leader_btn ctrlAddEventHandler ["ButtonClick",{
	_display = findDisplay 12399;
	_members_list = _display displayCtrl 1500;
	_newLeader = _members_list lbData (lbCurSel _members_list); //UID
	if(_newLeader isEqualTo "") exitWith {hintSilent "Aucun membre sélectionné"};

	[player,_newLeader] remoteExec ["fn_assignGroupLeader",2];
}];

_kick_btn ctrlAddEventHandler ["ButtonClick",{
	_display = findDisplay 12399;
	_members_list = _display displayCtrl 1500;
	_uid = _members_list lbData (lbCurSel _members_list); //UID

	if(_uid isEqualTo getPlayerUID player) exitWith {hintSilent "Vous n'allez quand même pas vous kicker ? :("};

	_pList = allPlayers;
	_pListUids = _pList apply {getPlayerUID _x};

	if(_newLeader isEqualTo "") exitWith {hintSilent "Aucun membre sélectionné"};

	if(_uid in _pListUids) then { //kick online
		[_pList select (_pListUids find _uid)] remoteExec ["fn_playerLeaveGroup",2];
	}else{ //kick offline
		[group player,_uid] remoteExec ["fn_playerLeaveGroupOffline",2];
	};

	[player] remoteExec ["fn_sendGroupData",2];
}];

[player] remoteExec ["fn_sendGroupData",2];