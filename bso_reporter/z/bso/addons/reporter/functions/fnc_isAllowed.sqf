#include "script_component.hpp"

if (isServer) exitWith { true };
private _players = missionNamespace getVariable [QEGVAR(reporter_server,enabled_players), []];

(getPlayerUID player) in _players
