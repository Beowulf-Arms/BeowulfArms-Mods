//Class bso_gear : config.bin{

class DefaultEventhandlers;
class CfgPatches
{
	class bso_gear
	{
		units[] = {};
		weapons[] = {
			"bso_v_fin",
			"bso_lbe_plate_rifle",
			"bso_lbe_plate_rifle_p",
			"bso_lbe_plate_gren",
			"bso_lbe_plate_mg",
			"bso_lbv_plate_rifle_p_v",
			"bso_lbv_plate_rifle_v",
			"bso_lbv_plate_gren_v",
			"bso_lbv_plate_mg_v"
			};
		requiredAddons[] = {"A3_Characters_F","OTK_MODUL_ChestRigs_Pack","us_military_gear"};
		version = "1.0";
		requiredVersion = "1.0";
		versionDesc = "Beowulf Combat Gear";
		author = "BSO Walker";
	};
};


class cfgVehicles
{


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
	
	
	class rhs_infantry_msv_base;
	class Smock_3CD_3CD_base: rhs_infantry_msv_base
	{
		modelSides[] = {0,1,2,3};
	};
	class Smock_3CD_WDL_base: Smock_3CD_3CD_base
	{
		modelSides[] = {0,1,2,3};
	};
	class Smock_DN_3CD_base: Smock_3CD_3CD_base
	{
		modelSides[] = {0,1,2,3};
	};
	class Smock_DN_DN_base: Smock_3CD_3CD_base
	{
		modelSides[] = {0,1,2,3};
	};
	class Smock_DN_WDL_base: Smock_3CD_3CD_base
	{
		modelSides[] = {0,1,2,3};
	};
	class Smock_WDL_3CD_base: Smock_3CD_3CD_base
	{
		modelSides[] = {0,1,2,3};
	};
	class Smock_WDL_WDL_base: Smock_3CD_3CD_base
	{
		modelSides[] = {0,1,2,3};
	};
	
};	




class cfgWeapons
{
	class Default;
	class ItemCore: Default{};
	class HeadgearItem;
	class VestItem;
	class V_PlateCarrierIA2_dgtl;
	
	
	// ------------------ 	Uniforms   ----------------------
	
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
	
	
	class bso_v_fin: V_PlateCarrierIA2_dgtl
	{
		scope = 2;
		displayName = "(BSO) Finnish Plate Carrier";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"bso_gear\Data\V_FIN_T.paa"};		
	
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
			hiddenSelections[] = {"camo"};
		};		
	};
	
	
	
	
	class usm_vest_LBE_rm: ItemCore
	{
		class ItemInfo;
	};
	class bso_lbe_plate_rifle: usm_vest_LBE_rm
	{
		displayName = "(BSO) Flak Vest/LBE, rifleman";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};

	class usm_vest_LBE_rmp: usm_vest_LBE_rm
	{
		class ItemInfo;
	};
	
	class bso_lbe_plate_rifle_p: usm_vest_LBE_rmp
	{
		displayName = "(BSO) Flak Vest/LBE, rifleman w/ pistol";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class usm_vest_LBE_gr: usm_vest_LBE_rm
	{
		class ItemInfo;
	};
	class bso_lbe_plate_gren: usm_vest_LBE_gr
	{
		displayName = "(BSO) Flak Vest/LBE, grenadier";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		

	class usm_vest_LBE_mg: usm_vest_LBE_rm
	{
		class ItemInfo;
	};
	class bso_lbe_plate_mg: usm_vest_LBE_mg
	{
		displayName = "(BSO) Flak Vest/LBE, machinegunner";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};

	class usm_vest_lbv_rm: usm_vest_LBE_rm
	{
		class ItemInfo;
	};	
	class bso_lbv_plate_rifle_v: usm_vest_lbv_rm
	{
		displayName = "(BSO) Flak Vest/LBV, rifleman";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};

	class usm_vest_lbv_rmp: usm_vest_LBE_rm
	{
		class ItemInfo;
	};		
	
	class bso_lbv_plate_rifle_p_v: usm_vest_lbv_rmp
	{
		displayName = "(BSO) Flak Vest/LBV, rifleman w/pistol";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};
	
	class usm_vest_lbv_gr: usm_vest_LBE_rm
	{
		class ItemInfo;
	};	
	
	class bso_lbv_plate_gren_v: usm_vest_lbv_gr
	{
		displayName = "(BSO) Flak Vest/LBV, grenadier";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};

	class usm_vest_lbv_mg: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply300"; // fixes an issue where arma doesn't recognise 280, seems to be a mistake
		};
	};		
	
	class bso_lbv_plate_mg_v: usm_vest_lbv_mg
	{
		displayName = "(BSO) Flak Vest/LBV, machinegunner";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};	
	
	class OTK_L_Chestrig_Khaki1: Vest_Camo_Base
	{
		class ItemInfo;
	};	
	
	class OTK_M_Chestrig_Khaki1: Vest_Camo_Base
	{
		class ItemInfo;
	};		
		

	


	class bso_chestrig_P_khaki1: OTK_L_Chestrig_Khaki1	
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Khaki 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	
	class bso_chestrig2_P_Khaki1: OTK_M_Chestrig_Khaki1
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Khaki 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};			

	
	
	
	
	
	
	class OTK_L_Chestrig_Khaki2: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_khaki2: OTK_L_Chestrig_Khaki2
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Khaki 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Khaki2: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_khaki2: OTK_M_Chestrig_Khaki2
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Khaki 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	

