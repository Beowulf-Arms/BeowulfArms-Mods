#define _ARMA_

class CfgPatches
{
	class beo_bmf
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		version = "1.0";
		requiredVersion = "1.0";
		author = "Walker";
	};
};



class CfgFunctions
{
	class bmf
	{
		class AIairStrike
		{
			file = "beo_bmf\fnc\AI Air Strike";
			class AIairStrike {};
		};

		class AIairSupport
		{
			file = "beo_bmf\fnc\AI Air Support";
			class AIairSupport {};
		};

		class AIartyStrike
		{
			file = "beo_bmf\fnc\AI Artillery Strike";
			class AIartyStrike {};
		};

		class AIboatInsert
		{
			file = "beo_bmf\fnc\AI Boat Insert";
			class AIboatInsert {};
		};

		class AIboatSupport
		{
			file = "beo_bmf\fnc\AI Boat Support";
			class AIboatSupport {};
		};

		class AIheloInsert
		{
			file = "beo_bmf\fnc\AI Helo Insert";
			class AIheloInsert {};
			class AIheloInsertAtk {};
		};

		class AIparaInsert
		{
			file = "beo_bmf\fnc\AI Para Insert";
			class AIparaInsert {};
		};

		class AIParaflare
		{
			file = "beo_bmf\fnc\AI Paraflare";
			class AIParaflare {};
		};

		class paradrop
		{
			file = "beo_bmf\fnc\Para Insert";
			class paradrop {};
		};
	};
};