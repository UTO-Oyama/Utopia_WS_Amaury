/**
@Author : [utopia] Amaury
@Creation : 22/11/16
@Modification : 27/11/16
@Description : useless
**/

harvest_markers = [];
{
	if((_x select [0,7]) isEqualTo "harvest_") then {
		harvest_markers pushBack _x;
	};
}foreach allMapMarkers;