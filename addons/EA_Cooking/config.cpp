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
			energy=100;
			water=0;
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
			energy=0;
			water=100;
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
			energy=40;
			water=60;
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
			energy=15;
			water=85;
		};
	};


	// ------------------------------------------------------------------------------------------------------------------
	// TIER 2 : 2 INGREDIENTS
	// EA_Food_Plate_Vegetables_Soup
	// EA_Food_Plate_Vegetables_Stew

	// EA_Food_Plate_Stew_Bear          (Recipe_EA_Food_Plate_Stew_Bear.c)
	// EA_Food_Plate_Stew_Boar		    (Recipe_EA_Food_Plate_Stew_Boar.c)	
	// EA_Food_Plate_Stew_Chicken		(Recipe_EA_Food_Plate_Stew_Chicken.c)
	// EA_Food_Plate_Stew_Cow		    (Recipe_EA_Food_Plate_Stew_Cow.c)
	// EA_Food_Plate_Stew_Deer			(Recipe_EA_Food_Plate_Stew_Deer.c)
	// EA_Food_Plate_Stew_Goat		    (Recipe_EA_Food_Plate_Stew_Goat.c)
	// EA_Food_Plate_Stew_Pig			(Recipe_EA_Food_Plate_Stew_Pig.c)
	// EA_Food_Plate_Stew_Sheep		    (Recipe_EA_Food_Plate_Stew_Sheep.c)
	// EA_Food_Plate_Stew_Wolf			(Recipe_EA_Food_Plate_Stew_Wolf.c)

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
            energy=30;
            water=70;
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
            energy=70;
			water=130;
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
            energy=100;
			water=100;
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
            energy=100;
			water=100;
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
            energy=100;
			water=100;
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
            energy=100;
			water=100;
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
            energy=100;
			water=100;
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
            energy=100;
			water=100;
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
            energy=100;
			water=100;
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
            energy=100;
			water=100;
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
            energy=100;
			water=100;
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
            energy=85;
			water=115;
        };
    };



	// ------------------------------------------------------------------------------------------------------------------
	// TIER 3 : 3 INGREDIENTS
	// EA_Food_Plate_Ted_Sauce

    class EA_Food_Plate_Ted_Sauce : EA_Food_plate_Base_Full
    {
        displayName = "Sauce bolognaise à l'ancienne";
        descriptionShort = "Une bonne sauce comme la Nonna sait les faire. Par contre je n'ai pas trouvé de pâtes. (Ted: J'ai eu la flemme de trouver un modèle 3D de pâtes.)";

        hiddenSelectionsTextures[]=
        {
            "EA_Cooking\items\ExclusionArea\food\plate\ted_sauce\food_plate_ted_sauce_CO.paa"
        };

        class Nutrition
        {
            energy=125;
            water=165;
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
	};

};
	
// ==============================================
// DayZ Meats
// ==============================================
// BearSteakMeat
// - Water : 30
// - Energy : 70

// BoarSteakMeat
// - Water : 30
// - Energy : 70

// ChickenBreastMeat
// - Water : 30
// - Energy : 70

// CowSteakMeat
// - Water : 30
// - Energy : 70

// DeerSteakMeat
// - Water : 30
// - Energy : 70

// GoatSteakMeat
// - Water : 30
// - Energy : 70

// PigSteakMeat
// - Water : 30
// - Energy : 70

// SheepSteakMeat
// - Water : 30
// - Energy : 70

// WolfSteakMeat
// - Water : 30
// - Energy : 70

// Lard
// - Water : 25
// - Energy : 75


// ==============================================
// DayZ Vegetables
// ==============================================
// BoletusMushroom
// - Water : 80
// - Energy : 20

// Tomato
// - Water : 85
// - Energy : 15

// Zucchini
// - Water : 70
// - Energy : 30

// Pumpkin
// - Water : 70
// - Energy : 30

// Potato (Patate)
// - Water : 25
// - Energy : 75

// Pepper (Poivron)
// - Water : 70
// - Energy : 30


// ==============================================
// DayZ Fruits
// ==============================================
// Apple
// - Water : 75
// - Energy : 25

// Pear
// - Water : 75
// - Energy : 25

// Plum
// - Water : 75
// - Energy : 25

// Peach
// - Water : 75
// - Energy : 25

// Orange
// - Water : 85
// - Energy : 15

// Banana
// - Water : 40
// - Energy : 60

// Kiwi
// - Water : 70
// - Energy : 30


// ==============================================
// DayZ Cereals
// ==============================================
// Rice (Riz) ✅
// - Water : 0
// - Energy : 100


// ==============================================
// DayZ Drinks
// ==============================================
// WaterBottle (Bouteille d'eau) ✅
// - Water : 100
// - Energy : 0

// SodaCan_Cola (Canette de Cola) ✅
// - Water : 150
// - Energy : 50

// SodaCan_Kvass (Canette de Kvass) ✅
// - Water : 150
// - Energy : 50

// SodaCan_Pipsi (Canette de Pipsi) ✅
// - Water : 150
// - Energy : 50

