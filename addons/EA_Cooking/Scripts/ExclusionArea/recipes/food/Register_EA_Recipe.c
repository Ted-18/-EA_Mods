modded class PluginRecipesManager 
{
    override void RegisterRecipies()
    {
        super.RegisterRecipies();
        
        //RegisterRecipe(new CLASSNAME_OF_YOUR_RECIPE_HERE );

        // CRAFT TIER 1
        RegisterRecipe(new Recipe_EA_Food_Plate_Rice );
        RegisterRecipe(new Recipe_EA_Food_Plate_Water );
        RegisterRecipe(new Recipe_EA_Food_Plate_Stew_Sauce );
        RegisterRecipe(new Recipe_EA_Food_Plate_Tomato_Sauce );


        // CRAFT TIER 2
        RegisterRecipe(new Recipe_EA_Food_Plate_Vegetables_Soup );
        RegisterRecipe(new Recipe_EA_Food_Plate_Vegetables_Stew );

        RegisterRecipe(new Recipe_EA_Food_Plate_Stew_Bear );
        RegisterRecipe(new Recipe_EA_Food_Plate_Stew_Boar );
        RegisterRecipe(new Recipe_EA_Food_Plate_Stew_Chicken );
        RegisterRecipe(new Recipe_EA_Food_Plate_Stew_Cow );
        RegisterRecipe(new Recipe_EA_Food_Plate_Stew_Deer );
        RegisterRecipe(new Recipe_EA_Food_Plate_Stew_Goat );
        RegisterRecipe(new Recipe_EA_Food_Plate_Stew_Pig );
        RegisterRecipe(new Recipe_EA_Food_Plate_Stew_Sheep );
        RegisterRecipe(new Recipe_EA_Food_Plate_Stew_Wolf );

        RegisterRecipe(new Recipe_EA_Food_Plate_Bolognese_Sauce );
        

        // CRAFT TIER 3
        RegisterRecipe(new Recipe_EA_Food_Plate_Ted_Sauce );


        // MEAT REGROUP
        RegisterRecipe(new Recipe_EA_Food_BearSteakMeat );
        RegisterRecipe(new Recipe_EA_Food_BoarSteakMeat );
        RegisterRecipe(new Recipe_EA_Food_ChickenSteakMeat );
        RegisterRecipe(new Recipe_EA_Food_CowSteakMeat );
        RegisterRecipe(new Recipe_EA_Food_DeerSteakMeat );
        RegisterRecipe(new Recipe_EA_Food_GoatSteakMeat );
        RegisterRecipe(new Recipe_EA_Food_PigSteakMeat );
        RegisterRecipe(new Recipe_EA_Food_SheepSteakMeat );
        RegisterRecipe(new Recipe_EA_Food_WolfSteakMeat );

    }
}