/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

#include "\lkr_545x39_Soviet\macros.hpp"
#include "\lkr_762x39_Soviet\macros.hpp"
#include "\lkr_762x54_R\macros.hpp"

class CfgPatches {
	class lkr_ammo_sud_russians {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"lkr_762x54_R",
			"lkr_762x39_Soviet",
			"lkr_545x39_Soviet",
			"SUD_RUSSIANS"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgWeapons {
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class arifle_SUD_AKMS: Rifle_Base_F {
		magazines[] = {
			_LKR_762x39_SOVIET_MAGS,
			_LKR_762x39_SOVIET_DRUMS,
			"30Rnd_762x39_AKM"
		};
	};

	class arifle_SUD_AK74M: Rifle_Base_F {
		magazines[] = {
			_LKR_545x39_SOVIET_MAGS,
			_LKR_545x39_SOVIET_DRUMS,
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107"
		};
	};

	class arifle_SUD_AK105: Rifle_Base_F {
		magazines[] = {
			_LKR_545x39_SOVIET_MAGS,
			_LKR_545x39_SOVIET_DRUMS,
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107"
		};
	};

	class arifle_SUD_AK107: Rifle_Base_F {
		magazines[] = {
			_LKR_545x39_SOVIET_MAGS,
			_LKR_545x39_SOVIET_DRUMS,
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107"
		};
	};
	class LMG_SUD_RPK107: Rifle_Long_Base_F {
		magazines[] = {
			_LKR_545x39_SOVIET_MAGS,
			_LKR_545x39_SOVIET_DRUMS,
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107"
		};
	};

	class LMG_SUD_Pecheneg_M: Rifle_Long_Base_F {
		magazines[] = {
			_LKR_762x54_R_BELTS,
			"100Rnd_762x54_PK"
		};
	};

	class srifle_SUD_SVD: Rifle_Long_Base_F {
		magazines[] = {
			_LKR_762x54_R_10RND_MAGS,
			"10rnd_762x54_SVU107"
		};
	};

	class srifle_SUD_SVU107: Rifle_Long_Base_F {
		magazines[] = {
			_LKR_762x54_R_10RND_MAGS,
			"10rnd_762x54_SVU107"
		};
	};

	/*
	class SUD_KSVK_Base: Rifle_Long_Base_F {
		magazines[] = {
			"5Rnd_127x108_Mag",
			"5Rnd_mas_127x108_mag",
			"5Rnd_mas_127x108_T_mag",
			"5Rnd_mas_127x108_dem_mag"
		};
	};
	*/
};