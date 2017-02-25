_vehicle = nearestObject [getpos player, 'Land_Laptop_unfolded_F'];

if(_vehicle isEqualTo objNull || !alive _vehicle) exitWith {};


if([180,nil,"acts_millerDisarming_deskLoop","Hacking annulé",_vehicle] call lvl_progressBar) then {
	_vehicle setVariable ["hacked",true,true];
};

