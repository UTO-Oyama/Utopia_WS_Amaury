// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2016 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: LandConvoy_1.sqf
//	@file Author: AgentRev

// for Tanoa

// starting positions for this route
_starts =
[
	markerPos "LandConvoy_1_1",
	markerPos "LandConvoy_1_2",
	markerPos "LandConvoy_1_3"
];

// starting directions in which the vehicles are spawned on this route
_startDirs =
[
	markerDir "LandConvoy_1_1",
	markerDir "LandConvoy_1_2",
	markerDir "LandConvoy_1_3"
];

// the route
_waypoints = [
	[10200.6,11647],
	[9546.17,12164.2],
	[9887.97,12584.4],
	[9897.26,13116.9],
	[10430.7,13285.6],
	[10300.3,13404.4],
	[9735.43,13511.3],
	[8746.9,13709.5],
	[8282.7,13668.3],
	[6932.89,13367.7],
	[6119.29,12777],
	[5507.86,12028.8],
	[6167.9,11701.4],
	[6118.82,11080.6],
	[5886.03,11034.3],
	[5805.9,10493.3],
	[5181.23,9891.89],
	[4538.41,8790.27],
	[4220.22,8379.89]
];


// to easily create waypoints, go in the editor, create player and preview scenario, place double-click markers in desired order on the map, and run this code:
// copyToClipboard str (allMapMarkers apply {markerPos _x select [0,2]})

// and there you go, positions in clipboard