modded class PlayerStatsPCO_v106 
{
    override void Init() 
    {
		RegisterStat(EPlayerStats_v106.HEATCOMFORT,	new PlayerStat<float>	(-1,1,0,"HeatComfort",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v106.TREMOR,		new PlayerStat<float>	(0,1,0,"Tremor",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v106.WET,			new PlayerStat<int>		(0,1,0,"Wet",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v106.ENERGY,		new PlayerStat<float>	(0,10000,1500,"Energy",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v106.WATER,		new PlayerStat<float>	(0,5000,1300,"Water",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v106.DIET,		new PlayerStat<float>	(0,5000,2500,"Diet",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v106.STAMINA,		new PlayerStat<float>	(0,GameConstants.STAMINA_MAX,100,"Stamina",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v106.SPECIALTY,	new PlayerStat<float>	(-1,1,0,"Specialty",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v106.BLOODTYPE,	new PlayerStat<int>		(0,128,BloodTypes.GenerateBloodType(),"BloodType",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v106.TOXICITY,	new PlayerStat<float>	(0,100,0,"Toxicity",EPSstatsFlags.EMPTY) );
	}
};
