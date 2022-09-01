#include "\z\bso\addons\arsenal_export\script_component.hpp"
#include "defines.hpp"

class ctrlButton;
class GVAR(buttonExport): ctrlButton {
    colorBackground[] = {0,0,0,0.8};
    x = QUOTE(3 * WIDTH_GAP + 2 * WIDTH_SINGLE);
    y = QUOTE(9 * GRID_H);
    w = QUOTE(WIDTH_SINGLE);
    h = QUOTE(7 * GRID_H);
    sizeEx = QUOTE(5 * GRID_H);
    text = "BSO Export";
    tooltip = "Export current loadout in BSO format";
    onButtonClick = QUOTE([ARR_2(ctrlParent (_this select 0),ace_arsenal_center)] call FUNC(export));
};
