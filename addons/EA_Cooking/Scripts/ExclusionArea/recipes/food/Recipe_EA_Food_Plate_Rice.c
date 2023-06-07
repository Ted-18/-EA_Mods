class Recipe_EA_Food_Plate_Rice extends RecipeBase
{	
    private int lastNotificationTime = 0;
    private int notificationDelay = 10000;

    override void Init()
    {   
        m_Name = "[Cuisiner] Riz";
        m_IsInstaRecipe = false;   
        m_AnimationLength = 1;    
        m_Specialty = 0.02;        
        
        //Ingredient #1
        m_MinDamageIngredient[0] = -1;
        m_MaxDamageIngredient[0] = 3;

        m_MinQuantityIngredient[0] = 1;
        m_MaxQuantityIngredient[0] = -1;

        //Ingredient #2
        m_MinDamageIngredient[1] = -1;
        m_MaxDamageIngredient[1] = 3;

        m_MinQuantityIngredient[1] = 1;
        m_MaxQuantityIngredient[1] = -1;

        //----------------------------------------------------------------------------------------------------------------------
        

        //Ingrédients #1
        InsertIngredient(0,"Rice");      
        
        m_IngredientAddHealth[0] = 0;
        m_IngredientSetHealth[0] = -1;
        m_IngredientAddQuantity[0] = -250; // TODO
        m_IngredientDestroy[0] = false; // TODO
        m_IngredientUseSoftSkills[0] = false;
        
        //Ingrédients #2
        InsertIngredient(1,"EA_Food_Plate_Wood_Empty"); // TODO

        m_IngredientAddHealth[1] = 0;
        m_IngredientSetHealth[1] = -1;
        m_IngredientAddQuantity[1] = -1000; // TODO
        m_IngredientDestroy[1] = false; // TODO
        m_IngredientUseSoftSkills[1] = false;

        //----------------------------------------------------------------------------------------------------------------------
        
        //Résultat
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

    // Executed to check if recipe is valid
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{

		// Define if we use multiplicator or item amount
		// true : multiplicator (%)
		// false : item amount
		bool useMultiplicator0 = true;
		bool useMultiplicator1 = false;

		// Define item amount
		float itemAmout0 = 0.0;
		float itemAmout1 = 1.0;

		// Define multiplicator
		float multiplicator0 = 0.5;
		float multiplicator1 = 0.0;

		// Define Text
		string titleNotification = "Vous réfléchissez...";
		string messageNotification0 = "Je n'ai pas assez de riz...";
		string messageNotification1 = "J'ai un problème avec mon assiette...";
		string imageNotification = "EA_Cooking/images/notifications/clue.paa";

		string ingredientUnit0 = "g"; // "g","ml", etc.
		string ingredientUnit1 = ""; // "g","ml", etc.



		ItemBase ingredient0 = ingredients[0];
		ItemBase ingredient1 = ingredients[1];
		
		float minimumIngredientQuantity0;
		float minimumIngredientQuantity1;

		float currentIngredientQuantity0;
		float currentIngredientQuantity1;

		string ingredientMessage0;
		string ingredientMessage1;

		// Use multiplicator or item amount
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

		}


		if (useMultiplicator1 == true)
		{
			string multiplicatorString1 = (multiplicator1 * 100).ToString();

			minimumIngredientQuantity1 = ingredient1.GetQuantityMax() * multiplicator1;

			currentIngredientQuantity1 = ingredient1.GetQuantity();

			ingredientMessage1 = currentIngredientQuantity1.ToString() + ingredientUnit1 + " / " + minimumIngredientQuantity1.ToString() + ingredientUnit1;
		} else
		{
			if (ingredient1.HasQuantity() == true)
			{
				currentIngredientQuantity1 = ingredient1.GetQuantity();
			} else
			{
				currentIngredientQuantity1 = itemAmout1;
			}
		}

		

		int currentTime = GetGame().GetTime();

		if (currentIngredientQuantity0 < minimumIngredientQuantity0)
		{
			if (currentTime < lastNotificationTime + notificationDelay)
			{
				return false;
			}

			// Send notification
			NotificationSystem.SendNotificationToPlayerIdentityExtended(player.GetIdentity(), 3, titleNotification, messageNotification0 + " " + ingredientMessage0, imageNotification);
		
			lastNotificationTime = currentTime;

			// Cancel recipe
			return false;

		} else if (currentIngredientQuantity1 < minimumIngredientQuantity1)
		{
			if (currentTime < lastNotificationTime + notificationDelay)
			{
				return false;
			}

			// Send notification
			NotificationSystem.SendNotificationToPlayerIdentityExtended(player.GetIdentity(), 3, titleNotification, messageNotification1 + " " + ingredientMessage1, imageNotification);
		
			lastNotificationTime = currentTime;

			// Cancel recipe
			return false;
		}

		return true;
	}

	// Executed when recipe is performed
	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Recipe_EA_Savoury_Rice Do method called","recipes");
	};
};