/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_9x19_Parabellum {
		units[] = {
			"Box_NATO_Ammo_F",
			"Box_East_Ammo_F",
			"Box_IND_Ammo_F"
		};
		weapons[] = {
			"hgun_P07_F",
			"hgun_Rook40_F",
			"pdw2000_base_F",
			"SMG_02_base_F"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Weapons_F_Pistols_P07",
			"A3_Weapons_F_Pistols_Rook40",
			"A3_Weapons_F_Pistols_PDW2000",
			"a3_weapons_f_rifles_SMG_02",
			"A3_Weapons_F_EPB_Ammoboxes"
		};
		author[] = {
			"lukrop"
		};
	};
};

class CfgAmmo {
	class B_9x21_Ball;
	class B_9x19_FMJFT : B_9x21_Ball {
		hit = 5.55;
		typicalSpeed = 304.8;
		airFriction = -0.0011839875;
		caliber = 0.756;
		deflecting = 37;
		visibleFire = 2.6;
		audibleFire = 4.85
	};
	
	class B_9x19_JHP : B_9x21_Ball {
		hit = 6.78;
		typicalSpeed = 350.52;
		airFriction = -0.00157865;
		caliber = 0.547;
		deflecting = 34;
		visibleFire = 3;
		audibleFire = 5.1;
	};
	
	class B_9x19_FMJP : B_9x21_Ball {
		hit = 5.97;
		typicalSpeed = 393.192;
		airFriction = -0.0017671455;
		caliber = 0.838;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	
};

class CfgMagazines {
	class 16Rnd_9x21_Mag;
	class 16Rnd_9x19_FMJFT_Mag : 16Rnd_9x21_Mag {
		ammo = "B_9x19_FMJFT";
		initSpeed = 304.8;
		displayName = $STR_16RND_9x19_FMJFT_DISPLAY_NAME;
		descriptionShort = $STR_16RND_9x19_FMJFT_DESCRIPTION_SHORT;
	};
	
	class 16Rnd_9x19_JHP_Mag : 16Rnd_9x21_Mag {
		ammo = "B_9x19_JHP";
		initSpeed = 350.52;
		displayName = $STR_16RND_9x19_JHP_DISPLAY_NAME;
		descriptionShort = $STR_16RND_9x19_JHP_DESCRIPTION_SHORT;
	};
	
	class 16Rnd_9x19_FMJP_Mag : 16Rnd_9x21_Mag {
		ammo = "B_9x19_FMJP";
		initSpeed = 393.192;
		displayName = $STR_16RND_9x19_FMJP_DISPLAY_NAME;
		descriptionShort = $STR_16RND_9x19_FMJP_DESCRIPTION_SHORT;
	};
	class 30Rnd_9x21_Mag;
	class 30Rnd_9x19_FMJFT_Mag : 30Rnd_9x21_Mag {
		ammo = "B_9x19_FMJFT";
		initSpeed = 304.8;
		displayName = $STR_30RND_9x19_FMJFT_DISPLAY_NAME;
		descriptionShort = $STR_30RND_9x19_FMJFT_DESCRIPTION_SHORT;
	};
	
	class 30Rnd_9x19_JHP_Mag : 30Rnd_9x21_Mag {
		ammo = "B_9x19_JHP";
		initSpeed = 350.52;
		displayName = $STR_30RND_9x19_JHP_DISPLAY_NAME;
		descriptionShort = $STR_30RND_9x19_JHP_DESCRIPTION_SHORT;
	};
	
