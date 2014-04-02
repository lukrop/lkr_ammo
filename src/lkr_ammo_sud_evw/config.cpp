/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

#include "\lkr_556x45_NATO\macros.hpp"
#include "\lkr_762x51_NATO\macros.hpp"
#include "\lkr_545x39_Soviet\macros.hpp"
#include "\lkr_762x54_R\macros.hpp"

class CfgPatches {
	class lkr_ammo_sud_evw {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			"SUD_GW_WPN",
			"lkr_556x45_NATO",
			"lkr_545x39_Soviet",
			"lkr_762x51_NATO",
			"lkr_762x54_R"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgWeapons {
	class Rifle_Base_F;
	class Rifle_Long_Base_F;

	class arifle_SUD_M16: Rifle_Base_F {
		magazines[] = {
			_LKR_556x45_NATO_MAGS,
			"SUD_30Rnd_556x45_STANAG"
		};
	};

	class arifle_SUD_M16_GL: arifle_SUD_M16 {
		magazines[] = {
			_LKR_556x45_NATO_MAGS,
			"SUD_30Rnd_556x45_STANAG"
		};
	};

	class arifle_SUD_AK74: Rifle_Base_F {
		magazines[] = {
			_LKR_545x39_SOVIET_MAGS,
			_LKR_545x39_SOVIET_DRUMS,
			"SUD_30Rnd_545x39_AK",
			"SUD_45rnd_545x39_RPK"
		};
	};

	class arifle_SUD_AK74_GL: arifle_SUD_AK74 {
		magazines[] = {
			_LKR_545x39_SOVIET_MAGS,
			_LKR_545x39_SOVIET_DRUMS,
			"SUD_30Rnd_545x39_AK",
			"SUD_45rnd_545x39_RPK"
		};
	};

	class LMG_SUD_PK: Rifle_Long_Base_F {
		magazines[] = {
			_LKR_762x54_R_BELTS,
			"SUD_100Rnd_762x54_PK"
		};
	};

	class LMG_SUD_M60: Rifle_Long_Base_F {
		magazines[] = {
			_LKR_762x51_NATO_BELTS,
			"SUD_100Rnd_762x51_M60"
		};
	};
};