/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_ammo_hit_plus_soviet {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"lkr_545x39_Soviet",
			"lkr_762x39_Soviet",
			"lkr_762x54_R"
		};
		author[] = {
			"lukrop"
		};
	};
};

#define hitplus 5

class CfgAmmo {
	class B_556x45_Ball;
	// 5N7
	class B_545x39_5N7_Ball : B_556x45_Ball {
		hit = 9 + hitplus;
	};
	
	class B_556x45_Ball_Tracer_Green;
	// 7T3 Tracer
	class B_545x39_7T3_Tracer : B_556x45_Ball_Tracer_Green{
		hit = 8 + hitplus;
	};
	
	// 7N10
	class B_545x39_7N10_Ball : B_556x45_Ball {
		hit = 8.5 + hitplus
	};

	// 7N22 armor-piercing
	class B_545x39_7N22_Ball : B_556x45_Ball {
		hit = 8 + hitplus;
	};

	class B_762x51_Ball;
	// 57-N-231
	class B_762x39_57N231_Ball : B_762x51_Ball {
		hit = 8.5 + hitplus;
	};

	// 57-N-323S
	class B_762x54_57N323S_Ball : B_762x51_Ball {
		hit = 9 + hitplus;
	};

	// 7N1 Sniper load
	class B_762x54_7N1_Ball : B_762x54_57N323S_Ball {
		hit = 10 + hitplus;
	};
};
