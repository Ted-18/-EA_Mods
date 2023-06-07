class CfgPatches
{
	class EA_Cookware
	{
		units[]={
			"EA_Food_plate_Base_Full"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};


class CfgVehicles
{
    class Inventory_Base;

    class EA_Food_Plate_Base_Empty : Inventory_Base
    {
		scope=2;
		displayName="Base Plate Empty";
		descriptionShort="Base Plate Empty";
		model="EA_Cooking\items\ExclusionArea\cookware\plate\base\cookware_plate_base_empty.p3d";

		weight=2000;
		absorbency=0.30000001;
		itemSize[]={3,2};
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=6;
		varQuantityDestroyOnMin=1;
		varStackMax=5;

        hiddenSelections[]=
        {
            "modelPlate"
        };
        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\cookware\plate\base\cookware_plate_base_empty_CO.paa"
        };


		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1, {"EA_Cooking\items\ExclusionArea\cookware\plate\base\cookware_plate_base_empty.rvmat"}},
						
						{0.69999999, {"EA_Cooking\items\ExclusionArea\cookware\plate\base\cookware_plate_base_empty.rvmat"}},
						
						{0.5, {"EA_Cooking\items\ExclusionArea\cookware\plate\base\cookware_plate_base_empty.rvmat"}},
						
						{0.30000001, {"EA_Cooking\items\ExclusionArea\cookware\plate\base\cookware_plate_base_empty.rvmat"}},
						
						{0, {"EA_Cooking\items\ExclusionArea\cookware\plate\base\cookware_plate_base_empty.rvmat"}}
					};
				};
			};
		};

		soundImpactType="wood";

		class AnimEvents
		{
			class SoundWeapon
			{
				class woodenlog_drop
				{
					soundset="woodenlog_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};