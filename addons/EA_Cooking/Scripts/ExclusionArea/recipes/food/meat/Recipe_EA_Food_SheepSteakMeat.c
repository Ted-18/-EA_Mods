class Recipe_EA_Food_SheepSteakMeat extends Recipe_EA_Base // 🔴
{	

    override void advancedRecipeSettings()
	{
		//----------------------------------------------------------------------------------------------------------------------
		// ADVANCED RECIPE CONDITIONS

		// Define if we use strict match
		// true : 
		//  - cooking status need to be the same
		// false : no strict match
		modeStrictMatch = true; // 						🔴

		// Define if we use strict match for completing
		// true : Item #0 and #1 amount need to be 100% of maximum quantity of this item type
		// false : Completing mode not activated
		strictMatchCompleting = true; // 				🔴

        // Define if we use multiplicator or item amount
        // true : multiplicator (%)
        // false : item amount
        useMultiplicator0 = true; //                                                            🔴
        useMultiplicator1 = true; //                                                           🔴

        // Define item amount
        itemAmout0 = 0.0; //                                                                    🔴
        itemAmout1 = 0.0; //                                                                    🔴

        // Define multiplicator
        multiplicator0 = 0.5; //                                                                🔴
        multiplicator1 = 0.5; //                                                                🔴


        //----------------------------------------------------------------------------------------------------------------------
        // ADVANCED RECIPE TEXTS
        titleNotification = "Vous réfléchissez..."; //                                          🟡
        messageNotification0 = "Il me manque de la viande..."; //            🔴
        messageNotification1 = "Il me manque de la viande..."; //                      🔴

        ingredientUnit0 = "g"; // "g","ml", etc. //                                             🔴
        ingredientUnit1 = "g"; // "g","ml", etc. //                                              🔴
    }

    override void Init()
    {   
		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE GENERAL SETTINGS
        m_Name = "[Regrouper] Viande de mouton"; // 🔴
        m_IsInstaRecipe = false; // 🟢
        m_AnimationLength = 1; // 🟡
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
        InsertIngredient(0,"SheepSteakMeat"); // 🔴
        m_IngredientAddHealth[0] = 0; // 🟢
        m_IngredientSetHealth[0] = -1; // 🟡
        m_IngredientAddQuantity[0] = 0; // ❌
        m_IngredientDestroy[0] = false; // 🟡
        m_IngredientUseSoftSkills[0] = false; // 🟢
        
        //Ingrédients #2
        InsertIngredient(1,"SheepSteakMeat"); // 🔴
        m_IngredientAddHealth[1] = 0; // 🟢
        m_IngredientSetHealth[1] = -1; // 🟡
        m_IngredientAddQuantity[1] = 0; // ❌
        m_IngredientDestroy[1] = false; // 🟡
        m_IngredientUseSoftSkills[1] = false; // 🟢

        
		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE RESULT SETTINGS

        AddResult("SheepSteakMeat"); // 🔴
        m_ResultSetFullQuantity[0] = true; // 🔴
        m_ResultSetQuantity[0] = 0; // 🔴
        m_ResultSetHealth[0] = -1; // 🟡
        m_ResultInheritsHealth[0] = -2; // 🟢
        m_ResultInheritsColor[0] = 0; // 🟢
        m_ResultToInventory[0] = -2; // 🟢
        m_ResultUseSoftSkills[0] = false; // 🟢
        m_ResultReplacesIngredient[0] = -1; // 🟢
    };
};