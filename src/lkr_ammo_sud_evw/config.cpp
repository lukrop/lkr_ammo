/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

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
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"SUD_30Rnd_556x45_STANAG"
		};
	};

	class arifle_SUD_M16_GL: arifle_SUD_M16 {
		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"SUD_30Rnd_556x45_STANAG"
		};
	};

	class arifle_SUD_AK74: Rifle_Base_F {
		magazines[] = {
			"30Rnd_545x39_Mag",
			"30Rnd_545x39_Mag_Tracer",
			"30Rnd_545x39_7N10_Mag",
			"30Rnd_545x39_7N22_Mag",
			"100Rnd_545x39_Drum",
			"100Rnd_545x39_Drum_Tracer",
			"SUD_30Rnd_545x39_AK",
			"SUD_45rnd_545x39_RPK"
		};
	};

	class arifle_SUD_AK74_GL: arifle_SUD_AK74 {
		magazines[] = {
			"30Rnd_545x39_Mag",
			"30Rnd_545x39_Mag_Tracer",
			"30Rnd_545x39_7N10_Mag",
			"30Rnd_545x39_7N22_Mag",
			"100Rnd_545x39_Drum",
			"100Rnd_545x39_Drum_Tracer",
			"SUD_30Rnd_545x39_AK",
			"SUD_45rnd_545x39_RPK"
		};
	};

	class LMG_SUD_PK: Rifle_Long_Base_F {
		magazines[] = {
			"100Rnd_762x54_Box",
			"100Rnd_762x54_Box_Tracer",
			"SUD_100Rnd_762x54_PK"
		};
	};

	class LMG_SUD_M60: Rifle_Long_Base_F {
		magazines[] = {
			"100Rnd_762x51_Box",
			"100Rnd_762x51_Box_Tracer",
			"SUD_100Rnd_762x51_M60"
		};
	};
};