class Recipe_EA_Food_Plate_Stew_Wolf extends Recipe_EA_Base // 🔴
{	

    override void advancedRecipeSettings()
    {
        //----------------------------------------------------------------------------------------------------------------------
        // ADVANCED RECIPE CONDITIONS

        // Define if we use multiplicator or item amount
        // true : multiplicator (%)
        // false : item amount
        useMultiplicator0 = true; //                                                            🔴
        useMultiplicator1 = true; //                                                            🔴

        // Define item amount
        itemAmout0 = 0.0; //                                                                    🔴
        itemAmout1 = 0.0; //                                                                    🔴

        // Define multiplicator
        multiplicator0 = 0.8; //                                                                🔴
        multiplicator1 = 1.0; //                                                                🔴


        //----------------------------------------------------------------------------------------------------------------------
        // ADVANCED RECIPE TEXTS
        titleNotification = "Vous réfléchissez..."; //                                          🟡
        messageNotification0 = "Je n'ai pas tout ce qu'il faut pour cuisiner..."; //            🔴
        messageNotification1 = "Je n'ai pas tout ce qu'il faut pour cuisiner..."; //            🔴

        ingredientUnit0 = "g"; // "g","ml", etc. //                                             🔴
        ingredientUnit1 = "ml"; // "g","ml", etc. //                                            🔴
    }

    override void Init()
    {   
		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE GENERAL SETTINGS
        m_Name = "[Cuisiner] Ragoût de légumes"; // 🔴
        m_IsInstaRecipe = false; // 🟢
        m_AnimationLength = 3; // 🟡
        m_Specialty = 0.02; // 🟢
        

		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE INGREDIENTS CONDITIONS
        //Ingredient #1
        m_MinDamageIngredient[0] = -1; // 🟢
        m_MaxDamageIngredient[0] = 3; // 🟢

        m_MinQuantityIngredient[0] = 1; // ❌
        m_MaxQuantityIngredient[0] = -1; // ❌

        //Ingredient #2
        m_MinDamageIngredient[1] = -1; // 🟢
        m_MaxDamageIngredient[1] = 3; // 🟢

        m_MinQuantityIngredient[1] = 1; // ❌
        m_MaxQuantityIngredient[1] = -1; // ❌


        //----------------------------------------------------------------------------------------------------------------------
		// RECIPE INGREDIENTS MODIFICATIONS

        //Ingrédients #1
        InsertIngredient(0,"EFI_Beetroot"); // 🔴
        InsertIngredient(0,"EFI_Carrot"); // 🔴
        InsertIngredient(0,"EFI_Kohlrabi"); // 🔴
        InsertIngredient(0,"EFI_Radish"); // 🔴
        InsertIngredient(0,"EFI_Parsnip"); // 🔴
        InsertIngredient(0,"EFI_Turnip"); // 🔴
        InsertIngredient(0,"Potato"); // 🔴
        InsertIngredient(0,"Zucchini"); // 🔴
        InsertIngredient(0,"SlicedPumpkin"); // 🔴
        InsertIngredient(0,"Pepper"); // 🔴
        m_IngredientAddHealth[0] = 0; // 🟢
        m_IngredientSetHealth[0] = -1; // 🟡
        m_IngredientAddQuantity[0] = 0; // ❌
        m_IngredientDestroy[0] = true; // 🟡
        m_IngredientUseSoftSkills[0] = false; // 🟢
        
        //Ingrédients #2
        InsertIngredient(1,"EA_Food_Plate_Stew_Sauce"); // 🔴
        m_IngredientAddHealth[1] = 0; // 🟢
        m_IngredientSetHealth[1] = -1; // 🟡
        m_IngredientAddQuantity[1] = 0; // ❌
        m_IngredientDestroy[1] = true; // 🟡
        m_IngredientUseSoftSkills[1] = false; // 🟢

        
		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE RESULT SETTINGS

        AddResult("EA_Food_Plate_Stew_Wolf"); // 🔴
        m_ResultSetFullQuantity[0] = true; // 🔴
        m_ResultSetQuantity[0] = 0; // 🔴
        m_ResultSetHealth[0] = -1; // 🟡
        m_ResultInheritsHealth[0] = -2; // 🟢
        m_ResultInheritsColor[0] = -1; // 🟢
        m_ResultToInventory[0] = -2; // 🟢
        m_ResultUseSoftSkills[0] = false; // 🟢
        m_ResultReplacesIngredient[0] = -1; // 🟢
    };
};