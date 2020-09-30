class Shotgun_Base;

class Bullet_12GaugePellets: Shotgun_Base
{
	class DamageApplied
	{
		type="Projectile";
		dispersion=0;
		bleedThreshold=1;
		defaultDamageOverride[]={{0.5,1}};
		class Health{damage= 20;armorDamage=0.5;};
		class Blood {damage=100;};
		class Shock {damage= 25;};
	};
};
class Bullet_12GaugeSlug: Bullet_Base
{
	class DamageApplied
	{
		type="Projectile";
		dispersion=0;
		bleedThreshold=1;
		defaultDamageOverride[]={{0.5,1}};
		class Health{damage=110;};
		class Blood {damage=100;};
		class Shock {damage=100;};
	};
};
