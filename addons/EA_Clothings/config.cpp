class CfgMods
{
    class EA_Clothings
	{
		dir = "EA_Clothings";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "EA_Clothings";
		credits = "EA_Clothings";
		author = "EA_Clothings";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
	};
};

class CfgPatches
{
	class EA_Clothings
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};


class CfgVehicles
{
	class PlateCarrierVest_Black;

	class PlateCarrierVest_Black_Ted: PlateCarrierVest_Black
	{
		displayName="Plate Carrier Vest TED";
		descriptionShort="A plate carrier vest with pouches for storing items.";

		hiddenSelectionsTextures[]=
		{
			"EA_Clothings\EA_RebelPlateCarrier_co.paa",
			"EA_Clothings\EA_RebelPlateCarrier_co.paa",
			"EA_Clothings\EA_RebelPlateCarrier_co.paa"
		};
	};
};