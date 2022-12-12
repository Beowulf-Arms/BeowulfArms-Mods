params ["_vehicle", "_interval", "_memory_point", "_offset"];

[_vehicle, _interval, _memory_point, _offset] spawn {
    params ["_vehicle", "_interval", "_memory_point", "_offset"];
    {
        [_vehicle, _x, _memory_point, _offset] remoteExec ["dega_fnc_deploy", _x];
        sleep _interval;
    } forEach ([_vehicle] call DEGA_fnc_getHookedUnits);
    hint "Drop complete!";
};
