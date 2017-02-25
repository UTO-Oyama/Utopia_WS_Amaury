_group = param[0,grpNull,[grpNull]];
_UID = param[1,"",[""]];

_sql = format ["playerLeaveGroup%1:%2",tolower str side _group,_UID];
[_sql,1] call extDB_Database_async;


