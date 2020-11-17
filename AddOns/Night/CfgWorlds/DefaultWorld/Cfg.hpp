class DefaultWorld
{
	class Weather;
};
class CAWorld: DefaultWorld
{
	class Weather: Weather 
	{
		#include "LightingNew\Cfg.hpp"
	};
};
