#include "script_component.hpp"

params ["_side"];

private _respawnTemplates = getMissionConfigValue "respawnTemplates";
private _sideTemplates = getMissionConfigValue ("respawnTemplates" + str _side);    //check side specific templates as well
if ((!isNil "_sideTemplates") && {(count _sideTemplates) > 0}) then {_respawnTemplates = _sideTemplates};
if ((isNil "_respawnTemplates") || {(typeName []) != (typeName _respawnTemplates)}) then {_respawnTemplates = []};

if !("BSO_Respawn_System" in _respawnTemplates) exitWith { false };

if (count _respawnTemplates == 2 && "MenuPosition" in _respawnTemplates) exitWith { true };

["BSO_Respawn_System: respawnTemplates (%1) is invalid.", _side] call EFUNC(main,error);

false
