////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.01
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class beo_arty : config.bin{
class CfgPatches
{
	class beo_rokit
	{
		units[] = {
			"beo_arty_rokit",
			"beo_arty_rokit_opf",
			"beo_arty_rokit_ind",
			"beo_arty_rokit_cluster",
			"beo_arty_rokit_cluster_opf",
			"beo_arty_rokit_cluster_ind",
			"beo_arty_hilux_arty",
			"beo_arty_hilux_arty_opf",
			"beo_arty_hilux_arty_ind",
			"beo_arty_hilux_arty_cluster",
			"beo_arty_hilux_arty_cluster_opf",
			"beo_arty_hilux_arty_cluster_ind"
			
			
			};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Weapons_F_Exp","ace_csw","beo_wps","beo_ai","uk3cb_factions_vehicles_hilux"};
		version = "1.1";
		requiredVersion = "1.1";
		author = "Walker";
	};
};



class beo_artyRocket_black
{
	class Light1
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "light";
		type = "RocketLight";
	};
	class beo_artyRocket_black
	{
		simulation = "particles";
		type = "beo_artyRocket_black";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 120;
	};
};
class cfgCloudlets
{
	class Missile5;
	class beo_artyRocket_black: Missile5
	{
		color[] = {{0.01,0.01,0.01,0.8},{0.05,0.05,0.05,0.4},{0.1,0.1,0.1,0}};
		colorVar[] = {0, 0, 0, 0};
	};
};

