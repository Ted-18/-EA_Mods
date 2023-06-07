class Recipe_EFI_Mushroom_Curry extends RecipeBase
{	
	private int lastNotificationTime = 0;
	private int notificationDelay = 10000;

	override void Init()
	{   
		m_Name = "[Cuisiner] Curry de champignons"; // TODO
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
		InsertIngredient(1,"BoletusMushroom");

		m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0; // TODO
		m_IngredientDestroy[1] = true; // TODO
		m_IngredientUseSoftSkills[1] = false;

		//----------------------------------------------------------------------------------------------------------------------
		
        //Résultat
		AddResult("EFI_Mushroom_Curry"); // TODO
		m_ResultSetFullQuantity[0] = true;
		m_ResultSetQuantity[0] = 0;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -2;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -2;
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;

		Debug.Log("EFI_Mushroom_Curry Recipe Init()","recipes");
	}

	// Executed to check if recipe is valid
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		// TODO
		float multiplicator0 = 0.5;
		float multiplicator1 = 0.8;
		string titleNotification = "Vous réfléchissez...";
		string messageNotification0 = "Il me faudrait peut-être un peu plus de riz... ";
		string messageNotification1 = "Je pourrais peut-être trouver un peu plus de champignons... ";
		string imageNotification = "EA_Cooking/images/notifications/clue.paa";

		string multiplicatorString0 = (multiplicator0 * 100).ToString();
		string multiplicatorString1 = (multiplicator1 * 100).ToString();

		float minimumIngredientQuantity0 = ingredients[0].GetQuantityMax() * multiplicator0;
		float minimumIngredientQuantity1 = ingredients[1].GetQuantityMax() * multiplicator1;

		float currentIngredientQuantity0 = ingredients[0].GetQuantity();
		float currentIngredientQuantity1 = ingredients[1].GetQuantity();

		string ingredientMessage0 = currentIngredientQuantity0.ToString() + "g / " + minimumIngredientQuantity0.ToString() + "g";
		string ingredientMessage1 = currentIngredientQuantity1.ToString() + "g / " + minimumIngredientQuantity1.ToString() + "g";

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
		Debug.Log("EFI_Mushroom_Curry Recipe Do()","recipes");
	}


};