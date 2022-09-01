/*
		Author: Jsm

		Description:
			Checks to see if a faction config exists in the mission namespace

		Paramater(s):
			0: STRING - Faction to check

		Returns:
			BOOL
*/

_faction = _this select 0;

if (isClass (missionConfigFile >> "CfgBsoLoadouts" >> _faction)) then {
	true;
} else {
	false;
};