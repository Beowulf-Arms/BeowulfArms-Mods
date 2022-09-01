
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
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
			textureType = "dual";
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
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F{};
	class rhs_weap_asval: rhs_weap_ak74m
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: FullAuto
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
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 120;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
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
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class rhs_weap_ak105: rhs_weap_ak74m
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: FullAuto
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
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 120;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
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
	class rhs_weap_akm: rhs_weap_ak74m
	{
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
			textureType = "dual";
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
	class rhs_weap_ak103_base: rhs_weap_akm
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Single
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
		class FullAuto: FullAuto
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
			textureType = "dual";
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
	
	class rhs_weap_ak104: rhs_weap_ak103_base
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: FullAuto
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
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 120;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
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
/*	
	class rhs_weap_ak103_1: rhs_weap_ak103_base
	{
		modes[] = {"SemiAuto","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: FullAuto
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
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
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
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
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
	class rhs_weap_ak103_2: rhs_weap_ak103_base
	{
		modes[] = {"Single","Burst3","FullAuto","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2","AI_far"};
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
		class FullAuto: FullAuto
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
			textureType = "dual";
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
	
*/	
	class rhs_weap_ak74: rhs_weap_ak74m{};
	class rhs_weap_aks74: rhs_weap_ak74{};
	class rhs_weap_aks74u: rhs_weap_aks74
	{
		modes[] = {"Single","FullAuto","AI_Burst_close","AI_Single_optics1","AI_Single_optics2","AI_far"};
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class FullAuto: FullAuto
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
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 120;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
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
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class rhs_weap_svd: rhs_weap_ak74m
	{
		modes[] = {"SemiAuto","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 15;
			minRangeProbab = 0.8;
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
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class rhs_weap_svdp: rhs_weap_svd
	{
		modes[] = {"SemiAuto","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 15;
			minRangeProbab = 0.8;
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
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
		};
		class SemiAuto: Single
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
/*	
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		class Single;
		class FullAuto;
	};
	class hgun_PDW2000_F: pdw2000_base_F{};
*/	
	class hgun_PDW2000_F: pdw2000_base_F{};
	class rhs_weap_pp2000: hgun_PDW2000_F
	{
		modes[] = {"Single","FullAuto","AI_Burst_close"};
		class Single: Single
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
		class FullAuto: FullAuto
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
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.5;
			maxRange = 60;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
	class rhs_weap_pya: hgun_Rook40_F
	{
		aiRateOfFire = 1;
		aiRateOfFireDistance = 100;
		aiRateOfFireDispersion = 1;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.05;
		maxRange = 70;
		maxRangeProbab = 0.01;
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class rhs_weap_makarov_pm: rhs_weap_pya
	{
		aiRateOfFire = 1;
		aiRateOfFireDistance = 100;
		aiRateOfFireDispersion = 1;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.05;
		maxRange = 70;
		maxRangeProbab = 0.01;
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		modes[] = {"FullAuto","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 16;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};
	class rhs_weap_pkp: rhs_pkp_base{};
	class rhs_weap_pkm: rhs_weap_pkp
	{
		modes[] = {"manual","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar"};
		class manual: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: manual
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 16;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: manual
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
/*	 // sound is broken post 20/4/2021 RHS
	class rhs_weap_rpk_base;
	class rhs_weap_rpk74m: rhs_weap_rpk_base
	{
		modes[] = {"manual","Single","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_far_optic1","AI_far_optic2"};
		class manual: Mode_FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_long: manual
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 16;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
			aiDispersionCoefX = 20;
			aiDispersionCoefY = 30;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
	};
*/
	class rhs_weap_orsis_Base_F: Rifle_Base_F
	{
		modes[] = {"Single","AI_Single_optics1","AI_Single_optics2","AI_Single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 3;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 2;
			minRange = 1;
			minRangeProbab = 0.4;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 15;
			aiDispersionCoefY = 20;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 15;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 1100;
			aiRateOfFireDispersion = 4;
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
		};
		class AI_Single_far_optics2: AI_Single_optics2
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1500;
			aiRateOfFireDispersion = 5;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 2500;
			maxRangeProbab = 0.1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
		};
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 20;
	};