//	Khaki 3
	
	class OTK_L_Chestrig_Khaki3: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_khaki3: OTK_L_Chestrig_Khaki3
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Khaki 3)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Khaki3: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_khaki3: OTK_M_Chestrig_Khaki3
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Khaki 3)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
		
	
	
// olive 1

	class OTK_L_Chestrig_Olive1: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_olv1: OTK_L_Chestrig_Olive1
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Olive 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Olive1: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_olv1: OTK_M_Chestrig_Olive1
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Olive 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
		
	
	
// Olive 2	
	
	class OTK_L_Chestrig_Olive2: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_olv2: OTK_L_Chestrig_Olive2
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Olive 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Olive2: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_olv2: OTK_M_Chestrig_Olive2
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Olive 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
		
	
	
// Black

	class OTK_L_Chestrig_Black: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_blk: OTK_L_Chestrig_Black
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Black)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Black: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_blk: OTK_M_Chestrig_Black
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Black)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
		
	
// Grey

	class OTK_L_Chestrig_Grey: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_gry: OTK_L_Chestrig_Grey
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Grey)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Grey: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_gry: OTK_M_Chestrig_Grey
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Grey)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
		
	
	
// Winter

	
	class OTK_L_Chestrig_Winter: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_winter: OTK_L_Chestrig_Winter
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Winter)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Winter: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_winter: OTK_M_Chestrig_Winter
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Winter)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
		
	
// VSR 1

	class OTK_L_Chestrig_VSR1: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_vsr1: OTK_L_Chestrig_VSR1
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, VSR 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_VSR1: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_vsr1: OTK_M_Chestrig_VSR1
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, VSR 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
		
	
// VSR 2	
	
	class OTK_L_Chestrig_VSR2: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_vsr2: OTK_L_Chestrig_VSR2
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, VSR 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_VSR2: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_vsr2: OTK_M_Chestrig_VSR2
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, VSR 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		


	// Flora 1

	class OTK_L_Chestrig_Flora1: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_flora1: OTK_L_Chestrig_Flora1
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Flora 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Flora1: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_flora1: OTK_M_Chestrig_Flora1
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Flora 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	


// FLora 2

	class OTK_L_Chestrig_Flora2: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_flora2: OTK_L_Chestrig_Flora2
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Flora 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Flora2: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_flora2: OTK_M_Chestrig_Flora2
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Flora 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	

// EMR 1


	class OTK_L_Chestrig_EMR1: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_emr1: OTK_L_Chestrig_EMR1
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, EMR 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_EMR1: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_emr1: OTK_M_Chestrig_EMR1
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, EMR 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	

// EMR 2

	class OTK_L_Chestrig_EMR2: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_emr2: OTK_L_Chestrig_EMR2
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, EMR 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_EMR2: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_emr2: OTK_M_Chestrig_EMR2
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, EMR 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	


