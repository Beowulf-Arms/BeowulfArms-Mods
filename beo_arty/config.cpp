////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.01
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class beo_arty : config.bin{
class CfgPatches
{
	class beo_arty
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Weapons_F_Exp","rhs_c_weapons","rhsusf_c_weapons","rhssaf_c_weapons","rhsgref_c_weapons","ace_compat_rhs_afrf3","ace_compat_rhs_usf3","beo_wps","beo_ai","beo_rokit"};
		version = "1.0";
		requiredVersion = "1.0";
		author = "Walker";
	};
};

class CfgVehicles
{
	class StaticMortar;
	
// A3 Mk6	
	class Mortar_01_base_F;
	class B_Mortar_01_F: Mortar_01_base_F
	{
		class Turrets;
		class MainTurret;
	};
	
	class beo_arty_mk6: B_Mortar_01_F
	{
		scope = 2;		
		displayName = "[BEO AI] Mk6 Mortar";
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_81_he","beo_arty_mag12_81_he","beo_arty_mag12_81_he"};
				weapons[] = {"beo_arty_81mm"};
				//"8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"
			};
		};	
	/*	
		class ACE_CSW 
		{
			ammoLoadTime = 3;
			ammoUnloadTime = 3;
			desiredAmmo = 1;
			disassembleTurret = "ace_csw_mortarBaseplate";
			disassembleWeapon = "ace_compat_rhs_usf3_m252_carry";
			enabled = 0;
			magazineLocation = "";
			proxyWeapon = "";
		};
	*/
	};
	
	class beo_arty_mk6_opf: beo_arty_mk6
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_mk6_ind: beo_arty_mk6
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};
	
	
	
// RHS M252	

	class RHS_M252_Base;
	class RHS_M252_D: RHS_M252_Base
	{
		class Turrets;
		class MainTurret;
	};

	class beo_arty_m252: RHS_M252_D
	{
		scope = 2;		
		displayName = "[BEO AI] M252 Mortar";
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_81_he","beo_arty_mag12_81_he","beo_arty_mag12_81_he"};
				weapons[] = {"beo_arty_81mm"};
				//"8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"
			};
		};	
	/*	
		class ACE_CSW 
		{
			ammoLoadTime = 3;
			ammoUnloadTime = 3;
			desiredAmmo = 1;
			disassembleTurret = "ace_csw_mortarBaseplate";
			disassembleWeapon = "ace_csw_staticMortarCarry";
			enabled = 0;
			magazineLocation = "_target selectionPosition 'usti hlavne'";
			proxyWeapon = "ace_mk6mortar_fnc_csw_getProxyWeapon";
		};
		
	*/
	};
	
	class beo_arty_m252_opf: beo_arty_m252
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_m252_ind: beo_arty_m252
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};
	
	
// RHS 2b14	

	class rhs_2b14_82mm_Base;
	class rhs_2b14_82mm_msv: rhs_2b14_82mm_Base
	{
		class Turrets;
		class MainTurret;
	};

	class beo_arty_2b14: rhs_2b14_82mm_msv
	{
		scope = 2;		
		displayname = "[BEO AI] 2B14-1 Podnos Mortar";
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_81_he","beo_arty_mag12_81_he","beo_arty_mag12_81_he"};
				weapons[] = {"beo_arty_81mm"};
				//"8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"
			};
		};	
		/*
		class ACE_CSW 
		{
			ammoLoadTime = 3;
			ammoUnloadTime = 3;
			desiredAmmo = 1;
			disassembleTurret = "ace_csw_mortarBaseplate";
			disassembleWeapon = "ace_compat_rhs_usf3_m252_carry";
			enabled = 0;
			magazineLocation = "";
			proxyWeapon = "";
		};
		*/
	};
	
	class beo_arty_2b14_opf: beo_arty_2b14
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_2b14_ind: beo_arty_2b14
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};

