#include "script_component.hpp"

if (missionNamespace getVariable [QGVAR(debugEnabled), false]) then { // cba setting
    private _text = param [0, ""];
    private _args = _this select [1, count _this - 1];
    private _name = if (isServer) then { "Server" } else { profileName };
    _text = format ["Error on %1: %2", _name, _text];
    [{!isNull findDisplay 46}, {
        _this call BIS_fnc_error;
        diag_log format _this;
    }, [_text] + _args] remoteExec ["CBA_fnc_waitUntilAndExecute"];
} else {
    [{!isNull findDisplay 46}, {
        _this call BIS_fnc_error;
        diag_log format _this;
    }, _this] call CBA_fnc_waitUntilAndExecute;
};

