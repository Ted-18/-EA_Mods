class CfgPatches
{
	class EA_Food
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

	class Edible_Base: Inventory_Base
	{
		varTemperatureMax=100;
	};
	
	class EA_Food_plate_Base_Full : Edible_Base
	{
		scope=2;
		displayName="Base Plate Full";
		descriptionShort="Base Plate Full";
		model="EA_Cooking\items\ExclusionArea\food\plate\base\food_plate_base_full.p3d";
		debug_ItemCategory=6;
		itemSize[]={3,3};
		weight=300;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		isMeleeWeapon=1;

		hiddenSelections[]=
		{
			"modelPlate"
		};
		hiddenSelectionsTextures[]=
		{
			"EA_Cooking\items\ExclusionArea\food\plate\base\food_plate_base_full_CO.paa"
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
						{1, {"EA_Cooking\items\ExclusionArea\food\plate\base\food_plate_base_full.rvmat"}},
						
						{0.69999999, {"EA_Cooking\items\ExclusionArea\food\plate\base\food_plate_base_full.rvmat"}},
						
						{0.5, {"EA_Cooking\items\ExclusionArea\food\plate\base\food_plate_base_full.rvmat"}},
						
						{0.30000001, {"EA_Cooking\items\ExclusionArea\food\plate\base\food_plate_base_full.rvmat"}},
						
						{0, {"EA_Cooking\items\ExclusionArea\food\plate\base\food_plate_base_full.rvmat"}}
					};
				};
			};
		};

		class Nutrition
		{
			fullnessIndex=2;
			energy=100;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};

		soundImpactType="wood";
	};
};