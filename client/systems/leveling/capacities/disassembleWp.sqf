_weapon = _this;

if(!alive _weapon || isNull _weapon) exitWith {};
if !(_weapon isKindOf "GroundWeaponHolder" || _weapon isKindOf 'MineBase') exitWith {};

if(["metal",1] call mf_inventory_can_add) then {
	["metal",1] call mf_inventory_add;
	deleteVehicle _weapon;
	hintSilent "Vous avez récupéré 1 métal";
}else{	
	hintSilent "Votre inventaire est plein";
};