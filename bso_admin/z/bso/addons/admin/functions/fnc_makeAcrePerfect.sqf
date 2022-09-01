#include "script_component.hpp"

params ["_activate"];

if (_activate) then {
    [{[1,0]}] remoteExec ["acre_api_fnc_setCustomSignalFunc"];
} else {
    [{}] remoteExec ["acre_api_fnc_setCustomSignalFunc"];
};

GVAR(acrePerfectModel) = _activate;
publicVariable QGVAR(acrePerfectModel);
