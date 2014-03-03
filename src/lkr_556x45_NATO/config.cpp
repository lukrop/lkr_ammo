/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_556x45_NATO
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		author[]=
		{
			"lukrop"
		};
	};
};

class CfgAmmo 
{
	class BulletBase;
	class B_556x45_Ball : BulletBase
	{
		hit = 9.72;
		typicalSpeed = 960.12;
		airFriction = -0.0007713274;
		caliber = 0.998;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 7;
	};
	
	class B_556x45_Mk318_Ball : B_556x45_Ball
	{
		hit = 9.94;
		typicalSpeed = 950.3664;
		airFriction = -0.000773845;
		caliber = 0.877;
		deflecting = 16;
		visibleFire = 3;
		audibleFire = 5.5;
	};
	
	class B_556x45_Mk318_Ball_Tracer_Yellow : B_556x45_Mk318_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow"; 
	};
	
	class B_556x45_Mk318_Ball_Tracer_Red : B_556x45_Mk318_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red"; 
	};
	
	class B_556x45_Mk318_Ball_Tracer_Green : B_556x45_Mk318_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green"; 
	};
	
	class B_556x45_Mk262_Ball : B_556x45_Ball
	{
		hit = 10.17;
		typicalSpeed = 838.2;
		airFriction = -0.0006541367;
		caliber = 0.769;
		deflecting = 14;
		visibleFire = 2.5;
		audibleFire = 5;
	};
	
	class B_556x45_Mk262_Ball_Tracer_Yellow : B_556x45_Mk262_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow"; 
	};
	
	class B_556x45_Mk262_Ball_Tracer_Red : B_556x45_Mk262_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red"; 
	};
	
	class B_556x45_Mk262_Ball_Tracer_Green : B_556x45_Mk262_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green"; 
	};
};

class CfgMagazines {
	class CA_Magazine;
	class 30Rnd_556x45_Stanag : CA_Magazine
	{
		initSpeed = 960.12;
		displayName = "5.56mm 30rnd M855A1";
		descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Type: M855A1 EPR";
	};
	
	class 30Rnd_556x45_Stanag_Tracer_Green : 30Rnd_556x45_Stanag
	{
		displayName = "5.56mm 30rnd M855A1 Tracer Green";
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Green<br />Rounds: 30<br />Type: M855A1 EPR";
	};
	
	class 30Rnd_556x45_Stanag_Tracer_Red : 30Rnd_556x45_Stanag
	{
		displayName = "5.56mm 30rnd M855A1 Tracer Red";
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Red<br />Rounds: 30<br />Type: M855A1 EPR";
	};
	
	class 30Rnd_556x45_Stanag_Tracer_Yellow : 30Rnd_556x45_Stanag
	{
		displayName = "5.56mm 30rnd M855A1 Tracer Yellow";
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Yellow<br />Rounds: 30<br />Type: M855A1 EPR";
	};
	
	class 30Rnd_556x45_Mk318_Stanag : 30Rnd_556x45_Stanag
	{
		ammo = "B_556x45_Mk318_Ball";
		initSpeed = 950.3664;
		displayName = "5.56mm 30rnd Mk318";
		descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Type: Mk318 Mod 0 SOST";
	};
	
	class 30Rnd_556x45_Mk318_Stanag_Tracer_Green : 30Rnd_556x45_Mk318_Stanag
	{
		ammo = "B_556x45_Mk318_Ball_Tracer_Green";
		displayName = "5.56mm 30rnd Mk318 Tracer Green";
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Green<br />Rounds: 30<br />Type: Mk318 Mod 0 SOST";
		tracersEvery = 1;
	};
	
	class 30Rnd_556x45_Mk318_Stanag_Tracer_Red : 30Rnd_556x45_Mk318_Stanag
	{
		ammo = "B_556x45_Mk318_Ball_Tracer_Red";
		displayName = "5.56mm 30rnd Mk318 Tracer Red";
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Red<br />Rounds: 30<br />Type: Mk318 Mod 0 SOST";
		tracersEvery = 1;
	};
	
	class 30Rnd_556x45_Mk318_Stanag_Tracer_Yellow : 30Rnd_556x45_Mk318_Stanag
	{
		ammo = "B_556x45_Mk318_Ball_Tracer_Yellow";
		displayName = "5.56mm 30rnd Mk318 Tracer Yellow";
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Yellow<br />Rounds: 30<br />Type: Mk318 Mod 0 SOST";
		tracersEvery = 1;
	};
	
	class 30Rnd_556x45_Mk262_Stanag : 30Rnd_556x45_Stanag
	{
		ammo = "B_556x45_Mk262_Ball";
		initSpeed = 838.2;
		displayName = "5.56mm 30rnd Mk262";
		descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Type: Mk262 Mod 1 SPR";
	};
	
	class 30Rnd_556x45_Mk262_Stanag_Tracer_Green : 30Rnd_556x45_Mk318_Stanag
	{
		ammo = "B_556x45_Mk262_Ball_Tracer_Green";
		displayName = "5.56mm 30rnd Mk262 Tracer Green";
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Green<br />Rounds: 30<br />Type: Mk262 Mod 1 SPR";
		tracersEvery = 1;
	};
	
	class 30Rnd_556x45_Mk262_Stanag_Tracer_Red : 30Rnd_556x45_Mk318_Stanag
	{
		ammo = "B_556x45_Mk262_Ball_Tracer_Red";
		displayName = "5.56mm 30rnd Mk262 Tracer Red";
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Red<br />Rounds: 30<br />Type: Mk262 Mod 1 SPR";
		tracersEvery = 1;
	};
	
	class 30Rnd_556x45_Mk262_Stanag_Tracer_Yellow : 30Rnd_556x45_Mk318_Stanag
	{
		ammo = "B_556x45_Mk262_Ball_Tracer_Yellow";
		displayName = "5.56mm 30rnd Mk262 Tracer Yellow";
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Yellow<br />Rounds: 30<br />Type: Mk262 Mod 1 SPR";
		tracersEvery = 1;
	};
};

class CfgWeapons {
	class Rifle_Base_F;
	class mk20_base_F : Rifle_Base_F
	{
		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow"
		};
	};
	
	class SDAR_base_F : Rifle_Base_F
	{
		magazines[] = {
			"20Rnd_556x45_UW_mag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow"
		};
	};
	
	class Tavor_base_F : Rifle_Base_F
	{
		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk318_Stanag",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk262_Stanag",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow"
		};
	};
};
