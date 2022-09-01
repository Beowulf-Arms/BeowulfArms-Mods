/*
		Author: Jsm

		Description:
			Gets which (if any) radio mod is being used.

		Paramater(s):

		Returns:
			STRING
*/

_return = "NONE";

if (isClass (configFile >> "CfgPatches" >> "acre_main")) then {
	_return = "ACRE";
};

if (isClass (configFile >> "CfgPatches" >> "task_force_radio")) then {
	_return = "TFAR";
}; 

_return