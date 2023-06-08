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
			"EA_Food",
			"EA_Cookware"
		};
	};
};

class CfgVehicles
{


	//EA_Food
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


	//EA_Cookware
	class EA_Food_Plate_Base_Empty;

	class EA_Food_Plate_Wood_Empty : EA_Food_Plate_Base_Empty
	{
		displayName = "Assiette en bois";
		descriptionShort = "Une simple assiette en bois, on peut y mettre ce que l'on veut.";

		hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\cookware\plate\wood\cookware_plate_wood_empty_CO.paa"
        };
	}

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
// EA Food
// ==============================================

// -- TIER 1 --
// 🟢EA_Food_Plate_Rice
//    ◽️ food_plate_rice_CO
// 🔴EA_Food_Plate_Water
//    ◽️ food_plate_water_CO
// 🔴EA_Food_Plate_Stew_Sauce
//    ◽️ food_plate_stew_sauce_CO
// 🔴EA_Food_Plate_Tomato_Sauce
//    ◽️ food_plate_tomato_sauce_CO


// -- TIER 2 --
// 🔴EA_Food_Plate_Vegetables_Soup
//    ◽️ food_plate_vegetables_soup_CO
// 🔴EA_Food_Plate_Vegetables_Stew
//    ◽️ food_plate_vegetables_stew_CO

// 🔴EA_Food_Plate_Stew_Bear	
// 🔴EA_Food_Plate_Stew_Boar			
// 🔴EA_Food_Plate_Stew_Chicken			
// 🔴EA_Food_Plate_Stew_Cow				
// 🔴EA_Food_Plate_Stew_Deer					
// 🔴EA_Food_Plate_Stew_Goat			
// 🔴EA_Food_Plate_Stew_Pig				
// 🔴EA_Food_Plate_Stew_Sheep			
// 🔴EA_Food_Plate_Stew_Wolf
//    ◽️ food_plate_meat_stew_CO

// 🔴EA_Food_Plate_Bolognese_Sauce
//    ◽️ food_plate_bolognese_sauce_CO

// -- TIER 3 --
// 🔴EA_Food_Plate_Ted_Sauce
//    ◽️ food_plate_ted_sauce_CO








// ITEMS
// ==============================================
// - Knife   						 	+ Firewood 	                            ==> EA_Food_Plate_Wood_Empty				"Assiette en bois"


// BASIC FOOD
// ==============================================
// - Rice							+ EA_Food_Plate_Wood_Empty	            ==> EA_Food_Plate_Rice						"Assiette de riz"
// - Waterbottle					+ EA_Food_Plate_Wood_Empty				==> EA_Food_Plate_Water						"Assiette remplie d'eau"
// - EFI_Onion						+ EA_Food_Plate_Wood_Empty				==> EA_Food_Plate_Stew_Sauce				"Assiette de sauce à ragoût"
// - EFI_Garlic						+ EA_Food_Plate_Wood_Empty				==> EA_Food_Plate_Stew_Sauce				"Assiette de sauce à ragoût"


// VEGETABLES SOUP
// ==============================================
// - EFI_Beetroot					+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - EFI_Carrot						+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - EFI_Onion						+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - EFI_Garlic						+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - EFI_Kohlrabi					+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - EFI_Radish						+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - EFI_Parsnip					+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - EFI_Turnip						+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - Potato							+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - Zucchini						+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - Pumpkin						+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"
// - Pepper							+ EA_Food_Plate_Water					==> EA_Food_Plate_Vegetables_Soup			"Assiette de soupe de légumes"


// STEW (MEAT)
// ==============================================
// - BearSteakMeat					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Bear					"Assiette de ragoût d'ours"
// - BoarSteakMeat					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Boar					"Assiette de ragoût de sanglier"
// - ChickenBreastMeat				+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Chicken				"Assiette de ragoût de poulet"
// - CowSteakMeat					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Cow					"Assiette de ragoût de vache"
// - DeerSteakMeat					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Deer					"Assiette de ragoût de cerf"
// - GoatSteakMeat					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Goat					"Assiette de ragoût de chèvre"
// - PigSteakMeat					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Pig					"Assiette de ragoût de porc"
// - SheepSteakMeat					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Sheep				"Assiette de ragoût de mouton"
// - WolfSteakMeat					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Wolf					"Assiette de ragoût de loup"


// STEW (FISH)
// ==============================================
//


// STEW (VEGETABLES)
// ==============================================
// - EFI_Beetroot					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Vegetables			"Assiette de ragoût de légumes"
// - EFI_Carrot						+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Vegetables			"Assiette de ragoût de légumes"
// - EFI_Kohlrabi					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Vegetables			"Assiette de ragoût de légumes"
// - EFI_Radish						+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Vegetables			"Assiette de ragoût de légumes"
// - EFI_Parsnip					+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Vegetables			"Assiette de ragoût de légumes"
// - EFI_Turnip						+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Vegetables			"Assiette de ragoût de légumes"
// - Potato							+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Vegetables			"Assiette de ragoût de légumes"
// - Zucchini						+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Vegetables			"Assiette de ragoût de légumes"
// - Pumpkin						+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Vegetables			"Assiette de ragoût de légumes"
// - Pepper							+ EA_Food_Plate_Stew_Sauce				==> EA_Food_Plate_Stew_Vegetables			"Assiette de ragoût de légumes"


// TOMATO SAUCE
// ==============================================
// - Tomato							+ EA_Food_Plate_Wood_Empty					==> EA_Food_Plate_Tomato_Sauce				"Purée de tomates"
// - BeefSteakMeat					+ EA_Food_Plate_Tomato_Sauce				==> EA_Food_Plate_Bolognese_Sauce			"Sauce bolognaise"
// - EFI_Garlic 					+ EA_Food_Plate_Bolognese_Sauce				==> EA_Food_Plate_Ted_Sauce					"Sauce bolognaise de Ted"