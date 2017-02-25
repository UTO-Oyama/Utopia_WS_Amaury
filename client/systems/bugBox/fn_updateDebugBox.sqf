disableSerialization;

private _allTickets = param[0,[],[[]]];

private _display = findDisplay 666;
private _entriesText = _display displayCtrl 1100;
private _tList = _display displayCtrl 1500;

private _myTickets = 0;
private _myTicketsResolved = 0;
private _myTicketsRefused = 0;
private _myWaitingTickets = 0;

lbClear _tList;

{
	_id = _x select 0;
	_title = _x select 1;
	_text = _x select 2;
	_status = _x select 3;
	_uid = _x select 4;
	_pname = _x select 5;



	if(_uid == getPlayerUID player) then {
		_myTickets = _myTickets + 1;
		switch (_status) do { 
			case 0 : {_myWaitingTickets = _myWaitingTickets + 1}; 
			case 1 : {_myTicketsResolved = _myTicketsResolved + 1}; 
			case 2 : {_myTicketsRefused = _myTicketsRefused + 1}; 
		};
	};
 
	_index = _tList lbAdd format["[%4] #%1 %2 par %3",_id,_title,_pname,switch (_status) do { 
		case 0 : {"ATTENTE"}; 
		case 1 : {"RESOLU"}; 
		case 2 : {"REFUSE"}; 
	}];
	_tList lbSetTooltip [_index,_text];
	_tList lbSetValue [_index,-_id];
}foreach _allTickets;

lbSortByValue _tList;

_entriesText ctrlSetStructuredText parseText format ["Mes tickets : %1 | Corrigés : %2 | En attente : %3 | Refusés : %4",_myTickets,_myTicketsResolved,_myWaitingTickets,_myTicketsRefused]