/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_762x39_Soviet {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Weapons_F"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgAmmo {
	class B_762x51_Ball;
	// 57-N-231
	class B_762x39_57N231_Ball : B_762x51_Ball {
		hit = 8.5;
		typicalSpeed = 718;
		airFriction = -0.0008;
		caliber = 0.7;
		deflecting = 15;
		visibleFire = 3;
		audibleFire = 6;
	};

	// 57-N-231P Tracer
	class B_762x39_57N231P_Tracer : B_762x39_57N231_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	
};

class CfgMagazines {
	class 20Rnd_762x51_Mag;
	class 30Rnd_762x39_Mag : 20Rnd_762x51_Mag {
		count = 30;
		ammo = "B_762x39_57N231_Ball";
		initSpeed = 718;
		displayName = $STR_30RND_762x39_DISPLAY_NAME;
		descriptionShort = $STR_30RND_762x39_DESCRIPTION_SHORT;
		picture = "\lkr_762x39_Soviet\ui\akm_mag_ca.paa";
	};

	class 100Rnd_762x39_Drum : 30Rnd_762x39_Mag {
		count = 100;
		displayName = $STR_100RND_762x39_DISPLAY_NAME;
		descriptionShort = $STR_100RND_762x39_DESCRIPTION_SHORT;
		picture = "\lkr_762x39_Soviet\ui\drum_ca.paa";
	};

	class 30Rnd_762x39_Mag_Tracer : 30Rnd_762x39_Mag {
		ammo = "B_762x39_57N231P_Tracer";
		initSpeed = 718;
		displayName = $STR_30RND_762x39_Tracer_DISPLAY_NAME;
		descriptionShort = $STR_30RND_762x39_Tracer_DESCRIPTION_SHORT;
		tracersEvery = 1;
	};

	class 100Rnd_762x39_Drum_Tracer : 30Rnd_762x39_Mag_Tracer {
		count = 100;
		displayName = $STR_100RND_762x39_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_100RND_762x39_TRACER_DESCRIPTION_SHORT;
		picture = "\lkr_762x39_Soviet\ui\drum_ca.paa";
	};

};
