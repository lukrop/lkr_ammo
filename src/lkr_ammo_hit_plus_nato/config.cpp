/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_ammo_hit_plus_nato {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"lkr_556x45_NATO",
			"lkr_762x51_NATO",
			"lkr_9x19_Parabellum"
		};
		author[] = {
			"lukrop"
		};
	};
};

#define hitplus 5

class CfgAmmo {
	class BulletBase;

	// M855A1
	class B_556x45_Ball : BulletBase {
		hit = 9.04 + hitplus;
	};
	
	// Mk318 Mod 0 SOST
	class B_556x45_Mk318_Ball : B_556x45_Ball {
		hit = 9.52 + hitplus;
	};
	
	// Mk262 
	class B_556x45_Mk262_Ball : B_556x45_Ball {
		hit = 10.26 + hitplus;
	};

	// M80A1
	class B_762x51_Ball : BulletBase {
		hit = 12 + hitplus;
	};

	/*
	// M62 Tracer
	class B_762x51_Tracer_Red : B_762x51_Ball {
		//hit = 14;
	};
	*/

	// Mk316 Mod 0
	class B_762x51_Mk316_Ball : B_762x51_Ball {
		hit = 14 + hitplus;
	};

	// M993 armor-piercing
	class B_762x51_M993_Ball : B_762x51_Ball {
		hit = 16 + hitplus;
	};

	class B_9x21_Ball;
	class B_9x19_FMJFT : B_9x21_Ball {
		hit = 5.55 + hitplus;
	};
	
	class B_9x19_JHP : B_9x21_Ball {
		hit = 6.78 + hitplus;
	};
	
	class B_9x19_FMJP : B_9x21_Ball {
		hit = 5.97 + hitplus;
	};
	
};
