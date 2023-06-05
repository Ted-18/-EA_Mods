class CfgPatches
{
	class EA_TransmissionRadio_Script
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class EA_TransmissionRadio
	{
		dir="EA_TransmissionRadio";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="EA_TransmissionRadio";
		credits="TheDmitri";
		author="Nels";
		authorID="0";
		version="1.1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"EA_TransmissionRadioDebug/scripts/Common",
					"EA_TransmissionRadio/scripts/Common",
					"EA_TransmissionRadio/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"EA_TransmissionRadioDebug/scripts/Common",
					"EA_TransmissionRadio/scripts/Common",
					"EA_TransmissionRadio/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"EA_TransmissionRadioDebug/scripts/Common",
					"EA_TransmissionRadio/scripts/Common",
					"EA_TransmissionRadio/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class EA_Channel7: HouseNoDestruct
	{
		scope=2;
		displayName="Transmission Radio";
		descriptionShort="$STR_CfgVehicles_Land_Radio_PanelPAS1";
		model="\dz\structures\Specific\Radio\Radio_PanelPAS.p3d";
		useEntityHierarchy="true";
	};
};
