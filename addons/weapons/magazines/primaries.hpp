class GVAR(Base_Mag): JLTS_DC15A_mag
{
	author = AUTHOR;
	count = 10;
	displayName = "(SOB) Base Magazines";
	displayNameShort = "Energy Cell";
	descriptionShort = "Base magazine used by the SOB EC";
	ammo = QGVAR(Base_Ammo);
	tracersevery = 1;
};

class GVAR(Rifle_mag): GVAR(Base_Mag)
{
	Count = 30;
	displayName= "[SOB] Rifle Magazine";
	displayNameShort="Energy Cell";
	descriptionShort="Rifle Magazine used by Sob";
	ammo=QGVAR(Rifle_Ammo);
};

class GVAR(Sniper_mag): GVAR(Base_Mag)
{
	Count = 10;
	displayName= "[SOB] Sniper Magazine";
	displayNameShort="High Power";
	descriptionShort="Sniper Magazine used by Sob";
	ammo=QGVAR(Rifle_Ammo);
};