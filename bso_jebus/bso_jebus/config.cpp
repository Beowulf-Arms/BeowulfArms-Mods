class CfgPatches
{
	class bso_jebus
	{
		units[] = {"bso_jebus"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F"};
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class bso_missionmaking: NO_CATEGORY
	{
		displayName = "Mission Making";
		priority = 10;
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Edit; // Default edit box (i.e., text input field)
			class Checkbox; // Default checkbox (returned value is Bool)
			class ModuleDescription; // Module description
		};
		// Description base classes, for more information see below
		class ModuleDescription
		{
			class AnyPerson;
            class EmptyDetector;
		};
	};
	class bso_jebus: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Jebus spawn"; // Name displayed in the menu
		icon = "\bso_jebus\data\bso_wizard.paa"; // Map icon. Delete this entry to use the default icon
		//category = "Mission Making";
        category = "bso_missionmaking";

		// Name of function triggered once conditions are met
		function = "bso_jb_fnc_moduleJebus";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 0;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 1;
		// // 1 to run init function in Eden Editor as well
		is3DEN = 0;

		// Menu displayed when the module is placed or double-clicked on by Zeus
		curatorInfoType = "RscDisplayAttributeModuleJebus"; // ??


		// Module attributes, uses https://community.bistudio.com/wiki/Eden_Editor:_Configuring_Attributes#Entity_Specific
		class Attributes: AttributesBase
		{
			class Lives: Edit
  			{
				displayName = "Lives";
				tooltip = "Number of times group should respawn. Integer or array [minLives, maxLives]. -1 for infinite.";
				// Default text filled in the input box
				defaultValue = "'1'";
				property = "bso_jebus_lives";
			};
			class Delay: Edit
  			{
				displayName = "Delay";
				tooltip = "Delay in seconds before respawning. Number or array [minTime, maxTime].";
				// Default text filled in the input box
				defaultValue = "'30'";
				property = "bso_jebus_delay";
			};
			class Cache: Edit
  			{
				displayName = "Cache";
				tooltip = "Group will cache until players are within X metres. Empty for no caching";
				// Default text filled in the input box
				defaultValue = "''";
				property = "bso_jebus_cache";
			};
			class Reduce: Edit
  			{
				displayName = "Reduce";
				tooltip = " Group will cache until players are within X metres. Empty for no reducing ";
				// Default text filled in the input box
				defaultValue = "''";
				property = "bso_jebus_reduce";
			};
			class Start: Edit
  			{
				displayName = "Start";
				tooltip = "Initial spawning delay. Delays trigger based spawns as well.";
				// Default text filled in the input box
				defaultValue = "'0'";
				property = "bso_jebus_start";
			};
            class Flying: Checkbox
            {
                displayName = "Flying";
                tooltip = "Air vehicles will spawn already flying.";
                defaultValue = "false";
				property = "bso_jebus_flying";
            };
			class Respawnmarkers: Edit
  			{
				displayName = "Respawnmarkers";
				tooltip = "Array of alternate respawn positions.";
				// Default text filled in the input box
				defaultValue = "'[]'";
				property = "bso_jebus_respawnmarkers";
			};
			class Pause: Edit
  			{
				displayName = "Pause";
				tooltip = "Radius in which enemies will pause the spawner.";
				// Default text filled in the input box
				defaultValue = "'200'";
				property = "bso_jebus_pause";
			};
			class Exit: Edit
  			{
				displayName = "Exit";
				tooltip = "Name of exit trigger. Group will not respawn again once trigger is activated.";
				// Default text filled in the input box
				defaultValue = "''";
				property = "bso_jebus_exit";
			};
			class Init: Edit
  			{
				displayName = "Init";
				tooltip = " Init string to run upon spawning. (Use ""_proxyThis"" where you would usually use ""this"" in a script or function call).";
				// Default text filled in the input box
				defaultValue = "''";
				property = "bso_jebus_init";
			};
			class Debug: Checkbox
            {
                displayName = "Debug";
                tooltip = "Will provide debugging information.";
                defaultValue = "false";
				property = "bso_jebus_debug";
            };
			class ModuleDescription: ModuleDescription{}; // Module description should be shown last
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "Sync this module to group leaders to apply jebus spawning to them. Sync a trigger to this module for trigger based spawning. Supported modules that are synced to leaders will be executed after spawn. Supported: CBA Defend."; // Short description, will be formatted as structured text
			sync[] = {"AnyPerson", "EmptyDetector"}; // Array of synced entities (can contain base classes)
		};
	};
};

class CfgFunctions
{
	class bso_jb
	{
		class missionMaking
		{
			file = "\bso_jebus\functions";
			class moduleJebus{};
			class modulesToCode{};
			class error{};
		};
	};
};
