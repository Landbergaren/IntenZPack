modded class PlayerStatsPCO_v115 extends PlayerStatsPCO_Base
{
    override void Init() 
    {
		RegisterStat(EPlayerStats_v115.HEATCOMFORT,	new PlayerStat<float>	(-1,1,0,"HeatComfort",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v115.TREMOR,		new PlayerStat<float>	(0,1,0,"Tremor",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v115.WET,			new PlayerStat<int>		(0,1,0,"Wet",EPSstatsFlags.EMPTY) );
	//	RegisterStat(EPlayerStats_v115.ENERGY,		new PlayerStat<float>	(0,10000,1300,"Energy",EPSstatsFlags.EMPTY) );	//Streatmans proposal
	//	RegisterStat(EPlayerStats_v115.WATER,		new PlayerStat<float>	(0,5000,1000,"Water",EPSstatsFlags.EMPTY) );	//Streatmans proposal
		RegisterStat(EPlayerStats_v115.ENERGY,		new PlayerStat<float>	(0,10000,1400,"Energy",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v115.WATER,		new PlayerStat<float>	(0,5000,1200,"Water",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v115.DIET,		new PlayerStat<float>	(0,5000,2500,"Diet",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v115.STAMINA,		new PlayerStat<float>	(0,GameConstants.STAMINA_MAX,100,"Stamina",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v115.SPECIALTY,	new PlayerStat<float>	(-1,1,0,"Specialty",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v115.BLOODTYPE,	new PlayerStat<int>		(0,128,BloodTypes.GenerateBloodType(),"BloodType",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v115.TOXICITY,	new PlayerStat<float>	(0,100,0,"Toxicity",EPSstatsFlags.EMPTY) );
		RegisterStat(EPlayerStats_v115.HEATBUFFER,  new PlayerStat<float>	(-30,30,0,"HeatBuffer",EPSstatsFlags.EMPTY) );
	}
}
