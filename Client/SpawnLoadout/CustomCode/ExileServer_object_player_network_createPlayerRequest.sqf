/**
 * ExileServer_object_player_network_createPlayerRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionID","_parameters","_requestingPlayer","_spawnLocationMarkerName","_playerUID","_accountData","_bambiPlayer","_cargoType"];
_sessionID = _this select 0;
_parameters = _this select 1;
_requestingPlayer = _sessionID call ExileServer_system_session_getPlayerObject;

_bambiuniforms = [
		
		"TRYK_U_B_BLK_T_WH",
		"TRYK_U_B_BLK_T_BK",
		"TRYK_U_B_RED_T_BR",
		"TRYK_U_B_Denim_T_BG_WH",
		"TRYK_U_B_Denim_T_BG_BK",
		"TRYK_U_B_BLK_T_BG_WH",
		"TRYK_U_B_BLK_T_BG_BK",
		"TRYK_U_B_RED_T_BG_BR"
			
] call BIS_fnc_selectRandom;
_bambifood = ["Exile_Item_Noodles","Exile_Item_SeedAstics","Exile_Item_Raisins","Exile_Item_Moobar"] call BIS_fnc_selectRandom;
_bambidrink = ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater"] call BIS_fnc_selectRandom;

try
{
	if (isNull _requestingPlayer) then 
	{
		throw format ["Session %1 requested a bambi character, but doesn't have a player object. Hacker or Monday?", _sessionID];
	};
	_spawnLocationMarkerName = _parameters select 0;
	_playerUID = getPlayerUID _requestingPlayer;
	if(_playerUID isEqualTo "")then
	{
		throw format ["Player: '%1' has no player UID. Arma/Steam sucks!.",name _requestingPlayer];
	};
	_accountData = format["getAccountStats:%1", _playerUID] call ExileServer_system_database_query_selectSingle;
	_group = call ExileServer_system_group_getOrCreateLoneWolfGroup;
	_bambiPlayer = _group createUnit ["Exile_Unit_Player", [0,0,0], [], 0, "CAN_COLLIDE"];
	_bambiplayer forceadduniform _bambiuniforms;
	_bambiplayer addItem _bambifood;
	_bambiplayer addItem _bambidrink;
	removeHeadgear _bambiPlayer;
	{
		_cargoType = _x call ExileClient_util_cargo_getType;
		switch (_cargoType) do
		{
			case 1: 	{ _bambiPlayer addItem _x; };
			case 2: 	{ _bambiPlayer addWeaponGlobal _x; };
			case 3: 	{ _bambiPlayer addBackpackGlobal _x; };
			case 4:		{ _bambiPlayer linkItem _x; };
			default 					{ _bambiPlayer addItem _x; };
		};
	}
	forEach getArray(configFile >> "CfgSettings" >> "BambiSettings" >> "loadOut");
	[_sessionID, _requestingPlayer, _spawnLocationMarkerName, _bambiPlayer, _accountData] call ExileServer_object_player_createBambi;
}
catch
{
	_exception call ExileServer_util_log;
};