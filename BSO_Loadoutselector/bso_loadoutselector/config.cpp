////////////////////////////////////////////////////////////////////
//DeRap: BSO_Loadoutselector\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Thu Sep 01 21:24:12 2022 : 'file' last modified on Mon Apr 19 19:35:00 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BSOLoadoutSelector
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"BSOLoadouts"};
		author[] = {"Jsm"};
		authorURL = "http://beowulfso.com";
	};
};
class CfgFunctions
{
	class BSO
	{
		class BSO_LoadoutSelector
		{
			class showLoadoutSelector
			{
				file = "bso_loadoutselector\functions\fn_showLoadoutSelector.sqf";
			};
			class onBtnOkayClick
			{
				file = "bso_loadoutselector\functions\fn_onBtnOkayClick.sqf";
			};
			class makeLoadoutBox
			{
				file = "bso_loadoutselector\functions\fn_makeLoadoutBox.sqf";
			};
		};
	};
};
class BSO_LoadoutSelectorDialog
{
	class RscText
	{
		deletable = 0;
		fade = 0;
		colorBackground[] = {0,0,0,0};
		colorText[] = {1,1,1,1};
		colorShadow[] = {0,0,0,0.5};
		tooltipColorText[] = {1,1,1,1};
		tooltipColorBox[] = {1,1,1,1};
		tooltipColorShade[] = {0,0,0,0.65};
		access = 0;
		type = 0;
		idc = -1;
		text = "";
		fixedWidth = 0;
		x = 0;
		y = 0;
		h = 0.037;
		w = 0.3;
		style = 0;
		shadow = 1;
		font = "PuristaMedium";
		SizeEx = "(((1 / 1.2) / 20) * 0.9)";
		linespacing = 1;
	};
	class RscStructuredText
	{
		deletable = 0;
		fade = 0;
		access = 0;
		type = 13;
		idc = -1;
		style = 0;
		colorText[] = {1,1,1,1};
		class Attributes
		{
			font = "PuristaMedium";
			color = "#ffffff";
			align = "left";
			shadow = 1;
		};
		x = 0;
		y = 0;
		h = 0.035;
		w = 0.1;
		text = "";
		size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		shadow = 1;
	};
	class RscPicture
	{
		deletable = 0;
		fade = 0;
		colorBackground[] = {0,0,0,0};
		colorText[] = {1,1,1,1};
		tooltipColorText[] = {1,1,1,1};
		tooltipColorBox[] = {1,1,1,1};
		tooltipColorShade[] = {0,0,0,0.65};
		fixedWidth = 0;
		access = 0;
		type = 0;
		idc = -1;
		style = 48;
		font = "PuristaMedium";
		sizeEx = 0;
		lineSpacing = 0;
		text = "";
		shadow = 0;
		x = 0;
		y = 0;
		w = 0.2;
		h = 0.15;
	};
	class RscEdit
	{
		deletable = 0;
		fade = 0;
		access = 0;
		type = 2;
		x = 0;
		y = 0;
		h = 0.04;
		w = 0.2;
		colorBackground[] = {0,0,0,1};
		colorText[] = {0.95,0.95,0.95,1};
		colorDisabled[] = {1,1,1,0.25};
		colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
		autocomplete = "";
		text = "";
		size = 0.2;
		style = "0x00 + 0x40";
		font = "PuristaMedium";
		shadow = 2;
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		canModify = 1;
		tooltipColorText[] = {1,1,1,1};
		tooltipColorBox[] = {1,1,1,1};
		tooltipColorShade[] = {0,0,0,0.65};
	};
	class RscCombo
	{
		deletable = 0;
		fade = 0;
		access = 0;
		type = 4;
		colorSelect[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,1};
		colorScrollbar[] = {1,0,0,1};
		colorPicture[] = {1,1,1,1};
		colorPictureSelected[] = {1,1,1,1};
		colorPictureDisabled[] = {1,1,1,0.25};
		colorPictureRight[] = {1,1,1,1};
		colorPictureRightSelected[] = {1,1,1,1};
		colorPictureRightDisabled[] = {1,1,1,0.25};
		tooltipColorText[] = {1,1,1,1};
		tooltipColorBox[] = {1,1,1,1};
		tooltipColorShade[] = {0,0,0,0.65};
		soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
		soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
		soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
		maxHistoryDelay = 1;
		class ComboScrollBar
		{
			color[] = {1,1,1,1};
		};
		style = "0x10 + 0x200";
		font = "PuristaMedium";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		shadow = 0;
		x = 0;
		y = 0;
		w = 0.12;
		h = 0.035;
		colorSelectBackground[] = {1,1,1,0.7};
		arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
		arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
		wholeHeight = 0.45;
		colorActive[] = {1,0,0,1};
		colorDisabled[] = {1,1,1,0.25};
	};
	class RscListBox
	{
		deletable = 0;
		fade = 0;
		access = 0;
		type = 5;
		rowHeight = 0;
		colorText[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.25};
		colorScrollbar[] = {1,0,0,0};
		colorSelect[] = {0,0,0,1};
		colorSelect2[] = {0,0,0,1};
		colorSelectBackground[] = {0.95,0.95,0.95,1};
		colorSelectBackground2[] = {1,1,1,0.5};
		colorBackground[] = {0,0,0,0.3};
		soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
		autoScrollSpeed = -1;
		autoScrollDelay = 5;
		autoScrollRewind = 0;
		arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
		arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
		colorPicture[] = {1,1,1,1};
		colorPictureSelected[] = {1,1,1,1};
		colorPictureDisabled[] = {1,1,1,0.25};
		colorPictureRight[] = {1,1,1,1};
		colorPictureRightSelected[] = {1,1,1,1};
		colorPictureRightDisabled[] = {1,1,1,0.25};
		tooltipColorText[] = {1,1,1,1};
		tooltipColorBox[] = {1,1,1,1};
		tooltipColorShade[] = {0,0,0,0.65};
		class ListScrollBar
		{
			color[] = {1,1,1,1};
			autoScrollEnabled = 1;
		};
		x = 0;
		y = 0;
		w = 0.3;
		h = 0.3;
		style = 16;
		font = "PuristaMedium";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		shadow = 0;
		colorShadow[] = {0,0,0,0.5};
		period = 1.2;
		maxHistoryDelay = 1;
	};
	class RscButton
	{
		deletable = 0;
		fade = 0;
		access = 0;
		type = 1;
		text = "";
		colorText[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.25};
		colorBackground[] = {0,0,0,0.5};
		colorBackgroundDisabled[] = {0,0,0,0.5};
		colorBackgroundActive[] = {0,0,0,1};
		colorFocused[] = {0,0,0,1};
		colorShadow[] = {0,0,0,0};
		colorBorder[] = {0,0,0,1};
		soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
		soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
		soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
		soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
		style = 2;
		x = 0;
		y = 0;
		w = 0.095589;
		h = 0.039216;
		shadow = 2;
		font = "PuristaMedium";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		offsetX = 0;
		offsetY = 0;
		offsetPressedX = 0;
		offsetPressedY = 0;
		borderSize = 0;
	};
	class RscShortcutButton
	{
		deletable = 0;
		fade = 0;
		type = 16;
		x = 0.1;
		y = 0.1;
		class HitZone
		{
			left = 0;
			top = 0;
			right = 0;
			bottom = 0;
		};
		class ShortcutPos
		{
			left = 0;
			top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
			w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
			h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class TextPos
		{
			left = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
			top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
			right = 0.005;
			bottom = 0;
		};
		shortcuts[] = {};
		textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {1,1,1,1};
		colorFocused[] = {1,1,1,1};
		color2[] = {0.95,0.95,0.95,1};
		colorDisabled[] = {1,1,1,0.25};
		colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
		colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
		colorBackground2[] = {1,1,1,1};
		soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
		soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
		soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
		soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
		class Attributes
		{
			font = "PuristaMedium";
			color = "#E5E5E5";
			align = "left";
			shadow = "true";
		};
		idc = -1;
		style = 0;
		default = 0;
		shadow = 1;
		w = 0.183825;
		h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		textSecondary = "";
		colorSecondary[] = {1,1,1,1};
		colorFocusedSecondary[] = {1,1,1,1};
		color2Secondary[] = {0.95,0.95,0.95,1};
		colorDisabledSecondary[] = {1,1,1,0.25};
		sizeExSecondary = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		fontSecondary = "PuristaMedium";
		animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
		animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
		animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
		animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
		animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
		animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
		periodFocus = 1.2;
		periodOver = 0.8;
		period = 0.4;
		font = "PuristaMedium";
		size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		text = "";
		action = "";
		class AttributesImage
		{
			font = "PuristaMedium";
			color = "#E5E5E5";
			align = "left";
		};
	};
	class RscShortcutButtonMain
	{
		idc = -1;
		style = 0;
		default = 0;
		w = 0.313726;
		h = 0.104575;
		color[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.25};
		class HitZone
		{
			left = 0;
			top = 0;
			right = 0;
			bottom = 0;
		};
		class ShortcutPos
		{
			left = 0.0145;
			top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
			w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (3/4)";
			h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
		};
		class TextPos
		{
			left = "(((safezoneW / safezoneH) min 1.2) / 32) * 1.5";
			top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)*2 - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
			right = 0.005;
			bottom = 0;
		};
		animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
		animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\disabled_ca.paa";
		animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\over_ca.paa";
		animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\focus_ca.paa";
		animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\down_ca.paa";
		animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
		period = 0.5;
		font = "PuristaMedium";
		size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
		text = "";
		action = "";
		class Attributes
		{
			font = "PuristaMedium";
			color = "#E5E5E5";
			align = "left";
			shadow = "false";
		};
		class AttributesImage
		{
			font = "PuristaMedium";
			color = "#E5E5E5";
			align = "false";
		};
	};
	class RscFrame
	{
		type = 0;
		idc = -1;
		style = 64;
		shadow = 2;
		colorBackground[] = {0,0,0,0};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.02;
		text = "";
	};
	class RscSlider
	{
		deletable = 0;
		fade = 0;
		color[] = {1,1,1,0.8};
		colorActive[] = {1,1,1,1};
		access = 0;
		type = 3;
		style = 1024;
		w = 0.3;
		shadow = 0;
		h = 0.025;
	};
	class IGUIBack
	{
		colorText[] = {0,0,0,0};
		colorbackground[] = {0,0,0,1};
		type = 0;
		idc = 124;
		style = 128;
		text = "";
		font = "PuristaMedium";
		sizeEx = 0;
		shadow = 0;
		x = 0.1;
		y = 0.1;
		w = 0.1;
		h = 0.1;
	};
	class RscCheckBox
	{
		idc = -1;
		type = 77;
		style = 0;
		checked = 0;
		x = "0.375 * safezoneW + safezoneX";
		y = "0.36 * safezoneH + safezoneY";
		w = "0.025 * safezoneW";
		h = "0.04 * safezoneH";
		color[] = {1,1,1,0.7};
		colorFocused[] = {1,1,1,1};
		colorHover[] = {1,1,1,1};
		colorPressed[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.2};
		colorBackground[] = {0,0,0,0};
		colorBackgroundFocused[] = {0,0,0,0};
		colorBackgroundHover[] = {0,0,0,0};
		colorBackgroundPressed[] = {0,0,0,0};
		colorBackgroundDisabled[] = {0,0,0,0};
		textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
		textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
		textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
		textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
		textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
		textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
		texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
		texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
		textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
		textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
		tooltipColorText[] = {1,1,1,1};
		tooltipColorBox[] = {1,1,1,1};
		tooltipColorShade[] = {0,0,0,0.65};
		soundEnter[] = {"",0.1,1};
		soundPush[] = {"",0.1,1};
		soundClick[] = {"",0.1,1};
		soundEscape[] = {"",0.1,1};
	};
	class RscTextCheckBox
	{
		idc = -1;
		type = 7;
		style = 0;
		x = "0.375 * safezoneW + safezoneX";
		y = "0.36 * safezoneH + safezoneY";
		w = "0.025 * safezoneW";
		h = "0.04 * safezoneH";
		colorText[] = {1,0,0,1};
		color[] = {0,0,0,0};
		colorBackground[] = {0,0,1,1};
		colorTextSelect[] = {0,0.8,0,1};
		colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
		colorSelect[] = {0,0,0,1};
		colorTextDisable[] = {0.4,0.4,0.4,1};
		colorDisable[] = {0.4,0.4,0.4,1};
		tooltipColorText[] = {1,1,1,1};
		tooltipColorBox[] = {1,1,1,1};
		tooltipColorShade[] = {0,0,0,0.65};
		font = "PuristaMedium";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		rows = 1;
		columns = 1;
		strings[] = {"UNCHECKED"};
		checked_strings[] = {"CHECKED"};
	};
	class RscButtonMenu
	{
		idc = -1;
		type = 16;
		style = "0x02 + 0xC0";
		default = 0;
		shadow = 0;
		x = 0;
		y = 0;
		w = 0.095589;
		h = 0.039216;
		animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
		animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
		animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
		animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
		animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
		animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
		colorBackground[] = {0,0,0,0.8};
		colorBackgroundFocused[] = {1,1,1,1};
		colorBackground2[] = {0.75,0.75,0.75,1};
		color[] = {1,1,1,1};
		colorFocused[] = {0,0,0,1};
		color2[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.25};
		textSecondary = "";
		colorSecondary[] = {1,1,1,1};
		colorFocusedSecondary[] = {0,0,0,1};
		color2Secondary[] = {0,0,0,1};
		colorDisabledSecondary[] = {1,1,1,0.25};
		sizeExSecondary = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		fontSecondary = "PuristaLight";
		period = 1.2;
		periodFocus = 1.2;
		periodOver = 1.2;
		size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		tooltipColorText[] = {1,1,1,1};
		tooltipColorBox[] = {1,1,1,1};
		tooltipColorShade[] = {0,0,0,0.65};
		class TextPos
		{
			left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
			top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
			right = 0.005;
			bottom = 0;
		};
		class Attributes
		{
			font = "PuristaLight";
			color = "#E5E5E5";
			align = "left";
			shadow = "false";
		};
		class ShortcutPos
		{
			left = "(6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
			top = 0.005;
			w = 0.0225;
			h = 0.03;
		};
		soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
		soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
		soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
		soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	};
	class RscButtonMenuOK
	{
		shortcuts[] = {"0x00050000 + 0",28,57,156};
		soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",0.09,1};
		idc = 1;
		color2[] = {0,0,0,1};
		color[] = {1,1,1,1};
		colorBackground2[] = {0.75,0.75,0.75,1};
		colorBackground[] = {0,0,0,0.8};
		colorBackgroundFocused[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.25};
		colorFocused[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
		default = 1;
		text = "OK";
	};
	class RscButtonMenuCancel
	{
		shortcuts[] = {"0x00050000 + 1"};
		idc = 2;
		color2[] = {0,0,0,1};
		color[] = {1,1,1,1};
		colorBackground2[] = {0.75,0.75,0.75,1};
		colorBackground[] = {0,0,0,0.8};
		colorBackgroundFocused[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.25};
		colorFocused[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
		default = 0;
		text = "Cancel";
	};
	class RscControlsGroup
	{
		deletable = 0;
		fade = 0;
		class VScrollbar
		{
			color[] = {1,1,1,1};
			width = 0.021;
			autoScrollEnabled = 1;
		};
		class HScrollbar
		{
			color[] = {1,1,1,1};
			height = 0.028;
		};
		class Controls{};
		type = 15;
		idc = -1;
		x = 0;
		y = 0;
		w = 1;
		h = 1;
		shadow = 0;
		style = 16;
	};
	idd = 45465;
	movingEnable = 0;
	class controls
	{
		class frame: RscFrame
		{
			idc = 454654;
			x = "1.5 * (0.025)+ (0)";
			y = "5.5 * (0.04)+ (0)";
			w = "37 * (0.025)";
			h = "5 * (0.04)";
			colorBackground[] = {255,0,0,255};
			colorActive[] = {255,0,0,255};
		};
		class text: RscText
		{
			idc = 454651;
			text = "Select a loadout...";
			x = "8 * (0.025)+ (0)";
			y = "5.5 * (0.04)+ (0)";
			w = "23 * (0.025)";
			h = "2.5 * (0.04)";
		};
		class btnOk: RscButton
		{
			idc = 454652;
			action = "call BSO_fnc_onBtnOkayClick";
			text = "Load Loadout";
			x = "32.5 * (0.025)+ (0)";
			y = "9 * (0.04)+ (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class btnCancel: RscButton
		{
			idc = 454653;
			action = "closeDialog 0";
			text = "Cancel";
			x = "2 * (0.025)+ (0)";
			y = "9 * (0.04)+ (0)";
			w = "4 * (0.025)";
			h = "1 * (0.04)";
		};
		class comboLoadouts: RscCombo
		{
			idc = 454655;
			x = "2 * (0.025)+ (0)";
			y = "7.5 * (0.04)+ (0)";
			w = "36 * (0.025)";
			h = "1 * (0.04)";
		};
		class txtRespawn: RscText
		{
			idc = "IDC_BSO_LOADOUTSELECTORDIALOG_TXTRESPAWN";
			text = "Respawn with this loadout?";
			x = "8.5 * (0.025)+ (0)";
			y = "8.9 * (0.04)+ (0)";
			w = "13 * (0.025)";
			h = "1 * (0.04)";
		};
		class chkRespawn: RscCheckbox
		{
			idc = 454656;
			x = "21.3 * (0.025)+ (0)";
			y = "9 * (0.04)+ (0)";
			w = "1 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};
