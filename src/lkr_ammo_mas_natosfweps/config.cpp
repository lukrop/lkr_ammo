/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_ammo_mas_natosfweps
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"lkr_556x45_NATO",
			"mas_weapons",
			"mas_weapons_m4",
			"mas_weapons_ak"
		};
		author[]=
		{
			"lukrop"
		};
	};
};

class CfgWeapons
{
	class arifle_MX_F;
	class arifle_mas_hk416: arifle_MX_F
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
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag"
		};
	};
	class arifle_MX_GL_F;
	class arifle_mas_hk416_gl: arifle_MX_GL_F
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
			"30Rnd_556x45_Mk262_Stanag_Tracer_Yellow",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag"
		};
	};
	/*
	class srifle_EBR_F;
	class srifle_mas_hk417: srifle_EBR_F
	{
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};
	*/
};

class CfgVehicles {
	class NATO_Box_Base;
	class Box_NATO_Wps_F : NATO_Box_Base
	{
		class TransportMagazines;
	};
	
	/*
	class EAST_Box_Base;
	class Box_East_Wps_F : EAST_Box_Base
	{
		class TransportMagazines;
	};
	*/
	
	class Box_mas_all_rifle_Wps_F : Box_NATO_Wps_F
	{
		class TransportMagazines : TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=120;
			};
			class _xx_30Rnd_mas_556x45_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Stanag_Tracer_Red";
				count=60;
			};
			class _xx_30Rnd_556x45_Mk318_Stanag
			{
				magazine="30Rnd_556x45_Mk318_Stanag";
				count=120;
			};
			class _xx_30Rnd_mas_556x45_Mk318_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Mk318_Stanag_Tracer_Red";
				count=60;
			};
			class _xx_30Rnd_556x45_Mk262_Stanag
			{
				magazine="30Rnd_556x45_Mk262_Stanag";
				count=120;
			};
			class _xx_30Rnd_mas_556x45_Mk262_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Mk262_Stanag_Tracer_Red";
				count=60;
			};
		};
	};
	
	class Box_mas_us_rifle_Wps_F : Box_NATO_Wps_F
	{
		class TransportMagazines : TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=120;
			};
			class _xx_30Rnd_mas_556x45_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Stanag_Tracer_Red";
				count=60;
			};
			class _xx_30Rnd_556x45_Mk318_Stanag
			{
				magazine="30Rnd_556x45_Mk318_Stanag";
				count=120;
			};
			class _xx_30Rnd_mas_556x45_Mk318_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Mk318_Stanag_Tracer_Red";
				count=60;
			};
			class _xx_30Rnd_556x45_Mk262_Stanag
			{
				magazine="30Rnd_556x45_Mk262_Stanag";
				count=120;
			};
			class _xx_30Rnd_mas_556x45_Mk262_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Mk262_Stanag_Tracer_Red";
				count=60;
			};
		};
	};
	
	/*
	class Box_mas_ru_rifle_Wps_F: Box_East_Wps_F
	{
	};
	*/
};
