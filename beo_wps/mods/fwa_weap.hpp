class sp_fwa_rifle_base;
class sp_fwa_rifle_762_base: sp_fwa_rifle_base
{
	class Single;
	//class SemiAuto;
	class fullauto_medium;
	class FullAutoSlow;
	class single_close_optics1;
	class FullAuto;
	class Eventhandlers;
	class single_far_optics1;
	class single_medium_optics1;
};
class sp_fwa_ar10: sp_fwa_rifle_762_base
{
	//changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m16\firemode.ogg",2.5,1,5};
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};	
	class single_close_optics1: single_close_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
};

class sp_fwa_bren_base: sp_fwa_rifle_762_base
{
	//changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m16\firemode.ogg",2.5,1,5};
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};	
	class single_close_optics1: single_close_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
};
class sp_fwa_rifle_556_base: sp_fwa_rifle_base
{
	class Single;
	class single_medium_optics1;
	class single_medium_optics2;
	class FullAuto;
	class fullauto_medium;
};
class sp_fwa_ar15_base: sp_fwa_rifle_556_base
{
	//changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m16\firemode.ogg",2.5,1,5};
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m16a4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m16a4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class single_medium_optics2: single_medium_optics2
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m16a4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m16a4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m16a4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
};

class sp_fwa_car15_base: sp_fwa_ar15_base
{
	//changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m16\firemode.ogg",2.5,1,5};
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class single_medium_optics2: single_medium_optics2
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
};
class sp_fwa_ruger_mini14_base: sp_fwa_rifle_556_base
{
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class single_medium_optics2: single_medium_optics2
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
};

class sp_fwa_m1carbine_base: sp_fwa_rifle_556_base
{
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class single_medium_optics2: single_medium_optics2
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
};
/*
class GrenadeLauncher;
class UGL_F: GrenadeLauncher
{
	class Single;
};
class sp_fwa_m203: UGL_F
{
	scope = 1;
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"vn_ugl_shot_soundset","vn_ugl_launcher_tails_soundset","vn_basic_trigger_reset_soundset"};
		};
	};
};

class arifle_SPAR_01_GL_base_F;
class sp_fwa_ar15_base: arifle_SPAR_01_GL_base_F
{
	class Single;
	class single_medium_optics1;
	class single_medium_optics2;
	class FullAuto;
	class fullauto_medium;
};
class sp_fwa_ar15_gl_base: sp_fwa_ar15_base
{
	//changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m16\firemode.ogg",2.5,1,5};
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class single_medium_optics2: single_medium_optics2
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
		};
	};
};
class sp_fwa_car15_base: sp_fwa_ar15_base
{
	//changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m16\firemode.ogg",2.5,1,5};
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
		};
	};
	class single_medium_optics2: single_medium_optics2
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
		};
	};
};

*/
class sp_fwa_ar18_base: sp_fwa_rifle_556_base
{
	//changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m63a\firemode.ogg",2.5,1,5};
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class single_medium_optics2: single_medium_optics2
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
		};
	};
};
class sp_fwa_rifle_boltaction_762_base: sp_fwa_rifle_762_base
{
	class Single;
	class single_close_optics1;
	class single_medium_optics1;
	class single_far_optics1;
};
class sp_fwa_enfield_no4: sp_fwa_rifle_boltaction_762_base
{
	class Single: Single
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
};
class sp_fwa_kar_98k: sp_fwa_rifle_boltaction_762_base
{
	class Single: Single
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
};

class sp_fwa_m38_carcano: sp_fwa_rifle_boltaction_762_base
{
	class Single: Single
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
};

class sp_fwa_m1903: sp_fwa_rifle_boltaction_762_base
{
	class Single: Single
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class StandardSound
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
};
class sp_fwa_fal_base: sp_fwa_rifle_762_base
{
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_fnfal_shot_soundset","jsrs_7x62mm_reverb_soundset"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_fnfal_shot_soundset","jsrs_7x62mm_reverb_soundset"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_fnfal_shot_soundset","jsrs_7x62mm_reverb_soundset"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_fnfal_shot_soundset","jsrs_7x62mm_reverb_soundset"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_fnfal_shot_soundset","jsrs_7x62mm_reverb_soundset"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_fnfal_shot_soundset","jsrs_7x62mm_reverb_soundset"};
		};
	};
};

