	class UK3CB_ACR_base: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class UK3CB_ACR_Crew: UK3CB_ACR_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class uk3cb_ak47_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	}; 
	class uk3cb_ak47: uk3cb_ak47_base
	{
		class Single: Single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class FullAuto: FullAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class UK3CB_RPK: LMG_Zafir_F
	{
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class UK3CB_RPK_74: UK3CB_RPK
	{
		class fullauto: fullauto
		{
            class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_soundset","jsrs_ak74_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: single
		{
            class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_soundset","jsrs_ak74_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
    class rhs_weap_m16a4;
    class rhs_weap_m16a4_carryhandle: rhs_weap_m16a4
    {
		class Single;
		class Burst;
		class SilencedSound;
		class StandardSound;

    };
	class UK3CB_M16A2_Base: rhs_weap_m16a4_carryhandle
	{
		class Single: Single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class Burst: Burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	}; 
	class UK3CB_M16A1_Base: UK3CB_M16A2_Base
	{
		class FullAuto: Mode_FullAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};      
	class UK3CB_M16A3: UK3CB_M16A2_Base
	{
		class FullAuto: Mode_FullAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};  
	class uk3cb_aug_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class uk3cb_auga1: uk3cb_aug_base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class uk3cb_auga1_carb: uk3cb_auga1
	{
		class Single: Single
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class FullAuto: FullAuto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class uk3cb_auga1_hbar: uk3cb_auga1
	{
		class Single: Single
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class FullAuto: FullAuto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class uk3cb_auga1_para: uk3cb_auga1
	{
		class Single: Mode_SemiAuto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_sting9_shot_soundset",
					"jsrs_cal45_reverb_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_smg45_shot_silenced_soundset",
					"jsrs_cal45_sd_reverb_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_sting9_shot_soundset",
					"jsrs_cal45_reverb_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_smg45_shot_silenced_soundset",
					"jsrs_cal45_sd_reverb_soundset"};
			};
		};
	};
	class uk3cb_auga2_para: uk3cb_auga1
	{
		class Single: Mode_SemiAuto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_sting9_shot_soundset",
					"jsrs_cal45_reverb_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_smg45_shot_silenced_soundset",
					"jsrs_cal45_sd_reverb_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_sting9_shot_soundset",
					"jsrs_cal45_reverb_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_smg45_shot_silenced_soundset",
					"jsrs_cal45_sd_reverb_soundset"};
			};
		};
	};
class UK3CB_Bren: LMG_Zafir_F
{

	class Single: Single
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
class rhs_weap_fnfal_base;
class UK3CB_FNFAL_Base: rhs_weap_fnfal_base
{
    class single: mode_semiauto
    {
        sounds[] = {"standardsound","silencedsound"};
        class basesoundmodetype;
        class standardsound: basesoundmodetype
        {
            soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
        };
        class silencedsound: basesoundmodetype
        {
            soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_silenced_soundset","jsrs_fnfal_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
        };
    };
    class fullauto: mode_fullauto
    {
        sounds[] = {"standardsound","silencedsound"};
        class basesoundmodetype;
        class standardsound: basesoundmodetype
        {
            soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
        };
        class silencedsound: basesoundmodetype
        {
            soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_silenced_soundset","jsrs_fnfal_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
        };
    };
};
class UK3CB_FNFAL_OSW: UK3CB_FNFAL_Base
{
    class single: single
    {
        class standardsound: standardsound
        {
            soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
        };
    };
    class fullauto: fullauto
    {
        class standardsound: standardsound
        {
            soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
        };
    };
};
	class UK3CB_G3_Base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_silenced_soundset","jsrs_g3_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_silenced_soundset","jsrs_g3_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class UK3CB_PSG1A1: UK3CB_G3_Base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
		};
	};
	class UK3CB_G3SG1: UK3CB_G3_Base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_silenced_soundset","jsrs_g3_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_silenced_soundset","jsrs_g3_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class UK3CB_G3A3: UK3CB_G3SG1
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
	};
	class UK3CB_G3KA4: UK3CB_G3A3
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
	};

