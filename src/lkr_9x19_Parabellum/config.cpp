/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_9x19_Parabellum
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
	class B_9x21_Ball;
	class B_9x19_FMJFT : B_9x21_Ball
	{
		hit = 5.55;
		typicalSpeed = 304.8;
		airFriction = -0.0011839875;
		caliber = 0.756;
		deflecting = 37;
		visibleFire = 2.6;
		audibleFire = 4.85
	};
	
	class B_9x19_JHP : B_9x21_Ball
	{
		hit = 6.78;
		typicalSpeed = 350.52;
		airFriction = -0.00157865;
		caliber = 0.547;
		deflecting = 34;
		visibleFire = 3;
		audibleFire = 5.1;
	};
	
	class B_9x19_FMJP : B_9x21_Ball
	{
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
	class 15Rnd_9x19_FMJFT_Mag : 16Rnd_9x21_Mag
	{
		ammo = "B_9x19_FMJFT";
		initSpeed = 304.8;
		displayName = $STR_15RND_9x19_FMJFT_DISPLAY_NAME;
		descriptionShort = $STR_15RND_9x19_FMJFT_DESCRIPTION_SHORT;
		count = 15;
	};
	
	class 15Rnd_9x19_JHP_Mag : 16Rnd_9x21_Mag
	{
		ammo = "B_9x19_JHP";
		initSpeed = 350.52;
		displayName = $STR_15RND_9x19_JHP_DISPLAY_NAME;
		descriptionShort = $STR_15RND_9x19_JHP_DESCRIPTION_SHORT;
		count = 15;
	};
	
	class 15Rnd_9x19_FMJP_Mag : 16Rnd_9x21_Mag
	{
		ammo = "B_9x19_FMJP";
		initSpeed = 393.192;
		displayName = $STR_15RND_9x19_FMJP_DISPLAY_NAME;
		descriptionShort = $STR_15RND_9x19_FMJP_DESCRIPTION_SHORT;
		count = 15;
	};
};
