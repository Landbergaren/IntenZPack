class Clothing_Base;
class Clothing: Clothing_Base {};
#include "Armband_ColorBase\Cfg.hpp"
#include "TShirt_ColorBase\Cfg.hpp"
#include "PlateCarrierVest\Cfg.hpp"
#include "PlateCarrierHolster\Cfg.hpp"

class BeanieHat_ColorBase: Clothing
{	
	absorbency=0.80000001;
	heatIsolation=0.90000001;
};
class PumpkinHelmet: Clothing
{
	absorbency=0;
	heatIsolation=0.15;
};
class MotoHelmet_ColorBase: Clothing
{
	absorbency=0;
	heatIsolation=0.7;
};
class Ushanka_ColorBase: Clothing
{
	absorbency=0.80000001;
	heatIsolation=1;
};
class DarkMotoHelmet_ColorBase: Clothing
{
	absorbency=0;
	heatIsolation=0.7;
};
class GorkaHelmet: Clothing
{
	absorbency=0;
	heatIsolation=0.4;
};
class FirefightersHelmet_ColorBase: Clothing
{
	absorbency=0;
	heatIsolation=0.4;
};
class DirtBikeHelmet_ColorBase: Clothing
{
	absorbency=0;
	heatIsolation=0.5;
};
class Mich2001Helmet: Clothing
{
	absorbency=0;
	heatIsolation=0.50000001;
};
class QuiltedJacket_ColorBase: Clothing
{
	heatIsolation=0.9;
	absorbency=0.40000001;
};
class BomberJacket_ColorBase: Clothing
{
	heatIsolation=0.65;
	absorbency=0.2;
};
