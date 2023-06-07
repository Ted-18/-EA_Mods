modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);

        string itemName = "EA_Food_plate_Base_Full";
        string asi = "dz/anims/workspaces/player/player_main/player_main_1h.asi";
        string anm = "dz/anims/anm/player/ik/gear/compass_modern.anm";

        pType.AddItemInHandsProfileIK(itemName, asi, pBehavior, anm);
    };
};