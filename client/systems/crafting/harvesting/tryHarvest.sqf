/**
@Author : [utopia] Amaury
@Creation : 22/11/16
@Modification : 27/11/16
@Description : 
**/

private _found = false;

{
	private _radius = getNumber (_x >> "radius");
	private _type = getArray (_x >> "type");
	private _marker = getText (_x >> "markername");
	private _playerPos = getPosATL player;

	if(_playerPos distance (getMarkerPos _marker) <= _radius) then {
		_x spawn craft_harvest;
		_found = true;
	};
}foreach ("true" configClasses (missionConfigFile >> "Harvesting"));


if(!_found) then {
	hintSilent "Il n'y a rien à récolter ici";
};