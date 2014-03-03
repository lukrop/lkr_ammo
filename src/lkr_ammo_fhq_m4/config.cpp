/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_ammo_fhq_m4
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"lkr_556x45_NATO",
			"FHQ_M4_M4A1"
		};
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class FHQ_M4A1_BASE: Rifle_Base_F
	{
		magazines[]=
		{
			"30Rnd_556x45_STANAG",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk318_STANAG",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk318_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Mk262_STANAG",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Red",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Green",
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow",
			"FHQ_30Rnd_556x45_Stanag_Tracer_Green",
			"FHQ_30Rnd_556x45_Stanag_Tracer_IR",
			"FHQ_30Rnd_556x45_Stanag_Tracer_Red",
			"FHQ_30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
};

class CfgVehicles {
	class Reammo_Box_F;
	class NATO_Box_Base : Reammo_Box_F
	{
		class TransportMagazines;
	};
	
	class FHQ_M4_Ammobox: NATO_Box_Base
	{
		class TransportMagazines : TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=50;
			};
			class _xx_30Rnd_mas_556x45_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Stanag_Tracer_Red";
				count=50;
			};
			class _xx_30Rnd_556x45_Mk318_Stanag
			{
				magazine="30Rnd_556x45_Mk318_Stanag";
				count=50;
			};
			class _xx_30Rnd_mas_556x45_Mk318_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Mk318_Stanag_Tracer_Red";
				count=50;
			};
			class _xx_30Rnd_556x45_Mk262_Stanag
			{
				magazine="30Rnd_556x45_Mk262_Stanag";
				count=50;
			};
			class _xx_30Rnd_mas_556x45_Mk262_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Mk262_Stanag_Tracer_Red";
				count=50;
			};
		};
	};
};