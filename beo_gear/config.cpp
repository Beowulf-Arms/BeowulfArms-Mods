//Class beo_gear : config.bin{

class DefaultEventhandlers;
class CfgPatches
{
	class beo_gear
	{
		units[] = {};
		weapons[] = {
			};
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_BLUFOR","A3_Characters_F_Common","A3_Characters_F_Heads"};
		version = "1.0";
		requiredVersion = "1.0";
		versionDesc = "Beowulf Combat Gear";
		author = "Walker";
	};
};


class cfgVehicles
{
	class I_G_Soldier_LAT_F;
	class rhs_msv_rifleman_m88_patchless;
	class C_man_polo_2_F;
	class rhsgref_nat_base;
	class rhsgref_hidf_base;
	class B_soldier_base_F;

	class SoldierGB;
	class rhs_g_uniform1_base: SoldierGB
	{
		modelSides[] = {0,1,2,3};
	};
	
	class rhs_g_uniform2_base: rhs_g_uniform1_base
	{
		modelSides[] = {0,1,2,3};
	};
	
	class rhs_g_uniform3_base: rhs_g_uniform1_base
	{
		modelSides[] = {0,1,2,3};
	};

	class rhs_g_uniform4_base: rhs_g_uniform1_base
	{
		modelSides[] = {0,1,2,3};
	};
	
	class rhs_g_uniform5_base: rhs_g_uniform1_base
	{
		modelSides[] = {0,1,2,3};
	};
	

	class rhsgref_nat_olive: rhsgref_nat_base
	{
		modelSides[] = {3,2,1,0};	
	};
	
	//rhsgref_hidf_og107
	//rhsgref_uniform_og107
	class rhsgref_hidf_og107: rhsgref_hidf_base
	{
		modelSides[] = {3,2,1,0};	
	};	
	class rhsgref_nat_3color_desert: rhsgref_nat_base
	{
		modelSides[] = {3,2,1,0};	
	};	
	
	// Beowulf Rain Camo
	class B_BEO_UNI_rain: rhs_msv_rifleman_m88_patchless 
	{
		scope = 1;
		side = 1;
		_generalMacro = "B_BEO_UNI_rain";
		faction = "BEO_uni";
		author = "Walker";
		displayName = "Rifleman (Rain Pattern)";
		icon = "iconMan";		
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\rain_m88.paa"};
		backpack = "";
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkeditems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};	



	// Beowulf Winter Jumpers
	class B_BEO_UNI_J_W: I_G_Soldier_LAT_F 
	{
		scope = 1;
		side = 1;
		_generalMacro = "B_BEO_UNI_J_W";
		faction = "BEO_uni";
		author = "Walker";
		displayName = "Rifleman (Jumper Winter)";
		icon = "iconMan";		
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_jumper_w.paa"};
		backpack = "";
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkeditems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};
	
	class B_BEO_UNI_J_Wm81: I_G_Soldier_LAT_F 
	{
		scope = 1;
		side = 1;
		_generalMacro = "B_BEO_UNI_J_Wm81";
		faction = "BEO_uni";
		author = "Walker";
		displayName = "Rifleman (Jumper Winter M81)";
		icon = "iconMan";		
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_jumper_wm81.paa"};
		backpack = "";
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkeditems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};	
	
	class B_BEO_UNI_J_Wdigi: I_G_Soldier_LAT_F 
	{
		scope = 1;
		side = 1;
		_generalMacro = "B_BEO_UNI_J_Wdigi";
		faction = "BEO_uni";
		author = "Walker";
		displayName = "Rifleman (Jumper Winter Digi)";
		icon = "iconMan";		
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_jumper_wdigi.paa"};
		backpack = "";
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkeditems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};	



	class B_BEO_UNI_FJ_W: I_G_Soldier_LAT_F 
	{
		scope = 1;
		side = 1;
		_generalMacro = "B_BEO_UNI_FJ_W";
		faction = "BEO_uni";
		author = "Walker";
		displayName = "Rifleman (Festive Jumper Winter)";
		icon = "iconMan";		
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_fjumper_w.paa"};
		backpack = "";
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkeditems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};
	
	class B_BEO_UNI_FJ_Wm81: I_G_Soldier_LAT_F 
	{
		scope = 1;
		side = 1;
		_generalMacro = "B_BEO_UNI_FJ_Wm81";
		faction = "BEO_uni";
		author = "Walker";
		displayName = "Rifleman (Festive Jumper Winter M81)";
		icon = "iconMan";		
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_fjumper_wm81.paa"};
		backpack = "";
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkeditems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};	
	
