for "_i" from 1 to 4 do {
	_marker = format["forbidden_zone_%1",_i];
	_markerPos = markerPos _marker;
	_radius = markerSize _marker;
	_angle = markerDir _marker;
	_trg = createTrigger ["EmptyDetector",_markerPos,false];
	_trg setTriggerActivation ["ANY", "PRESENT", true];
	_trg setTriggerStatements ["player in thislist", "[] execVM 'client\systems\forbiddenZones\enterForbiddenZone.sqf'", "[] execVM 'client\systems\forbiddenZones\leftForbiddenZone.sqf'"];
	_trg setTriggerArea [_radius select 0,_radius select 1,_angle,(if(markerShape _marker == "RECTANGLE") then {true}else{false})];
};

switch (playerSide) do { 
	case west : { 
		_marker = "east_main_base";
		_markerPos = markerPos _marker;
		_radius = [100,100];
		_angle = markerDir _marker;
		_trg = createTrigger ["EmptyDetector",_markerPos,false];
		_trg setTriggerActivation ["ANY", "PRESENT", true];
		_trg setTriggerStatements ["vehicle player in thislist", "[] execVM 'client\systems\forbiddenZones\enterEnnemiBase.sqf'", "[] execVM 'client\systems\forbiddenZones\leftForbiddenZone.sqf'"];
		_trg setTriggerArea [_radius select 0,_radius select 1,_angle,(if(markerShape _marker == "RECTANGLE") then {true}else{false})];
 	}; 
	case east : {
		_marker = "west_main_base";
		_markerPos = markerPos _marker;
		_radius = [100,100];
		_angle = markerDir _marker;
		_trg = createTrigger ["EmptyDetector",_markerPos,false];
		_trg setTriggerActivation ["ANY", "PRESENT", true];
		_trg setTriggerStatements ["vehicle player in thislist", "[] execVM 'client\systems\forbiddenZones\enterEnnemiBase.sqf'", "[] execVM 'client\systems\forbiddenZones\leftForbiddenZone.sqf'"];
		_trg setTriggerArea [_radius select 0,_radius select 1,_angle,(if(markerShape _marker == "RECTANGLE") then {true}else{false})];
	}; 
	default {
		_marker = "east_main_base";
		_markerPos = markerPos _marker;
		_radius = [100,100];
		_angle = markerDir _marker;
		_trg = createTrigger ["EmptyDetector",_markerPos,false];
		_trg setTriggerActivation ["ANY", "PRESENT", true];
		_trg setTriggerStatements ["vehicle player in thislist", "[] execVM 'client\systems\forbiddenZones\enterEnnemiBase.sqf'", "[] execVM 'client\systems\forbiddenZones\leftForbiddenZone.sqf'"];
		_trg setTriggerArea [_radius select 0,_radius select 1,_angle,(if(markerShape _marker == "RECTANGLE") then {true}else{false})];

		_marker = "west_main_base";
		_markerPos = markerPos _marker;
		_radius = [100,100];
		_angle = markerDir _marker;
		_trg = createTrigger ["EmptyDetector",_markerPos,false];
		_trg setTriggerActivation ["ANY", "PRESENT", true];
		_trg setTriggerStatements ["vehicle player in thislist", "[] execVM 'client\systems\forbiddenZones\enterEnnemiBase.sqf'", "[] execVM 'client\systems\forbiddenZones\leftForbiddenZone.sqf'"];
		_trg setTriggerArea [_radius select 0,_radius select 1,_angle,(if(markerShape _marker == "RECTANGLE") then {true}else{false})];
	}; 
};