	class 30Rnd_9x19_FMJP_Mag : 30Rnd_9x21_Mag {
		ammo = "B_9x19_FMJP";
		initSpeed = 393.192;
		displayName = $STR_30RND_9x19_FMJP_DISPLAY_NAME;
		descriptionShort = $STR_30RND_9x19_FMJP_DESCRIPTION_SHORT;
	};
};

class CfgWeapons {
	class Pistol_Base_F;
	class hgun_P07_F : Pistol_Base_F {
		magazines[] = {
			"16Rnd_9x19_FMJFT_Mag",
			"16Rnd_9x19_JHP_Mag",
			"16Rnd_9x19_FMJP_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_9x21_Mag"
		};
	};
	class hgun_Rook40_F : Pistol_Base_F {
		magazines[] = {
			"16Rnd_9x19_FMJFT_Mag",
			"16Rnd_9x19_JHP_Mag",
			"16Rnd_9x19_FMJP_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_9x21_Mag"
		};
	};
	class Rifle_Base_F;
	class pdw2000_base_F : Rifle_Base_F {
		magazines[] = {
			"30Rnd_9x19_FMJFT_Mag",
			"30Rnd_9x19_JHP_Mag",
			"30Rnd_9x19_FMJP_Mag",
			"16Rnd_9x19_FMJFT_Mag",
			"16Rnd_9x19_JHP_Mag",
			"16Rnd_9x19_FMJP_Mag",
			"30Rnd_9x21_Mag",
			"16Rnd_9x21_Mag"
		};
	};
	class SMG_02_base_F : Rifle_Base_F {
		magazines[] = {
			"30Rnd_9x19_FMJFT_Mag",
			"30Rnd_9x19_JHP_Mag",
			"30Rnd_9x19_FMJP_Mag",
			"30Rnd_9x21_Mag"
		};
	};
};

class CfgVehicles {
	class ReammoBox_F;
	class NATO_Box_Base : ReammoBox_F {
		class TransportMagazines;
	};
	
	class EAST_Box_Base : ReammoBox_F {
		class TransportMagazines;
	};
	
	class IND_Box_Base : ReammoBox_F {
		class TransportMagazines;
	};
	
	class Box_NATO_Ammo_F : NATO_Box_Base {
		class TransportMagazines {
			class _xx_16Rnd_9x19_FMJFT_Mag {
				count = 6;
				magazine = "16Rnd_9x19_FMJFT_Mag";
			};
			class _xx_16Rnd_9x19_JHP_Mag {
				count = 6;
				magazine = "16Rnd_9x19_JHP_Mag";
			};
			class _xx_16Rnd_9x19_FMJP_Mag {
				count = 6;
				magazine = "16Rnd_9x19_FMJP_Mag";
			};
		};
	};
	
	class Box_East_Ammo_F : EAST_Box_Base {
		class TransportMagazines {
			class _xx_16Rnd_9x19_FMJFT_Mag {
				count = 6;
				magazine = "16Rnd_9x19_FMJFT_Mag";
			};
			class _xx_16Rnd_9x19_JHP_Mag {
				count = 6;
				magazine = "16Rnd_9x19_JHP_Mag";
			};
			class _xx_16Rnd_9x19_FMJP_Mag {
				count = 6;
				magazine = "16Rnd_9x19_FMJP_Mag";
			};
			class _xx_30Rnd_9x19_FMJFT_Mag {
				count = 6;
				magazine = "30Rnd_9x19_FMJFT_Mag";
			};
			class _xx_30Rnd_9x19_JHP_Mag {
				count = 6;
				magazine = "30Rnd_9x19_JHP_Mag";
			};
			class _xx_30Rnd_9x19_FMJP_Mag {
				count = 6;
				magazine = "30Rnd_9x19_FMJP_Mag";
			};
		};
	};
	
	class Box_IND_Ammo_F : IND_Box_Base {
		class TransportMagazines {
			class _xx_30Rnd_9x19_FMJFT_Mag {
				count = 6;
				magazine = "30Rnd_9x19_FMJFT_Mag";
			};
			class _xx_30Rnd_9x19_JHP_Mag {
				count = 6;
				magazine = "30Rnd_9x19_JHP_Mag";
			};
			class _xx_30Rnd_9x19_FMJP_Mag {
				count = 6;
				magazine = "30Rnd_9x19_FMJP_Mag";
			};
		};
	};
};
