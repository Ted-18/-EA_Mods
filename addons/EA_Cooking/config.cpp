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

	class EA_Food_plate_Base_Full;

	// ------------------------------------------------------------------------------------------------------------------
	// TIER 1 : 1 INGREDIENT
	// -- TIER 1 --
	// EA_Food_Plate_Rice
	// EA_Food_Plate_Water
	// EA_Food_Plate_Stew_Sauce
	// EA_Food_Plate_Tomato_Sauce

	class EA_Food_Plate_Rice : EA_Food_plate_Base_Full
	{
		displayName = "Assiette de riz";

		descriptionShort = "Du riz dans une assiette, c'est sec... Je dois pouvoir y ajouter d'autres produits pour en faire un plat plus complet.";

		hiddenSelectionsTextures[]=
		{
			"EA_Cooking\items\ExclusionArea\food\plate\rice\food_plate_rice_CO.paa"
		};

		class Nutrition
		{
			energy=90;
			water=10;
		};
	};

	class EA_Food_Plate_Water : EA_Food_plate_Base_Full
	{
		displayName = "Assiette remplie d'eau";
		descriptionShort = "Une assiette remplie d'eau, je peux y ajouter des produits pour en faire un plat plus complet.";

		hiddenSelectionsTextures[]=
		{
			"EA_Cooking\items\ExclusionArea\food\plate\water\food_plate_water_CO.paa"
		};

		class Nutrition
		{
			energy=10;
			water=90;
		};
	};

	class EA_Food_Plate_Stew_Sauce : EA_Food_plate_Base_Full
	{
		displayName = "Sauce à ragoût";
		descriptionShort = "Un petit mélange d'arromates, je peux y ajouter des produits pour en faire un plat plus complet.";

		hiddenSelectionsTextures[]=
		{
			"EA_Cooking\items\ExclusionArea\food\plate\stew_sauce\food_plate_stew_sauce_CO.paa"
		};

		class Nutrition
		{
			energy=30;
			water=70;
		};
	};

	class EA_Food_Plate_Tomato_Sauce : EA_Food_plate_Base_Full
	{
		displayName = "Assiette de sauce tomate";
		descriptionShort = "Une sauce tomate, je peux y ajouter des produits pour en faire un plat plus complet.";

		hiddenSelectionsTextures[]=
		{
			"EA_Cooking\items\ExclusionArea\food\plate\tomato_sauce\food_plate_tomato_sauce_CO.paa"
		};

		class Nutrition
		{
			energy=30;
			water=70;
		};
	};


	

	// ------------------------------------------------------------------------------------------------------------------
	// TIER 2 : 2 INGREDIENTS
	// EA_Food_Plate_Vegetables_Soup
	// EA_Food_Plate_Vegetables_Stew

	// EA_Food_Plate_Stew_Bear	
	// EA_Food_Plate_Stew_Boar			
	// EA_Food_Plate_Stew_Chicken			
	// EA_Food_Plate_Stew_Cow				
	// EA_Food_Plate_Stew_Deer					
	// EA_Food_Plate_Stew_Goat			
	// EA_Food_Plate_Stew_Pig				
	// EA_Food_Plate_Stew_Sheep			
	// EA_Food_Plate_Stew_Wolf

	// EA_Food_Plate_Bolognese_Sauce

    class EA_Food_Plate_Vegetables_Soup : EA_Food_plate_Base_Full
    {
        displayName = "Soupe de légumes";
        descriptionShort = "C'est agréable, ça manque de consistence mais ça désaltère.";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\vegetables_soup\food_plate_vegetables_soup_CO.paa"
        };

        class Nutrition
        {
            energy=50;
            water=50;
        };
    };
    class EA_Food_Plate_Vegetables_Stew : EA_Food_plate_Base_Full
    {
        displayName = "Ragoût de légumes";
        descriptionShort = "Un bon mélange de légumes, c'est consistant et ça désaltère.";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\vegetables_stew\food_plate_vegetables_stew_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };


    class EA_Food_Plate_Stew_Bear : EA_Food_plate_Base_Full
    {
        displayName = "Ragoût d'ours";
        descriptionShort = "C'est la petite bête qui mange la grosse! Ah ah, loser!";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\meat_stew\food_plate_meat_stew_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };
    class EA_Food_Plate_Stew_Boar : EA_Food_plate_Base_Full
    {
        displayName = "Ragoût de sanglier";
        descriptionShort = "Un bon cochon sauvage, ça se mange avec plaisir.";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\meat_stew\food_plate_meat_stew_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };
    class EA_Food_Plate_Stew_Chicken : EA_Food_plate_Base_Full
    {
        displayName = "Ragoût de poulet";
        descriptionShort = "J'en pouvais plus de l'entendre ce bestiau..";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\meat_stew\food_plate_meat_stew_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };
    class EA_Food_Plate_Stew_Cow : EA_Food_plate_Base_Full
    {
        displayName = "Ragoût de vache";
        descriptionShort = "J'adore la viande de vache, c'est si tendre.";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\meat_stew\food_plate_meat_stew_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };
    class EA_Food_Plate_Stew_Deer : EA_Food_plate_Base_Full
    {
        displayName = "Ragoût de cerf";
        descriptionShort = "Il fait moins le malin Bamby maintenant.";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\meat_stew\food_plate_meat_stew_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };
    class EA_Food_Plate_Stew_Goat : EA_Food_plate_Base_Full
    {
        displayName = "Ragoût de chèvre";
        descriptionShort = "Difficile à attraper, mais une fois dans l'assiette, c'est un régal.";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\meat_stew\food_plate_meat_stew_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };
    class EA_Food_Plate_Stew_Pig : EA_Food_plate_Base_Full
    {
        displayName = "Ragoût de cochon";
        descriptionShort = "Bah alors Peppa? Tu fais moins la maligne maintenant?";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\meat_stew\food_plate_meat_stew_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };
    class EA_Food_Plate_Stew_Sheep : EA_Food_plate_Base_Full
    {
        displayName = "Ragoût de mouton";
        descriptionShort = "C'est quand même con un mouton, ça se laisse faire sans rien dire.";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\meat_stew\food_plate_meat_stew_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };
    class EA_Food_Plate_Stew_Wolf : EA_Food_plate_Base_Full
    {
        displayName = "Ragoût de loup";
        descriptionShort = "Qui a eu l'idée de manger du loup? C'est dur comme du bois!";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\meat_stew\food_plate_meat_stew_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };


    class EA_Food_Plate_Bolognese_Sauce : EA_Food_plate_Base_Full
    {
        displayName = "Sauce bolognaise";
        descriptionShort = "Une bonne sauce bolognaise, ça fait toujours plaisir. Ca manque d'ail. Où est l'ail?";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\bolognese_sauce\food_plate_bolognese_sauce_CO.paa"
        };

        class Nutrition
        {
            energy=30;
			water=70;
        };
    };



	// ------------------------------------------------------------------------------------------------------------------
	// TIER 3 : 3 INGREDIENTS
	// EA_Food_Plate_Ted_Sauce

    class EA_Food_Plate_Ted_Sauce : EA_Food_plate_Base_Full
    {
        displayName = "Sauce Ted";
        descriptionShort = "Une sauce Ted, c'est une sauce avec des tomates, des oignons et de la viande. C'est tout.";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\ted_sauce\food_plate_ted_sauce_CO.paa"
        };

        class Nutrition
        {
            energy=30;
            water=70;
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