// SodaCan_Spite (Canette de Spite) ✅
// - Water : 150
// - Energy : 50

// SodaCan_Fronta (Canette de Fronta) ✅
// - Water : 150
// - Energy : 50


// ==============================================
// DayZ Other
// ==============================================
// Egg
// - Water : 50
// - Energy : 50

// Honey (Miel) ✅
// - Water : 0
// - Energy : 250

// PowderedMilk (Lait en poudre) ✅
// - Water : 0
// - Energy : 400

// SaltSticks (Baton de sel) ✅
// - Water : 0
// - Energy : 100


// ==============================================
// DayZ Can Food
// ==============================================
// BakeBeansCan (Haricots blancs) ✅
// - Water : 50
// - Energy : 200

// PeachesCan (Pêches) ✅
// - Water : 100
// - Energy : 150

// TacticalBaconCan (Lard) ✅
// - Water : 50
// - Energy : 300

// SpaghettiCan (Spaghettis) ✅
// - Water : 75
// - Energy : 175

// SardinesCan (Sardines) ✅
// - Water : 200
// - Energy : 250

// TunaCan (Thon) ✅
// - Water : 150
// - Energy : 100

// PorkCan (Porc) ✅
// - Water : 25
// - Energy : 225

// Lunchmeat (Viande en boite) ✅
// - Water : 50
// - Energy : 200


// ==============================================
// Vegetables 
// ==============================================
// EFI_Beetroot (Betterave)
// - Water : 60
// - Energy : 40

// EFI_Carrot (Carotte)
// - Water : 60
// - Energy : 40

// EFI_Onion (Oignon)
// - Water : 60
// - Energy : 40

// EFI_Garlic (Ail)
// - Water : 60
// - Energy : 40

// EFI_Kohlrabi (Chou-rave)
// - Water : 60
// - Energy : 40

// EFI_Radish (Radis)
// - Water : 60
// - Energy : 40

// EFI_Parsnip (Panais)
// - Water : 60
// - Energy : 40

// EFI_RedMango (Mangue)
// - Water : 75
// - Energy : 25

// EFI_Pineapple (Ananas)
// - Water : 75
// - Energy : 25

// EFI_SugarMelon (Melon)
// - Water : 75
// - Energy : 25

// EFI_Strawberry (Fraise)
// - Water : 75
// - Energy : 25

// EFI_Turnip (Navet)
// - Water : 75
// - Energy : 25


// ==============================================
// Other
// ==============================================
// EFI_Bread_Roll
// - Water : 15
// - Energy : 85

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
// - Tomato							+ EA_Food_Plate_Wood_Empty					==> EA_Food_Plate_Tomato_Sauce		    "Purée de tomates"
// - CowSteakMeat					+ EA_Food_Plate_Tomato_Sauce				==> EA_Food_Plate_Bolognese_Sauce	    "Sauce bolognaise"
// - EFI_Garlic 					+ EA_Food_Plate_Bolognese_Sauce				==> EA_Food_Plate_Ted_Sauce			    "Sauce bolognaise de Ted"

// MEAT REGROUP
// ==============================================
// - BearSteakMeat      (50%)       + BearSteakMeat	    (50%)			        ==> BearSteakMeat				        "Viande d'ours"
//      ◽️ Recipe_EA_Food_BearSteakMeat.c
// - BoarSteakMeat      (50%)       + BoarSteakMeat	    (50%)			        ==> BoarSteakMeat				        "Viande de sanglier"
//      ◽️ Recipe_EA_Food_BoarSteakMeat.c
// - ChickenBreastMeat  (50%)       + ChickenBreastMeat	(50%)			        ==> ChickenBreastMeat			        "Viande de poulet"
//      ◽️ Recipe_EA_Food_ChickenBreastMeat.c
// - CowSteakMeat       (50%)       + CowSteakMeat	    (50%)			        ==> CowSteakMeat				        "Viande de vache"
//      ◽️ Recipe_EA_Food_CowSteakMeat.c
// - DeerSteakMeat      (50%)       + DeerSteakMeat	    (50%)			        ==> DeerSteakMeat				        "Viande de cerf"
//      ◽️ Recipe_EA_Food_DeerSteakMeat.c
// - GoatSteakMeat      (50%)       + GoatSteakMeat	    (50%)			        ==> GoatSteakMeat				        "Viande de chèvre"
//      ◽️ Recipe_EA_Food_GoatSteakMeat.c
// - PigSteakMeat       (50%)       + PigSteakMeat	    (50%)			        ==> PigSteakMeat				        "Viande de porc"
//      ◽️ Recipe_EA_Food_PigSteakMeat.c
// - SheepSteakMeat     (50%)       + SheepSteakMeat    (50%)			        ==> SheepSteakMeat				        "Viande de mouton"
//      ◽️ Recipe_EA_Food_SheepSteakMeat.c
// - WolfSteakMeat      (50%)       + WolfSteakMeat	    (50%)			        ==> WolfSteakMeat				        "Viande de loup"


