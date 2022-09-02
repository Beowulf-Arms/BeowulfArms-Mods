#define _ARMA_

class CfgPatches
{
	class beo_rules_ui
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CBA_main"};
		versionDesc = "beo_rules_ui";
		author = "Walker";
		authorUrl = "https://beowulf-arms.com";
	};
};
class CfgSettings
{
	class CBA
	{
		class Versioning
		{
			class beo_rules_ui{};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class beo_rules_ui
	{
		clientInit = "call ('beo_rules\XEH_postClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};
