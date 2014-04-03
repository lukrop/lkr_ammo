/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

#include "\lkr_556x45_NATO\macros.hpp"
#include "\lkr_762x51_NATO\macros.hpp"

class CfgPatches {
	class lkr_ammo_rh_m4 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			"lkr_556x45_NATO",
			"lkr_762x51_NATO",
			"RH_m4_cfg"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgWeapons {
	class Rifle_Base_F;

	class RH_ar10: Rifle_Base_F {
		magazines[] = {
			LKR_762x51_NATO_MAGS,
            "RH_20Rnd_762x51_AR10"
        };
	};

	class RH_m4: Rifle_Base_F {
		magazines[] = {
			LKR_556x45_NATO_MAGS,
			"RH_30Rnd_556x45_Mk262"
		};
	};

	class RH_M16A4;
	class RH_Mk12mod1: RH_M16A4 {
		magazines[] = {
			LKR_556x45_NATO_MAGS,
			"RH_30Rnd_556x45_Mk262"
		};
	};

};

class CfgVehicles {
	class NATO_Box_Base;
	class Box_NATO_Wps_F : NATO_Box_Base {
		class TransportMagazines;
	};
	
	class RH_m4m16ammobox: Box_NATO_Wps_F {
        class TransportMagazines {
        	class _xx_30rnd_556x45_Tracer_Red_STANAG {
                magazine="30rnd_556x45_STANAG_Tracer_Red";
                count=50;
            };

            class _xx_30rnd_556x45_Mk318_STANAG {
                magazine="30rnd_556x45_Mk318_STANAG";
                count=50;
            };
			
			class _xx_30rnd_556x45_Mk262_STANAG {
                magazine="30rnd_556x45_Mk262_STANAG";
                count=50;
            };
			
		};
	};
};
