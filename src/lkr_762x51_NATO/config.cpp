/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_762x51_NATO {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Weapons_F_EPA"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgAmmo {
	class BulletBase;
	class B_762x51_Ball : BulletBase {
		hit = 14;
		typicalSpeed = 833;
		//airFriction = ;
		//caliber = ;
		//deflecting = ;
		//visibleFire = ;
		//audibleFire = ;
	};
	
	class B_762x51_Mk316_Ball : B_762x51_Ball {
		hit = 14;
		typicalSpeed = 790;
		airFriction = -0.0008;
		//caliber = ;
		//deflecting = ;
		visibleFire = 5;
		audibleFire = 7;
	};
	
	class B_762x51_Mk316_Ball_Tracer_Red : B_762x51_Mk316_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red"; 
	};
	
	class B_762x51_Mk316_Ball_Tracer_Green : B_762x51_Mk316_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green"; 
	};
	
};

class CfgMagazines {
	class CA_Magazine;
	
	// 20Rnd M80A1
	class 20Rnd_762x51_Mag : CA_Magazine {
		initSpeed = 833;
		displayName = $STR_20RND_762x51_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_DESCRIPTION_SHORT;
	};
	
	class 20Rnd_762x51_Mag_Tracer_Green : 20Rnd_762x51_Mag {
		ammo = "B_762x51_Tracer_Green";
		displayName = $STR_20RND_762x51_GREEN_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_GREEN_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	class 20Rnd_762x51_Mag_Tracer_Red : 20Rnd_762x51_Mag {
		ammo = "B_762x51_Tracer_Red";
		displayName = $STR_20RND_762x51_RED_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_RED_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	// 20Rnd Mk316
	class 20Rnd_762x51_Mk316_Mag : 20Rnd_762x51_Mag {
		ammo = "B_762x51_Mk316_Ball";
		initSpeed = 790;
		displayName = $STR_20RND_762x51_MK316_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_MK316_DESCRIPTION_SHORT;
	};
	
	class 20Rnd_762x51_Mk316_Mag_Tracer_Green : 20Rnd_762x51_Mk316_Mag {
		ammo = "B_762x51_Mk316_Ball_Tracer_Green";
		displayName = $STR_20RND_762x51_MK316_GREEN_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_MK316_GREEN_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	class 20Rnd_762x51_Mk316_Mag_Tracer_Red : 20Rnd_762x51_Mk316_Mag {
		ammo = "B_762x51_Mk316_Ball_Tracer_Red";
		displayName = $STR_20RND_762x51_MK316_RED_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_MK316_RED_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	// 10Rnd M80A1
	class 10Rnd_762x51_Mag : 20Rnd_762x51_Mag {
		initSpeed = 833;
		displayName = $STR_10RND_762x51_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x51_DESCRIPTION_SHORT;
	};
	
	class 10Rnd_762x51_Mag_Tracer_Green : 10Rnd_762x51_Mag {
		ammo = "B_762x51_Tracer_Green";
		displayName = $STR_10RND_762x51_GREEN_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x51_GREEN_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	class 10Rnd_762x51_Mag_Tracer_Red : 10Rnd_762x51_Mag {
		ammo = "B_762x51_Tracer_Red";
		displayName = $STR_10RND_762x51_RED_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x51_RED_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	// 10Rnd Mk316
	class 10Rnd_762x51_Mk316_Mag : 10Rnd_762x51_Mag {
		ammo = "B_762x51_Mk316_Ball";
		initSpeed = 790;
		displayName = $STR_10RND_762x51_MK316_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x51_MK316_DESCRIPTION_SHORT;
	};
	
	class 10Rnd_762x51_Mk316_Mag_Tracer_Green : 10Rnd_762x51_Mk316_Mag {
		ammo = "B_762x51_Mk316_Ball_Tracer_Green";
		displayName = $STR_10RND_762x51_MK316_GREEN_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x51_MK316_GREEN_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	class 10Rnd_762x51_Mk316_Mag_Tracer_Red : 10Rnd_762x51_Mk316_Mag {
		ammo = "B_762x51_Mk316_Ball_Tracer_Red";
		displayName = $STR_10RND_762x51_MK316_RED_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x51_MK316_RED_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	// 5Rnd M80A1
	class 5Rnd_762x51_Mag : 20Rnd_762x51_Mag {
		count = 5;
		initSpeed = 833;
		displayName = $STR_5RND_762x51_DISPLAY_NAME;
		descriptionShort = $STR_5RND_762x51_DESCRIPTION_SHORT;
		picture = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		mass = 3;
	};
	
	class 5Rnd_762x51_Mag_Tracer_Green : 5Rnd_762x51_Mag {
		ammo = "B_762x51_Tracer_Green";
		displayName = $STR_5RND_762x51_GREEN_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_5RND_762x51_GREEN_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	class 5Rnd_762x51_Mag_Tracer_Red : 5Rnd_762x51_Mag {
		ammo = "B_762x51_Tracer_Red";
		displayName = $STR_5RND_762x51_RED_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_5RND_762x51_RED_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	// 5Rnd Mk316
	class 5Rnd_762x51_Mk316_Mag : 5Rnd_762x51_Mag {
		ammo = "B_762x51_Mk316_Ball";
		initSpeed = 790;
		displayName = $STR_5RND_762x51_MK316_DISPLAY_NAME;
		descriptionShort = $STR_5RND_762x51_MK316_DESCRIPTION_SHORT;
	};
	
	class 5Rnd_762x51_Mk316_Mag_Tracer_Green : 5Rnd_762x51_Mk316_Mag {
		ammo = "B_762x51_Mk316_Ball_Tracer_Green";
		displayName = $STR_5RND_762x51_MK316_GREEN_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_5RND_762x51_MK316_GREEN_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	class 5Rnd_762x51_Mk316_Mag_Tracer_Red : 5Rnd_762x51_Mk316_Mag {
		ammo = "B_762x51_Mk316_Ball_Tracer_Red";
		displayName = $STR_5RND_762x51_MK316_RED_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_5RND_762x51_MK316_RED_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	// 150Rnd M80A1
	class 150Rnd_762x51_Box : CA_Magazine {
		displayName = $STR_150RND_762x51_DISPLAY_NAME;
		descriptionShort = $STR_150RND_762x51_DESCRIPTION_SHORT;
	};
	
	class 150Rnd_762x51_Box_Tracer : 150Rnd_762x51_Box {
		displayName = $STR_150RND_762x51_GREEN_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_150RND_762x51_GREEN_TRACER_DESCRIPTION_SHORT;
	};
	
	// 100Rnd M80A1
	class 100Rnd_762x51_Box : 150Rnd_762x51_Box {
		count = 100;
		displayName = $STR_100RND_762x51_DISPLAY_NAME;
		descriptionShort = $STR_100RND_762x51_DESCRIPTION_SHORT;
	};
	
	class 100Rnd_762x51_Box_Tracer_Green : 150Rnd_762x51_Box_Tracer {
		count = 100;
		displayName = $STR_100RND_762x51_GREEN_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_100RND_762x51_GREEN_TRACER_DESCRIPTION_SHORT;
	};
	
	class 100Rnd_762x51_Box_Tracer_Red : 150Rnd_762x51_Box_Tracer {
		ammo = "B_762x51_Tracer_Red";
		count = 100;
		displayName = $STR_100RND_762x51_RED_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_100RND_762x51_RED_TRACER_DESCRIPTION_SHORT;
	};
	
};

class CfgWeapons {
	class Rifle_Long_Base_F;
	class DMR_01_base_F : Rifle_Long_Base_F {
		magazines[] = {
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag_Tracer_Red",
			"10Rnd_762x51_Mag_Tracer_Green",
			"10Rnd_762x51_Mk316_Mag",
			"10Rnd_762x51_Mk316_Mag_Tracer_Red",
			"10Rnd_762x51_Mk316_Mag_Tracer_Green"
		};
	};
	
	class EBR_base_F : Rifle_Long_Base_F {
		magazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag_Tracer_Red",
			"20Rnd_762x51_Mag_Tracer_Green",
			"20Rnd_762x51_Mk316_Mag",
			"20Rnd_762x51_Mk316_Mag_Tracer_Red",
			"20Rnd_762x51_Mk316_Mag_Tracer_Green"
		};
	};
	
};