class CfgVehicles
{
	class StaticMortar;
	
// A3 Mk6	
//	class Mortar_01_base_F: StaticMortar
//	{
//		class Turrets;
//	};
	class Mortar_01_base_F;
	class B_Mortar_01_F: Mortar_01_base_F
	{
		class Turrets;
		class MainTurret;
	};
	
// Rocket Arty
	class beo_arty_rokit: B_Mortar_01_F
	{
		scope = 2;		
		displayname = "[BEO AI] ROKIT Artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		hiddenSelectionsTextures[] = {"\beo_rokit\data\rokit_mk6.paa"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag_122_he","beo_arty_mag_122_he","beo_arty_mag_122_he","beo_arty_mag_122_he","beo_arty_mag_122_he","beo_arty_mag_122_he","beo_arty_mag_122_he","beo_arty_mag_122_he","beo_arty_mag_122_he","beo_arty_mag_122_he","beo_arty_mag_122_he","beo_arty_mag_122_he"};
				weapons[] = {"beo_arty_rokit"};
			};
		};	

		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"beo_rokit_bag",
				"beo_rokit_bipod_bag"
			};
			displayName="";
		};	
		class ACE_CSW 
		{
			enabled = 1; // Enables ACE CSW for this weapon              
			proxyWeapon = "beo_arty_rokit_proxy"; // The proxy weapon created above
			magazineLocation="_target selectionPosition 'usti hlavne'"; // Ammo handling interaction point location
			disassembleWeapon = "beo_arty_rokit_carry";  // Carryable weapon created above
			disassembleTurret = "ace_csw_mortarBaseplate";  // Which static tripod will appear when weapon is disassembled
			ammoLoadTime = 7;   // How long it takes in seconds to load ammo into the weapon           
			ammoUnloadTime = 5; // How long it takes in seconds to unload ammo from the weapon
			desiredAmmo = 1;  // When the weapon is reloaded it will try and reload to this ammo capacity
			// Optional callback function for when the CSW gets disassembled, called with [tripod, staticWeapon]
			disassembleFunc = "prefix_fnc_handleDisassembly";
		};
	};	
	
	class beo_arty_rokit_opf: beo_arty_rokit
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_rokit_ind: beo_arty_rokit
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};


	class beo_arty_rokit_test: beo_arty_rokit
	{
		displayname = "[BEO AI] ROKIT Artillery TEST";
		model = "\beo_rokit\data\quassimLaunchertri.p3d";
		hiddenSelectionsTextures[] = {};
		
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag_122_he_test","beo_arty_mag_122_he_test","beo_arty_mag_122_he_test","beo_arty_mag_122_he_test","beo_arty_mag_122_he_test","beo_arty_mag_122_he_test"};
				weapons[] = {"beo_arty_rokit"};
			};
		};	
	};







	class beo_arty_rokit_he: beo_arty_rokit
	{
		//Hidden to depreciate
		scope = 1;		
		displayname = "[BEO AI] ROKIT Artillery (HE)";
		hiddenSelectionsTextures[] = {"\beo_rokit\data\rokit_mk6.paa"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_he","beo_arty_mag12_122_he"};
				weapons[] = {"beo_arty_rokit"};
			};
		};	
	};	
	
	class beo_arty_rokit_he_opf: beo_arty_rokit_he
	{
		scope = 1;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_rokit_he_ind: beo_arty_rokit_he
	{
		scope = 1;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};


	class beo_arty_rokit_cluster: beo_arty_rokit
	{
		scope = 2;		
		displayname = "[BEO AI] ROKIT Artillery (Cluster)";
		hiddenSelectionsTextures[] = {"\beo_rokit\data\rokit_mk6.paa"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag_122_cluster","beo_arty_mag_122_cluster","beo_arty_mag_122_cluster","beo_arty_mag_122_cluster","beo_arty_mag_122_cluster","beo_arty_mag_122_cluster","beo_arty_mag_122_cluster","beo_arty_mag_122_cluster","beo_arty_mag_122_cluster","beo_arty_mag_122_cluster","beo_arty_mag_122_cluster","beo_arty_mag_122_cluster"};
				weapons[] = {"beo_arty_rokit"};
			};
		};	

		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"beo_rokit_cluster_bag",
				"beo_rokit_bipod_bag"
			};
			displayName="";
		};	
	};	
	
	class beo_arty_rokit_cluster_opf: beo_arty_rokit_cluster
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_rokit_cluster_ind: beo_arty_rokit_cluster
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};





	class beo_arty_rokit_mlrs: beo_arty_rokit
	{
		scope = 2;		
		displayname = "[BEO AI] ROKIT MLRS";
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he"};
				weapons[] = {"beo_arty_rokit_mlrs"};
			};
		};	

		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"beo_rokit_mlrs_bag",
				"beo_rokit_bipod_bag"
			};
			displayName="";
		};	
		class ACE_CSW 
		{
			enabled = 1; // Enables ACE CSW for this weapon              
			proxyWeapon = "beo_arty_rokit_mlrs_proxy"; // The proxy weapon created above
			magazineLocation="_target selectionPosition 'usti hlavne'"; // Ammo handling interaction point location
			disassembleWeapon = "beo_arty_rokit_mlrs_carry";  // Carryable weapon created above
			disassembleTurret = "ace_csw_mortarBaseplate";  // Which static tripod will appear when weapon is disassembled
			ammoLoadTime = 12;   // How long it takes in seconds to load ammo into the weapon           
			ammoUnloadTime = 10; // How long it takes in seconds to unload ammo from the weapon
			desiredAmmo = 10;  // When the weapon is reloaded it will try and reload to this ammo capacity
			// Optional callback function for when the CSW gets disassembled, called with [tripod, staticWeapon]
			disassembleFunc = "prefix_fnc_handleDisassembly";
		};
	};	
	
	class beo_arty_rokit_mlrs_opf: beo_arty_rokit_mlrs
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_rokit_mlrs_ind: beo_arty_rokit_mlrs
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};



	// ROKIT Backpacks

	class B_Mortar_01_weapon_F;
	class I_Mortar_01_weapon_F: B_Mortar_01_weapon_F
	{
		class assembleInfo;
	};
	class B_Mortar_01_support_F;
	class I_Mortar_01_support_F: B_Mortar_01_support_F
	{
		class assembleInfo;
	};	

	class beo_rokit_bag: I_Mortar_01_weapon_F
	{
        scope = 2;
		author = "Walker";
		displayName = "ROKIT Launcher Bag";
		mass = 150;
		class assembleInfo: assembleInfo
		{
			displayName = "ROKIT Launcher";
			assembleTo = "beo_arty_rokit";
			base[] = {"beo_rokit_bipod_bag"};
		};
		faction = "BLU_F";
		editorSubcategory = "EdSubcat_DismantledWeapons";
	};

	class beo_rokit_cluster_bag: I_Mortar_01_weapon_F
	{
        scope = 2;
		author = "Walker";
		displayName = "ROKIT Launcher (Cluster) Bag";
		mass = 150;
		class assembleInfo: assembleInfo
		{
			displayName = "ROKIT (Cluster) Launcher";
			assembleTo = "beo_arty_rokit_cluster";
			base[] = {"beo_rokit_bipod_bag"};
		};
		faction = "BLU_F";
		editorSubcategory = "EdSubcat_DismantledWeapons";
	};

	class beo_rokit_mlrs_bag: I_Mortar_01_weapon_F
	{
        scope = 2;
		author = "Walker";
		displayName = "ROKIT MLRS Bag";
		mass = 150;
		class assembleInfo: assembleInfo
		{
			displayName = "ROKIT MLRS";
			assembleTo = "beo_arty_rokit_mlrs";
			base[] = {"beo_rokit_bipod_bag"};
		};
		faction = "BLU_F";
		editorSubcategory = "EdSubcat_DismantledWeapons";
	};

	class beo_rokit_bipod_bag: I_Mortar_01_support_F
	{
		scope = 2;
		mass = 120;
		author = "Walker";
		displayName = "ROKIT Bipod Bag";
		faction = "BLU_F";
		class assembleInfo: assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
	};





	class UK3CB_I_G_Hilux_Rocket_Arty;
	class UK3CB_TKM_I_Hilux_Rocket_Arty: UK3CB_I_G_Hilux_Rocket_Arty
	{
		class Turrets;
		class MainTurret;			
	};
	class beo_arty_hilux_arty: UK3CB_TKM_I_Hilux_Rocket_Arty
	{	
		scope = 2;
		side = 1;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		faction="beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		displayName = "[BEO AI] Hilux ROKIT MLRS";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode= 3; //how to elevate
				weapons[] = {"beo_arty_rokit_mlrs"};
				magazines[] = {"beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster"};
			};
		};	
	};
	
	
	class beo_arty_hilux_arty_opf: beo_arty_hilux_arty
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_hilux_arty_ind: beo_arty_hilux_arty
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};




	class beo_arty_hilux_arty_he: UK3CB_TKM_I_Hilux_Rocket_Arty
	{	
		//hidden as depreciated
		scope = 1;
		side = 1;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		faction="beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		displayName = "[BEO AI] Hilux ROKIT MLRS (HE)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode= 3; //how to elevate
				weapons[] = {"beo_arty_rokit_mlrs"};
				magazines[] = {"beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he","beo_arty_mag10_122_he"};
			};
		};	
	};
	
	
	class beo_arty_hilux_arty_he_opf: beo_arty_hilux_arty_he
	{
		scope = 1;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_hilux_arty_he_ind: beo_arty_hilux_arty_he
	{
		scope = 1;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};





	class beo_arty_hilux_arty_cluster: UK3CB_TKM_I_Hilux_Rocket_Arty
	{	
		scope = 2;
		side = 1;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		faction="beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		displayName = "[BEO AI] Hilux ROKIT MLRS (Cluster)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode= 3; //how to elevate
				weapons[] = {"beo_arty_rokit_mlrs"};
				magazines[] = {"beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster","beo_arty_mag10_122_cluster"};
			};
		};	
	};
	
	
	class beo_arty_hilux_arty_cluster_opf: beo_arty_hilux_arty_cluster
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_hilux_arty_cluster_ind: beo_arty_hilux_arty_cluster
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};
	
	
};

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;

