class Recipe_EFI_Savoury_Rice extends RecipeBase
{	
    private int lastNotificationTime = 0;
    private int notificationDelay = 10000;

    override void Init()
    {   
        m_Name = "[Cuisiner] Riz savoureux";
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
        InsertIngredient(1,"WaterBottle"); // TODO

        m_IngredientAddHealth[1] = 0;
        m_IngredientSetHealth[1] = -1;
        m_IngredientAddQuantity[1] = -1000; // TODO
        m_IngredientDestroy[1] = false; // TODO
        m_IngredientUseSoftSkills[1] = false;

        //----------------------------------------------------------------------------------------------------------------------
        
        //Résultat
        AddResult("EFI_Savoury_Rice");
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
		float multiplicator0 = 0.5;
		float multiplicator1 = 1.0;
		string titleNotification = "Vous réfléchissez...";
		string messageNotification0 = "Il me faudrait peut-être un peu plus de riz... ";
		string messageNotification1 = "Il me faudrait peut-être un peu plus d'eau... ";
		string imageNotification = "EA_Cooking/images/clue.paa";

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
	};

	// Executed when recipe is performed
	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Recipe_EFI_Mutton_Curry Do method called","recipes");
	};
};