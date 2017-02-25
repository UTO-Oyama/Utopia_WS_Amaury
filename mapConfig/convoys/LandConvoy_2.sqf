// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2016 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: LandConvoy_2.sqf
//	@file Author: AgentRev

// for Tanoa

// starting positions for this route
_starts =
[
	markerPos "LandConvoy_2_1",
	markerPos "LandConvoy_2_2",
	markerPos "LandConvoy_2_3"
];

// starting directions in which the vehicles are spawned on this route
_startDirs =
[
	markerDir "LandConvoy_2_1",
	markerDir "LandConvoy_2_2",
	markerDir "LandConvoy_2_3"
];

// the route
_waypoints =
[
	[14606.2,10765.4],
	[14366.9,8878.78],
	[13923.1,8380.3],
	[12369.9,7999.42],
	[12794.7,7452.29],
	[12243.1,6751.84],
	[11816.1,6718.11],
	[10649,6655.52],
	[9486,7581.29],
	[9410.88,7979.51],
	[9069.53,7906.83],
	[8389.97,7908.66],
	[8338.25,8085.71]
];

// to easily create waypoints, go in the editor, create player and preview scenario, place double-click markers in desired order on the map, and run this code:
// copyToClipboard str (allMapMarkers apply {markerPos _x select [0,2]})

// and there you go, positions in clipboard
