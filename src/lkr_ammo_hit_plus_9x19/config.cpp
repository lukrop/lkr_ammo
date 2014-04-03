/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_ammo_hit_plus_9x19 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"lkr_9x19_Parabellum"
		};
		author[] = {
			"lukrop"
		};
	};
};

#define hitplus 7

class CfgAmmo {
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
