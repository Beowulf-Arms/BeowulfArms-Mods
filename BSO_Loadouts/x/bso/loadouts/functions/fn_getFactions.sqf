/*
		Author: Jsm

		Description:
			Gets all of the loadout factions classes

		Paramater(s):
			NONE

		Returns: 
			ARRAY
		
*/

if ([_faction] call BSO_fnc_isLocalConfig) then {
	source = missionConfigFile;
} else {
	_source = configFile;
};

_factions = "true" configClasses (configFile >> "CfgBsoLoadouts");
_retFactions = [];

{
	_n = [[getText (_x >> "Name"),_x]];
	_retFactions append _n;
} forEach _factions;

_factions;