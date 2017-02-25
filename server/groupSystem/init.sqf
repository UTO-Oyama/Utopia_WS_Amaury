_groupSys = "server\groupSystem\";

fn_playerJoinGroup = (_groupSys + "playerJoinGroup.sqf") call mf_compile;
fn_playerLeaveGroup = (_groupSys + "playerLeaveGroup.sqf") call mf_compile;
fn_createGroupRequest = (_groupSys + "createGroup.sqf") call mf_compile;
fn_deleteGroupRequest = (_groupSys + "deleteGroup.sqf") call mf_compile;
fn_playerGroupConnected = (_groupSys + "playerGroupConnected.sqf") call mf_compile;
fn_sendGroupData = (_groupSys + "sendGroupData.sqf") call mf_compile;
fn_assignGroupLeader  = (_groupSys + "assignGroupLeader.sqf") call mf_compile;
fn_playerLeaveGroupOffline = (_groupSys + "playerLeaveGroupOffline.sqf") call mf_compile;
fn_addGroupMoney = (_groupSys + "addGroupMoney.sqf") call mf_compile;
fn_withdrawMoney  = (_groupSys + "withdrawMoney.sqf") call mf_compile;