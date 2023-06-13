class Recipe_EA_Base extends RecipeBase // 🔴
{	
    private int lastNotificationTime = 0;

	bool modeStrictMatch;
	bool strictMatchCompleting;

	bool useMultiplicator0;
	bool useMultiplicator1;

	float itemAmout0;
	float itemAmout1;

	float multiplicator0;
	float multiplicator1;

	string titleNotification;
	string messageNotification0;
	string messageNotification1;

	string ingredientUnit0;
	string ingredientUnit1;


	void advancedRecipeSettings()
	{
		//----------------------------------------------------------------------------------------------------------------------
		// ADVANCED RECIPE CONDITIONS

		// Define if we use strict match
		// true : 
		//  - cooking status need to be the same
		// false : no strict match
		modeStrictMatch = false; // 						🔴

		// Define if we use strict match for completing
		// true : Item #0 and #1 amount need to be 100% of maximum quantity of this item type
		// false : Completing mode not activated
		strictMatchCompleting = false; // 				🔴

		// Define if we use multiplicator or item amount
		// true : multiplicator (%)
		// false : item amount
		useMultiplicator0 = true; // 					🔴
		useMultiplicator1 = false; // 					🔴

		// Define item amount
		itemAmout0 = 0.0; // 							🔴
		itemAmout1 = 0.0; // 							🔴

		// Define multiplicator
		multiplicator0 = 0.0; // 						🔴
		multiplicator1 = 0.0; // 						🔴

		//Time to


		//----------------------------------------------------------------------------------------------------------------------
		// ADVANCED RECIPE TEXTS
		titleNotification = "Vous réfléchissez..."; // 	🟡
		messageNotification0 = ""; // 					🔴
		messageNotification1 = ""; // 					🔴

		ingredientUnit0 = ""; // "g","ml", etc. // 		🔴
		ingredientUnit1 = ""; // "g","ml", etc. // 		🔴
	}

    override void Init()
    {   
		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE GENERAL SETTINGS
        m_Name = "[CRAFT]"; // 							🔴
        m_IsInstaRecipe = false; // 					🟢
        m_AnimationLength = 1; // 						🟡
        m_Specialty = 0.02; // 							🟢
        

		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE INGREDIENTS CONDITIONS
        //Ingredient #1
        m_MinDamageIngredient[0] = -1; // 				🟢
        m_MaxDamageIngredient[0] = 3; // 				🟢

        m_MinQuantityIngredient[0] = 1; // 				❌
        m_MaxQuantityIngredient[0] = -1; // 			❌

        //Ingredient #2
        m_MinDamageIngredient[1] = -1; // 				🟢
        m_MaxDamageIngredient[1] = 3; // 				🟢

        m_MinQuantityIngredient[1] = 1; // 				❌
        m_MaxQuantityIngredient[1] = -1; // 			❌


        //----------------------------------------------------------------------------------------------------------------------
		// RECIPE INGREDIENTS MODIFICATIONS

        //Ingrédients #1
        InsertIngredient(0,""); // 						🔴
        m_IngredientAddHealth[0] = 0; // 				🟢
        m_IngredientSetHealth[0] = -1; // 				🟡
        m_IngredientAddQuantity[0] = 0; // 				❌
        m_IngredientDestroy[0] = false; // 				🟡
        m_IngredientUseSoftSkills[0] = false; // 		🟢
        
        //Ingrédients #2
        InsertIngredient(1,""); // 						🔴
        m_IngredientAddHealth[1] = 0; // 				🟢
        m_IngredientSetHealth[1] = -1; // 				🟡
        m_IngredientAddQuantity[1] = 0; // 				❌
        m_IngredientDestroy[1] = false; // 				🟡
        m_IngredientUseSoftSkills[1] = false; // 		🟢

        
		//----------------------------------------------------------------------------------------------------------------------
		// RECIPE RESULT SETTINGS

        AddResult(""); // 								🔴
        m_ResultSetFullQuantity[0] = true; // 			🔴
        m_ResultSetQuantity[0] = 0; // 					🔴
        m_ResultSetHealth[0] = -1; // 					🟡
        m_ResultInheritsHealth[0] = -2; // 				🟢
        m_ResultInheritsColor[0] = -1; // 				🟢
        m_ResultToInventory[0] = -2; // 				🟢
        m_ResultUseSoftSkills[0] = false; // 			🟢
        m_ResultReplacesIngredient[0] = -1; // 			🟢
    };

    // Executed to check if recipe is valid
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{

		// Call advanced recipe settings
		advancedRecipeSettings();

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

		string ingredientName0 = ingredient0.GetDisplayName();
		string ingredientName1 = ingredient1.GetDisplayName();

		int currentTime = GetGame().GetTime();


		//----------------------------------------------------------------------------------------------------------------------
		// ADVANCED RECIPE CALCULATIONS
		
		// Variables definitions:
		// multiplicatorString0 : multiplicator in string format
		// minimumIngredientQuantity0 : minimum quantity of ingredient needed
		// currentIngredientQuantity0 : current quantity of ingredient
		// ingredientMessage0 : quantity message (for notification)

		if (modeStrictMatch == true)
		{
			if (ingredient0.GetDisplayName() == ingredient1.GetDisplayName())
			{

				if (ingredient0.HasFoodStage() == true && ingredient1.HasFoodStage() == true)
				{


					Edible_Base ingredient0Edible = Edible_Base.Cast(ingredient0);
					Edible_Base ingredient1Edible = Edible_Base.Cast(ingredient1);

					if (ingredient0Edible.GetFoodStageType() != ingredient1Edible.GetFoodStageType())
					{
						// Send notification to player only if 10 seconds have passed since last notification
						if (currentTime < lastNotificationTime + constNotificationDelay)
						{
							return false;
						} else 
						{
							lastNotificationTime = currentTime;
						}

						
						NotificationSystem.SendNotificationToPlayerIdentityExtended(player.GetIdentity(), 3, titleNotification, constMessageCookedStatusError, constImageNotificationClue);

						return false;

					} else 
					{
						if (strictMatchCompleting == true)
                        {
                            if (ingredient0.GetQuantityMax() == ingredient1.GetQuantityMax())
                            {

                                int quantityMax = ingredient0.GetQuantityMax();
                                int quantityNeeded;

                                int lowestIngredient;
                                int highestIngredient;

                                
                                //Get wich ingredient have the lowest quantity
                                if (ingredient0.GetQuantity() < ingredient1.GetQuantity())
                                {
                                    lowestIngredient = 0;
                                    highestIngredient = 1;
                                } else 
                                {
                                    lowestIngredient = 1;
                                    highestIngredient = 0;
                                }

                                // Get the quantity needed to complete the ingredient
                                quantityNeeded = quantityMax - ingredients[lowestIngredient].GetQuantity();

                                if (quantityNeeded <= ingredients[highestIngredient].GetQuantity())
                                {
                                    // Set the quantity needed for the craft
                                    m_IngredientAddQuantity[highestIngredient] = -quantityNeeded;

                                    m_IngredientAddQuantity[lowestIngredient] = -ingredients[lowestIngredient].GetQuantity();

                                    return true;
                                } else
                                {
                                    // Send notification to player only if 10 seconds have passed since last notification
                                    if (currentTime < lastNotificationTime + constNotificationDelay)
                                    {
                                        return false;
                                    } else 
                                    {
                                        lastNotificationTime = currentTime;
                                    }

                                    // TODO : Change notification message
                                    NotificationSystem.SendNotificationToPlayerIdentityExtended(player.GetIdentity(), 3, titleNotification, constMessageNotEnoughQuantity, constImageNotificationClue);

                                    return false;
                                }

                            }

                        }

					}				
					
				}

			}

		}



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
			ingredientMessage0 = "( " + ingredientName0 + " " + currentIngredientQuantity0.ToString() + ingredientUnit0 + " / " + minimumIngredientQuantity0.ToString() + ingredientUnit0 + " )";

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

			ingredientMessage1 = "( " + ingredientName1 + " " + currentIngredientQuantity1.ToString() + ingredientUnit1 + " / " + minimumIngredientQuantity1.ToString() + ingredientUnit1 + " )";

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

		if (currentIngredientQuantity0 < minimumIngredientQuantity0)
		{
			// Send notification to player only if 10 seconds have passed since last notification
			if (currentTime < lastNotificationTime + constNotificationDelay)
			{
				return false;
			} else 
			{
				lastNotificationTime = currentTime;
			}

			// Send notification
			NotificationSystem.SendNotificationToPlayerIdentityExtended(player.GetIdentity(), 3, titleNotification, messageNotification0 + " " + ingredientMessage0, constImageNotificationClue);

			// Cancel recipe
			return false;

		} else if (currentIngredientQuantity1 < minimumIngredientQuantity1)
		{
			// Send notification to player only if 10 seconds have passed since last notification
			if (currentTime < lastNotificationTime + constNotificationDelay)
			{
				return false;
			} else 
			{
				lastNotificationTime = currentTime;
			}

			// Send notification
			NotificationSystem.SendNotificationToPlayerIdentityExtended(player.GetIdentity(), 3, titleNotification, messageNotification1 + " " + ingredientMessage1, constImageNotificationClue);

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

		if (modeStrictMatch)
		{

			ItemBase ingredient0 = ingredients[0];
			ItemBase ingredient1 = ingredients[1];

			if (ingredient0.GetDisplayName() != ingredient1.GetDisplayName()) return;
			if (!ingredient0.HasFoodStage() || !ingredient1.HasFoodStage()) return;

			Edible_Base ingredient0Edible = Edible_Base.Cast(ingredient0);
			Edible_Base ingredient1Edible = Edible_Base.Cast(ingredient1);

			if (ingredient0Edible.GetFoodStageType() != ingredient1Edible.GetFoodStageType()) return;

			for (int n = 0; n < results.Count(); n++)
			{
				ItemBase result = results[n]

				if (!result.HasFoodStage())
					continue;

				Edible_Base resultEdible = Edible_Base.Cast(result);
				resultEdible.ChangeFoodStage(ingredient0Edible.GetFoodStageType());
			}

		}
		
	}

};