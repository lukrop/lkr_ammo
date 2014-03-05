/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_556x45_NATO {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Weapons_F_EPA_Ammoboxes"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgAmmo {
	class BulletBase;

	// M855A1
	class B_556x45_Ball : BulletBase {
		hit = 9.04;
		typicalSpeed = 960.12;
		airFriction = -0.0007713274;
		caliber = 1.01;
		deflecting = 21;
		visibleFire = 3;
		audibleFire = 7;
	};
	
	// Mk318 Mod 0 SOST
	class B_556x45_Mk318_Ball : B_556x45_Ball {
		hit = 9.52;
		typicalSpeed = 950.3664;
		airFriction = -0.000773845;
		caliber = 0.879;
		deflecting = 17;
		visibleFire = 3;
		audibleFire = 5.5;
	};
	
	// Mk262 
	class B_556x45_Mk262_Ball : B_556x45_Ball {
		hit = 10.26;
		typicalSpeed = 838.2;
		airFriction = -0.0006541367;
		caliber = 0.777;
		deflecting = 15;
		visibleFire = 2.5;
		audibleFire = 5;
	};
	
};

class CfgMagazines {
	class CA_Magazine;
	class 30Rnd_556x45_Stanag : CA_Magazine {
		initSpeed = 960.12;
		displayName = $STR_30RND_556x45_DISPLAY_NAME;
		descriptionShort = $STR_30RND_556x45_DESCRIPTION_SHORT;
	};
	
	class 30Rnd_556x45_Stanag_Tracer_Red : 30Rnd_556x45_Stanag {
		displayName = $STR_30RND_556x45_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_30RND_556x45_TRACER_DESCRIPTION_SHORT;
	};
	
	class 100Rnd_556x45_Pouch : 30Rnd_556x45_Stanag {
		count = 100;
		initSpeed = 960.12;
		displayName = $STR_100RND_556x45_DISPLAY_NAME;
		descriptionShort = $STR_100RND_556x45_DESCRIPTION_SHORT;
		picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		mass = 16;
	};
	
	class 100Rnd_556x45_Pouch_Tracer : 100Rnd_556x45_Pouch {
		ammo = "B_556x45_Ball_Tracer_Red";
		displayName = $STR_100RND_556x45_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_100RND_556x45_TRACER_DESCRIPTION_SHORT;
		tracersEvery = 5;
	};
	
	class 200Rnd_556x45_Box : 100Rnd_556x45_Pouch {
		count = 200;
		displayName = $STR_200RND_556x45_DISPLAY_NAME;
		descriptionShort = $STR_200RND_556x45_DESCRIPTION_SHORT;
		mass = 32;
	};
	
	class 200Rnd_556x45_Box_Tracer : 200Rnd_556x45_Box {
		ammo = "B_556x45_Ball_Tracer_Red";
		displayName = $STR_200RND_556x45_TRACER_DISPLAY_NAME;
		descriptionShort = $STR_200RND_556x45_TRACER_DESCRIPTION_SHORT;
		tracersEvery = 5;
	};

	class 30Rnd_556x45_Mk318_Stanag : 30Rnd_556x45_Stanag {
		ammo = "B_556x45_Mk318_Ball";
		initSpeed = 950.3664;
		displayName = $STR_30RND_556x45_MK318_DISPLAY_NAME;
		descriptionShort = $STR_30RND_556x45_MK318_DESCRIPTION_SHORT;
	};
	
	class 30Rnd_556x45_Mk262_Stanag : 30Rnd_556x45_Stanag {
		ammo = "B_556x45_Mk262_Ball";
		initSpeed = 838.2;
		displayName = $STR_30RND_556x45_MK262_DISPLAY_NAME;
		descriptionShort = $STR_30RND_556x45_MK262_DESCRIPTION_SHORT;
	};
	
};