class CfgWeapons
{

	
// Rocket arty
	class RocketPods;
	class rockets_230mm_GAT: RocketPods
	{
		class Close;
		class Medium;
		class Far;
		class Full;
	};
	
	class beo_arty_rokit: rockets_230mm_GAT
	{
		displayName="ROKIT Launcher";
		class Close: Close
		{
			displayName = "Close";
			minrangeprobab = 1;
			minrange = 350;
			midrangeprobab = 1;
			midrange = 675;
			maxrangeprobab = 1;
			maxrange = 1000;
			artilleryDispersion = 5;
			reloadTime = 10;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
			artilleryCharge = 0.25;
		};
		class Medium: Medium
		{
			artilleryDispersion = 5;
			minrangeprobab = 0.2;
			minrange = 1000;
			midrangeprobab = 0.2;
			midrange = 1230;
			maxrangeprobab = 0.2;
			maxrange = 1460;
			reloadTime = 10;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
			artilleryCharge = 0.30;
		};
		class Far: Far
		{
			artilleryDispersion = 10;
			minrangeprobab = 0.1;
			minrange = 1460;
			midrangeprobab = 0.1;
			midrange = 2030;
			maxrangeprobab = 0.1;
			maxrange = 2600;
			reloadTime = 10;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
			artilleryCharge = 0.40;
		};
		class VeryFar: Far
		{
			displayName = "Very Far";
			artilleryDispersion = 15;
			minrangeprobab = 0.1;
			minrange = 2600;
			midrangeprobab = 0.1;
			midrange = 3325;
			maxrangeprobab = 0.1;
			maxrange = 4050;
			reloadTime = 10;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
			artilleryCharge = 0.50;
		};
		class TooClose: Close
		{
			displayName = "Too Close";
			artilleryCharge = 0.15;
			minrangeprobab = 1;
			minrange = 100;
			midrangeprobab = 1;
			midrange = 200;
			maxrangeprobab = 1;
			maxrange = 360;
			artilleryDispersion = 5;
			reloadTime = 10;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 0;
		};
		modes[] = {
			"TooClose",
			"Close",
			"Medium",
			"Far",
			"VeryFar"
		};
		magazines[] = {
			"beo_arty_mag_122_he",
			"beo_arty_mag_122_cluster"
		};
	};
	
