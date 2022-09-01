class rhs_weap_kar98k_Base_F: Rifle_Base_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	
class rhs_weap_m38_Base_F: Rifle_Base_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	
	
	class rhs_weap_m70_base: Rifle_Base_F
	{	
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 5;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			//textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
	};

	class rhs_weap_savz58_base: Rifle_Base_F
	{	
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 5;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			//textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
	};

	class SMG_01_F;
	class rhs_weap_savz61: SMG_01_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		modes[] = {"Single","FullAuto","AI_Burst_close"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 20;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};	
	};	
	
	
	class rhs_weap_M1garand_Base_F: Rifle_Base_F
	{
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		modes[] = {"Single","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 200;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
		};		
	};	
	
	
	class rhs_weap_MP44_base: Rifle_Base_F
	{	
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 5;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			//textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
	};	
	
		class rhs_weap_vhs2_base: Rifle_Base_F
	{	
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 5;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			//textureType = "dual";
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
	};	


	class rhs_weap_m3a1_base: Rifle_Short_Base_F
	{
		modes[] = {"FullAuto","AI_Burst_close","AI_Burst_far"};

		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 5;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 300;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};		
		
	};	