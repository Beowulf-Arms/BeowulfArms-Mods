#include "script_component.hpp"

if (getNumber (missionConfigFile >> "respawnOnStart") != -1) exitWith {}; // that's WRONG

if (isServer) then {
    GVAR(ranOutSides) = [];
    GVAR(activeSpawnPoints) = []; // strings
    GVAR(activeSpawnPointsData) = []; // format [[target, name, bisId]] . target is side or object
    publicVariable QGVAR(activeSpawnPoints);
    publicVariable QGVAR(activeSpawnPointsData);
};
