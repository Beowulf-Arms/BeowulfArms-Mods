class CfgPatches {
	class beo_mbg_killhouses {
		units[] = {};
		weapons[] = {};
		requireVersion = 0.1;
		requiredAddons[] = {"mbg_killhouses_a3"};
	};
};

class CfgEditorCategories {
	class MBG_Killhouses {
		displayName = "MBG Killhouses";
	};
};

class CfgVehicles {
	/*extern*/ class Land_MBG_Killhouse_1;
	/*extern*/ class Land_MBG_Killhouse_2;
	/*extern*/ class Land_MBG_Killhouse_3;
	/*extern*/ class Land_MBG_Killhouse_4;
	/*extern*/ class Land_MBG_Killhouse_5;
	/*extern*/ class Land_MBG_Warehouse;
	/*extern*/ class Land_MBG_Cinderwall_5;
	/*extern*/ class Land_MBG_Cinderwall_5_Corner;
	/*extern*/ class Land_MBG_Cinderwall_2p5;
	/*extern*/ class Land_mbg_cinderwall_5_low;
	/*extern*/ class Land_MBG_Cinderwall_5_WoodDoor;
	/*extern*/ class Land_MBG_Cinderwall_5_SteelDoor;
	/*extern*/ class Land_MBG_Cinderwall_5_Gate;

	class MBG_Killhouse_1_InEditor: Land_MBG_Killhouse_1 {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Killhouse, Small";
	};
	class MBG_Killhouse_2_InEditor: Land_MBG_Killhouse_2 {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Killhouse, Medium";
	};
	class MBG_Killhouse_3_InEditor: Land_MBG_Killhouse_3 {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Killhouse, Big #1";
	};
	class MBG_Killhouse_4_InEditor: Land_MBG_Killhouse_4 {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Killhouse, Big #2";
	};
	class MBG_Killhouse_5_InEditor: Land_MBG_Killhouse_5 {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Killhouse, Big #3";
	};
	class MBG_Warehouse_InEditor: Land_MBG_Warehouse {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Warehouse";
	};
	class MBG_Cinderwall_5_InEditor: Land_MBG_Cinderwall_5 {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Cinderwall, 5m";
	};
	class MBG_Cinderwall_5_Corner_InEditor: Land_MBG_Cinderwall_5_Corner {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Cinderwall, Corner";
	};
	class MBG_Cinderwall_2p5_InEditor: Land_MBG_Cinderwall_2p5 {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Cinderwall, 2.5m";
	};
	class mbg_cinderwall_5_low_InEditor: Land_mbg_cinderwall_5_low {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Cinderwall, Low";
	};
	class MBG_Cinderwall_5_WoodDoor_InEditor: Land_MBG_Cinderwall_5_WoodDoor {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Cinderwall, Wooden Door";
	};
	class MBG_Cinderwall_5_SteelDoor_InEditor: Land_MBG_Cinderwall_5_SteelDoor {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Cinderwall, Steel Door";
	};
	class MBG_Cinderwall_5_Gate_InEditor: Land_MBG_Cinderwall_5_Gate {
		scope = 2;
		curatorScope = 2;
		editorCategory = "MBG_Killhouses";
		displayName = "Cinderwall, Gate";
	};
};
