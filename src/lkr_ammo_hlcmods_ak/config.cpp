/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

#include "\lkr_545x39_Soviet\macros.hpp"
#include "\lkr_762x39_Soviet\macros.hpp"

class CfgPatches {
	class lkr_ammo_hlcmods_ak {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			"lkr_545x39_Soviet",
			"lkr_762x39_Soviet",
			"hlcweapons_aks"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgWeapons {
	class Rifle_Base_F;
	class hlc_ak_base: Rifle_Base_F {
		magazines[] = {
			_LKR_545x39_SOVIET_MAGS,
			_LKR_545x39_SOVIET_DRUMS,
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_T_AK",
			"hlc_30Rnd_545x39_EP_AK",
			"hlc_45Rnd_545x39_t_rpk"
		};
	};

	class hlc_rifle_aks74;
	class hlc_rifle_ak47: hlc_rifle_aks74 {
		magazines[] = {
			_LKR_762x39_SOVIET_MAGS,
			_LKR_762x39_SOVIET_DRUMS,
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_45Rnd_762x39_m_rpk",
			"HLC_45rnd_762x39_T_RPK"
		};
	};

	class hlc_rifle_rpk: hlc_rifle_ak47 {
		magazines[] = {
			_LKR_762x39_SOVIET_DRUMS,
			_LKR_762x39_SOVIET_MAGS,
			"hlc_45Rnd_762x39_m_rpk",
			"HLC_45rnd_762x39_T_RPK",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak"
		};
	};
};