class sp_fwa_fm2429_base: sp_fwa_rifle_762_base
{
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_fnfal_shot_soundset","jsrs_7x62mm_reverb_soundset"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_fnfal_shot_soundset","jsrs_7x62mm_reverb_soundset"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_fnfal_shot_soundset","jsrs_7x62mm_reverb_soundset"};
		};
	};
};
class sp_fwa_sig510_base: sp_fwa_rifle_762_base
{
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_fnfal_Shot_SoundSet","RHSGREF_mmg1_Tail_SoundSet"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_fnfal_Shot_SoundSet","RHSGREF_mmg1_Tail_SoundSet"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_fnfal_Shot_SoundSet","RHSGREF_mmg1_Tail_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_fnfal_Shot_SoundSet","RHSGREF_mmg1_Tail_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_fnfal_Shot_SoundSet","RHSGREF_mmg1_Tail_SoundSet"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_fnfal_Shot_SoundSet","RHSGREF_mmg1_Tail_SoundSet"};
		};
	};
};
/*
class Pistol_Base_F;
class hgun_Rook40_F: Pistol_Base_F
{
	class Single;
};
class sp_fwa_l9a1_hipower: hgun_Rook40_F
{
	class Single: Single
	{
		sounds[] = {"standardsound","silencedsound"};
		class BaseSoundModeType;
		class standardsound: BaseSoundModeType
		{
			soundsetshot[] = {"vn_highpower_shot_soundset","vn_9mm_pistol_tails_soundset","vn_m1911_pistol_trigger_reset_soundset"};
		};
		class silencedsound: BaseSoundModeType
		{
			soundsetshot[] = {"vn_m1911_shot_silenced_soundset","vn_cal45_pistol_silenced_tails_soundset","vn_m1911_pistol_trigger_reset_soundset"};
		};
	};
};
*/
//class LMG_Zafir_f;
class sp_fwa_machinegun_base: LMG_Zafir_f
{
	class StandardSound;
	class FullAuto;
	class ai_FullAuto_close;
	class ai_FullAuto_short;
	class ai_FullAuto_medium;
	class ai_FullAuto_far;
};
class sp_fwa_m60: sp_fwa_machinegun_base
{
	class FullAuto: FullAuto
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","jsrs_mg_chain_clipper_soundset","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_close: ai_FullAuto_close
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","jsrs_mg_chain_clipper_soundset","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_short: ai_FullAuto_short
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","jsrs_mg_chain_clipper_soundset","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_medium: ai_FullAuto_medium
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","jsrs_mg_chain_clipper_soundset","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_far: ai_FullAuto_far
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","jsrs_mg_chain_clipper_soundset","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
};
class sp_fwa_mag58: sp_fwa_machinegun_base
{
	class FullAuto: FullAuto
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet","RHSUSF_rifle_med_Tail_SoundSet","RHSUSF_m240_stereoLayer_SoundSet"};
		};
	};
	class ai_FullAuto_close: ai_FullAuto_close
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet","RHSUSF_rifle_med_Tail_SoundSet","RHSUSF_m240_stereoLayer_SoundSet"};
		};
	};
	class ai_FullAuto_short: ai_FullAuto_short
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet","RHSUSF_rifle_med_Tail_SoundSet","RHSUSF_m240_stereoLayer_SoundSet"};
		};
	};
	class ai_FullAuto_medium: ai_FullAuto_medium
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet","RHSUSF_rifle_med_Tail_SoundSet","RHSUSF_m240_stereoLayer_SoundSet"};
		};
	};
	class ai_FullAuto_far: ai_FullAuto_far
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet","RHSUSF_rifle_med_Tail_SoundSet","RHSUSF_m240_stereoLayer_SoundSet"};
		};
	};
};
class sp_fwa_aa52: sp_fwa_machinegun_base
{
	class FullAuto: FullAuto
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_close: ai_FullAuto_close
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_short: ai_FullAuto_short
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_medium: ai_FullAuto_medium
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_far: ai_FullAuto_far
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
};

class sp_fwa_m1919a4_browning: sp_fwa_machinegun_base
{
	class FullAuto: FullAuto
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_close: ai_FullAuto_close
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_short: ai_FullAuto_short
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_medium: ai_FullAuto_medium
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_far: ai_FullAuto_far
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSUSF_M240_Shot_SoundSet","RHSUSF_MMG1_Tail_SoundSet"};
		};
	};
};
class sp_fwa_mg4259: sp_fwa_machinegun_base
{
	class FullAuto: FullAuto
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSGREF_MG42_delayed_Shot_SoundSet","RHSGREF_MMG1_delayed_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_close: ai_FullAuto_close
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSGREF_MG42_delayed_Shot_SoundSet","RHSGREF_MMG1_delayed_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_short: ai_FullAuto_short
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSGREF_MG42_delayed_Shot_SoundSet","RHSGREF_MMG1_delayed_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_medium: ai_FullAuto_medium
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSGREF_MG42_delayed_Shot_SoundSet","RHSGREF_MMG1_delayed_Tail_SoundSet"};
		};
	};
	class ai_FullAuto_far: ai_FullAuto_far
	{
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"RHSGREF_MG42_delayed_Shot_SoundSet","RHSGREF_MMG1_delayed_Tail_SoundSet"};
		};
	};
};

