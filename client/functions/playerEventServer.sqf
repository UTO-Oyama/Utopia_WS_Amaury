// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: playerEventServer.sqf
//	@file Author: AgentRev

_type = param [0, "", [""]];

switch (toLower _type) do
{
	case "pickupmoney":
	{
		_amount = param [1, 0, [0]];

		if (_amount > 0) then
		{
			[format ["Vous avez pris $%1", [_amount] call fn_numbersText], 5] call mf_notify_client;

			if (["A3W_playerSaving"] call isConfigOn) then
			{
				[] spawn fn_savePlayerData;
			};
		};
	};

	case "transaction":
	{
		_amount = param [1, 0, [0]];

		if (_amount != 0) then
		{
			// temporarily offloaded to server due to negative wallet glitch
			//player setVariable ["cmoney", (player getVariable ["cmoney", 0]) - _amount, true];

			if (["A3W_playerSaving"] call isConfigOn) then
			{
				[] spawn fn_savePlayerData;
			};

			playSound "defaultNotification";
			call mf_items_warchest_refresh;
			call mf_items_cratemoney_refresh;
			true call mf_items_atm_refresh;
		}
		else
		{
			playSound "FD_CP_Not_Clear_F";
			["Transaction invalide , veuillez réessayer.", 5] call mf_notify_client;
		};
	};

	case "atmtransfersent":
	{
		_amount = param [1, 0, [0]];
		_name = param [2, "", [""]];

		if (_amount != 0) then
		{
			_message = if (isStreamFriendlyUIEnabled) then {
				"Vous avez transféré $%1"
			} else {
				"Vous avez transféré $%1 à %2"
			};

			playSound "defaultNotification";
			[format [_message, [_amount] call fn_numbersText, _name], 5] call mf_notify_client;
			true call mf_items_atm_refresh;
		}
		else
		{
			playSound "FD_CP_Not_Clear_F";
			["Transaction invalide , veuillez réessayer.", 5] call mf_notify_client;
			true call mf_items_atm_refresh;
		};
	};

	case "atmtransferreceived":
	{
		_amount = param [1, 0, [0]];
		_name = param [2, "", [""]];

		_message = if (isStreamFriendlyUIEnabled) then {
			"Vous avez reçu $%1 par transfer d'argent" 
		} else {
			"%2 a transféré $%1 sur votre compte en banque"
		};

		playSound "FD_Finish_F";
		[format [_message, [_amount] call fn_numbersText, _name], 5] call mf_notify_client;
		true call mf_items_atm_refresh;
	};
};
