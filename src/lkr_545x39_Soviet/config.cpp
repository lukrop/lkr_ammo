/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_545x39_Soviet {
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
	class B_556x45_Ball;
	// 5N7
	class B_545x39_5N7_Ball : B_556x45_Ball {
		hit = 9;
		typicalSpeed = 915;
		airFriction = -0.00075;
		caliber = 0.75;
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 7;
	};

	class B_556x45_Ball_Tracer_Green;
	// 7T3 Tracer
	class B_545x39_7T3_Tracer : B_556x45_Ball_Tracer_Green{
		hit = 8;
		typicalSpeed = 883;
		airFriction = -0.0012;
		caliber = 0.7;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 7;
	};

	// 7N10
	class B_545x39_7N10_Ball : B_556x45_Ball {
		hit = 8.5;
		typicalSpeed = 880;
		airFriction = -0.00085;
		caliber = 0.85;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 6;
	};

	// 7N22 armor-piercing
	class B_545x39_7N22_Ball : B_556x45_Ball {
		hit = 8;
		typicalSpeed = 890;
		airFriction = -0.00085;
		caliber = 1.0;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 7;
	};
	
};

class CfgMagazines {
	class 30Rnd_556x45_Stanag;
	class 30Rnd_545x39_Mag : 30Rnd_556x45_Stanag {
		ammo = "B_545x39_5N7_Ball";
		initSpeed = 915;
		displayName = $STR_30RND_545x39_DISPLAY_NAME;
		descriptionShort = $STR_30RND_545x39_DESCRIPTION_SHORT;
		picture = "\lkr_545x39_Soviet\ui\ak74_mag_ca.paa";
	};

	class 100Rnd_545x39_Drum : 30Rnd_545x39_Mag {
		count = 100;
		displayName = $STR_100RND_545x39_DISPLAY_NAME;
		descriptionShort = $STR_100RND_545x39_DESCRIPTION_SHORT;
		picture = "\lkr_762x39_Soviet\ui\drum_ca.paa";
	};

	class 30Rnd_545x39_Mag_Tracer : 30Rnd_545x39_Mag {
		ammo = "B_545x39_7T3_Tracer";
		initSpeed = 883;
		displayName = $STR_30RND_545x39_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_30RND_545x39_TRACER_DESCRIPTION_SHORT;
		tracersEvery = 1;
	};

	class 100Rnd_545x39_Drum_Tracer : 30Rnd_545x39_Mag_Tracer {
		count = 100;
		displayName = $STR_100RND_545x39_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_100RND_545x39_TRACER_DESCRIPTION_SHORT;
		picture = "\lkr_762x39_Soviet\ui\drum_ca.paa";
	};

	class 30Rnd_545x39_7N10_Mag : 30Rnd_545x39_Mag {
		ammo = "B_545x39_7N10_Ball";
		initSpeed = 880;
		displayName = $STR_30RND_545x39_7N10_DISPLAY_NAME;
		descriptionShort = $STR_30RND_545x39_7N10_DESCRIPTION_SHORT;
	};
	
	class 30Rnd_545x39_7N22_Mag : 30Rnd_545x39_Mag {
		ammo = "B_545x39_7N22_Ball";
		initSpeed = 890;
		displayName = $STR_30RND_545x39_7N22_DISPLAY_NAME;
		descriptionShort = $STR_30RND_545x39_7N22_DESCRIPTION_SHORT;
	};
};
