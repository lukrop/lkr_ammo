/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_ammo_rh_m4
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"lkr_556x45_NATO",
			"RH_m4_cfg"
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
	class RH_m4: Rifle_Base_F
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
	class NATO_Box_Base;
	class Box_NATO_Wps_F : NATO_Box_Base
	{
		class TransportMagazines;
	};
	
	class RH_m4m16ammobox: Box_NATO_Wps_F
    {
        class TransportMagazines : TransportMagazines
        {
            class _xx_30rnd_556x45_Mk318_STANAG
            {
                magazine="30rnd_556x45_Mk318_STANAG";
                count=50;
            };
            class _xx_30Rnd_556x45_Mk318_Stanag_Tracer_Red
            {
                magazine="30Rnd_556x45_Mk318_Stanag_Tracer_Red";
                count=50;
            };
            class _xx_30Rnd_556x45_Mk318_Stanag_Tracer_Green
            {
                magazine="30Rnd_556x45_Mk318_Stanag_Tracer_Green";
                count=50;
            };
            class _xx_30Rnd_556x45_Mk318_Stanag_Tracer_Yellow
            {
                magazine="30Rnd_556x45_Mk318_Stanag_Tracer_Yellow";
                count=50;
            };
			class _xx_30rnd_556x45_Mk262_STANAG
            {
                magazine="30rnd_556x45_Mk318_STANAG";
                count=50;
            };
            class _xx_30Rnd_556x45_Mk262_Stanag_Tracer_Red
            {
                magazine="30Rnd_556x45_Mk262_Stanag_Tracer_Red";
                count=50;
            };
            class _xx_30Rnd_556x45_Mk262_Stanag_Tracer_Green
            {
                magazine="30Rnd_556x45_Mk262_Stanag_Tracer_Green";
                count=50;
            };
            class _xx_30Rnd_556x45_Mk262_Stanag_Tracer_Yellow
            {
                magazine="30Rnd_556x45_Mk262_Stanag_Tracer_Yellow";
                count=50;
            };
		};
	};
};