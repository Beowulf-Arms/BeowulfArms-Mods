

//Class beo_obj : config.bin{

class DefaultEventhandlers;
class CfgPatches
{
	class beo_obj
	{
		units[] = {
		"C_beo_HVT",
		"C_beo_HVT_ba",
		"C_beo_HVT_ba_press",
		"C_beo_HVT_tinman"
		
		};
		requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Characters_F_Common","A3_Characters_F_Heads","rhs_c_troops","rhs_c_trucks","rhs_c_weapons","rhsusf_c_weapons","rhs_c_a2port_car","rhs_c_a2port_armor","rhs_c_a2port_air"};
		version = "1.0";
		requiredVersion = "1.0";
		versionDesc = "Beowulf Objectives";
		author = "Walker";
	};
};

class CfgFactionClasses
{
	class CIV_F;
	class beo_obj: CIV_F
	{
		displayName = "[BEO] Objectives";
		priority = 2;
		side = 3;
		//flag = "\beo_mc\data\flag_chdkz_co.paa";
		//icon = "\beo_mc\data\icon_chdkz_co.paa";	
		author = "Walker";
	};
};

class cfgVehicleClasses
{
	class beo_hvts
	{
		displayName = "HVTs";
	};	
	class beo_items
	{
		displayName = "Items";
	};	
	
};	

class CfgEditorcategories
{
	class beo_objs
	{
		displayName = "BEO Objectives";
	};	
};	
class CfgEditorSubcategories
{
	class beo_hvts
	{
		displayName = "HVTs";
	};
	class beo_items
	{
		displayName = "Items";
	};	
};	


class cfgVehicles
{

	class C_journalist_F;

	class C_beo_HVT: C_journalist_F
	{
		scope = 2;
		faction = "beo_obj";
		author = "Walker";
		_generalMacro = "C_beo_HVT";
		displayName = "HVT";
		icon = "iconManLeader";
		vehicleClass = "beo_hvts";
		editorSubcategory = "beo_hvts";			
		items[] = {"FirstAidKit"};
		magazines[] = {};
		linkeditems[] = {"G_Spectacles", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"Throw", "Put"};
		respawnitems[] = {"FirstAidKit"};
		respawnlinkeditems[] = {"G_Spectacles", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnmagazines[] = {};
		respawnweapons[] = {"Throw", "Put"};
		uniformclass = "UK3CB_CHC_C_U_POLITIC_02";
	};	
	
	class C_beo_HVT_ba: C_beo_HVT
	{
		scope = 2;
		author = "Walker";
		_generalMacro = "C_beo_HVT_ba";
		displayName = "HVT (Body Armour)";
		vehicleClass = "beo_hvts";
		editorSubcategory = "beo_hvts";	
		items[] = {"FirstAidKit"};
		magazines[] = {};
		linkeditems[] = {"UK3CB_CPD_B_V_6b23_ml_BLU", "rhssaf_helmet_m97_olive_nocamo", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"Throw", "Put"};
		respawnitems[] = {"FirstAidKit"};
		respawnlinkeditems[] = {"UK3CB_CPD_B_V_6b23_ml_BLU", "rhssaf_helmet_m97_olive_nocamo", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnmagazines[] = {};
		respawnweapons[] = {"Throw", "Put"};
		uniformclass = "U_Marshal";
	};	
	

	class C_beo_HVT_ba_press: C_beo_HVT
	{
		scope = 2;
		author = "Walker";
		_generalMacro = "C_beo_HVT_ba_press";
		displayName = "Press HVT (Body Armour)";
		vehicleClass = "beo_hvts";
		editorSubcategory = "beo_hvts";	
		items[] = {"FirstAidKit"};
		magazines[] = {};
		linkeditems[] = {"V_Press_F", "rhsgref_helmet_pasgt_press", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"Throw", "Put"};
		respawnitems[] = {"FirstAidKit"};
		respawnlinkeditems[] = {"V_Press_F", "rhsgref_helmet_pasgt_press", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnmagazines[] = {};
		respawnweapons[] = {"Throw", "Put"};
		uniformclass = "U_C_Journalist";
	};	
	
	
	class C_beo_HVT_tinman: C_beo_HVT
	{
		scope = 2;
		author = "Walker";
		_generalMacro = "C_beo_HVT_tinman";
		displayName = "Tin Man";
		vehicleClass = "beo_hvts";
		editorSubcategory = "beo_hvts";	
		items[] = {"FirstAidKit"};
		magazines[] = {};
		linkeditems[] = {"H_Hat_Tinfoil_F", "G_Sport_Greenblack", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"Throw", "Put"};
		respawnitems[] = {"FirstAidKit"};
		respawnlinkeditems[] = {"H_Hat_Tinfoil_F", "G_Sport_Greenblack", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnmagazines[] = {};
		respawnweapons[] = {"Throw", "Put"};
		uniformclass = "U_I_L_Uniform_01_tshirt_black_F";
		identityTypes[] =  {"LanguageENG_F","Head_NATO"};	
	};		
	

	class Item_Base_F;
	class beo_Item_Land_docs_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Documents";
		author = "Walker";
		model = "\A3\Structures_F\Items\Documents\File1_F.p3d";
		vehicleClass = "beo_items";
		editorCategory = "beo_objs";
		editorSubcategory = "beo_items";
		class TransportItems
		{
			class beo_Land_docs_F
			{
				name = "beo_Land_docs_F";
				count = 1;
			};
		};
	};
	
	// Make objects destructable again
	
	class Land_Barricade_01_4m_F;
	class beo_obj_barricade_4m: Land_Barricade_01_4m_F
	{
		scope = 2;
		scopeCurator = 2;
		_generalMacro = "beo_obj_barricade_4m";
		displayName = "[BEO] Destroyable Junk Barricade (4 m)";
		armor = 200; //2000
		destrType = "DestructTent";
	};
	
	class Land_Barricade_01_10m_F;
	class beo_obj_barricade_10m: Land_Barricade_01_10m_F
	{
		scope = 2;
		scopeCurator = 2;
		_generalMacro = "beo_obj_barricade_10m";
		displayName = "[BEO] Destroyable Junk Barricade (10 m)";
		armor = 400; //2000
		destrType = "DestructTent"; // "DestructNo" = default, nothing happens.  "DestructDefault" works well! "DestructTent" goes flat
	};	
	
	class Box_FIA_Ammo_F;
	class beo_obj_cache: Box_FIA_Ammo_F
	{	
		scope = 2;
		scopeCurator = 2;
		_generalMacro = "beo_obj_cache";
		displayName = "[BEO] Empty Cache";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		maximumLoad = 1000000000;
		transportMaxWeapons = 1000000000;
		transportMaxMagazines = 1000000000;
		transportMaxBackpacks = 1000000000;
	};
	
};	



class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	
	class beo_Land_docs_F: ItemCore
	{
		author = "Walker";
		displayName = "Documents";
		model = "\A3\Structures_F\Items\Documents\File1_F.p3d";
		scope = 2;
		scopeCurator = 2;
		simulation = "ItemMineDetector";
		picture = "\beo_obj\data\docs.paa";
		descriptionShort = "A set of documents";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 25;
		};
	};	
	
};