private _sender = param[0,objNull,[objNull]];

_allTickets = ["getTickets", 2,true] call extDB_Database_async;
[_allTickets] remoteExec ["fn_updateDebugBox",_sender];