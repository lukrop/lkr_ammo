/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

#include "lkr_556x45_NATO\macros.hpp"
#include "lkr_762x51_NATO\macros.hpp"
#include "lkr_9x19_Parabellum\macros.hpp"

class CfgPatches {
	class lkr_ammo_r3f_armes {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"lkr_556x45_NATO",
			"lkr_762x51_NATO",
			"lkr_9x19_Parabellum",
			"r3f_armes_c"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgWeapons {
	/*
	class Rifle_Base_F;
	class R3F_Famas_F1: Rifle_Base_F
	{
		magazines[]=
		{
			"R3F_25Rnd_556x45_FAMAS",
			"R3F_25Rnd_556x45_TRACER_FAMAS"
		};
	};
	*/
	
	class Rifle_Base_F;
	class R3F_Famas_F1;
	class R3F_Famas_surb: R3F_Famas_F1 {
		magazines[] = {
			_LKR_556x45_NATO_MAGS,
			"R3F_30Rnd_556x45_FAMAS",
			"R3F_25Rnd_556x45_FAMAS",
			"R3F_30Rnd_556x45_TRACER_FAMAS",
			"R3F_25Rnd_556x45_TRACER_FAMAS",
			"R3F_30Rnd_556x45_HK416",
			"R3F_30Rnd_556x45_tracer_hk416"
		};
	};
	
	class R3F_Famas_G2: R3F_Famas_F1 {
		magazines[] = {
			_LKR_556x45_NATO_MAGS,
			"R3F_30Rnd_556x45_FAMAS",
			"R3F_25Rnd_556x45_FAMAS",
			"R3F_30Rnd_556x45_TRACER_FAMAS",
			"R3F_25Rnd_556x45_TRACER_FAMAS",
			"R3F_30Rnd_556x45_HK416",
			"R3F_30Rnd_556x45_tracer_hk416"
		};
	};
	
	class R3F_Famas_felin: R3F_Famas_G2 {
		magazines[] = {
			_LKR_556x45_NATO_MAGS,
			"R3F_30Rnd_556x45_FAMAS",
			"R3F_25Rnd_556x45_FAMAS",
			"R3F_30Rnd_556x45_TRACER_FAMAS",
			"R3F_25Rnd_556x45_TRACER_FAMAS",
			"R3F_30Rnd_556x45_HK416",
			"R3F_30Rnd_556x45_tracer_hk416"
		};
	};
	
	
	class R3F_FRF2: Rifle_Base_F {
		magazines[] = {
			_LKR_556x45_NATO_10RND_MAGS,
			"R3F_10Rnd_762x51_FRF2"
		};
	};
	
	/*
	class R3F_PGM_Hecate_II: Rifle_Base_F {
		magazines[] = {
			"R3F_7Rnd_127x99_PGM",
			"R3F_7Rnd_127x99_PEI_PGM"
		};
	};
	
	class R3F_M107: Rifle_Base_F {
		magazines[] = {
			"R3F_10Rnd_127x99_M107",
			"R3F_10Rnd_127x99_PEI_M107",
			"5Rnd_mas_127x99_dem_Stanag",
			"5Rnd_mas_127x99_T_Stanag",
			"5Rnd_mas_127x99_Stanag"
		};
	};
	*/
	
	class R3F_Minimi: Rifle_Base_F {
		magazines[] = {
			_LKR_556x45_NATO_BELTS,
			_LKR_556x45_NATO_MAGS,
			"R3F_200Rnd_556x45_MINIMI",
			"R3F_30Rnd_556x45_FAMAS",
			"R3F_30Rnd_556x45_TRACER_FAMAS"
		};
	};
	
	class R3F_Minimi_762: R3F_Minimi {
		magazines[] = {
			_LKR_762x51_NATO_BELTS,
			"R3F_100Rnd_762x51_MINIMI"
		};
	};
	
	class R3F_HK417M: Rifle_Base_F {
		magazines[] = {
			_LKR_762x51_NATO_MAGS,
			"R3F_20Rnd_762x51_HK417",
			"R3F_20Rnd_762x51_TRACER_HK417"
		};
	};
	
	class R3F_HK416M: Rifle_Base_F {
		magazines[] = {
			_LKR_556x45_NATO_MAGS,
			"R3F_30Rnd_556x45_HK416",
			"R3F_30Rnd_556x45_TRACER_HK416",
			"R3F_30Rnd_556x45_FAMAS",
			"R3F_30Rnd_556x45_TRACER_FAMAS"
		};
	};
	
	class R3F_MP5SD: Rifle_Base_F {
		magazines[] = {
			_LKR_9x19_PARABELLUM_30RND_MAGS,
			"R3F_30Rnd_9x19_MP5",
			"30Rnd_mas_9x21_Stanag",
			"30Rnd_mas_9x21d_Stanag"
		};
	};
	
};