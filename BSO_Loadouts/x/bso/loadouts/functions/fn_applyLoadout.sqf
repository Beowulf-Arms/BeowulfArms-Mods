/*
		Author: Jsm

		Description:
			Applies a loadout to a unit

		Paramater(s):
			0: UNIT - Unit to apply loadout to
			1: STRING - Loadout Faction Classname
			2: STRING - Loadout Classname
			3: BOOL - Respawn with this loadout
			4: BOOL - Spawn with backpack (default true)

		Returns:
			NOTHING
*/

params [["_unit", objNull],["_faction",""],["_loadout",""],["_respawn",false],["_backpack",true]];

if !(local _unit) exitWith {};

if (_respawn) then {
    // TODO: make it an always active EventHandler, and just set a variable with the loadout the unit should spawn with?

    private _handlerId = _unit getVariable ["bso_loadout_respawnHandlerId", -1];
    if (_handlerId >= 0) then {
        _unit removeMPEventHandler ["MPRespawn", _handlerId];
    };

    // _respawn is set to false as we don't need to re-apply the same handler over and over
    private _codeStr = format ["[_this select 0,""%1"",""%2"",false,%3] call BSO_fnc_applyLoadout;",_faction,_loadout,_backpack];
    [{
        params ["_unit", "_codeStr"];
        private _handlerId = _unit addMPEventHandler ["MPRespawn", _codeStr];
        _unit setVariable ["bso_loadout_respawnHandlerId", _handlerId, true];
    }, [_unit, _codeStr]] call CBA_fnc_execNextFrame; // Not sure this is needed. but looked like it was re-run instantly, if it was applied right away
};

[_unit,_faction,_loadout,_backpack] call BSO_fnc_doApplyLoadout;