class sp_fwa_mas_base: sp_fwa_rifle_762_base
{
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_SCARH_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_SCARH_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_SCARH_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_SCARH_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet"};
		};
	};
};
class sp_fwa_m14_base: sp_fwa_rifle_762_base
{
	//changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m14\firemode.ogg",2.5,1,5};
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
};
class sp_fwa_garand_base: sp_fwa_rifle_762_base
{
	//changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m14\firemode.ogg",2.5,1,5};
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
};
class sp_fwa_m1918a2_bar: sp_fwa_rifle_762_base
{
	//modes[] = {"FullAutoSlow","FullAuto","fullauto_close","fullauto_medium","fullauto_far"};	
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};
	};
	// had to rip this manually, because fuck arma
	class FullAutoSlow: FullAuto 
	{
		reloadTime = 0.17;
		dispersion = 0.0007;
		textureType = "burst";
		displayName = "Slow Auto";
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_mk14_shot_soundset","jsrs_9x3mm_reverb_soundset"};
		};			
	};	
};
class sp_fwa_bm59_base: sp_fwa_rifle_762_base
{
	//changefiremodesound[] = {"\vn\sounds_f_vietnam\weapons\rifles\m14\firemode.ogg",2.5,1,5};
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_m1_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_m1_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_m1_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_m1_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_m1_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"RHSGREF_m1_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
};
class sp_fwa_smg_9mm_base: sp_fwa_rifle_base
{
	class SemiAuto;
	class FullAuto;
	class Burst;
	class BurstMid;
};
class sp_fwa_smg_mat49: sp_fwa_smg_9mm_base
{
	class Burst: Burst
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
		};
	};
	class BurstMid: BurstMid
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
		};
	};
};
class sp_fwa_smg_sterling: sp_fwa_smg_9mm_base
{
	class SemiAuto: SemiAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class Burst: Burst
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class BurstMid: BurstMid
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
};

class sp_fwa_smg_sten_mk2: sp_fwa_smg_9mm_base
{
	class SemiAuto: SemiAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class Burst: Burst
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class BurstMid: BurstMid
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
};
class sp_fwa_smg_thompson_m1a1: sp_fwa_smg_9mm_base
{
	//modes[] = {"SemiAuto","Fullauto","Burst","BurstMid"};
	class SemiAuto: SemiAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class Burst: Burst
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class BurstMid: BurstMid
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
};

class sp_fwa_smg_portsaid_m45: sp_fwa_smg_9mm_base
{
	//modes[] = {"FullAuto","Burst","BurstMid"};
	class SemiAuto: SemiAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_pp2000_shot_soundset","jsrs_9mm_reverb_soundset"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"jsrs_sting9_shot_silenced_soundset","jsrs_9mm_sd_reverb_soundset"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_pp2000_shot_soundset","jsrs_9mm_reverb_soundset"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"jsrs_sting9_shot_silenced_soundset","jsrs_9mm_sd_reverb_soundset"};
		};
	};
	class Burst: Burst
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_pp2000_shot_soundset","jsrs_9mm_reverb_soundset"};
		};
	};
	class BurstMid: BurstMid
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_pp2000_shot_soundset","jsrs_9mm_reverb_soundset"};
		};
	};
};
class sp_fwa_smg_m3a1: sp_fwa_smg_9mm_base
{
	//modes[] = {"Fullauto","Burst","BurstMid"};

	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_pp2000_shot_soundset","jsrs_9mm_reverb_soundset"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"jsrs_sting9_shot_silenced_soundset","jsrs_9mm_sd_reverb_soundset"};
		};
	};
	class Burst: Burst
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_pp2000_shot_soundset","jsrs_9mm_reverb_soundset"};
		};
	};
	class BurstMid: BurstMid
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_pp2000_shot_soundset","jsrs_9mm_reverb_soundset"};
		};
	};
};
class sp_fwa_smg_carlg_m45: sp_fwa_smg_9mm_base
{
	//modes[] = {"SemiAuto","Fullauto","Burst","BurstMid"};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_pp2000_shot_soundset","jsrs_9mm_reverb_soundset"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"jsrs_sting9_shot_silenced_soundset","jsrs_9mm_sd_reverb_soundset"};
		};
	};
	class Burst: Burst
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_pp2000_shot_soundset","jsrs_9mm_reverb_soundset"};
		};
	};
	class BurstMid: BurstMid
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"jsrs_pp2000_shot_soundset","jsrs_9mm_reverb_soundset"};
		};
	};
};
class sp_fwa_smg_mp40: sp_fwa_smg_9mm_base
{
	//modes[] = {"FullAuto","Burst","BurstMid"};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			SoundSetShot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class Burst: Burst
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
	class BurstMid: BurstMid
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSUSF_mp7_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_mp7_stereoLayer_SoundSet"};
		};
	};
};
class sp_fwa_fn49_base: sp_fwa_rifle_762_base
{
	class Single: Single
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_close_optics1: single_close_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_far_optics1: single_far_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class single_medium_optics1: single_medium_optics1
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
	class fullauto_medium: fullauto_medium
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundsetshot[] = {"RHSGREF_nagant_Shot_SoundSet","RHSGREF_rifle2_Tail_SoundSet"};
		};
	};
};
