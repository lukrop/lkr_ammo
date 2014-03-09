/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_762x54_R {
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
	// 57-N-323S
	class B_762x54_57N323S_Ball : B_762x51_Ball {
		hit = 9;
		typicalSpeed = 828;
		airFriction = -0.0009;
		caliber = 0.8;
		deflecting = 15;
		visibleFire = 4;
		audibleFire = 7;
	};

	// 7T2 Tracer
	class B_762x54_7T2_Tracer : B_762x54_57N323S_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};

	// 7N1 Sniper load
	class B_762x54_7N1_Ball : B_762x54_57N323S_Ball {
		hit = 10;
		typicalSpeed = 823;
		caliber = 0.9;
	};
	
};

class CfgMagazines {
	class 20Rnd_762x51_Mag;
	class 10Rnd_762x54_Mag : 20Rnd_762x51_Mag {
		count = 10;
		ammo = "B_762x54_57N323S_Ball";
		initSpeed = 828;
		displayName = $STR_10RND_762x54_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x54_DESCRIPTION_SHORT;
		picture = "\lkr_762x54_R\ui\svd_mag_ca.paa";
	};

	class 10Rnd_762x54_Mag_Tracer : 10Rnd_762x54_Mag {
		ammo = "B_762x54_7T2_Tracer";
		initSpeed = 798;
		displayName = $STR_10RND_762x54_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x54_TRACER_DESCRIPTION_SHORT;
		tracersEvery = 1;
	};

	class 10Rnd_762x54_7N1_Mag : 10Rnd_762x54_Mag {
		ammo = "B_762x54_7N1_Ball";
		initSpeed = 823;
		displayName = $STR_10RND_762x54_7N1_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x54_7N1_DESCRIPTION_SHORT;
	};

	class 100Rnd_762x54_Box : 20Rnd_762x51_Mag {
		count = 100;
		ammo = "B_762x54_57N323S_Ball";
		initSpeed = 828;
		displayName = $STR_100RND_762x54_DISPLAY_NAME;
		descriptionShort = $STR_100RND_762x54_DESCRIPTION_SHORT;
		picture = "\lkr_762x54_R\ui\pkm_box_ca.paa";
	};

	class 100Rnd_762x54_Box_Tracer : 100Rnd_762x54_Box {
		ammo = "B_762x54_7T2_Tracer";
		displayName = $STR_100RND_762x54_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_100RND_762x54_TRACER_DESCRIPTION_SHORT;
		tracersEvery = 1;
	};

};
