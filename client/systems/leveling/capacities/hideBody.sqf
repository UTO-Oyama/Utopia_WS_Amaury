_body = _this;

if(alive _body) exitWith {};
if !(_body isKindOf "Man") exitWith {};

if([10,"Enterrement du corps %1%2"] call lvl_progressBar) then {
	deleteVehicle _body;
	[player,100] call fn_playerAddMoney;
	if(["wearings",1] call mf_inventory_can_add) then {
		["Vous avez reçu 100$ et des morceaux de vêtements pour avoir caché le cadavre.",5] call mf_notify_client;
		["wearings",1] call mf_inventory_add;
	}else{
		["Vous avez reçu 100$ pour avoir caché le cadavre.",5] call mf_notify_client;
	};
};