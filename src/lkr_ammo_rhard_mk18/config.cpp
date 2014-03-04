/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_ammo_rhard_mk18
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"lkr_556x45_NATO",
			"RHARD_MK18_Mod1"
		};
		author[]=
		{
			"lukrop"
		};
	};
};

class CfgWeapons
{
	class Rifle_Base_F;
	class RHARD_MK18_base_F: Rifle_Base_F
	{
		magazines[]=
		{
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

class CfgVehicles {
	class ReammoBox_F;
	class NATO_Box_Base : ReammoBox_F
	{
		class TransportMagazines;
	};
	
	class RHARD_Mk18_Ammobox: NATO_Box_Base
	{
		class TransportMagazines : TransportMagazines
		{
			class _xx_30rnd_556x45_STANAG_Tracer_Red
			{
				magazine="30rnd_556x45_STANAG_Tracer_Red";
				count=50;
			};
			class _xx_30rnd_556x45_STANAG_Tracer_Green
			{
				magazine="30rnd_556x45_STANAG_Tracer_Green";
				count=50;
			};
			class _xx_30rnd_556x45_STANAG_Tracer_Yellow
			{
				magazine="30rnd_556x45_STANAG_Tracer_Yellow";
				count=50;
			};
			class _xx_30rnd_556x45_MK318_STANAG
			{
				magazine="30rnd_556x45_Mk318_STANAG";
				count=50;
			};
			class _xx_30rnd_556x45_MK318_STANAG_Tracer_Red
			{
				magazine="30rnd_556x45_Mk318_STANAG_Tracer_Red";
				count=50;
			};
			class _xx_30rnd_556x45_MK318_STANAG_Tracer_Green
			{
				magazine="30rnd_556x45_Mk318_STANAG_Tracer_Green";
				count=50;
			};
			class _xx_30rnd_556x45_MK318_STANAG_Tracer_Yellow
			{
				magazine="30rnd_556x45_Mk318_STANAG_Tracer_Yellow";
				count=50;
			};
			class _xx_30rnd_556x45_MK262_STANAG
			{
				magazine="30rnd_556x45_Mk262_STANAG";
				count=50;
			};
			class _xx_30rnd_556x45_MK262_STANAG_Tracer_Red
			{
				magazine="30rnd_556x45_Mk262_STANAG_Tracer_Red";
				count=50;
			};
			class _xx_30rnd_556x45_MK262_STANAG_Tracer_Green
			{
				magazine="30rnd_556x45_Mk262_STANAG_Tracer_Green";
				count=50;
			};
			class _xx_30rnd_556x45_MK262_STANAG_Tracer_Yellow
			{
				magazine="30rnd_556x45_Mk262_STANAG_Tracer_Yellow";
				count=50;
			};
		};
	};
};
