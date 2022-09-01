#include "script_component.hpp"

params ["_title", "_code", ["_condition", {true}]];

GVAR(adminActions) pushBack _this;
