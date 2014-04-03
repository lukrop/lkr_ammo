/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

#include "\lkr_556x45_NATO\macros.hpp"
#include "\lkr_762x51_NATO\macros.hpp"

class CfgPatches {
	class lkr_ammo_u100 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			"lkr_556x45_NATO",
			"lkr_762x51_NATO",
			"Ej_u100"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgWeapons {
	/*
	class Rifle_Base_F;
	class Ej_u100_base: Rifle_Base_F {
		magazines[]= {
			"u100_mag",
			"u100rt_mag",
			"u100gt_mag",
			"u100yt_mag"
		};
	};
	*/
	
	class Ej_u100_base;
	class ej_u100old30: Ej_u100_base {
		magazines[] = {
			LKR_556x45_NATO_MAGS,
			"scar_mag"
		};
	};

	class ej_scar: Ej_u100_base {
		magazines[] = {
			LKR_556x45_NATO_MAGS,
			"scar_mag"
		};
	};
	
	class ej_scarstandard: Ej_u100_base {
		magazines[] = {
			LKR_556x45_NATO_MAGS,
			"scar_mag"
		};
	};
	
	class ej_scarblack: Ej_u100_base {
		magazines[] = {
			LKR_556x45_NATO_MAGS,
			"scar_mag"
		};
	};

	class ej_scarstandardblack: Ej_u100_base {
		magazines[] = {
			LKR_556x45_NATO_MAGS,
			"scar_mag"
		};
	};
	
	class ej_scar_h_short: Ej_u100_base {
		magazines[] = {
			LKR_762x51_NATO_MAGS,
			"scarhnt_mag",
			"scarh_mag"
		};
	};
	
	class ej_scar_h_shortafg: Ej_u100_base {
		magazines[] = {
			LKR_762x51_NATO_MAGS,
			"scarhnt_mag",
			"scarh_mag"
		};
	};
	
	class ej_scar_longbarrel: Ej_u100_base {
		magazines[] = {
			LKR_762x51_NATO_MAGS,
			"scarhnt_mag",
			"scarh_mag"
		};
	};
	
	class ej_scar_h_shortblack: Ej_u100_base {
		magazines[] = {
			LKR_762x51_NATO_MAGS,
			"scarhnt_mag",
			"scarh_mag"
		};
	};
	
	class ej_scarstandardeglm: Ej_u100_base {
		magazines[] = {
			LKR_556x45_NATO_MAGS,
			"scar_mag"
		};
	};
	
	class ej_scarshorteglm: Ej_u100_base {
		magazines[] = {
			LKR_762x51_NATO_MAGS,
			"scarhnt_mag",
			"scarh_mag"
		};
	};
	
	class ej_scarstandardafg: Ej_u100_base {
		magazines[] = {
			LKR_556x45_NATO_MAGS,
			"scar_mag"
		};
	};
	
	class ej_m110: Ej_u100_base {
		magazines[] = {
			LKR_762x51_NATO_MAGS,
			"scarhnt_mag",
			"scarh_mag"
		};
	};
	
	class ej_scarlsw: Ej_u100_base {
		magazines[] = {
			LKR_556x45_NATO_BELTS,
			LKR_556x45_NATO_MAGS,
			"u100_mag",
			"u100rt_mag",
			"u100gt_mag",
			"u100yt_mag"
		};
	};
	
	class ej_HK417: Ej_u100_base {
		magazines[] = {
			LKR_762x51_NATO_MAGS,
			"scarhnt_mag",
			"scarh_mag"
		};
	};
	
	class ej_HK41712: Ej_u100_base {
		magazines[] = {
			LKR_762x51_NATO_MAGS,
			"scarhnt_mag",
			"scarh_mag"
		};
	};
	
	class ej_m24d: Ej_u100_base {
		magazines[] = {
			LKR_762x51_NATO_5RND_MAGS,
			"M24_mag"
		};
	};
};
