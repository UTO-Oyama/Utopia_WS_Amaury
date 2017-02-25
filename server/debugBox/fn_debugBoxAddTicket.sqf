private _sender = param[0,objNull,[objNull]];
private _title = param[1,"",[""]];
private _content = param[2,"",[""]];

private _ownerUID = getPlayerUID _sender;
private _ownerName = name _sender;

[format ["addTicket:""%1"":""%2"":""%3"":""%4""",_title,_content,_ownerUID,_ownerName]] call extDB_Database_async;

[_sender] call fn_debugBoxRequest;