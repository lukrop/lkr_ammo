/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

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
	};
};

class CfgWeapons {
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class arifle_SUD_AKMS: Rifle_Base_F {
		magazines[] = {
			"30Rnd_762x39_Mag",
			"30Rnd_762x39_Mag_Tracer",
			"100Rnd_762x39_Drum",
			"100Rnd_762x39_Drum_Tracer",
			"30Rnd_762x39_AKM"
		};
	};

	class arifle_SUD_AK74M: Rifle_Base_F {
		magazines[] = {
			"30Rnd_545x39_Mag",
			"30Rnd_545x39_Mag_Tracer",
			"30Rnd_545x39_7N10_Mag",
			"30Rnd_545x39_7N22_Mag",
			"100Rnd_545x39_Drum",
			"100Rnd_545x39_Drum_Tracer",
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107"
		};
	};

	class arifle_SUD_AK105: Rifle_Base_F {
		magazines[] = {
			"30Rnd_545x39_Mag",
			"30Rnd_545x39_Mag_Tracer",
			"30Rnd_545x39_7N10_Mag",
			"30Rnd_545x39_7N22_Mag",
			"100Rnd_545x39_Drum",
			"100Rnd_545x39_Drum_Tracer",
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107"
		};
	};

	class arifle_SUD_AK107: Rifle_Base_F {
		magazines[] = {
			"30Rnd_545x39_Mag",
			"30Rnd_545x39_Mag_Tracer",
			"30Rnd_545x39_7N10_Mag",
			"30Rnd_545x39_7N22_Mag",
			"100Rnd_545x39_Drum",
			"100Rnd_545x39_Drum_Tracer",
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107"
		};
	};
	class LMG_SUD_RPK107: Rifle_Long_Base_F {
		magazines[] = {
			"30Rnd_545x39_Mag",
			"30Rnd_545x39_Mag_Tracer",
			"30Rnd_545x39_7N10_Mag",
			"30Rnd_545x39_7N22_Mag",
			"100Rnd_545x39_Drum",
			"100Rnd_545x39_Drum_Tracer",
			"30Rnd_545x39_AK107",
			"75rnd_545x39_RPK107"
		};
	};

	class LMG_SUD_Pecheneg_M: Rifle_Long_Base_F {
		magazines[] = {
			"100Rnd_762x54_Box",
			"100Rnd_762x54_Box_Tracer",
			"100Rnd_762x54_PK"
		};
	};

	class srifle_SUD_SVD: Rifle_Long_Base_F {
		magazines[] = {
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag_Tracer",
			"10Rnd_762x54_7N1_Mag",
			"10rnd_762x54_SVU107"
		};
	};

	class srifle_SUD_SVU107: Rifle_Long_Base_F {
		magazines[] = {
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag_Tracer",
			"10Rnd_762x54_7N1_Mag",
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