	class B_BEO_UNI_FJ_Wdigi: I_G_Soldier_LAT_F 
	{
		scope = 1;
		side = 1;
		_generalMacro = "B_BEO_UNI_FJ_Wdigi";
		faction = "BEO_uni";
		author = "Walker";
		displayName = "Rifleman (Festive Jumper Winter Digi)";
		icon = "iconMan";		
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_fjumper_wdigi.paa"};
		backpack = "";
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkeditems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};	


	class B_BEO_UNI_pla_uni: B_soldier_base_F 
	{
		scope = 1;
		side = 1;
		_generalMacro = "B_BEO_UNI_pla_uni";
		faction = "BEO_uni";
		author = "Walker";
		displayName = "Rifleman (PLA, Universal)";
		icon = "iconMan";		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_pla_uni_a.paa", "beo_gear\data\uniform\u_pla_uni_b.paa"};
		
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";


		class Wounds
		{
			tex[] = {};
			mat[] = {
				"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"
				};
		};

		
		backpack = "";
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkeditems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};


	#include "mods\smock_vehc.hpp"

};	




class cfgWeapons
{
	class Default;
	class ItemCore: Default{};
	class HeadgearItem;
	class VestItem;
	class V_PlateCarrierIA2_dgtl;

	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class U_IG_Guerrilla_6_1;
	class rhs_uniform_m88_patchless;
	class U_C_Poloshirt_burgundy;
	class rhs_uniform_gorka_r_g;
	class rhs_uniform_gorka_r_g_gloves;

	
	// ------------------ 	RHS Hidden Uniforms   ----------------------
	
	class U_I_OfficerUniform;
	class rhs_chdkz_uniform_1: U_I_OfficerUniform	
	{
		scope = 2;
		//scopeCurator = 2;
	};		
	class rhs_chdkz_uniform_2: U_I_OfficerUniform	
	{
		scope = 2;
		//scopeCurator = 2;
	};		
	class rhs_chdkz_uniform_3: U_I_OfficerUniform	
	{
		scope = 2;
		//scopeCurator = 2;
	};		
	class rhs_chdkz_uniform_4: U_I_OfficerUniform
	{
		scope = 2;
		//scopeCurator = 2;
	};	
	class rhs_chdkz_uniform_5: U_I_OfficerUniform
	{
		scope = 2;
		//scopeCurator = 2;
	};	
	
	//	rhsgref_nat_olive
	class rhsgref_uniform_olive: Uniform_Base
	{
		modelSides[] = {3,2,1,0};	
	};
		

	//	rhsgref_nat_olive
	class rhsgref_uniform_3color_desert: Uniform_Base
	{
		modelSides[] = {3,2,1,0};	
	};	
	
	// ------------------ 	Beowulf Uniforms   ----------------------

	class beo_uni_rain_uniform: rhs_uniform_m88_patchless
	{
		scope = 2;
		displayName = "(BEO) Rain Pattern Uniform";
		author = "Walker & KillSlim";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\rain_m88.paa"};
		
		modelSides[] = {3,2,1,0};	
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_BEO_UNI_rain";
			containerClass = "Supply40";
			mass = 40;		
			hiddenSelections[] = {"Camo"};
		};
	};	


	