	class beo_arty_rokit_mlrs: beo_arty_rokit
	{
		magazineReloadTime = 180;
		class Close: Close
		{
			displayName = "Close";
			minrangeprobab = 1;
			minrange = 350;
			midrangeprobab = 1;
			midrange = 675;
			maxrangeprobab = 1;
			maxrange = 1000;
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
			artilleryCharge = 0.25;
		};
		class Medium: Medium
		{
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			minrangeprobab = 0.2;
			minrange = 1000;
			midrangeprobab = 0.2;
			midrange = 1230;
			maxrangeprobab = 0.2;
			maxrange = 1460;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
			artilleryCharge = 0.30;
		};
		class Far: Far
		{
			artilleryDispersion = 10;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			minrangeprobab = 0.1;
			minrange = 1460;
			midrangeprobab = 0.1;
			midrange = 2030;
			maxrangeprobab = 0.1;
			maxrange = 2600;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
			artilleryCharge = 0.40;
		};
		class VeryFar: Far
		{
			displayName = "Very Far";
			artilleryDispersion = 15;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			minrangeprobab = 0.1;
			minrange = 2600;
			midrangeprobab = 0.1;
			midrange = 3325;
			maxrangeprobab = 0.1;
			maxrange = 4050;
			reloadTime = 0.2;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
			magazineReloadTime = 60;
			artilleryCharge = 0.50;
		};
		class TooClose: Close
		{
			displayName = "Too Close";
			artilleryCharge = 0.15;
			minrangeprobab = 1;
			minrange = 100;
			midrangeprobab = 1;
			midrange = 200;
			maxrangeprobab = 1;
			maxrange = 360;
			artilleryDispersion = 5;
			aiDispersionCoefX = 1.5;
			aiDispersionCoefY = 1.5;
			reloadTime = 30;
			showToPlayer = 1;
			burst = 10;
			aiBurstTerminable = 0;
		};
		modes[] = {
			"TooClose",
			"Close",
			"Medium",
			"Far",
			"VeryFar"
		};
		magazines[] = {
			"beo_arty_mag10_122_he",
			"beo_arty_mag10_122_cluster"
		};
	};



