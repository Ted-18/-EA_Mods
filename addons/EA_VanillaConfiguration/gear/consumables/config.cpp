class CfgPatches
{
	class EA_Gear_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Consumables"
		};
	};
};

class CfgVehicles
{
    class Inventory_Base;

    class Firewood: Inventory_Base
	{
		varStackMax=6;
	};
};