// EMR 3


	class OTK_L_Chestrig_EMR3: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_emr3: OTK_L_Chestrig_EMR3
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, EMR 3)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_EMR3: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_emr3: OTK_M_Chestrig_EMR3
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, EMR 3)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	

// ATACS

	class OTK_L_Chestrig_ATACS: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_atacs: OTK_L_Chestrig_ATACS
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, ATACS)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_ATACS: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_atacs: OTK_M_Chestrig_ATACS
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, ATACS)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	
// TTSKO
	
	
	class OTK_L_Chestrig_TTSKO: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_ttsko: OTK_L_Chestrig_TTSKO
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, ttsko)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_TTSKO: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_ttsko: OTK_M_Chestrig_TTSKO
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, ttsko)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	

// Woodland


	class OTK_L_Chestrig_Woodland: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_woodland: OTK_L_Chestrig_Woodland
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Woodland)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Woodland: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_woodland: OTK_M_Chestrig_Woodland
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Woodland)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	

// multicam	
	
	
	
	class OTK_L_Chestrig_Multicam: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_multi: OTK_L_Chestrig_Multicam
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Multicam)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Multicam: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_multi: OTK_M_Chestrig_Multicam
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Multicam)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	

	
// Marpat W

	
	class OTK_L_Chestrig_MARPAT_W: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_marpat_w: OTK_L_Chestrig_MARPAT_W
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, MARPAT W)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_MARPAT_W: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_marpat_w: OTK_M_Chestrig_MARPAT_W
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, MARPAT W)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
		
	
// MARPAT D


	class OTK_L_Chestrig_MARPAT_D: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_marpat_d: OTK_L_Chestrig_MARPAT_D
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, MARPAT D)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_MARPAT_D: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_marpat_d: OTK_M_Chestrig_MARPAT_D
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, MARPAT D)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	

// ucp	
	
	class OTK_L_Chestrig_UCP: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_ucp: OTK_L_Chestrig_UCP
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, UCP)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_UCP: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_ucp: OTK_M_Chestrig_UCP
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, UCP)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	



// Flecktarn


	class OTK_L_Chestrig_Flecktarn: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_flecktarn: OTK_L_Chestrig_Flecktarn
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Flecktarn)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Flecktarn: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_flecktarn: OTK_M_Chestrig_Flecktarn
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Flecktarn)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	

//ERDL


	class OTK_L_Chestrig_ERDL: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_erdl: OTK_L_Chestrig_ERDL
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, ERDL)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_ERDL: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_erdl: OTK_M_Chestrig_ERDL
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, ERDL)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	
	
// RACS	
	
	
	
	class OTK_L_Chestrig_Racs: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_racs: OTK_L_Chestrig_Racs
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, RACS)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Racs: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_racs: OTK_M_Chestrig_Racs
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, RACS)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
		
	

// Classic 1


	class OTK_L_Chestrig_Classic1: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_classic1: OTK_L_Chestrig_Classic1
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Classic 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Classic1: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_classic1: OTK_M_Chestrig_Classic1
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Classic 1)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	


// Classic 2


	class OTK_L_Chestrig_Classic2: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_classic2: OTK_L_Chestrig_Classic2
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Classic 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Classic2: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_classic2: OTK_M_Chestrig_Classic2
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Classic 2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	

	
// Classic 3	
	
	
	class OTK_L_Chestrig_Classic3: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_classsic3: OTK_L_Chestrig_Classic3
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Classic 3)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Classic3: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_classic3: OTK_M_Chestrig_Classic3
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Classic 3)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	
	
// Classic 4


	class OTK_L_Chestrig_Classic4: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_classic4: OTK_L_Chestrig_Classic4
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Classic 4)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Classic4: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_classic4: OTK_M_Chestrig_Classic4
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Classic 4)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	


// Spec


	class OTK_L_Chestrig_Spec: OTK_L_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig_P_epec: OTK_L_Chestrig_Spec
	{
		displayName = "(BSO) M23-1 Pioneer (Plate, Special)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};	
	
	class OTK_M_Chestrig_Spec: OTK_M_Chestrig_Khaki1
	{
		class ItemInfo;
	};		
	class bso_chestrig2_P_spec: OTK_M_Chestrig_Spec
	{
		displayName = "(BSO) M23-2 Pioneer (Plate, Special)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
			};			
		};		
	};		
	



};	