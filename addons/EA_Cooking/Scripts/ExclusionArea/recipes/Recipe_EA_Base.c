class Recipe_EA_Base extends RecipeBase // 🔴
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
        m_Name = "[CRAFT]"; // 🔴
        m_IsInstaRecipe = false; // 🟢
        m_AnimationLength = 1; // 🟡
        m_Specialty = 0.02; // 🟢
        

		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE INGREDIENTS CONDITIONS
        //Ingredient #1
        m_MinDamageIngredient[0] = -1; // 🟢
        m_MaxDamageIngredient[0] = 3; // 🟢

        m_MinQuantityIngredient[0] = 1; // DONT MODIFY
        m_MaxQuantityIngredient[0] = -1; // DONT MODIFY

        //Ingredient #2
        m_MinDamageIngredient[1] = -1; // 🟢
        m_MaxDamageIngredient[1] = 3; // 🟢

        m_MinQuantityIngredient[1] = 1; // DONT MODIFY
        m_MaxQuantityIngredient[1] = -1; // DONT MODIFY


        //----------------------------------------------------------------------------------------------------------------------
		// RECIPE INGREDIENTS MODIFICATIONS

        //Ingrédients #1
        InsertIngredient(0,""); // 🔴
        m_IngredientAddHealth[0] = 0; // 🟢
        m_IngredientSetHealth[0] = -1; // 🟡
        m_IngredientAddQuantity[0] = 0; // DONT MODIFY
        m_IngredientDestroy[0] = false; // DONT MODIFY
        m_IngredientUseSoftSkills[0] = false; // 🟢
        
        //Ingrédients #2
        InsertIngredient(1,""); // 🔴
        m_IngredientAddHealth[1] = 0; // 🟢
        m_IngredientSetHealth[1] = -1; // 🟢
        m_IngredientAddQuantity[1] = 0; // DONT MODIFY
        m_IngredientDestroy[1] = false; // DONT MODIFY
        m_IngredientUseSoftSkills[1] = false; // 🟢

        
		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE RESULT SETTINGS

        AddResult(""); // 🔴
        m_ResultSetFullQuantity[0] = true; // 🔴
        m_ResultSetQuantity[0] = 0; // 🔴
        m_ResultSetHealth[0] = -1; // 🟡
        m_ResultInheritsHealth[0] = -2; // 🟢
        m_ResultInheritsColor[0] = -1; // 🟢
        m_ResultToInventory[0] = -2; // 🟢
        m_ResultUseSoftSkills[0] = false; // 🟢
        m_ResultReplacesIngredient[0] = -1; // 🟢
    };

    // Executed to check if recipe is valid
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		//----------------------------------------------------------------------------------------------------------------------
		// ADVANCED RECIPE VARIABLES DEFINITION
		ItemBase ingredient0 = ingredients[0];
		ItemBase ingredient1 = ingredients[1];
		
		float minimumIngredientQuantity0;
		float minimumIngredientQuantity1;

		float currentIngredientQuantity0;
		float currentIngredientQuantity1;

		string ingredientMessage0;
		string ingredientMessage1;


		//----------------------------------------------------------------------------------------------------------------------
		// ADVANCED RECIPE CALCULATIONS
		
		// Variables definitions:
		// multiplicatorString0 : multiplicator in string format
		// minimumIngredientQuantity0 : minimum quantity of ingredient needed
		// currentIngredientQuantity0 : current quantity of ingredient
		// ingredientMessage0 : quantity message (for notification)


		// Ingredient 0
		if (useMultiplicator0 == true)
		{

			// Get pourcentage from multiplicator
			string multiplicatorString0 = (multiplicator0 * 100).ToString();

			// Get minimum quantity of ingredient needed
			minimumIngredientQuantity0 = ingredient0.GetQuantityMax() * multiplicator0;

			// Get current quantity of ingredient
			currentIngredientQuantity0 = ingredient0.GetQuantity();

			// Define quantity message
			ingredientMessage0 = currentIngredientQuantity0.ToString() + ingredientUnit0 + " / " + minimumIngredientQuantity0.ToString() + ingredientUnit0;

			m_IngredientAddQuantity[0] = -minimumIngredientQuantity0;

		} else
		{
			// If ingredient has quantity
			if (ingredient0.HasQuantity() == true)
			{	
				// Get current quantity of ingredient
				currentIngredientQuantity0 = ingredient0.GetQuantity();
			} else
			{
				// Get item amount
				currentIngredientQuantity0 = itemAmout0;
			}

			m_IngredientAddQuantity[0] = -minimumIngredientQuantity0;
		}

		// Ingredient 1
		if (useMultiplicator1)
		{
			string multiplicatorString1 = (multiplicator1 * 100).ToString();

			minimumIngredientQuantity1 = ingredient1.GetQuantityMax() * multiplicator1;

			currentIngredientQuantity1 = ingredient1.GetQuantity();

			ingredientMessage1 = currentIngredientQuantity1.ToString() + ingredientUnit1 + " / " + minimumIngredientQuantity1.ToString() + ingredientUnit1;

			m_IngredientAddQuantity[1] = -minimumIngredientQuantity1;
		} else
		{
			if (ingredient1.HasQuantity() == true)
			{
				currentIngredientQuantity1 = ingredient1.GetQuantity();
			} else
			{
				currentIngredientQuantity1 = itemAmout1;
			}

			m_IngredientAddQuantity[1] = -currentIngredientQuantity1;
		}

		
		//----------------------------------------------------------------------------------------------------------------------
		// ADVANCED RECIPE NOTIFICATIONS

		// Get current time
		int currentTime = GetGame().GetTime();

		if (currentIngredientQuantity0 < minimumIngredientQuantity0)
		{
			if (currentTime < lastNotificationTime + constNotificationDelay)
			{
				return false;
			}

			// Send notification
			NotificationSystem.SendNotificationToPlayerIdentityExtended(player.GetIdentity(), 3, titleNotification, messageNotification0 + " " + ingredientMessage0, constImageNotificationClue);
		
			lastNotificationTime = currentTime;

			// Cancel recipe
			return false;

		} else if (currentIngredientQuantity1 < minimumIngredientQuantity1)
		{
			if (currentTime < lastNotificationTime + constNotificationDelay)
			{
				return false;
			}

			// Send notification
			NotificationSystem.SendNotificationToPlayerIdentityExtended(player.GetIdentity(), 3, titleNotification, messageNotification1 + " " + ingredientMessage1, constImageNotificationClue);
		
			lastNotificationTime = currentTime;

			// Cancel recipe
			return false;
		}


		// ---------------------------------------------------------------------------------------------------------------------
		// ADVANCED RECIPE FINAL RETURN
		return true;
	}

	// Executed when recipe is performed
	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Do method called","recipes");
	};
};