///// artic + jumpers	
	
	class beo_uni_jumper_white: U_IG_Guerrilla_6_1
	{
		scope = 2;
		displayName = "(BEO) Jumper, Winter Fatigues";
		author = "Walker";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_jumper_w.paa"};
		
		modelSides[] = {3,2,1,0};	
		
		class ItemInfo: UniformItem
		{
			uniformModel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "B_beo_UNI_J_W";
			containerClass = "Supply60";
			mass = 40;		
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class beo_uni_jumper_wm81: U_IG_Guerrilla_6_1
	{
		scope = 2;
		displayName = "(BEO) Jumper, M81 Winter Fatigues";
		author = "Walker";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_jumper_wm81.paa"};
		
		modelSides[] = {3,2,1,0};	
		
		class ItemInfo: UniformItem
		{
			uniformModel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "B_beo_UNI_J_Wm81";
			containerClass = "Supply60";
			mass = 40;		
			hiddenSelections[] = {"Camo"};
		};
	};		
	
	class beo_uni_jumper_wdigi: U_IG_Guerrilla_6_1
	{
		scope = 2;
		displayName = "(BEO) Jumper, Digi Winter Fatigues";
		author = "Walker";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_jumper_wdigi.paa"};
		
		modelSides[] = {3,2,1,0};	
		
		class ItemInfo: UniformItem
		{
			uniformModel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "B_beo_UNI_J_Wdigi";
			containerClass = "Supply60";
			mass = 40;		
			hiddenSelections[] = {"Camo"};
		};
	};		

/////// festive jumpers	
	
	class beo_uni_fjumper_white: U_IG_Guerrilla_6_1
	{
		scope = 2;
		displayName = "(BEO) Festive Jumper, Winter Fatigues";
		author = "Walker";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_fjumper_w.paa"};
		
		modelSides[] = {3,2,1,0};	
		
		class ItemInfo: UniformItem
		{
			uniformModel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "B_beo_UNI_FJ_W";
			containerClass = "Supply60";
			mass = 40;		
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class beo_uni_fjumper_wm81: U_IG_Guerrilla_6_1
	{
		scope = 2;
		displayName = "(BEO) Festive Jumper, M81 Winter Fatigues";
		author = "Walker";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_fjumper_wm81.paa"};
		
		modelSides[] = {3,2,1,0};	
		
		class ItemInfo: UniformItem
		{
			uniformModel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "B_beo_UNI_FJ_Wm81";
			containerClass = "Supply60";
			mass = 40;		
			hiddenSelections[] = {"Camo"};
		};
	};		
	
	class beo_uni_fjumper_wdigi: U_IG_Guerrilla_6_1
	{
		scope = 2;
		displayName = "(BEO) Festive Jumper, Digi Winter Fatigues";
		author = "Walker";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_fjumper_wdigi.paa"};
		
		modelSides[] = {3,2,1,0};	
		
		class ItemInfo: UniformItem
		{
			uniformModel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "B_beo_UNI_FJ_Wdigi";
			containerClass = "Supply60";
			mass = 40;		
			hiddenSelections[] = {"Camo"};
		};
	};


	class beo_uni_pla_uni: Uniform_Base
	{
		scope = 2;
		displayName = "(BEO) PLA Fatigues (Universal Camo)";
		author = "Walker";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"beo_gear\data\uniform\u_pla_uni_a.paa", "beo_gear\data\uniform\u_pla_uni_b.paa"};
		
		modelSides[] = {3,2,1,0};	
		
		class ItemInfo: UniformItem
		{
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "B_beo_UNI_pla_uni";
			containerClass = "Supply60";
			mass = 40;		
			hiddenSelections[] = {"Camo"};
		};
	};	




	/// Headgear

	class rhs_6b27m;
	class rhs_6b27m_digi_ess;
	class BEO_H_6B27M_CSAT: rhs_6b27m
	{
		_generalMacro = "BEO_H_6B27M_CSAT";
		author = "Walker";
		scope = 2;
		displayName = "(BEO) 6B27M  - CSAT (Iran)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"beo_gear\data\headgear\6b27_csat.paa"};
	};
	class BEO_H_6B27M_ess_CSAT: rhs_6b27m_digi_ess
	{
		_generalMacro = "BEO_H_6B27M_ess_CSAT";
		author = "Walker";
		scope = 2;
		displayName = "(BEO) 6B27M - CSAT (Iran, ESS)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"beo_gear\data\headgear\6b27_csat.paa"};
	};
	
	class BEO_H_6B27M_CSAT_grn: rhs_6b27m
	{
		_generalMacro = "BEO_H_6B27M_CSAT_grn";
		author = "Walker";
		scope = 2;
		displayName = "(BEO) 6B27M  - CSAT (PLA)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"beo_gear\data\headgear\6b27_csat_grn.paa"};
	};
	class BEO_H_6B27M_ess_CSAT_grn: rhs_6b27m_digi_ess
	{
		_generalMacro = "BEO_H_6B27M_ess_CSAT_grn";
		author = "Walker";
		scope = 2;
		displayName = "(BEO) 6B27M - CSAT (PLA, ESS)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"beo_gear\data\headgear\6b27_csat_grn.paa"};
	};	
	
	
	class BEO_H_6B27M_pla: rhs_6b27m
	{
		_generalMacro = "BEO_H_6B27M_pla";
		author = "Walker";
		scope = 2;
		displayName = "(BEO) 6B27M  - PLA (Universal)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"beo_gear\data\headgear\6b27_pla_uni.paa"};
	};
	class BEO_H_6B27M_ess_pla: rhs_6b27m_digi_ess
	{
		_generalMacro = "BEO_H_6B27M_ess_pla";
		author = "Walker";
		scope = 2;
		displayName = "(BEO) 6B27M - PLA (Universal, ESS)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"beo_gear\data\headgear\6b27_pla_uni.paa"};
	};			


	// Beowulf Smocks
	#include "mods\smock_weap.hpp"
};	