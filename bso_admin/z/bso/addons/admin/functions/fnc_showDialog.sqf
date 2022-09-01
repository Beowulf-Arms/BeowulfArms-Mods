#include "script_component.hpp"

[{
    findDisplay 46 createDisplay "RscBsoAdminDialog";
    call FUNC(refreshDialog);
}] call CBA_fnc_execNextFrame;
