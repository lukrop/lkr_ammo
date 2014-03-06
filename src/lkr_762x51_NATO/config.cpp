/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_762x51_NATO {
		units[] = {
			"Box_NATO_Ammo_F",
			"Box_IND_Ammo_F",
			"Box_East_Ammo_F",
			"Box_IND_WpsSpecial_F",
			"Box_NATO_WpsSpecial_F",
			"Box_East_WpsSpecial_F",
			"I_supplyCrate_F",
			"B_supplyCrate_F",
			"O_supplyCrate_F",
			"C_supplyCrate_F"
		};
		weapons[] = {
			"DMR_01_base_F",
			"EBR_base_F"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Weapons_F_EPA_EBR",
			"A3_Weapons_F_EPA_LongRangeRifles_DMR_01",
			"A3_Weapons_F_beta_Ammoboxes",
			"A3_Weapons_F_EPB_Ammoboxes"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgAmmo {
	class BulletBase;
	// M80A1
	class B_762x51_Ball : BulletBase {
		//hit = 14;
		typicalSpeed = 833;
		//airFriction = ;
		//caliber = ;
		//deflecting = ;
		//visibleFire = ;
		//audibleFire = ;
	};

	/*
	// M62 Tracer
	class B_762x51_Tracer_Red : B_762x51_Ball {
		//hit = 14;
		//typicalSpeed = 833;
		//airFriction = ;
		//caliber = ;
		//deflecting = ;
		//visibleFire = ;
		//audibleFire = ;
	};
	*/

	// Mk316 Mod 0
	class B_762x51_Mk316_Ball : B_762x51_Ball {
		hit = 14;
		typicalSpeed = 790;
		airFriction = -0.0008;
		//caliber = ;
		//deflecting = ;
		visibleFire = 5;
		audibleFire = 7;
	};

	// M993 armor-piercing
	class B_762x51_M993_Ball : B_762x51_Ball {
		hit = 16;
		typicalSpeed = 788;
		//airFriction = ;
		caliber = 2;
		//deflecting = ;
		//visibleFire = ;
		//audibleFire = ;
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
	
	// 20Rnd M62 Tracer
	class 20Rnd_762x51_Mag_Tracer : 20Rnd_762x51_Mag {
		ammo = "B_762x51_Tracer_Red";
		displayName = $STR_20RND_762x51_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	// 20Rnd Mk316
	class 20Rnd_762x51_Mk316_Mag : 20Rnd_762x51_Mag {
		ammo = "B_762x51_Mk316_Ball";
		initSpeed = 790;
		displayName = $STR_20RND_762x51_MK316_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_MK316_DESCRIPTION_SHORT;
	};

	// 20Rnd M993 AP
	class 20Rnd_762x51_M993_Mag : 20Rnd_762x51_Mag {
		ammo = "B_762x51_M993_Ball";
		initSpeed = 788;
		displayName = $STR_20RND_762x51_M993_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_M993_DESCRIPTION_SHORT;
	};
	
	// 20Rnd M80A1 STANAG
	class 20Rnd_762x51_Stanag : 20Rnd_762x51_Mag {
		picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
	};

	// 20Rnd M62 Tracer STANAG
	class 20Rnd_762x51_Stanag_Tracer : 20Rnd_762x51_Stanag {
		ammo = "B_762x51_Tracer_Red";
		displayName = $STR_20RND_762x51_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};

	// 20Rnd Mk316 STANAG
	class 20Rnd_762x51_Mk316_Stanag : 20Rnd_762x51_Stanag {
		ammo = "B_762x51_Mk316_Ball";
		initSpeed = 790;
		displayName = $STR_20RND_762x51_MK316_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_MK316_DESCRIPTION_SHORT;
	};

	// 20Rnd M993 AP STANAG
	class 20Rnd_762x51_M993_Stanag : 20Rnd_762x51_Stanag {
		ammo = "B_762x51_M993_Ball";
		initSpeed = 788;
		displayName = $STR_20RND_762x51_M993_DISPLAY_NAME;
		descriptionShort = $STR_20RND_762x51_M993_DESCRIPTION_SHORT;
	};

	// 10Rnd M80A1
	class 10Rnd_762x51_Mag : 20Rnd_762x51_Mag {
		initSpeed = 833;
		displayName = $STR_10RND_762x51_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x51_DESCRIPTION_SHORT;
	};

	// 10Rnd M62 Tracer
	class 10Rnd_762x51_Mag_Tracer : 10Rnd_762x51_Mag {
		ammo = "B_762x51_Tracer_Red";
		displayName = $STR_10RND_762x51_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x51_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	// 10Rnd Mk316
	class 10Rnd_762x51_Mk316_Mag : 10Rnd_762x51_Mag {
		ammo = "B_762x51_Mk316_Ball";
		initSpeed = 790;
		displayName = $STR_10RND_762x51_MK316_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x51_MK316_DESCRIPTION_SHORT;
	};

	// 10Rnd M993
	class 10Rnd_762x51_M993_Mag : 10Rnd_762x51_Mag {
		ammo = "B_762x51_M993_Ball";
		initSpeed = 788;
		displayName = $STR_10RND_762x51_M993_DISPLAY_NAME;
		descriptionShort = $STR_10RND_762x51_M993_DESCRIPTION_SHORT;
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
	
	// 5Rnd M62 Tracer
	class 5Rnd_762x51_Mag_Tracer : 5Rnd_762x51_Mag {
		ammo = "B_762x51_Tracer_Red";
		displayName = $STR_5RND_762x51_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_5RND_762x51_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 1;
	};
	
	// 5Rnd Mk316
	class 5Rnd_762x51_Mk316_Mag : 5Rnd_762x51_Mag {
		ammo = "B_762x51_Mk316_Ball";
		initSpeed = 790;
		displayName = $STR_5RND_762x51_MK316_DISPLAY_NAME;
		descriptionShort = $STR_5RND_762x51_MK316_DESCRIPTION_SHORT;
	};
	
	// 5Rnd M993
	class 5Rnd_762x51_M993_Mag : 5Rnd_762x51_Mag {
		ammo = "B_762x51_M993_Ball";
		initSpeed = 788;
		displayName = $STR_5RND_762x51_M993_DISPLAY_NAME;
		descriptionShort = $STR_5RND_762x51_M993_DESCRIPTION_SHORT;
	};

	// 150Rnd M80A1
	class 150Rnd_762x51_Box : CA_Magazine {
		displayName = $STR_150RND_762x51_DISPLAY_NAME;
		descriptionShort = $STR_150RND_762x51_DESCRIPTION_SHORT;
	};
	
	// 150Rnd M62 Tracer
	class 150Rnd_762x51_Box_Tracer : 150Rnd_762x51_Box {
		displayName = $STR_150RND_762x51_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_150RND_762x51_TRACER_DESCRIPTION_SHORT;
	};

	// 100Rnd M80A1
	class 100Rnd_762x51_Box : 150Rnd_762x51_Box {
		count = 100;
		displayName = $STR_100RND_762x51_DISPLAY_NAME;
		descriptionShort = $STR_100RND_762x51_DESCRIPTION_SHORT;
	};
	
	// 100Rnd M62 Tracer
	class 100Rnd_762x51_Box_Tracer_Red : 150Rnd_762x51_Box_Tracer {
		ammo = "B_762x51_Tracer_Red";
		count = 100;
		displayName = $STR_100RND_762x51_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_100RND_762x51_TRACER_DESCRIPTION_SHORT;
		tracerEvery = 5;
	};
	
};

class CfgWeapons {
	class Rifle_Long_Base_F;
	class DMR_01_base_F : Rifle_Long_Base_F {
		magazines[] = {
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag_Tracer",
			"10Rnd_762x51_Mk316_Mag",
			"10Rnd_762x51_M993_Mag"
		};
	};
	
	class EBR_base_F : Rifle_Long_Base_F {
		magazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag_Tracer",
			"20Rnd_762x51_Mk316_Mag",
			"20Rnd_762x51_M993_Mag"
		};
	};
	
};

class CfgVehicles {
	class thingX;

	class ReammoBox_F : thingX {
		class TransportMagazines;
	};

	class IND_Box_Base : ReammoBox_F {
		class TransportMagazines;
	};
	class NATO_Box_Base : ReammoBox_F {
		class TransportMagazines;
	};
	class EAST_Box_Base : ReammoBox_F {
		class TransportMagazines;
	};


	class Box_NATO_Ammo_F: NATO_Box_Base {
		class TransportMagazines {
			class _xx_20Rnd_762x51_Mag_Tracer {
				count = 6;
				magazine  = "20Rnd_762x51_Mag_Tracer";
			};

			class _xx_20Rnd_762x51_Mk316_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_Mk316_Mag";
			};

			class _xx_20Rnd_762x51_M993_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_M993_Mag";
			};
		};
	};
	
	class Box_IND_Ammo_F: IND_Box_Base {
		class TransportMagazines {
			class _xx_20Rnd_762x51_Mag_Tracer {
				count = 6;
				magazine  = "20Rnd_762x51_Mag_Tracer";
			};

			class _xx_20Rnd_762x51_Mk316_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_Mk316_Mag";
			};

			class _xx_20Rnd_762x51_M993_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_M993_Mag";
			};
		};
	};

	class Box_East_Ammo_F: EAST_Box_Base {
		class TransportMagazines {
			class _xx_10Rnd_762x51_Mag_Tracer {
				count = 6;
				magazine  = "10Rnd_762x51_Mag_Tracer";
			};

			class _xx_10Rnd_762x51_Mk316_Mag {
				count = 6;
				magazine  = "10Rnd_762x51_Mk316_Mag";
			};

			class _xx_10Rnd_762x51_M993_Mag {
				count = 6;
				magazine  = "10Rnd_762x51_M993_Mag";
			};
		};
	};
	
	class Box_IND_WpsSpecial_F: IND_Box_Base {
		class TransportMagazines {
			class _xx_20Rnd_762x51_Mag_Tracer {
				count = 12;
				magazine  = "20Rnd_762x51_Mag_Tracer";
			};

			class _xx_20Rnd_762x51_Mk316_Mag {
				count = 12;
				magazine  = "20Rnd_762x51_Mk316_Mag";
			};

			class _xx_20Rnd_762x51_M993_Mag {
				count = 12;
				magazine  = "20Rnd_762x51_M993_Mag";
			};
		};
	};
	
	class Box_NATO_WpsSpecial_F: NATO_Box_Base {
		class TransportMagazines {
			class _xx_20Rnd_762x51_Mag_Tracer {
				count = 12;
				magazine  = "20Rnd_762x51_Mag_Tracer";
			};

			class _xx_20Rnd_762x51_Mk316_Mag {
				count = 12;
				magazine  = "20Rnd_762x51_Mk316_Mag";
			};

			class _xx_20Rnd_762x51_M993_Mag {
				count = 12;
				magazine  = "20Rnd_762x51_M993_Mag";
			};
		};
	};
	
	class Box_East_WpsSpecial_F: EAST_Box_Base {
		class TransportMagazines {
			class _xx_10Rnd_762x51_Mag_Tracer {
				count = 12;
				magazine  = "10Rnd_762x51_Mag_Tracer";
			};

			class _xx_10Rnd_762x51_Mk316_Mag {
				count = 12;
				magazine  = "10Rnd_762x51_Mk316_Mag";
			};

			class _xx_10Rnd_762x51_M993_Mag {
				count = 12;
				magazine  = "10Rnd_762x51_M993_Mag";
			};
		};
	};

	class B_supplyCrate_F: ReammoBox_F {
		class TransportMagazines {
			class _xx_20Rnd_762x51_Mag_Tracer {
				count = 6;
				magazine  = "20Rnd_762x51_Mag_Tracer";
			};

			class _xx_20Rnd_762x51_Mk316_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_Mk316_Mag";
			};

			class _xx_20Rnd_762x51_M993_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_M993_Mag";
			};
		};
	};

	class C_supplyCrate_F: ReammoBox_F {
		class TransportMagazines {
			class _xx_20Rnd_762x51_Mag_Tracer {
				count = 6;
				magazine  = "20Rnd_762x51_Mag_Tracer";
			};

			class _xx_20Rnd_762x51_Mk316_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_Mk316_Mag";
			};

			class _xx_20Rnd_762x51_M993_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_M993_Mag";
			};
		};
	};
	
	class I_supplyCrate_F: B_supplyCrate_F {
		class TransportMagazines {
			class _xx_20Rnd_762x51_Mag_Tracer {
				count = 6;
				magazine  = "20Rnd_762x51_Mag_Tracer";
			};

			class _xx_20Rnd_762x51_Mk316_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_Mk316_Mag";
			};

			class _xx_20Rnd_762x51_M993_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_M993_Mag";
			};
		};
	};
	
	/*
	class IG_supplyCrate_F: B_supplyCrate_F {
		class TransportMagazines {
			class _xx_20Rnd_762x51_Mag_Tracer {
				count = 6;
				magazine  = "20Rnd_762x51_Mag_Tracer";
			};

			class _xx_20Rnd_762x51_Mk316_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_Mk316_Mag";
			};

			class _xx_20Rnd_762x51_M993_Mag {
				count = 6;
				magazine  = "20Rnd_762x51_M993_Mag";
			};
		};
	};
	*/

	class O_supplyCrate_F: B_supplyCrate_F {
		class TransportMagazines {
			class _xx_10Rnd_762x51_Mag_Tracer {
				count = 6;
				magazine  = "10Rnd_762x51_Mag_Tracer";
			};

			class _xx_10Rnd_762x51_Mk316_Mag {
				count = 6;
				magazine  = "10Rnd_762x51_Mk316_Mag";
			};

			class _xx_10Rnd_762x51_M993_Mag {
				count = 6;
				magazine  = "10Rnd_762x51_M993_Mag";
			};
		};
	};
};

