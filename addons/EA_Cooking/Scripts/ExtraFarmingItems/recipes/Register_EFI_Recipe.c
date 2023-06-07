modded class PluginRecipesManager 
{
    override void RegisterRecipies()
    {
        super.RegisterRecipies();
        
        RegisterRecipe(new Recipe_EFI_Chicken_Curry );
        RegisterRecipe(new Recipe_EFI_Mushroom_Curry );
        RegisterRecipe(new Recipe_EFI_Mutton_Curry );
        RegisterRecipe(new Recipe_EFI_Sausage_Curry );
        RegisterRecipe(new Recipe_EFI_Savoury_Rice );
    }
}