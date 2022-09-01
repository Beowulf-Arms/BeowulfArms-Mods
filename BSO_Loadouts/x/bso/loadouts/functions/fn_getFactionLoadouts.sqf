/*
		Author: Jsm

		Description:
			Gets all of the loadout classes of a given faction

		Paramater(s):
			0: STRING - Faction classname 

		Returns: 
			ARRAY
*/

_faction = _this;

_source = configFile;
if ([_faction] call BSO_fnc_isLocalConfig) then {
	_source = missionConfigFile;
};

_loadouts = "true" configClasses (_source >> "CfgBsoLoadouts" >> _faction);
_retLoadouts = [];
{
	_n = [[getText (_x >> "Name"),_x]];
	_retLoadouts append _n;
} foreach _loadouts;

_retLoadouts;