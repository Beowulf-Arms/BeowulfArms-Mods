#include "\z\bso\addons\admin\script_component.hpp"
#include "idcs.hpp"

#define GUI_GRID_X    (0)
#define GUI_GRID_Y    (0)
#define GUI_GRID_W    (0.025)
#define GUI_GRID_H    (0.04)
#define GUI_GRID_WAbs    (1)
#define GUI_GRID_HAbs    (1)


class RscBsoAdminDialog {
    #include "RscTitles.hpp"
    idd = IDC_BSO_ADMIN_DIALOG;
    movingEnable = 0;
    class controls {
        class frame: RscFrame {
            idc = -1;

            type = CT_STATIC;
            style = 64;
            x = 1.5 * GUI_GRID_W + GUI_GRID_X;
            y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 37 * GUI_GRID_W;
            h = 17 * GUI_GRID_H;
            colorBackground[] = {128,0,0,128};
            colorActive[] = {128,0,0,128};
        };
        class background {
            idc = -1;
            type = 0;
            text = "";
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.5};
            style = 128;
            font = "puristaMedium";
            sizeEx = 0;
            shadow = 0;
            x = 1.5 * GUI_GRID_W + GUI_GRID_X;
            y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 37 * GUI_GRID_W;
            h = 17 * GUI_GRID_H;
            colorActive[] = {128,0,0,128};
        };
        class text: RscText {
            idc = -1;

            text = "PLAYERS";
            x = 2 * GUI_GRID_W + GUI_GRID_X;
            y = 0.25 * GUI_GRID_H + GUI_GRID_Y;
            w = 12 * GUI_GRID_W;
            h = 2.5 * GUI_GRID_H;
        };
        class btnCancel: RscButton {
            action = QUOTE(findDisplay IDC_BSO_ADMIN_DIALOG closeDisplay 0);

            idc = -1;

            text = "X";
            x = 37 * GUI_GRID_W + GUI_GRID_X;
            y = 1 * GUI_GRID_H + GUI_GRID_Y;
            w = 1 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };
        class playerList: RscListBox {
            idc = IDC_BSO_ADMIN_PLAYER_LIST;

            x = 2 * GUI_GRID_W + GUI_GRID_X;
            y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 17 * GUI_GRID_W;
            h = 14 * GUI_GRID_H;

            onLBSelChanged = QUOTE(call FUNC(selChanged));

            class ScrollBar;
            class ListScrollBar : ScrollBar //ListScrollBar is class name required for Arma 3
            {
                color[] = {1,1,1,0.6};
                colorActive[] = {1,1,1,1};
                colorDisabled[] = {1,1,1,0.3};
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                shadow = 0;
            };
        };
        class statusText: RscStructuredText {
            idc = IDC_BSO_ADMIN_TXT_STATUS;

            text = "Status: Lots of text and whatnot";
            x = 19.5 * GUI_GRID_W + GUI_GRID_X;
            y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 16 * GUI_GRID_W;
            h = 2.5 * GUI_GRID_H;
        };
        class btnTPhere: RscButton {
            action = "call bso_admin_fnc_tpHere";
            
            idc = IDC_BSO_ADMIN_BTN_TP;

            text = "Teleport here";
            x = 20 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 16 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };
        class btnTPjip: RscButton {
            action = QUOTE(call FUNC(tpJip));
            
            idc = IDC_BSO_ADMIN_BTN_JIP;

            text = "Teleport to leader";
            x = 20 * GUI_GRID_W + GUI_GRID_X;
            y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 16 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };
        class btnHeal: RscButton {
            action = QUOTE(call FUNC(heal));
            
            idc = IDC_BSO_ADMIN_BTN_HEAL;

            text = "Heal";
            x = 20 * GUI_GRID_W + GUI_GRID_X;
            y = 7 * GUI_GRID_H + GUI_GRID_Y;
            w = 16 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };
        class btnTPTo: RscButton {
            action = QUOTE(call FUNC(tpTo));
            
            idc = IDC_BSO_ADMIN_BTN_TP_TO;

            text = "Teleport to player";
            x = 20 * GUI_GRID_W + GUI_GRID_X;
            y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 16 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };
        class btnRefresh: RscButton {
            action = QUOTE(call FUNC(refreshDialog));
            
            idc = -1;

            text = "Refresh";
            x = 13 * GUI_GRID_W + GUI_GRID_X;
            y = 1 * GUI_GRID_H + GUI_GRID_Y;
            w = 6 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };
    };
};