class UK3CB_HK33KA2: UK3CB_G3_Base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};    
	class UK3CB_M14_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_mk14_shot_soundset","jsrs_mk14_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_mk14_shot_silenced_soundset","jsrs_mk14_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_mk14_shot_soundset","jsrs_mk14_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_mk14_shot_silenced_soundset","jsrs_mk14_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
    class SMG_02_base_F;
    class SMG_02_F: SMG_02_base_F
    {
        class Single;
       // class FullAuto;
      //  class Burst;

    };
	class UK3CB_MP5_Base: SMG_02_F
	{
		class Single: Single
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class UK3CB_MP5K_PDW: UK3CB_MP5_Base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class burst: burst
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
	};
	class UK3CB_MP5N: UK3CB_MP5_Base
	{
		class Single: Single
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class UK3CB_MP510: UK3CB_MP5N
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class burst: burst
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
	};
	class UK3CB_MP5SD5: UK3CB_MP5_Base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class Burst: Burst
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};    
	class UK3CB_STGW57_base: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_trg21_shot_soundset","jsrs_trg21_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_trg21_shot_silenced_soundset","jsrs_trg21_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_trg21_shot_soundset","jsrs_trg21_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_trg21_shot_silenced_soundset","jsrs_trg21_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class UK3CB_M1903A1_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_1903_shot_soundset","jsrs_1903_shell_soundset","jsrs_12x7mm_reflector_1"};
			};
		};
		reloadaction = "UK3CB_GestureReloadM1903A1";
	};
    class rhs_weap_XM2010_Base_F;
	class UK3CB_CZ550: rhs_weap_XM2010_Base_F
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fn3011_shot_soundset","jsrs_fn3011_shell_soundset","jsrs_12x7mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fn3011_shot_silenced_soundset","jsrs_fn3011_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class UK3CB_Enfield: rhs_weap_XM2010_Base_F
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fn3011_shot_soundset","jsrs_fn3011_shell_soundset","jsrs_12x7mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fn3011_shot_silenced_soundset","jsrs_fn3011_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};   
	class UK3CB_FAMAS_F1_base: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundSetShot[] = {"jsrs_katiba_shot_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_reverb_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundSetShot[] = {"jsrs_katiba_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_sd_reverb_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundSetShot[] = {"jsrs_katiba_shot_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_reverb_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundSetShot[] = {"jsrs_katiba_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_sd_reverb_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundSetShot[] = {"jsrs_katiba_shot_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_reverb_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundSetShot[] = {"jsrs_katiba_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_sd_reverb_soundset"};
			};
		};
	};  

    class hgun_PDW2000_F;
    class rhs_weap_pp2000: hgun_PDW2000_F
    {
        class FullAuto;
    };
	class uk3cb_ppsh41: rhs_weap_pp2000
	{
		class FullAuto: FullAuto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundSetShot[] = {"jsrs_pdw2000_shot_soundset","jsrs_9mm_reverb_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundSetShot[] = {"jsrs_pdw2000_shot_silenced_soundset","jsrs_9mm_sd_reverb_soundset"};
			};
		};
	};


	class UK3CB_MG42_base: Rifle_Base_F
	{
		class FullAuto;
		class far_optic1;
	};
	class UK3CB_MG3: UK3CB_MG42_base
	{

		class close: FullAuto
		{
			burst=6;
			
			//aiRateOfFireDispersion=0;
			//aiRateOfFire=0.059999999;
			//aiRateOfFire=0;
		};
		class short: close
		{
			burst=8;
		};
		class medium: close
		{
			burst=12;
		};
		class medium_burst: close
		{
			burst=10;
		};
		class far: close
		{
			burst=12;
		};
		class far_optic2: far_optic1
		{
			burst=12;
		};


	};


	class UK3CB_M60_base: Rifle_Base_F
	{
		class FullAuto;
		class far_optic1;
	};
	class UK3CB_M60: UK3CB_M60_base
	{
		class close: FullAuto
		{
			burst=4;
			//aiRateOfFireDispersion=0;
			//aiRateOfFire=0.059999999;
			//aiRateOfFire=0;
		};
		class short: close
		{
			burst=6;
		};
		class medium: close
		{
			burst=10;
		};
		class medium_burst: close
		{
			burst=8;
		};
		class far: close
		{
			burst=10;
		};
		class far_optic2: far_optic1
		{
			burst=10;
		};
	};






class UK3CB_G36_base: rifle_base_f
{
	class single: mode_semiauto
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
	class burst: mode_burst
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
	class fullauto: mode_fullauto
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
};
class UK3CB_G36A1: UK3CB_G36_base
{
	class single: mode_semiauto
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
	class burst: mode_burst
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
	class fullauto: mode_fullauto
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
};
class UK3CB_G36A1_K: UK3CB_G36A1
{
	class single: single
	{
		class standardsound: standardsound
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
	};
	class burst: burst
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
	class fullauto: fullauto
	{
		class standardsound: standardsound
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
	};
};
class UK3CB_G36A1_C: UK3CB_G36_base
{
	class single: mode_semiauto
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
	class burst: mode_burst
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
	class fullauto: mode_fullauto
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
};
class UK3CB_G36_MLIC: UK3CB_G36_base
{
	class single: single
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: standardsound
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: silencedsound
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
	class burst: burst
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
	class fullauto: fullauto
	{
		sounds[] = {"standardsound","silencedsound"};
		class basesoundmodetype;
		class standardsound: standardsound
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
		};
		class silencedsound: silencedsound
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
		};
	};
};
class UK3CB_G36_MLIC_K: UK3CB_G36_MLIC
{
	class single: single
	{
		class standardsound: standardsound
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
		};
	};
	class burst: burst
	{
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
		};
	};
	class fullauto: fullauto
	{
		class standardsound: standardsound
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
		};
	};
};
class UK3CB_G36_MLIC_C: UK3CB_G36_MLIC
{
	class single: single
	{
		class standardsound: standardsound
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
		};
	};
	class burst: burst
	{
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
		};
	};
	class fullauto: fullauto
	{
		class standardsound: standardsound
		{
			soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
		};
	};
};
