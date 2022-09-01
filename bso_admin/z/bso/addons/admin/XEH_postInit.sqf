#include "script_component.hpp"

if (isServer) then { 
    GVAR(zeusCenter) = createCenter sideLogic;
};

if (isNil QGVAR(zeus)) then {
    GVAR(zeus) = objNull;
};

if (missionNamespace getVariable [QGVAR(acrePerfectModel), false]) then {
    [{[1,0]}] call acre_api_fnc_setCustomSignalFunc;
};
