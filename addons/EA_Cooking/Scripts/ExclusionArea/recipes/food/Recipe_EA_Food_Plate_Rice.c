class Recipe_EA_Food_Plate_Rice extends Recipe_EA_Base
{	
    private int lastNotificationTime = 0;

	//----------------------------------------------------------------------------------------------------------------------
	// ADVANCED RECIPE CONDITIONS

	// Define if we use multiplicator or item amount
	// true : multiplicator (%)
	// false : item amount
	bool useMultiplicator0 = true; // 🔴
	bool useMultiplicator1 = false; // 🔴

	// Define item amount
	float itemAmout0 = 0.0; // 🔴
	float itemAmout1 = 0.0; // 🔴

	// Define multiplicator
	float multiplicator0 = 0.0; // 🔴
	float multiplicator1 = 0.0; // 🔴


	//----------------------------------------------------------------------------------------------------------------------
	// ADVANCED RECIPE TEXTS
	string titleNotification = "Vous réfléchissez..."; // 🟡
	string messageNotification0 = ""; // 🔴
	string messageNotification1 = ""; // 🔴

	string ingredientUnit0 = ""; // "g","ml", etc. // 🔴
	string ingredientUnit1 = ""; // "g","ml", etc. // 🔴


    override void Init()
    {   
		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE GENERAL SETTINGS
        m_Name = "[Cuisiner] Riz";
        m_IsInstaRecipe = false;   
        m_AnimationLength = 1;    
        m_Specialty = 0.02;        
        

		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE INGREDIENTS CONDITIONS
        //Ingredient #1
        m_MinDamageIngredient[0] = -1;
        m_MaxDamageIngredient[0] = 3;

        m_MinQuantityIngredient[0] = 1; // DONT MODIFY
        m_MaxQuantityIngredient[0] = -1; // DONT MODIFY

        //Ingredient #2
        m_MinDamageIngredient[1] = -1;
        m_MaxDamageIngredient[1] = 3;

        m_MinQuantityIngredient[1] = 1; // DONT MODIFY
        m_MaxQuantityIngredient[1] = -1; // DONT MODIFY


        //----------------------------------------------------------------------------------------------------------------------
		// RECIPE INGREDIENTS MODIFICATIONS

        //Ingrédients #1
        InsertIngredient(0,"Rice");      
        m_IngredientAddHealth[0] = 0;
        m_IngredientSetHealth[0] = -1;
        m_IngredientAddQuantity[0] = 0; // DONT MODIFY
        m_IngredientDestroy[0] = false; // DONT MODIFY
        m_IngredientUseSoftSkills[0] = false;
        
        //Ingrédients #2
        InsertIngredient(1,"EA_Food_Plate_Wood_Empty"); // TODO
        m_IngredientAddHealth[1] = 0;
        m_IngredientSetHealth[1] = -1;
        m_IngredientAddQuantity[1] = 0; // DONT MODIFY
        m_IngredientDestroy[1] = false; // DONT MODIFY
        m_IngredientUseSoftSkills[1] = false;

        
		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE RESULT SETTINGS

        AddResult("EA_Food_Plate_Rice");
        m_ResultSetFullQuantity[0] = true;
        m_ResultSetQuantity[0] = 0;
        m_ResultSetHealth[0] = -1;
        m_ResultInheritsHealth[0] = -2;
        m_ResultInheritsColor[0] = -1;
        m_ResultToInventory[0] = -2;
        m_ResultUseSoftSkills[0] = false;
        m_ResultReplacesIngredient[0] = -1;
    };
};