    class beo_arty_rokit_proxy: beo_arty_rokit 
	{
        magazineReloadTime = 6;
    };

    class beo_arty_rokit_mlrs_proxy: beo_arty_rokit_mlrs 
	{
        magazineReloadTime = 12;
    };

   	class Launcher;
    class Launcher_Base_F: Launcher 
	{
        class WeaponSlotsInfo;
    };

  class beo_arty_rokit_carry: Launcher_Base_F 
	{
        // displayName, author, model and picture are omitted and up to you
		displayName = "[CSW] ROKIT Launcher"
		author = "Walker";
		model="\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		modes[]={};
		picture="\z\ace\addons\csw\UI\StaticMortarTube_Icon.paa";
        scope = 2;

        class ACE_CSW 
		{
            type = "weapon"; // Use "weapon" for weapons or "mount" for tripods - see below
            deployTime = 10;  // How long it takes to deploy the weapon onto the tripod
            pickupTime = 10;  // How long it takes to disassemble weapon from the tripod
            class assembleTo {
                // What tripod can this weapon deploy onto, and what vehicle will it spawn when it is deployed
                ace_csw_mortarBaseplate = "beo_arty_rokit";
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            // One WeaponSlot with a positive value for iconScale forces game to use icon overlay method
            // Required, because the inventory icon has no accessory variants
            class MuzzleSlot 
			{
                iconScale = 0.1;
            };

            // Don't forget to set mass to a reasonable value
            // We use mass in pounds * 10
            mass = 150; // 84 lb / 38 kg
        };
    };	

    class beo_arty_rokit_mlrs_carry: Launcher_Base_F 
	{
        // displayName, author, model and picture are omitted and up to you
		displayName = "[CSW] ROKIT MLRS"
		author = "Walker";
		model="\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		modes[]={};
		picture="\z\ace\addons\csw\UI\StaticMortarTube_Icon.paa";
        scope = 2;

        class ACE_CSW 
		{
            type = "weapon"; // Use "weapon" for weapons or "mount" for tripods - see below
            deployTime = 15;  // How long it takes to deploy the weapon onto the tripod
            pickupTime = 15;  // How long it takes to disassemble weapon from the tripod
            class assembleTo {
                // What tripod can this weapon deploy onto, and what vehicle will it spawn when it is deployed
                ace_csw_mortarBaseplate = "beo_arty_rokit_mlrs";
            };
        };

        class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            // One WeaponSlot with a positive value for iconScale forces game to use icon overlay method
            // Required, because the inventory icon has no accessory variants
            class MuzzleSlot 
			{
                iconScale = 0.1;
            };

            // Don't forget to set mass to a reasonable value
            // We use mass in pounds * 10
            mass = 200; // 84 lb / 38 kg
        };
    };	
	
};

