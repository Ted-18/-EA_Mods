class CfgMods
{
    class EA_Cooking
	{
		dir = "EA_Cooking";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "EA_Cooking";
		credits = "EA_Cooking";
		author = "EA_Cooking";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";

		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"EA_Cooking\Scripts"
				};
			};
		};
	};
};

class CfgPatches
{
	class EA_Cooking
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"EA_Food"
		};
	};
};

class CfgVehicles
{

	class EA_Food_plate_Base_Full;

	class EA_Food_Plate_Rice : EA_Food_plate_Base_Full
	{
		displayName = "Assiette de riz";
		descriptionShort = "Une belle assiette de riz nature, il faudrait essayer de le mélanger avec d'autres produits pour en faire un plat plus complet. Pour le moment c'est un peu sec...";

		// Poids (en grammes)
		weight=300;

		// Quantité de riz (en grammes)
		varQuantityInit=250;
		varQuantityMax=250;

		hiddenSelectionsTextures[]=
		{
			"EA_Cooking\items\ExclusionArea\food\plate\rice\food_plate_rice_CO.paa"
		};

		class Nutrition
		{
			energy=125;
			water=50;
		};
	};
};
	
// ==============================================
// DayZ Meats
// ==============================================
// BearSteakMeat
// BoarSteakMeat
// ChickenBreastMeat
// CowSteakMeat
// DeerSteakMeat
// GoatSteakMeat
// PigSteakMeat
// SheepSteakMeat
// WolfSteakMeat

// ==============================================
// DayZ Vegetables
// ==============================================
// BoletusMushroom
// Tomato
// Zucchini
// Pumpkin
// Potato
// Pepper

// ==============================================
// DayZ Fruits
// ==============================================
// Apple
// Pear
// Plum
// Peach
// Orange
// Banana
// Kiwi

// ==============================================
// DayZ Cereals
// ==============================================
// Rice

// ==============================================
// DayZ Drinks
// ==============================================
// WaterBottle
// SodaCan_Cola
// SodaCan_Kvass
// SodaCan_Pipsi
// SodaCan_Spite
// SodaCan_Fronta

// ==============================================
// DayZ Other
// ==============================================
// Egg
// Honey
// Lard
// PowderedMilk
// SaltSticks

// ==============================================
// DayZ Can Food
// ==============================================
// BakeBeansCan
// PeachesCan
// TacticalBaconCan
// SpaghettiCan
// SardinesCan
// TunaCan
// PorkCan

// ==============================================
// Vegetables 
// ==============================================
// EFI_Beetroot
// EFI_Carrot
// EFI_Onion
// EFI_Garlic
// EFI_Kohlrabi
// EFI_Radish
// EFI_Parsnip
// EFI_RedMango
// EFI_Pineapple
// EFI_SugarMelon
// EFI_Strawberry
// EFI_Turnip

// ==============================================
// Other
// ==============================================
// EFI_Bread_Roll
// EFI_Wheat
// EFI_Flour

// ==============================================
// Soups
// ==============================================
// EFI_Chicken_Curry
// EFI_Mushroom_Curry
// EFI_Mutton_Curry
// EFI_Sausage_Curry
// EFI_Savoury_Rice
// EFI_Beef_Radish_Soup
// EFI_Chicken_Soup
// EFI_Mushroom_Soup
// EFI_Tomato_Soup
// EFI_Vegetable_Soup
// EFI_Bear_Stew
// EFI_Beef_Beet_Stew
// EFI_Beef_Mushroom_Stew
// EFI_Beef_Onion_Stew
// EFI_Vegetable_Stew
// EFI_Venison_Stew


// ==============================================
// Food recipes
// ==============================================
// EFI_Chicken_Curry - Recipe_EFI_Chicken_Curry
// - ChickenBreastMeat + Rice

// EFI_Mushroom_Curry - Recipe_EFI_Mushroom_Curry
// - BoletusMushroom + Rice

// EFI_Mutton_Curry - Recipe_EFI_Mutton_Curry
// - GoatSteakMeat + Rice

// EFI_Sausage_Curry - Recipe_EFI_Sausage_Curry
// - PigSteakMeat + Rice
// - SheepSteakMeat + Rice
// - BoarSteakMeat + Rice

// EFI_Savoury_Rice - Recipe_EFI_Savoury_Rice
// - Rice + WaterBottle

// EFI_Beef_Radish_Soup - Recipe_EFI_Beef_Radish_Soup
// - CowSteakMeat + EFI_Radish 

// EFI_Chicken_Soup - Recipe_EFI_Chicken_Soup
// - ChickenBreastMeat + WaterBottle

// EFI_Mushroom_Soup - Recipe_EFI_Mushroom_Soup
// - BoletusMushroom + WaterBottle

// EFI_Tomato_Soup - Recipe_EFI_Tomato_Soup
// - Tomato + WaterBottle

// EFI_Vegetable_Soup - Recipe_EFI_Vegetable_Soup
// - EFI_Beetroot + waterBottle
// - EFI_Carrot + waterBottle
// - EFI_Onion + waterBottle
// - EFI_Garlic + waterBottle
// - EFI_Kohlrabi + waterBottle
// - EFI_Radish + waterBottle
// - EFI_Parsnip + waterBottle
// - EFI_Turnip + waterBottle
// - Potato + waterBottle
// - Zucchini + waterBottle
// - Pumpkin + waterBottle
// - Pepper + waterBottle

// EFI_Bear_Stew - Recipe_EFI_Bear_Stew
// - BearSteakMeat + EFI_Onion
// - BearSteakMeat + EFI_Garlic

// EFI_Beef_Beet_Stew - Recipe_EFI_Beef_Beet_Stew
// - CowSteakMeat + EFI_Beetroot

// EFI_Beef_Mushroom_Stew - Recipe_EFI_Beef_Mushroom_Stew
// - CowSteakMeat + BoletusMushroom

// EFI_Beef_Onion_Stew - Recipe_EFI_Beef_Onion_Stew
// - CowSteakMeat + EFI_Onion

// EFI_Vegetable_Stew - Recipe_EFI_Vegetable_Stew
// - EFI_Beetroot + EFI_Onion
// - EFI_Carrot + EFI_Onion
// - EFI_Onion + EFI_Garlic

// EFI_Venison_Stew - Recipe_EFI_Venison_Stew
// - DeerSteakMeat + EFI_Onion
// - DeerSteakMeat + EFI_Garlic

// BearSteakMeat - Recipe_BearSteakMeat
// - BearSteakMeat(50%) + BearSteakMeat(50%)

// BoarSteakMeat - Recipe_BoarSteakMeat
// - BoarSteakMeat(50%) + BoarSteakMeat(50%)

// ChickenBreastMeat - Recipe_ChickenBreastMeat
// - ChickenBreastMeat(50%) + ChickenBreastMeat(50%)

// CowSteakMeat - Recipe_CowSteakMeat
// - CowSteakMeat(50%) + CowSteakMeat(50%)

// DeerSteakMeat - Recipe_DeerSteakMeat
// - DeerSteakMeat(50%) + DeerSteakMeat(50%)

// GoatSteakMeat - Recipe_GoatSteakMeat
// - GoatSteakMeat(50%) + GoatSteakMeat(50%)

// PigSteakMeat - Recipe_PigSteakMeat
// - PigSteakMeat(50%) + PigSteakMeat(50%)

// SheepSteakMeat - Recipe_SheepSteakMeat
// - SheepSteakMeat(50%) + SheepSteakMeat(50%)

// WolfSteakMeat - Recipe_WolfSteakMeat
// - WolfSteakMeat(50%) + WolfSteakMeat(50%)