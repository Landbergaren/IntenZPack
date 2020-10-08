class Bullet_Taser: Bullet_22
{
	scope = 2;
	lootCategory = "Crafted";
	cartridge = "FxCartridge_22";
	spawnPileType = "Ammo_Taser";
	hit = 4.5;
	indirectHit = 0;
	indirectHitRange = 0;
	visibleFire = 2;
	audibleFire = 3.5;
	visibleFireTime = 3;
	cost = 1;
	tracerScale = 0.6;
	tracerStartTime = -1;
	tracerEndTime = 1;
	deflecting = 30;
	caliber = 0.7;
	airFriction = -0.000769;
	typicalSpeed = 280;
	initSpeed = 280;
	timeToLive = 0.045;
	weight = 0.0025;
	soundFly[] = {};
	supersonicCrackNear[] = {};
	supersonicCrackFar[] = {};
	class DamageApplied
	{
		type = "Projectile";
		dispersion = 0;
		bleedThreshold = 0;
		class Health
		{
			damage = 0;
		};
		class Blood
		{
			damage = 0;
		};
		class Shock
		{
			damage = 1000;
		};
	};
	class NoiseHit
	{
		strength = 3;
		type = "shot";
	};
};
