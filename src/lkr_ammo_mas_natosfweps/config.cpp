/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

#include "\lkr_556x45_NATO\macros.hpp"
#include "\lkr_762x51_NATO\macros.hpp"
#include "\lkr_545x39_Soviet\macros.hpp"
#include "\lkr_762x39_Soviet\macros.hpp"
#include "\lkr_762x54_R\macros.hpp"
#include "\lkr_9x19_Parabellum\macros.hpp"

class CfgPatches {
	class lkr_ammo_mas_natosfweps {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			"lkr_556x45_NATO",
			"lkr_762x51_NATO",
			"lkr_545x39_Soviet",
			"lkr_762x39_Soviet",
			"lkr_762x54_R",
			"lkr_9x19_Parabellum",
			"mas_weapons",
			"mas_weapons_m4",
			"mas_weapons_ak"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgWeapons {
	class arifle_MX_F;
	class arifle_mas_hk416: arifle_MX_F {
		magazines[] = {
			_LKR_556x45_NATO_MAGS,
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag"
		};
	};
	class arifle_MX_GL_F;
	class arifle_mas_hk416_gl: arifle_MX_GL_F {
		magazines[] = {
			_LKR_556x45_NATO_MAGS,
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag"
		};
	};
	
	class arifle_mas_hk416_m203: arifle_mas_hk416_gl {
		magazines[] = {
			_LKR_556x45_NATO_MAGS,
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag"
		};
	};

	class srifle_EBR_F;
	class srifle_mas_hk417: srifle_EBR_F {
		magazines[] = {
			_LKR_762x51_NATO_MAGS,
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};
	
	class arifle_mas_hk417c: arifle_mas_hk416 {
		magazines[] = {
			_LKR_762x51_NATO_MAGS,
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};

	class arifle_mas_hk417_m203c: arifle_mas_hk416_m203 {
		magazines[] = {
			_LKR_762x51_NATO_MAGS,
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};

	class srifle_mas_ebr: srifle_EBR_F {
		magazines[] = {
			_LKR_762x51_NATO_MAGS,
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};

	class srifle_LRR_F;
	class srifle_mas_m24: srifle_LRR_F {
		magazines[] = {
			_LKR_762x51_NATO_5RND_MAGS,
			"5Rnd_mas_762x51_Stanag",
			"5Rnd_mas_762x51_T_Stanag"
		};
	};
	class SMG_02_F;
	class arifle_mas_mp5: SMG_02_F {
		magazines[] = {
			_LKR_9x19_PARABELLUM_30RND_MAGS,
			"30Rnd_mas_9x21_Stanag",
			"30Rnd_9x21_Mag"
		};
	};
	
	class LMG_Mk200_F;
	class LMG_mas_Mk200_F: LMG_Mk200_F {
		magazines[] = {
			_LKR_556x45_NATO_BELTS,
			_LKR_556x45_NATO_MAGS,
			"200Rnd_mas_556x45_Stanag",
			"200Rnd_mas_556x45_T_Stanag",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"20Rnd_556x45_UW_mag"
		};
	};
	
	class LMG_mas_M249_F: LMG_Mk200_F {
		magazines[] = {
			_LKR_556x45_NATO_BELTS,
			_LKR_556x45_NATO_MAGS,
			"200Rnd_mas_556x45_Stanag",
			"200Rnd_mas_556x45_T_Stanag",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"20Rnd_556x45_UW_mag"
		};
	};
	
	class LMG_mas_M249a_F: LMG_mas_M249_F {
		magazines[] = {
			_LKR_556x45_NATO_BELTS,
			_LKR_556x45_NATO_MAGS,
			"200Rnd_mas_556x45_Stanag",
			"200Rnd_mas_556x45_T_Stanag",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"20Rnd_556x45_UW_mag"
		};
	};
	
	
	class LMG_mas_mk48_F: LMG_Mk200_F {
		magazines[] = {
			_LKR_762x51_NATO_BELTS,
			"100Rnd_mas_762x51_Stanag",
			"100Rnd_mas_762x51_T_Stanag"
		};
	};
	
	class LMG_mas_m240_F: LMG_mas_mk48_F {
		magazines[] = {
			_LKR_762x51_NATO_BELTS,
			"100Rnd_mas_762x51_Stanag",
			"100Rnd_mas_762x51_T_Stanag"
		};
	};
	
	class arifle_mas_g3: arifle_mas_hk416 {
		magazines[] = {
			_LKR_762x51_NATO_MAGS,
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};
	
	class arifle_mas_fal: arifle_mas_g3 {
		magazines[] = {
			_LKR_762x51_NATO_MAGS,
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};

	class arifle_Katiba_F;
	class arifle_mas_ak_74m: arifle_Katiba_F {
		magazines[] = {
			_LKR_545x39_SOVIET_MAGS,
			_LKR_545x39_SOVIET_DRUMS,
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag"
		};
	};

	class arifle_Katiba_GL_F;
	class arifle_mas_ak_74m_gl: arifle_Katiba_GL_F {
		magazines[] = {
			_LKR_545x39_SOVIET_MAGS,
			_LKR_545x39_SOVIET_DRUMS,
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag"
		};
	};

	class arifle_mas_akms: arifle_mas_ak_74m {
		magazines[] = {
			_LKR_762x39_SOVIET_MAGS,
			_LKR_762x39_SOVIET_DRUMS,
			"30Rnd_mas_762x39_mag",
			"30Rnd_mas_762x39_T_mag"
		};
	};

	class arifle_mas_akms_gl: arifle_mas_ak_74m_gl {
		magazines[] = {
			_LKR_762x39_SOVIET_MAGS,
			_LKR_762x39_SOVIET_DRUMS,
			"30Rnd_mas_762x39_mag",
			"30Rnd_mas_762x39_T_mag"
		};
	};

	class arifle_mas_akm_gl: arifle_mas_akms_gl {
		magazines[] = {
			_LKR_762x39_SOVIET_MAGS,
			_LKR_762x39_SOVIET_DRUMS,
			"30Rnd_mas_762x39_mag",
			"30Rnd_mas_762x39_T_mag"
		};
	};

	class arifle_mas_m70_gl: arifle_mas_akm_gl {
		magazines[] = {
			_LKR_762x39_SOVIET_MAGS,
			_LKR_762x39_SOVIET_DRUMS,
			"30Rnd_mas_762x39_mag",
			"30Rnd_mas_762x39_T_mag"
		};
	};

	class arifle_mas_m70ab_gl: arifle_mas_akms_gl {
		magazines[] = {
			_LKR_762x39_SOVIET_MAGS,
			_LKR_762x39_SOVIET_DRUMS,
			"30Rnd_mas_762x39_mag",
			"30Rnd_mas_762x39_T_mag"
		};
	};

	class arifle_mas_aks74u: arifle_Katiba_F {
		magazines[] = {
			_LKR_545x39_SOVIET_MAGS,
			_LKR_545x39_SOVIET_DRUMS,
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag"
		};
	};

	class srifle_mas_svd: srifle_EBR_F {
		magazines[] = {
			_LKR_762x54_R_10RND_MAGS,
			"10Rnd_mas_762x54_mag",
			"10Rnd_mas_762x54_T_mag"
		};
	};

	class srifle_mas_m91: srifle_mas_svd {
		magazines[] = {
			_LKR_762x54_R_10RND_MAGS,
			"10Rnd_mas_762x54_mag",
			"10Rnd_mas_762x54_T_mag"
		};
	};

	class LMG_mas_rpk_F: LMG_Mk200_F {
		magazines[] = {
			_LKR_545x39_SOVIET_DRUMS,
			_LKR_545x39_SOVIET_MAGS,
			"100Rnd_mas_545x39_mag",
			"100Rnd_mas_545x39_T_mag",
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag"
		};
	};

	class LMG_mas_m72_F: LMG_mas_rpk_F {
		magazines[] = {
			_LKR_545x39_SOVIET_DRUMS,
			_LKR_545x39_SOVIET_MAGS,
			"100Rnd_mas_545x39_mag",
			"100Rnd_mas_545x39_T_mag",
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag"
		};
	};

	class LMG_mas_pkm_F: LMG_Mk200_F {
		magazines[] = {
			_LKR_762x54_R_BELTS,
			"100Rnd_mas_762x54_mag",
			"100Rnd_mas_762x54_T_mag"
		};
	};

	class hgun_P07_F;
	class hgun_mas_m9_F: hgun_P07_F {
		magazines[] = {
			_LKR_9x19_PARABELLUM_15RND_MAGS,
			"15Rnd_mas_9x21_Mag"
		};
	};

	class hgun_mas_bhp_F: hgun_P07_F {
		magazines[] = {
			_LKR_9x19_PARABELLUM_15RND_MAGS,
			"15Rnd_mas_9x21_Mag"
		};
	};

	class hgun_mas_glock_F: hgun_P07_F {
		magazines[] = {
			_LKR_9x19_PARABELLUM_17RND_MAGS,
			"17Rnd_mas_9x21_Mag"
		};
	};
};

class CfgVehicles {
	class NATO_Box_Base;
	class Box_NATO_Wps_F : NATO_Box_Base {
		class TransportMagazines;
	};
	
	class EAST_Box_Base;
	class Box_East_Wps_F : EAST_Box_Base
	{
		class TransportMagazines;
	};
	
	
	class Box_mas_all_rifle_Wps_F : Box_NATO_Wps_F {
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag {
				magazine="30Rnd_556x45_Stanag";
				count=120;
			};
			
			class _xx_30Rnd_mas_556x45_Stanag_Tracer_Red {
				magazine="30Rnd_556x45_Stanag_Tracer_Red";
				count=60;
			};
			class _xx_30Rnd_556x45_Mk318_Stanag {
				magazine="30Rnd_556x45_Mk318_Stanag";
				count=120;
			};
			
			class _xx_30Rnd_556x45_Mk262_Stanag {
				magazine="30Rnd_556x45_Mk262_Stanag";
				count=120;
			};

			class _xx_30Rnd_762x39_Mag {
				magazine = "30Rnd_762x39_Mag";
				count = 60;
			};

			class _xx_30Rnd_762x39_Mag_Tracer {
				magazine = "30Rnd_762x39_Mag_Tracer";
				count = 60;
			};

			class _xx_30Rnd_545x39_Mag {
				magazine = "30Rnd_545x39_Mag";
				count = 60;
			};

			class _xx_30Rnd_545x39_Mag_Tracer {
				magazine = "30Rnd_545x39_Mag_Tracer";
				count = 60;
			};

			class _xx_30Rnd_545x39_7N10_Mag {
				magazine = "30Rnd_545x39_7N10_Mag";
				count = 60;
			};

			class _xx_30Rnd_545x39_7N22_Mag {
				magazine = "30Rnd_545x39_7N22_Mag";
				count = 60;
			};

			class _xx_100Rnd_545x39_Drum {
				magazine = "100Rnd_545x39_Drum";
				count = 60;
			};

			class _xx_100Rnd_545x39_Drum_Tracer {
				magazine = "100Rnd_545x39_Drum_Tracer";
				count = 60;
			};

			class _xx_10Rnd_762x54_Mag {
				magazine = "10Rnd_762x54_Mag";
				count = 60;
			};

			class _xx_10Rnd_762x54_Mag_Tracer {
				magazine = "10Rnd_762x54_Mag_Tracer";
				count = 60;
			};

			class _xx_10Rnd_762x54_7N1_Mag {
				magazine = "10Rnd_762x54_7N1_Mag";
				count = 60;
			};

			class _xx_100Rnd_762x54_Box {
				magazine = "100Rnd_762x54_Box";
				count = 60;
			};

			class _xx_100Rnd_762x54_Box_Tracer {
				magazine = "100Rnd_762x54_Box_Tracer";
				count = 60;
			};
			
		};
	};
	
	class Box_mas_us_rifle_Wps_F : Box_NATO_Wps_F {
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag {
				magazine="30Rnd_556x45_Stanag";
				count=120;
			};
			
			class _xx_30Rnd_mas_556x45_Stanag_Tracer_Red {
				magazine="30Rnd_556x45_Stanag_Tracer_Red";
				count=60;
			};
			
			class _xx_30Rnd_556x45_Mk318_Stanag {
				magazine="30Rnd_556x45_Mk318_Stanag";
				count=120;
			};
			
			
			class _xx_30Rnd_556x45_Mk262_Stanag {
				magazine="30Rnd_556x45_Mk262_Stanag";
				count=120;
			};
			

		};
	};
	
	
	class Box_mas_ru_rifle_Wps_F: Box_East_Wps_F
	{
		class TransportMagazines {
			class _xx_30Rnd_762x39_Mag {
				magazine = "30Rnd_762x39_Mag";
				count = 60;
			};

			class _xx_30Rnd_762x39_Mag_Tracer {
				magazine = "30Rnd_762x39_Mag_Tracer";
				count = 60;
			};

			class _xx_30Rnd_545x39_Mag {
				magazine = "30Rnd_545x39_Mag";
				count = 60;
			};

			class _xx_30Rnd_545x39_Mag_Tracer {
				magazine = "30Rnd_545x39_Mag_Tracer";
				count = 60;
			};

			class _xx_30Rnd_545x39_7N10_Mag {
				magazine = "30Rnd_545x39_7N10_Mag";
				count = 60;
			};

			class _xx_30Rnd_545x39_7N22_Mag {
				magazine = "30Rnd_545x39_7N22_Mag";
				count = 60;
			};

			class _xx_100Rnd_545x39_Drum {
				magazine = "100Rnd_545x39_Drum";
				count = 60;
			};

			class _xx_100Rnd_545x39_Drum_Tracer {
				magazine = "100Rnd_545x39_Drum_Tracer";
				count = 60;
			};

			class _xx_10Rnd_762x54_Mag {
				magazine = "10Rnd_762x54_Mag";
				count = 60;
			};

			class _xx_10Rnd_762x54_Mag_Tracer {
				magazine = "10Rnd_762x54_Mag_Tracer";
				count = 60;
			};

			class _xx_10Rnd_762x54_7N1_Mag {
				magazine = "10Rnd_762x54_7N1_Mag";
				count = 60;
			};

			class _xx_100Rnd_762x54_Box {
				magazine = "100Rnd_762x54_Box";
				count = 60;
			};

			class _xx_100Rnd_762x54_Box_Tracer {
				magazine = "100Rnd_762x54_Box_Tracer";
				count = 60;
			};
		};
	};
	
};
