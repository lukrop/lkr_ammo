/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_ammo_mas_natosfweps {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			"lkr_556x45_NATO",
			"lkr_762x51_NATO",
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
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag"
		};
	};
	class arifle_MX_GL_F;
	class arifle_mas_hk416_gl: arifle_MX_GL_F {
		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag"
		};
	};
	
	class srifle_EBR_F;
	class srifle_mas_hk417: srifle_EBR_F {
		magazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag_Tracer_Red",
			"20Rnd_762x51_Mag_Tracer_Green",
			"20Rnd_762x51_Mk316_Mag",
			"20Rnd_762x51_Mk316_Mag_Tracer_Red",
			"20Rnd_762x51_Mk316_Mag_Tracer_Green",
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};
	
	class srifle_mas_ebr: srifle_EBR_F {
		magazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag_Tracer_Red",
			"20Rnd_762x51_Mag_Tracer_Green",
			"20Rnd_762x51_Mk316_Mag",
			"20Rnd_762x51_Mk316_Mag_Tracer_Red",
			"20Rnd_762x51_Mk316_Mag_Tracer_Green",
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};

	class srifle_LRR_F;
	class srifle_mas_m24: srifle_LRR_F {
		magazines[] = {
			"5Rnd_762x51_Mag",
			"5Rnd_762x51_Mag_Tracer_Green",
			"5Rnd_762x51_Mag_Tracer_Red",
			"5Rnd_762x51_Mk316_Mag",
			"5Rnd_762x51_Mk316_Mag_Tracer_Green",
			"5Rnd_762x51_Mk316_Mag_Tracer_Red",
			"5Rnd_mas_762x51_Stanag",
			"5Rnd_mas_762x51_T_Stanag"
		};
	};
	class SMG_02_F;
	class arifle_mas_mp5: SMG_02_F {
		magazines[] = {
			"30Rnd_9x19_FMJFT_Mag",
			"30Rnd_9x19_JHP_Mag",
			"30Rnd_9x19_FMJP_Mag",
			"30Rnd_mas_9x21_Stanag",
			"30Rnd_9x21_Mag"
		};
	};
	
	class LMG_Mk200_F;
	class LMG_mas_Mk200_F: LMG_Mk200_F {
		magazines[] = {
			"200Rnd_556x45_Box",
			"200Rnd_556x45_Box_Tracer_Red",
			"200Rnd_556x45_Box_Tracer_Green",
			"100Rnd_556x45_Pouch",
			"100Rnd_556x45_Pouch_Tracer_Red",
			"100Rnd_556x45_Pouch_Tracer_Green",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow",
			"200Rnd_mas_556x45_Stanag",
			"200Rnd_mas_556x45_T_Stanag",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"20Rnd_556x45_UW_mag"
		};
	};
	
	class LMG_mas_M249_F: LMG_Mk200_F {
		magazines[] = {
			"200Rnd_556x45_Box",
			"200Rnd_556x45_Box_Tracer_Red",
			"200Rnd_556x45_Box_Tracer_Green",
			"100Rnd_556x45_Pouch",
			"100Rnd_556x45_Pouch_Tracer_Red",
			"100Rnd_556x45_Pouch_Tracer_Green",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow",
			"200Rnd_mas_556x45_Stanag",
			"200Rnd_mas_556x45_T_Stanag",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"20Rnd_556x45_UW_mag"
		};
	};
	
	class LMG_mas_M249a_F: LMG_mas_M249_F {
		magazines[] = {
			"200Rnd_556x45_Box",
			"200Rnd_556x45_Box_Tracer_Red",
			"200Rnd_556x45_Box_Tracer_Green",
			"100Rnd_556x45_Pouch",
			"100Rnd_556x45_Pouch_Tracer_Red",
			"100Rnd_556x45_Pouch_Tracer_Green",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow",
			"200Rnd_mas_556x45_Stanag",
			"200Rnd_mas_556x45_T_Stanag",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"20Rnd_556x45_UW_mag"
		};
	};
	
	
	class LMG_mas_mk48_F: LMG_Mk200_F {
		magazines[] = {
			"100Rnd_762x51_Box",
			"100Rnd_762x51_Box_Tracer_Red",
			"100Rnd_762x51_Box_Tracer_Green",
			"100Rnd_mas_762x51_Stanag",
			"100Rnd_mas_762x51_T_Stanag",
			"150Rnd_762x51_Box",
			"150Rnd_762x51_Box_Tracer"
		};
	};
	
	class LMG_mas_m240_F: LMG_mas_mk48_F {
		magazines[] = {
			"100Rnd_762x51_Box",
			"100Rnd_762x51_Box_Tracer_Red",
			"100Rnd_762x51_Box_Tracer_Green",
			"100Rnd_mas_762x51_Stanag",
			"100Rnd_mas_762x51_T_Stanag",
			"150Rnd_762x51_Box",
			"150Rnd_762x51_Box_Tracer"
		};
	};
	
	class arifle_mas_g3: arifle_mas_hk416 {
		magazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag_Tracer_Red",
			"20Rnd_762x51_Mag_Tracer_Green",
			"20Rnd_762x51_Mk316_Mag",
			"20Rnd_762x51_Mk316_Mag_Tracer_Red",
			"20Rnd_762x51_Mk316_Mag_Tracer_Green",
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};
	
	class arifle_mas_fal: arifle_mas_g3 {
		magazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag_Tracer_Red",
			"20Rnd_762x51_Mag_Tracer_Green",
			"20Rnd_762x51_Mk316_Mag",
			"20Rnd_762x51_Mk316_Mag_Tracer_Red",
			"20Rnd_762x51_Mk316_Mag_Tracer_Green",
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};
};

class CfgVehicles {
	class NATO_Box_Base;
	class Box_NATO_Wps_F : NATO_Box_Base {
		class TransportMagazines;
	};
	
	/*
	class EAST_Box_Base;
	class Box_East_Wps_F : EAST_Box_Base
	{
		class TransportMagazines;
	};
	*/
	
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
			
			class _xx_30Rnd_mas_556x45_Mk318_Stanag_Tracer_Red {
				magazine="30Rnd_556x45_Mk318_Stanag_Tracer_Red";
				count=60;
			};
			
			class _xx_30Rnd_556x45_Mk262_Stanag {
				magazine="30Rnd_556x45_Mk262_Stanag";
				count=120;
			};
			
			class _xx_30Rnd_mas_556x45_Mk262_Stanag_Tracer_Red {
				magazine="30Rnd_556x45_Mk262_Stanag_Tracer_Red";
				count=60;
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
			
			class _xx_30Rnd_mas_556x45_Mk318_Stanag_Tracer_Red {
				magazine="30Rnd_556x45_Mk318_Stanag_Tracer_Red";
				count=60;
			};
			
			class _xx_30Rnd_556x45_Mk262_Stanag {
				magazine="30Rnd_556x45_Mk262_Stanag";
				count=120;
			};
			
			class _xx_30Rnd_mas_556x45_Mk262_Stanag_Tracer_Red {
				magazine="30Rnd_556x45_Mk262_Stanag_Tracer_Red";
				count=60;
			};
			
		};
	};
	
	/*
	class Box_mas_ru_rifle_Wps_F: Box_East_Wps_F
	{
	};
	*/
};