/////// RHS D30

	class rhs_D30_AT_base;
	class rhs_D30_at_msv: rhs_D30_AT_base
	{
		class Turrets;
		class MainTurret;
	};
	
	class rhs_D30_base;
	class rhs_D30_msv: rhs_D30_base
	{
		class Turrets;
		class MainTurret;
	};	
	
	class beo_arty_d30: rhs_D30_msv
	{
		scope = 2;
		displayName = "[BEO AI] D-30A (Arty)";
		artilleryScanner = 1;
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm"};
				weapons[] = {"beo_arty_D30"};
				//"8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"
			};
		};	
	};
	
	class beo_arty_d30_opf: beo_arty_d30
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_d30_ind: beo_arty_d30
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};



	class beo_arty_d30_AT: rhs_D30_at_msv
	{
		scope = 2;
		displayName = "[BEO AI] D-30A (AT)";
		//artilleryScanner = 1;
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm"};
				weapons[] = {"beo_arty_D30_AT"};
				//"8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"
			};
		};	
	};
	
	class beo_arty_d30_AT_opf: beo_arty_d30_AT
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_d30_AT_ind: beo_arty_d30_AT
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};




	class beo_arty_d30_BOTH: rhs_D30_msv
	{
		scope = 1;
		displayName = "[BEO AI] D-30A (Arty + AT)";
		//artilleryScanner = 1;
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm"};
				weapons[] = {"beo_arty_D30_BOTH"};
				//"8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"
			};
		};	
	};
	
	
	class beo_arty_d30_BOTH_opf: beo_arty_d30_BOTH
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_d30_BOTH_ind: beo_arty_d30_BOTH
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};




	///// A3 SPGs /////

	class B_MBT_01_arty_base_F;
	class B_MBT_01_arty_F: B_MBT_01_arty_base_F
	{
		class Turrets;
		class MainTurret;
		class CommanderOptics;
	};	
	
	class beo_arty_sholef_SPG: B_MBT_01_arty_F
	{
		scope = 2;
		displayName = "[BEO AI] Sholef SPG";
		artilleryScanner = 1;
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		textureList[] = {"Sand",1,"Olive",0};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm"};
				class Turrets: Turrets 
				{		
					class CommanderOptics: CommanderOptics
					{
						// Removing 40mm
						magazines[] = {"200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Red","SmokeLauncherMag"};
						weapons[] = {"HMG_127_APC","SmokeLauncher"};
					};
				};	
			};
		};	
	};
	
	class beo_arty_sholef_SPG_opf: beo_arty_sholef_SPG
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_sholef_SPG_ind: beo_arty_sholef_SPG
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};



	class O_MBT_02_arty_base_F;
	class O_MBT_02_arty_F: O_MBT_02_arty_base_F
	{
		class Turrets;
		class MainTurret;
		class CommanderOptics;
		class muzzle_hide_arty;
		class recoil_source;
	};	
	
	class beo_arty_2S9_SPG: O_MBT_02_arty_F
	{
		scope = 2;
		displayName = "[BEO AI] 2S9 Socher SPG";
		artilleryScanner = 1;
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		textureList[] = {"Hex",0,"GreenHex",1};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm"};
				class Turrets: Turrets 
				{		
					class CommanderOptics: CommanderOptics
					{
						// Removing 40mm
						magazines[] = {"200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Red","SmokeLauncherMag"};
						weapons[] = {"HMG_127_APC","SmokeLauncher"};
					};
				};	
			};
		};	
	};
	
	class beo_arty_2S9_SPG_opf: beo_arty_2S9_SPG
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_2S9_SPG_ind: beo_arty_2S9_SPG
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};



	// RHS SPGs
	class rhsusf_m109tank_base;
	class rhsusf_m109_usarmy: rhsusf_m109tank_base
	{
		class Turrets;
		class MainTurret;
	};	
	
	class beo_arty_M109_SPG: rhsusf_m109_usarmy
	{
		scope = 2;
		displayName = "[BEO AI] M109 SPG";
		artilleryScanner = 1;
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		textureList[] = {"Desert",0,"standard",1};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm"};
			};
		};	
	};
	
	class beo_arty_M109_opf: beo_arty_M109_SPG
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_M109_ind: beo_arty_M109_SPG
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};




	class UK3CB_O_2S1_SOV;
	class UK3CB_CW_SOV_O_LATE_2S1: UK3CB_O_2S1_SOV
	{
		class Turrets;
		class MainTurret;
	};	
	
	class beo_arty_2S1_SPG: UK3CB_CW_SOV_O_LATE_2S1
	{
		scope = 2;
		displayName = "[BEO AI] 2S1 SPG";
		artilleryScanner = 1;
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		//textureList[] = {"Desert",0,"standard",1};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm"};
			};
		};	
	};
	
	class beo_arty_2S1_spg_opf: beo_arty_2S1_SPG
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_2S1_spg_ind: beo_arty_2S1_SPG
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};



	class UK3CB_O_2S3_SOV;
	class UK3CB_CW_SOV_O_LATE_2S3: UK3CB_O_2S3_SOV
	{
		class Turrets;
		class MainTurret;
	};	
	
	class beo_arty_2S3_SPG: UK3CB_CW_SOV_O_LATE_2S3
	{
		scope = 2;
		displayName = "[BEO AI] 2S3 SPG";
		artilleryScanner = 1;
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		//textureList[] = {"Desert",0,"standard",1};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm","beo_arty_mag12_122mm"};

			};
		};	
	};
	
	class beo_arty_2S3_spg_opf: beo_arty_2S3_SPG
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_2S3_spg_ind: beo_arty_2S3_SPG
	{
		scope = 2;
		side = 2;
		faction = "beo_ai_ind";
		crew = "beo_ai_crew_ind";
		typicalCargo[] = {"beo_ai_crew_ind"};
	};




	class UK3CB_Hilux_Mortar;
	class UK3CB_B_G_Hilux_Mortar: UK3CB_Hilux_Mortar
	{
		class Turrets;
		class MainTurret;
	};	
	
	class beo_arty_hilux_mortar: UK3CB_B_G_Hilux_Mortar
	{
		scope = 2;
		displayName = "[BEO AI] Hilux Mortar";
		artilleryScanner = 1;
		editorSubcategory = "rhs_EdSubcat_artillery";
		vehicleClass = "rhs_vehclass_artillery";
		author = "Walker";
		side = 1;
		faction = "beo_ai_blu";
		crew = "beo_ai_crew";
		typicalCargo[] = {"beo_ai_crew"};
		class Turrets: Turrets 
		{		
			class MainTurret: MainTurret
			{
				magazines[] = {"beo_arty_mag12_81_he","beo_arty_mag12_81_he","beo_arty_mag12_81_he","beo_arty_mag12_81_he","beo_arty_mag12_81_he"};
				weapons[] = {"beo_arty_81mm"};

			};
		};	
	};
	
	class beo_arty_hilux_mortar_opf: beo_arty_hilux_mortar
	{
		scope = 2;
		side = 0;
		faction = "beo_ai_opf";
		crew = "beo_ai_crew_opf";
		typicalCargo[] = {"beo_ai_crew_opf"};
	};
	
	class beo_arty_hilux_mortar_ind: beo_arty_hilux_mortar
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
	//CannonCore
	class CannonCore;
	class mortar_155mm_AMOS: CannonCore
	{
		magazines[] += {"beo_arty_mag12_122mm"};
	};
	//class rhs_weap_D30;

	class rhs_weap_D30: mortar_155mm_AMOS
	{
		class Burst0;
		class Burst1;
		class Burst2;
		class Burst3;
		class Burst4;
		class Single0;
		class Single1;
		class Single2;
		class Single3;
		class Single4;		
	};
	
	
	
	class beo_arty_D30: rhs_weap_D30
	{
		displayName = "[BEO AI] 2A18M (D-30A Arty)";
		magazines[] += {"beo_arty_mag12_122mm"};
		//ballisticsComputer = 2;
		modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};
	//	aiRateOfFireDistance = 500;
	//	aiRateOfFire = 6.6;
	//	aiRateOfFireDispersion = 0;

		class Single0: Single0
		{
			//artilleryDispersion = 25;
			////aiDispersionCoefX = 20;
			////aiDispersionCoefY = 20;
			reloadTime = 10;
			showToPlayer = 1;
		};
		class Single1: Single1
		{
			//artilleryDispersion = 20;
			////aiDispersionCoefX = 20;
			////aiDispersionCoefY = 20;
			reloadTime = 10;
			showToPlayer = 1;
		};
		class Single2: Single2
		{
			//artilleryDispersion = 15;
			////aiDispersionCoefX = 20;
			////aiDispersionCoefY = 20;
			reloadTime = 10;
			showToPlayer = 1;
		};
		class Single3: Single3
		{
			//artilleryDispersion = 15;
			////aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 10;
			showToPlayer = 1;
		};
		class Burst0: Burst0
		{
			//artilleryDispersion = 25;
			//aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 10;
			showToPlayer = 1;
		};
		class Burst1: Burst1
		{
			//artilleryDispersion = 20;
			//aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 5;
			showToPlayer = 1;
			minRange = 200;
			midRange = 1000;
			maxRange = 2000;
		};	
		class Burst2: Burst2
		{
			//artilleryDispersion = 20;
			//aiDispersionCoefX = 15;
			//aiDispersionCoefY = 15;
			reloadTime = 5;
			showToPlayer = 1;
		};
		class Burst3: Burst3
		{
			//artilleryDispersion = 15;
			//aiDispersionCoefX = 10;
			//aiDispersionCoefY = 10;
			reloadTime = 5;
			showToPlayer = 1;
		};			
	};	
	
	//cannon_120mm
	class rhs_weap_d81;
	class rhs_weap_D30_AT: rhs_weap_d81
	{
		class close;
		class short;
		class medium;
		class far;
		class TopDown;
	};
	class beo_arty_D30_AT: rhs_weap_D30_AT
	{
		displayName = "[BEO AI] 2A18M (D-30A AT)";
		magazines[] += {"beo_arty_mag12_122mm"};
		//ballisticsComputer = 2;
		modes[] = {"close","short","medium","far","TopDown"};
	//	aiRateOfFireDistance = 500;
	//	aiRateOfFire = 6.6;
	//	aiRateOfFireDispersion = 0;

		class close: close
		{
			//artilleryDispersion = 1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;	
			aiRateOfFire = 6.6;		
			reloadTime = 10;			
			maxRange = 200;
			maxRangeProbab = 1;
			midRange = 100;
			midRangeProbab = 0.8;
			minRange = 5;
			minRangeProbab = 0.1;
		};
		class short: short
		{
			//artilleryDispersion = 1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			aiRateOfFire = 6.6;
			reloadTime = 10;
			maxRange = 1500;
			maxRangeProbab = 1;
			midRange = 1000;
			midRangeProbab = 1;
			minRange = 150;
			minRangeProbab = 1;
			
		};
		class medium: medium
		{
			//artilleryDispersion = 1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 10;
			aiRateOfFire = 6.6;
			reloadTime = 10;
			maxRange = 2000;
			maxRangeProbab = 1;
			midRange = 1500;
			midRangeProbab = 1;
			minRange = 1000;
			minRangeProbab = 1;			
		};
		class far: far
		{
			//artilleryDispersion = 1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 10;
			aiRateOfFire = 6.6;
			reloadTime = 10;
			maxRange = 3000;
			maxRangeProbab = 1;
			midRange = 2500;
			midRangeProbab = 1;
			minRange = 1800;
			minRangeProbab = 1;				
		};	
		class TopDown: TopDown
		{
			//artilleryDispersion = 15;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 10;
			aiRateOfFire = 6.6;
			reloadTime = 10;
			maxRange = 3000;
			maxRangeProbab = 1;
			midRange = 2500;
			midRangeProbab = 1;
			minRange = 2000;
			minRangeProbab = 1;				
		};			
	};
	
	
	
	class beo_arty_D30_both: rhs_weap_D30
	{
		displayName = "[BEO AI] 2A18M (D-30A BOTH)";
		magazines[] += {"beo_arty_mag12_122mm"};
		//ballisticsComputer = 2;
		modes[] = {"short","Burst1"};
		aiRateOfFireDistance = 500;
		aiRateOfFire = 6.6;
		aiRateOfFireDispersion = 0;
		class short: Burst1
		{
			//aiDispersionCoefX = 15;
			//aiDispersionCoefY = 20;
			aiRateOfFire = 6.6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 10;
			artilleryCharge = 1;
			//artilleryDispersion = 1;
			autoFire = 0;
			autoReload = 1;
			burst = 1;
			burstRangeMax = 1;
			canShootInWater = 0;
			dispersion = 0.00057;
			displayName = "Semi";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			magazineReloadTime = 6;
			maxRange = 3000;
			maxRangeProbab = 1;
			midRange = 1000;
			midRangeProbab = 1;
			minRange = 100;
			minRangeProbab = 0.8;
			multiplier = 1;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			reloadSound[] = {"A3\sounds_f\dummysound",1,1,20};
			reloadTime = 6;
			requiredOpticType = -1;
			showToPlayer = 1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {};
			soundLoop[] = {};
			sounds[] = {"StandardSound"};
			textureType = "semi";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";	
		};
		
		class Burst1: Burst1
		{
			//artilleryDispersion = 20;
			//aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 5;
			showToPlayer = 1;
			minRange = 800;
			minRangeProbab = 1;
			midRange = 1000;
			midRangeProbab = 1;
			maxRange = 2000;
			maxRangeProbab = 1;
		};		
	};

	class cannon_155mm;
	class rhs_weap_m284: cannon_155mm
	{
		magazines[] += {"beo_arty_mag12_122mm"};
	};
	class rhs_weap_2a31: mortar_155mm_AMOS
	{
		magazines[] += {"beo_arty_mag12_122mm"};
	};
	class rhs_weap_2a33: mortar_155mm_AMOS
	{
		magazines[] += {"beo_arty_mag12_122mm"};
	};
	
	
	class mortar_82mm;
	class rhs_mortar_81mm: mortar_82mm
	{
		class Burst0;
		class Burst1;
		class Burst2;
		class Burst3;
		class Burst4;
		class Single0;
		class Single1;
		class Single2;
		class Single3;
		class Single4;
	};
	
	class beo_arty_81mm: rhs_mortar_81mm
	{	
	
		class Single0: Single0
		{
			//artilleryDispersion = 25;
			//aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 4;
			showToPlayer = 1;
		};
		class Single1: Single1
		{
			//artilleryDispersion = 20;
			//aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 4;
			showToPlayer = 1;
		};
		class Single2: Single2
		{
			//artilleryDispersion = 15;
			//aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 4;
			showToPlayer = 1;
		};
		class Single3: Single3
		{
			//artilleryDispersion = 15;
			//aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 4;
			showToPlayer = 1;
		};
		class Single4: Single4
		{
			//artilleryDispersion = 15;
			//aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 4;
			showToPlayer = 1;
		};	
		class Burst0: Burst0
		{
			//artilleryDispersion = 25;
			//aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 4;
			showToPlayer = 1;
		};
		class Burst1: Burst1
		{
			//artilleryDispersion = 20;
			//aiDispersionCoefX = 20;
			//aiDispersionCoefY = 20;
			reloadTime = 4;
			showToPlayer = 1;
			minRange = 150;
			midRange = 1175;
			maxRange = 26600;
		};	
		class Burst2: Burst2
		{
			//artilleryDispersion = 20;
			//aiDispersionCoefX = 15;
			//aiDispersionCoefY = 15;
			reloadTime = 4;
			showToPlayer = 1;
		};
		class Burst3: Burst3
		{
			//artilleryDispersion = 15;
			//aiDispersionCoefX = 10;
			//aiDispersionCoefY = 10;
			reloadTime = 4;
			showToPlayer = 1;
		};
		class Burst4: Burst4
		{
			//artilleryDispersion = 15;
			//aiDispersionCoefX = 5;
			//aiDispersionCoefY = 5;
			reloadTime = 4;
			showToPlayer = 1;
		};		

		magazines[] = {
			"beo_arty_mag12_81_he",
			"rhs_1Rnd_m821_HE",
			//"rhs_12Rnd_m821_HE",
			//"8Rnd_82mm_Mo_shells",
			"8Rnd_82mm_Mo_Flare_white",
			"8Rnd_82mm_Mo_Smoke_white"
			//"8Rnd_82mm_Mo_guided",
			//"8Rnd_82mm_Mo_LG"
			};
			
		//magazineReloadTime = 180;		
	};
	
};


class cfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class beo_arty_mag12_81_he: 8Rnd_82mm_Mo_shells
	{
		scope = 2;
		ammo = "beo_arty_ammo_81_he";
		displayName = "[BEO AI] 12x 81mm HE Mortar Bombs";
		count = 12;
	};
	
	class rhs_mag_of462;
	class beo_arty_mag12_122mm: rhs_mag_of462
	{
		scope = 2;
		ammo = "beo_arty_ammo_122_heat";
		displayName = "[BEO AI] 12x 122mm HEAT Shell";
		count = 12;		
	};		
	
};

class cfgAmmo
{
	class Sh_82mm_AMOS;
	class beo_arty_ammo_81_he: Sh_82mm_AMOS
	{
		ace_frag_charge = 100;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_metal = 50;
		ace_frag_skip = 0;
		ace_rearm_caliber = 70;

		cost = 10;
		scope = 2;
		allowAgainstInfantry = 1;	
		aiAmmoUsageFlags = "64+ 128+ 256+ 512";
		hit = 30;
		indirectHit = 2;
		indirectHitRange = 10;		
		
		whistleDist = 200; //60
	};
	
	//class rhs_ammo_of462;
	class rhs_ammo_of462;
	class beo_arty_ammo_122_heat: rhs_ammo_of462
	{
		ace_frag_charge = 100;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_metal = 50;
		ace_frag_skip = 0;
		ace_rearm_caliber = 125;

		cost = 10;
		scope = 2;
		allowAgainstInfantry = 1;	
		aiAmmoUsageFlags = "64+ 128+ 256+ 512";
		hit = 100;
		indirectHit = 3;
		indirectHitRange = 12;		
	};		
};