class CfgPatches
{
	class EA_Cooking_Items_Bases
	{
		units[]={
			"EA_Bowl_Base_Full"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ExtraFarmingItems",
			"DZ_Gear_Food"
		};
	};
};


class CfgVehicles
{
	class SpaghettiCan_Opened;

	class EA_Bowl_Base_Full : SpaghettiCan_Opened
	{
		scope=2;
		displayName="Base Bowl";
		descriptionShort="Base Bowl";
		model="EA_Cooking\items\bowl\base\bowl_base_full.p3d";
		debug_ItemCategory=6;
		itemSize[]={3,3};
		weight=40;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		isMeleeWeapon=1;

		hiddenSelections[]=
		{
			"modelBol"
		};
		hiddenSelectionsTextures[]=
		{
			"EA_Cooking\items\bowl\base\bowl_base_full_CO.paa"
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
						
						{
							1,
							
							{
								"EA_Cooking\items\bowl\base\bowl_base_full.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"EA_Cooking\items\bowl\base\bowl_base_full.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"EA_Cooking\items\bowl\base\bowl_base_full.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"EA_Cooking\items\bowl\base\bowl_base_full.rvmat"
							}
						},
						
						{
							0,
							
							{
								"EA_Cooking\items\bowl\base\bowl_base_full.rvmat"
							}
						}
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