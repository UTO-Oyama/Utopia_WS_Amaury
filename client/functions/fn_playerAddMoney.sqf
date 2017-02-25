private _player = param [0,objNull,[objNull]];
private _amount = param [1,0,[0]];
private _mode = param [2,"+",[""]];

switch(_mode) do {
	case "+" : { _player setVariable ["cmoney",(_player getVariable ["cmoney",0]) + _amount,true]; };
	case "-" : { _player setVariable ["cmoney",(_player getVariable ["cmoney",0]) - _amount,true]; };
	case "*" : { _player setVariable ["cmoney",(_player getVariable ["cmoney",0]) * _amount,true]; };
	case "/" : { _player setVariable ["cmoney",(_player getVariable ["cmoney",0]) / _amount,true]; };
	default {};
};


