class EA_Bowl_Base_Full extends Container_Base
{
	override bool IsContainer()
	{
		return true;
	};
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}	
		//better use something like super.GetName()
		if ( parent && (parent.IsKindOf("EA_Bowl_Base_Full")) )
		{
			return false;
		}
		
		return true;
	};
};