class CfgWeapons {
	class Rifle_Base_F;
	class mk20_base_F : Rifle_Base_F {
		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	
	class SDAR_base_F : Rifle_Base_F {
		magazines[] = {
			"20Rnd_556x45_UW_mag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
	
	class Tavor_base_F : Rifle_Base_F {
		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
};

class CfgVehicles {
	class ReammoBox_F;
	class IND_Box_Base : ReammoBox_F {
		class TransportMagazines;
	};
	class NATO_Box_Base : ReammoBox_F {
		class TransportMagazines;
	};
	class EAST_Box_Base : ReammoBox_F {
		class TransportMagazines;
	};
	class B_supplyCrate_F : ReammoBox_F {
		class TransportMagazines;
	};
	
	class Box_IND_Ammo_F: IND_Box_Base {
		class TransportMagazines {
			class _xx_30_Rnd_556x45_Stanag_Tracer_Red {
				count = 12;
				magazine  = "30Rnd_556x45_Stanag_Tracer_Red";
			};

			class _xx_30_Rnd_556x45_Mk318_Stanag {
				count = 12;
				magazine  = "30Rnd_556x45_Mk318_Stanag";
			};

			class _xx_30_Rnd_556x45_Mk262_Stanag {
				count = 12;
				magazine  = "30Rnd_556x45_Mk262_Stanag";
			};
		};
	};
	
	class Box_IND_Wps_F: IND_Box_Base {
		class TransportMagazines {
			class _xx_30_Rnd_556x45_Stanag_Tracer_Red {
				count = 8;
				magazine  = "30Rnd_556x45_Stanag_Tracer_Red";
			};

			class _xx_30_Rnd_556x45_Mk318_Stanag {
				count = 8;
				magazine  = "30Rnd_556x45_Mk318_Stanag";
			};

			class _xx_30_Rnd_556x45_Mk262_Stanag {
				count = 8;
				magazine  = "30Rnd_556x45_Mk262_Stanag";
			};

		};
	};
	
	class Box_IND_WpsSpecial_F: IND_Box_Base {
		class TransportMagazines {
			class _xx_30_Rnd_556x45_Stanag_Tracer_Red {
				count = 3;
				magazine  = "30Rnd_556x45_Stanag_Tracer_Red";
			};

			class _xx_30_Rnd_556x45_Mk318_Stanag {
				count = 3;
				magazine  = "30Rnd_556x45_Mk318_Stanag";
			};

			class _xx_30_Rnd_556x45_Mk262_Stanag {
				count = 3;
				magazine  = "30Rnd_556x45_Mk262_Stanag";
			};

		};
	};
	
	class Box_NATO_WpsSpecial_F: NATO_Box_Base {
		class TransportMagazines {
			class _xx_30_Rnd_556x45_Stanag_Tracer_Red {
				count = 3;
				magazine  = "30Rnd_556x45_Stanag_Tracer_Red";
			};

			class _xx_30_Rnd_556x45_Mk318_Stanag {
				count = 3;
				magazine  = "30Rnd_556x45_Mk318_Stanag";
			};

			class _xx_30_Rnd_556x45_Mk262_Stanag {
				count = 3;
				magazine  = "30Rnd_556x45_Mk262_Stanag";
			};

		};
	};
	
	class Box_East_WpsSpecial_F: EAST_Box_Base {
		class TransportMagazines {
			class _xx_30_Rnd_556x45_Stanag_Tracer_Red {
				count = 3;
				magazine  = "30Rnd_556x45_Stanag_Tracer_Red";
			};

			class _xx_30_Rnd_556x45_Mk318_Stanag {
				count = 3;
				magazine  = "30Rnd_556x45_Mk318_Stanag";
			};

			class _xx_30_Rnd_556x45_Mk262_Stanag {
				count = 3;
				magazine  = "30Rnd_556x45_Mk262_Stanag";
			};

		};
	};
	
	class I_supplyCrate_F: B_supplyCrate_F {
		class TransportMagazines {
			class _xx_30_Rnd_556x45_Stanag_Tracer_Red {
				count = 24;
				magazine  = "30Rnd_556x45_Stanag_Tracer_Red";
			};

			class _xx_30_Rnd_556x45_Mk318_Stanag {
				count = 24;
				magazine  = "30Rnd_556x45_Mk318_Stanag";
			};

			class _xx_30_Rnd_556x45_Mk262_Stanag {
				count = 24;
				magazine  = "30Rnd_556x45_Mk262_Stanag";
			};

		};
	};
	
	class IG_supplyCrate_F: B_supplyCrate_F {
		class TransportMagazines {
			class _xx_30_Rnd_556x45_Stanag_Tracer_Red {
				count = 24;
				magazine  = "30Rnd_556x45_Stanag_Tracer_Red";
			};

			class _xx_30_Rnd_556x45_Mk318_Stanag {
				count = 24;
				magazine  = "30Rnd_556x45_Mk318_Stanag";
			};

			class _xx_30_Rnd_556x45_Mk262_Stanag {
				count = 24;
				magazine  = "30Rnd_556x45_Mk262_Stanag";
			};

		};
	};
};