class cfgMagazines
{
	class 12Rnd_230mm_rockets;
	class beo_arty_mag_122_he: 12Rnd_230mm_rockets
	{
		scope = 2;
		ammo = "beo_arty_ammo_122_r_he";
		displayName = "122mm HE ROKIT";
		displayNameShort="122mm HE ROKIT";
		count = 1;
		initSpeed = 400;
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
	};	
	class beo_arty_mag10_122_he: beo_arty_mag_122_he
	{
		scope = 2;
		displayName = "10x 122mm HE ROKIT";
		displayNameShort="122mm HE ROKIT";
		count = 10;		
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
	};	

	
	class beo_arty_mag_122_cluster: 12Rnd_230mm_rockets
	{
		scope = 2;
		ammo = "beo_arty_ammo_122_r_cluster";
		displayName = "122mm Cluster ROKIT";
		displayNameShort="122mm Cluster ROKIT";
		count = 1;
		initSpeed = 400;
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
	};	
	
	class beo_arty_mag10_122_cluster: beo_arty_mag_122_cluster
	{
		scope = 2;
		displayName = "10x 122mm Cluster ROKIT";
		displayNameShort="122mm Cluster ROKIT";
		count = 10;		
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
	};	
	

	class beo_arty_mag_122_he_test: 12Rnd_230mm_rockets
	{
		scope = 2;
		ammo = "beo_arty_ammo_122_r_test";
		displayName = "122mm HE ROKIT (Test)";
		displayNameShort="122mm HE ROKIT (Test)";
		count = 1;
		initSpeed = 400;
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";

	};	
 // ace CSW

    class beo_arty_mag_122_he_csw_mag: beo_arty_mag_122_he 
	{
        scope = 2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		displayname="[CSW] 122mm HE ROKIT";
        type = 256;  // Must be 256 to show up in Arsenal
        count = 1;
        //model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		model = "\A3\Weapons_F\Ammo\Rocket_01_F";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
        ACE_isBelt = 0; // Enables belt linking for this magazine
		mass=50;
    };

    class beo_arty_mag_122_cluster_csw_mag: beo_arty_mag_122_cluster 
	{
        scope = 2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		displayname="[CSW] 122mm Cluster ROKIT";
        type = 256;  // Must be 256 to show up in Arsenal
        count = 1;
        //model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		model = "\A3\Weapons_F\Ammo\Rocket_01_F";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
        ACE_isBelt = 0; // Enables belt linking for this magazine
		mass=50;
    };

    class beo_arty_mag10_122_csw_mag: beo_arty_mag10_122_he 
	{
        scope = 2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		displayname="[CSW] 10x 122mm HE ROKIT";
        type = 256;  // Must be 256 to show up in Arsenal
        count = 1;
        //model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		model = "\A3\Weapons_F\Ammo\Rocket_01_F";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
        ACE_isBelt = 0; // Enables belt linking for this magazine
		mass=100;
    };
    class beo_arty_mag10_122_cluster_csw_mag: beo_arty_mag10_122_cluster 
	{
        scope = 2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		displayname="[CSW] 10x 122mm Cluster ROKIT";
        type = 256;  // Must be 256 to show up in Arsenal
        count = 1;
        //model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		model = "\A3\Weapons_F\Ammo\Rocket_01_F";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
        ACE_isBelt = 0; // Enables belt linking for this magazine
		mass=100;
    };   



};


class ACE_CSW_Groups 
{

    class beo_arty_mag_122_he_csw_mag 
	{ // Same name as the carryable magazine
        beo_arty_mag_122_he = 1;    // Vehicle magazine that will be loaded when loading this magazine
    };

    class beo_arty_mag_122_cluster_csw_mag 
	{ // Same name as the carryable magazine
        beo_arty_mag_122_cluster = 1;    // Vehicle magazine that will be loaded when loading this magazine
    };

    class beo_arty_mag10_122_csw_mag 
	{ // Same name as the carryable magazine
        beo_arty_mag10_122_he = 10;    // Vehicle magazine that will be loaded when loading this magazine
    };

    class beo_arty_mag10_122_cluster_csw_mag 
	{ // Same name as the carryable magazine
        beo_arty_mag10_122_cluster = 10;    // Vehicle magazine that will be loaded when loading this magazine
    };
    
};


