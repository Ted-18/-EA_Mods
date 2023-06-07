class Recipe_Exemple extends RecipeBase
{

	private int lastNotificationTime = 0;
    private int notificationDelay = 10000;


    // Initialise la recette
	override void Init()
	{   
		m_Name = "Faire un curry de poulet MIAM"; // Nom de la recette affiché dans le jeu
		m_IsInstaRecipe = false; // Détermine si la recette est exécutée instantanément ou non
		m_AnimationLength = 2; // Durée de l'animation de la recette en secondes
		m_Specialty = 0.02; // Spécialité associée à la recette (pour l'expérience du joueur)

        // Conditions pour les ingrédients
		m_MinDamageIngredient[0] = -1; 
		// Dommage minimal autorisé pour l'ingrédient 0
		// -1 : Aucune restriction de dommage.
		// 0 : État neuf, sans aucun dommage.
		// 1 : Légèrement endommagé, avec quelques marques ou rayures.
		// 2 : Modérément endommagé, avec des dommages visibles et des performances légèrement réduites.
		// 3 : Fortement endommagé, avec des dommages importants et des performances significativement réduites.
		// 4 : Très fortement endommagé, à la limite de l'inutilisable, avec des performances fortement réduites.
		// 5 : Complètement endommagé ou détruit, l'objet ne peut plus être utilisé.

		m_MaxDamageIngredient[0] = 3;
		// Dommage maximal autorisé pour l'ingrédient 0
		// -1 : Aucune restriction de dommage.
		// 0 : État neuf, sans aucun dommage.
		// 1 : Légèrement endommagé, avec quelques marques ou rayures.
		// 2 : Modérément endommagé, avec des dommages visibles et des performances légèrement réduites.
		// 3 : Fortement endommagé, avec des dommages importants et des performances significativement réduites.
		// 4 : Très fortement endommagé, à la limite de l'inutilisable, avec des performances fortement réduites.
		// 5 : Complètement endommagé ou détruit, l'objet ne peut plus être utilisé.

		
		m_MinQuantityIngredient[0] = 1; 
		// Quantité minimale requise pour l'ingrédient 0
		// -1 : Aucune restriction de quantité.
		// 0 : Aucun objet.
		// 1 : Un seul objet.
		// 2 : Deux objets
		// etc

		m_MaxQuantityIngredient[0] = -1; 
		// Quantité maximale autorisée pour l'ingrédient 0
		// -1 : Aucune restriction de quantité.
		// 0 : Aucun objet.
		// 1 : Un seul objet.
		// 2 : Deux objets
		// etc

		m_MinDamageIngredient[1] = -1;
		// Dommage minimal autorisé pour l'ingrédient 1
		// -1 : Aucune restriction de dommage.
		// 0 : État neuf, sans aucun dommage.
		// 1 : Légèrement endommagé, avec quelques marques ou rayures.
		// 2 : Modérément endommagé, avec des dommages visibles et des performances légèrement réduites.
		// 3 : Fortement endommagé, avec des dommages importants et des performances significativement réduites.
		// 4 : Très fortement endommagé, à la limite de l'inutilisable, avec des performances fortement réduites.
		// 5 : Complètement endommagé ou détruit, l'objet ne peut plus être utilisé.

		m_MaxDamageIngredient[1] = 3;
		// Dommage maximal autorisé pour l'ingrédient 1
		// -1 : Aucune restriction de dommage.
		// 0 : État neuf, sans aucun dommage.
		// 1 : Légèrement endommagé, avec quelques marques ou rayures.
		// 2 : Modérément endommagé, avec des dommages visibles et des performances légèrement réduites.
		// 3 : Fortement endommagé, avec des dommages importants et des performances significativement réduites.
		// 4 : Très fortement endommagé, à la limite de l'inutilisable, avec des performances fortement réduites.
		// 5 : Complètement endommagé ou détruit, l'objet ne peut plus être utilisé.
		
		m_MinQuantityIngredient[1] = 1;
		// Quantité minimale requise pour l'ingrédient 1 (-1 signifie aucune limite)
		// -1 : Aucune restriction de quantité.
		// 0 : Aucun objet.
		// 1 : Un seul objet.
		// 2 : Deux objets
		// etc

		m_MaxQuantityIngredient[1] = -1;
		// Quantité maximale autorisée pour l'ingrédient 1 (-1 signifie aucune limite)
		// -1 : Aucune restriction de quantité.
		// 0 : Aucun objet.
		// 1 : Un seul objet.
		// 2 : Deux objets
		// etc

		//----------------------------------------------------------------------------------------------------------------------

        // Ajoute l'ingrédient #1 (0 = premier ingrédient, 1 = deuxième ingrédient)
		// Il est possible d'ajouter plusieurs ingrédients en utilisant plusieurs lignes de code
		InsertIngredient(0,"Rice"); 
		
		m_IngredientAddHealth[0] = 0; 
		// Santé de l'ingrédient 0
		// (valeur) == 0 signifie aucune modification
		// (valeur) > 0 signifie que la santé de l'ingrédient 0 sera augmentée de (valeur)
		// (valeur) < 0 signifie que la santé de l'ingrédient 0 sera diminuée de (valeur)

		m_IngredientSetHealth[0] = -1; 
		// Santé définie pour l'ingrédient 0
		// (valeur) == -1 signifie aucune modification
		// (valeur) > 0 signifie que la santé de l'ingrédient 0 sera définie à (valeur)
		// (valeur) < 0 signifie aucune modification

		m_IngredientAddQuantity[0] = -25;
		// Quantité de l'ingrédient 0
		// (valeur) == 0 signifie aucune modification
		// (valeur) > 0 signifie que la quantité de l'ingrédient 0 sera augmentée de (valeur)
		// (valeur) < 0 signifie que la quantité de l'ingrédient 0 sera diminuée de (valeur)

		m_IngredientDestroy[0] = false;
		// Indique si l'ingrédient 0 est détruit lors de la recette
		// true : L'ingrédient 0 est détruit
		// false : L'ingrédient 0 n'est pas détruit

		m_IngredientUseSoftSkills[0] = false; 
		// Indique si les compétences douces sont utilisées pour l'ingrédient 0
		// true : Les compétences douces sont utilisées
		// false : Les compétences douces ne sont pas utilisées
		// Compétences douces : https://dayz.gamepedia.com/Soft_Skills
		
        // Ajoute l'ingrédient #2 (Vous pouvez ajouter autant d'ingrédients que vous le souhaitez)
		InsertIngredient(1,"ChickenBreastMeat"); 


		m_IngredientAddHealth[1] = 0; // Santé ajoutée par l'ingrédient 1
		m_IngredientSetHealth[1] = -1; // Santé fixée par l'ingrédient 1 (-1 signifie aucune modification)
		m_IngredientAddQuantity[1] = -1; // Quantité soustraite de l'ingrédient 1 (0 signifie aucune soustraction)
		m_IngredientDestroy[1] = true; // Indique si l'ingrédient 1 est détruit lors de la recette
		m_IngredientUseSoftSkills[1] = false; // Indique si les compétences douces sont utilisées pour l'ingrédient 1

		//----------------------------------------------------------------------------------------------------------------------
		
        // Résultat de la recette
		AddResult("EFI_Chicken_Curry"); // Ajoute le résultat de la recette (EFI_Chicken_Curry) 
		
		m_ResultSetFullQuantity[0] = true; 
		// Le résultat est une quantité complète
		// true : Le résultat est une quantité complète
		// false : Le résultat est une quantité partielle

		m_ResultSetQuantity[0] = 1; 
		// Quantité du résultat
		// (valeur) == 0 signifie aucune modification
		// (valeur) > 0 signifie que la quantité du résultat sera de (valeur)

		m_ResultSetHealth[0] = -1; 
		// Santé du résultat
		// (valeur) == -1 signifie aucune modification
		// (valeur) > 0 signifie que la santé du résultat sera de (valeur)

		m_ResultInheritsHealth[0] = -1; 
		// Santé héritée des ingrédients
		// (valeur) == -1 signifie ne rien faire
		// une (valeur) >= 0 signifie que ce résultat héritera de la santé de l'ingrédient numéro (valeur)
		// (valeur) == -2 signifie que ce résultat héritera de la santé de tous les ingrédients moyennés 
		//             (santé du résultat = santé combinée des ingrédients / nombre d'ingrédients)

		m_ResultInheritsColor[0] = -1;
		// Couleur héritée des ingrédients
		// (valeur) == -1 signifie ne rien faire
		// une (valeur) >= 0 signifie que le nom de la classe de ce résultat sera composé du nom fourni 
		//                 dans la méthode AddResult et de la valeur "color" de l'ingrédient (valeur)

		m_ResultToInventory[0] = -2; 
		// Indique où le résultat sera placé dans l'inventaire du joueur
		// m_ResultToInventory[0] = -1: Le résultat sera placé dans l'emplacement d'inventaire actuel 
		//								où se trouve l'ingrédient utilisé pour la recette.
		// m_ResultToInventory[0] = -2: Le résultat ne sera pas placé dans l'inventaire du joueur et 
		//								restera à l'emplacement de la recette.
		// m_ResultToInventory[0] = n (où n est un nombre entier positif) : Le résultat sera placé dans 
		//							l'emplacement d'inventaire spécifié par le nombre n. Les emplacements 
		//							d'inventaire commencent généralement à partir de 0, où 0 représente 
		//							le premier emplacement.

		m_ResultUseSoftSkills[0] = false; 
		// Indique si les compétences douces sont utilisées pour le résultat
		// true : Les compétences douces sont utilisées
		// false : Les compétences douces ne sont pas utilisées
		// Compétences douces : https://dayz.gamepedia.com/Soft_Skills

		m_ResultReplacesIngredient[0] = -1;
		// valeur == -1 signifie ne rien faire
		// une valeur >= 0 signifie que ce résultat transférera les propriétés de l'objet, 
		//               les variables, les accessoires, etc., d'un ingrédient (valeur)
	};
	
	// Executed to check if recipe is valid
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		float multiplicator0 = 0.5;
		float multiplicator1 = 1.0;
		string titleNotification = "Vous réfléchissez...";
		string messageNotification0 = "Il me faudrait peut-être un peu plus de riz... ";
		string messageNotification1 = "Il me faudrait peut-être un peu plus d'eau... ";
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
		};
		

		return true;
	};

	// Executed when recipe is performed
	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Recipe_EFI_Mutton_Curry Do method called","recipes");
	};

};