class cfgAmmo
{
	class R_230mm_HE;
	class R_230mm_fly;

// HE Rocket
	class beo_arty_ammo_122_r_he: R_230mm_HE
	{
		cost = 10;
		scope = 2;
		allowAgainstInfantry = 1;	
		ace_rearm_caliber = 80;
		aiAmmoUsageFlags = "64+ 128+ 512";
		hit = 50;
		indirectHit = 5;
		indirectHitRange = 15;	
		explosive = 0.8;	//1 	
		//submunitionAmmo = "beo_arty_ammo_122_r_fly";
		submunitionAmmo[] = {
			"beo_arty_ammo_122_r_fly",0.9,
			"beo_sub_dud_fly",0.1
			
			};
		effectsMissile = "beo_artyRocket_black";
		effectFly = "beo_artyRocket_black";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class beo_arty_ammo_122_r_fly: R_230mm_fly
	{	
		cost = 10;
		scope = 2;
		hit = 50; //1200
		indirectHit = 5; //800
		indirectHitRange = 15;	//30
		dangerRadiusHit = 30;
		effectsMissile = "beo_artyRocket_black";
		effectFly = "beo_artyRocket_black";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		
	};


// TEST Rocket
	class beo_arty_ammo_122_r_test: beo_arty_ammo_122_r_he
	{
		model = "\beo_rokit\data\quassimRocketHEtri.p3d";
	};
	class beo_arty_ammo_122_r_fly_test: beo_arty_ammo_122_r_fly
	{	
		model = "\beo_rokit\data\quassimRocketHEtri.p3d";
	};

// DUD configs
	// dud that detonates in air
	class beo_sub_dud_fly: beo_arty_ammo_122_r_fly
	{	
		submunitionAmmo[] = {
			"beo_sub_dud_air",0.5,
			"beo_sub_dud_deploy",0.5};
		submunitionConeType[] = {"poissondisc",1};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
	};

	class beo_sub_dud_air: beo_arty_ammo_122_r_fly
	{	
		submunitionAmmo[] = {};
		submunitionConeType[] = {"poissondisc",0};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
		explosionTime = 0.0001;
	};


	// dud that deployes UXO
	class Mo_cluster_AP_UXO1_deployMine;
	class beo_sub_dud_deploy: Mo_cluster_AP_UXO1_deployMine
	{
		hit = 10;//35
		indirectHit = 4;//25
		indirectHitRange = 5;//8
		submunitionAmmo[] = {"beo_sub_dud_uxo",1};

	};
	class Mo_cluster_AP_UXO1_Ammo_F;
	class beo_sub_dud_uxo: Mo_cluster_AP_UXO1_Ammo_F
	{
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		//model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		explosionEffects = "MK82_Explode";
		CraterEffects = "MK82_Smoke";
		SoundSetExplosion[] = {"jsrs_bomb_explosion_soundset","jsrs_rocket_explosion_stereo_soundset","jsrs_shell_explosion_reverb_soundset"};
	};





// Cluster Rockets
	class beo_arty_ammo_122_r_cluster: beo_arty_ammo_122_r_he
	{
		submunitionAmmo[] = {
			"beo_arty_ammo_122_r_cluster_fly",0.9,
			"beo_sub_dud_fly",0.1
		};
	};	
	class beo_arty_ammo_122_r_cluster_fly: beo_arty_ammo_122_r_fly
	{	
		submunitionAmmo[] = {
			"beo_sub_cluster_AP",0.6,
			"Mo_cluster_AP_UXO_deploy",0.4};
		submunitionConeType[] = {"poissondisc",10};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.5, 1};
		submunitionConeAngle = 19;
	};
	class Mo_cluster_AP;
	class beo_sub_cluster_AP: Mo_cluster_AP
	{
		hit = 7;//35
		indirectHit = 4;//25
		indirectHitRange = 5;//8
	};






};