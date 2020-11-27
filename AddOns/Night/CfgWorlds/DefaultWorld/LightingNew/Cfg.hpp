#define UNUSED_PARAMS \
	luminanceRectCoef = 0.0; \
	luminanceRectCoefCloud = 0.0; \
	rayleigh[] = {0.0, 0.0, 0.0}; \
	mie[] = {0.0, 0.0, 0.0}; \
	cloudsColor[] = {0.0, 0.0, 0.0}; \
	swBrightness = 0;

class LightingNew
{
	class C_Night
	{
		sunAngle = -18;
		sunOrMoon = 0;
		filmGrainIntensity = 0.0100;
		
		desiredLuminanceCoef	= -0.050;
		diffuse[]				= {0.1000,0.1500,0.3000}; // facing global light (sun / moon)
		bidirect[]				= {0.0000,0.0000,0.0000}; // opposite of diffuse
		ambient[]				= {0.0160,0.0316,0.0480}; // shadows
		groundReflection[]		= {0.0040,0.0072,0.0120}; // illumination from ground
		sky[]					= {0.0180,0.0280,0.0430}; // also affects color of the fog
		skyAroundSun[]			= {0.0180,0.0280,0.0430}; // halo around sun / moon
		
		desiredLuminanceCoefCloud 	= -0.050;
		diffuseCloud[]				= {0.1000,0.1500,0.3000};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.0160,0.0316,0.0480};
		groundReflectionCloud[]		= {0.0040,0.0072,0.0120};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class C_Astro1
	{
		sunAngle = -17;
		sunOrMoon = 0.5;
		filmGrainIntensity = 0.0075;
		
		desiredLuminanceCoef	= -0.025;
		diffuse[]				= {0.0000,0.0000,0.0000};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.0160,0.0316,0.0480};
		groundReflection[]		= {0.0040,0.0072,0.0120};
		sky[]					= {0.0360,0.0560,0.0870};
		skyAroundSun[]			= {0.0360,0.0560,0.0870};
		
		desiredLuminanceCoefCloud 	= -0.025;
		diffuseCloud[]				= {0.0000,0.0000,0.0000};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.0160,0.0316,0.0480};
		groundReflectionCloud[]		= {0.0040,0.0072,0.0120};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
		
		UNUSED_PARAMS
	};
	class C_Astro2
	{
		sunAngle = -16;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0075;
		
		desiredLuminanceCoef 	=  0.000;
		diffuse[]				= {0.0000,0.0000,0.0000};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.0320,0.0632,0.0960};
		groundReflection[]		= {0.0080,0.0144,0.0240};
		sky[]					= {0.0360,0.0560,0.0870};
		skyAroundSun[]			= {0.1011,0.1063,0.0926};
		
		desiredLuminanceCoefCloud 	=  0.000;
		diffuseCloud[]				= {0.0000,0.0000,0.0000};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.0320,0.0632,0.0960};
		groundReflectionCloud[]		= {0.0080,0.0144,0.0240};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
		
		UNUSED_PARAMS
	};
	class C_Astro3
	{
		sunAngle = -14;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0075;
		
		desiredLuminanceCoef	=  0.025;
		diffuse[]				= {0.0000,0.0000,0.0000};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.0320,0.0632,0.0960};
		groundReflection[]		= {0.0080,0.0144,0.0240};
		sky[]					= {0.1000,0.1400,0.2200};
		skyAroundSun[]			= {0.3035,0.3190,0.2780};
		
		desiredLuminanceCoefCloud 	=  0.025;
		diffuseCloud[]				= {0.0000,0.0000,0.0000};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.0320,0.0632,0.0960};
		groundReflectionCloud[]		= {0.0080,0.0144,0.0240};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
		
		UNUSED_PARAMS
	};
	class C_Nautical1
	{
		sunAngle = -12;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0050;
		
		desiredLuminanceCoef	=  0.050;
		diffuse[]				= {0.0000,0.0000,0.0000};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.0640,0.1264,0.1920};
		groundReflection[]		= {0.0160,0.0288,0.0480};
		sky[]					= {0.1500,0.2100,0.3400};
		skyAroundSun[]			= {0.6039,0.5411,0.4509};
		
		desiredLuminanceCoefCloud 	=  0.050;
		diffuseCloud[]				= {0.0000,0.0000,0.0000};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.0640,0.1264,0.1920};
		groundReflectionCloud[]		= {0.0160,0.0288,0.0480};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
		
		UNUSED_PARAMS
	};
	class C_Nautical2
	{
		sunAngle = -10;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0050;
		
		desiredLuminanceCoef	=  0.075;
		diffuse[]				= {0.1011,0.1063,0.0926};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.1280,0.2528,0.3840};
		groundReflection[]		= {0.0160,0.0288,0.0480};
		sky[]					= {0.1500,0.2100,0.3400};
		skyAroundSun[]			= {0.8039,0.5411,0.4509};
		
		desiredLuminanceCoefCloud 	=  0.075;
		diffuseCloud[]				= {0.1011,0.1063,0.0926};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.1280,0.2528,0.3840};
		groundReflectionCloud[]		= {0.0160,0.0288,0.0480};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
		
		UNUSED_PARAMS
	};
	class C_Nautical3
	{
		sunAngle = -8;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0050;
		
		desiredLuminanceCoef	=  0.100;
		diffuse[]				= {0.2311,0.2112,0.1840};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.1280,0.2528,0.3840};
		groundReflection[]		= {0.0320,0.0572,0.0960};
		sky[]					= {0.1500,0.2100,0.3400};
		skyAroundSun[]			= {0.8039,0.5411,0.4509};
		
		desiredLuminanceCoefCloud 	=  0.100;
		diffuseCloud[]				= {0.2311,0.2112,0.1840};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.1280,0.2528,0.3840};
		groundReflectionCloud[]		= {0.0320,0.0572,0.0960};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
		
		UNUSED_PARAMS
	};
	class C_Civil1
	{
		sunAngle = -6;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0025;
		
		desiredLuminanceCoef	=  0.175;
		diffuse[]				= {0.3460,0.1803,0.0836};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.1280,0.2528,0.3840};
		groundReflection[]		= {0.0320,0.0572,0.0960};
		sky[]					= {0.3000,0.2250,0.3270};
		skyAroundSun[]			= {0.9390,0.5411,0.2509};
		
		desiredLuminanceCoefCloud 	=  0.175;
		diffuseCloud[]				= {0.3460,0.1803,0.0836};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.1280,0.2528,0.3840};
		groundReflectionCloud[]		= {0.0320,0.0572,0.0960};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.2;
		
		UNUSED_PARAMS
	};
	class C_Civil2
	{
		sunAngle = -4;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0025;
		
		desiredLuminanceCoef	=  0.250;
		diffuse[]				={{0.4460,0.1803,0.0836}, 0.2};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				={{0.1280,0.2528,0.3840}, 0.1};
		groundReflection[]		= {0.0640,0.1144,0.1920};
		sky[]					={{0.6000,0.5490,0.7450}, 0.5};
		skyAroundSun[]			={{0.9390,0.5411,0.2509}, 1.5};
		
		desiredLuminanceCoefCloud 	=  0.250;
		diffuseCloud[]				= {{0.4460,0.1803,0.0836}, 0.2};
		bidirectCloud[]				=  {0.0000,0.0000,0.0000};
		ambientCloud[]				= {{0.1280,0.2528,0.3840}, 0.1};
		groundReflectionCloud[]		=  {0.0640,0.1144,0.1920};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.2;
		
		UNUSED_PARAMS
	};
	class C_Civil3
	{
		sunAngle = -2;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0025;
		
		desiredLuminanceCoef	=  0.325;
		diffuse[]				= {1.3000,0.4040,0.2940};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.2000,0.2300,0.4500};
		groundReflection[]		= {0.0032,0.0572,0.0960};
		sky[]					= {0.8000,0.6400,1.0000};
		skyAroundSun[]			= {1.2390,0.4411,0.2509};
		
		desiredLuminanceCoefCloud 	=  0.325;
		diffuseCloud[]				= {1.3000,0.4040,0.2940};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.2000,0.2300,0.4500};
		groundReflectionCloud[]		= {0.0032,0.0572,0.0960};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.2;
		
		UNUSED_PARAMS
	};
	class C_Day0
	{
		sunAngle = 0;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.400;
		diffuse[]				= {1.3000,0.4040,0.2940};
		bidirect[]				= {0.0300,0.0300,0.0300};
		ambient[]				= {0.2000,0.2300,0.4500};
		groundReflection[]		= {0.0320,0.0572,0.0960};
		sky[]					= {1.2000,0.6400,1.0000};
		skyAroundSun[]			= {3.5000,1.6400,1.0000};
		
		desiredLuminanceCoefCloud 	=  0.400;
		diffuseCloud[]				= {1.3000,0.4040,0.2940};
		bidirectCloud[]				= {0.0300,0.0300,0.0300};
		ambientCloud[]				= {0.2000,0.2300,0.4500};
		groundReflectionCloud[]		= {0.0320,0.0572,0.0960};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.1;
		
		UNUSED_PARAMS
	};
	class C_Day4
	{
		sunAngle = 4;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.450;
		diffuse[]				={{1.2000,0.4040,0.2940}, 7.4};
		bidirect[]				= {0.0300,0.0300,0.0300};
		ambient[]				={{0.2000,0.2300,0.4500}, 7.2};
		groundReflection[]		={{0.2000,0.2300,0.4500}, 3.4};
		sky[]					={{1.2000,0.6400,1.0000}, 7.0}; 
		skyAroundSun[]			={{2.2000,1.2400,1.0000}, 8.2};
		
		desiredLuminanceCoefCloud 	=  0.450;
		diffuseCloud[]				={{1.2000,0.4040,0.2940}, 7.4};
		bidirectCloud[]				= {0.0300,0.0300,0.0300};
		ambientCloud[]				={{0.2000,0.2300,0.4500}, 7.2};
		groundReflectionCloud[]		={{0.2000,0.2300,0.4500}, 3.4};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.1;
		
		UNUSED_PARAMS
	};
	class C_Day8
	{
		sunAngle = 8;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.500;
		diffuse[]				={{1.0000,0.6040,0.2940},10.4};
		bidirect[]				= {0.0300,0.0300,0.0300};
		ambient[]				={{0.1200,0.1800,0.2800},10.2};
		groundReflection[]		={{0.1200,0.1800,0.2800}, 7.4};
		sky[]					={{0.5000,0.6400,1.0000},10.4};
		skyAroundSun[]			={{1.2000,0.6740,0.2940},11};
		
		desiredLuminanceCoefCloud 	=  0.500;
		diffuseCloud[]				={{1.0000,0.6040,0.2940},10.4};
		bidirectCloud[]				= {0.0300,0.0300,0.0300};
		ambientCloud[]				={{0.1200,0.1800,0.2800},10.2};
		groundReflectionCloud[]		={{0.1200,0.1800,0.2800}, 7.4};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.1;
		
		UNUSED_PARAMS
	};
	class C_Day12
	{
		sunAngle = 12;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.530;
		diffuse[]				={{1.0000,0.6400,0.3100},11.4};
		bidirect[]				= {0.0300,0.0300,0.0300};
		ambient[]				={{0.1200,0.1800,0.2800},10.6};
		groundReflection[]		={{0.1200,0.1800,0.2800}, 8.1};
		sky[]					={{0.5000,0.6400,1.0000}, 10.8};
		skyAroundSun[]			={{1.0000,0.8740,0.4940}, 11.4};
		
		desiredLuminanceCoefCloud 	=  0.530;
		diffuseCloud[]				={{1.0000,0.6400,0.3100},11.4};
		bidirectCloud[]				= {0.0300,0.0300,0.0300};
		ambientCloud[]				={{0.1200,0.1800,0.2800},10.6};
		groundReflectionCloud[]		={{0.1200,0.1800,0.2800}, 8.1};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.1;
		
		UNUSED_PARAMS
	};
	class C_Day35
	{
		sunAngle = 35;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.620;
		diffuse[]				={{1.0000,0.8700,0.8500},12.8};
		bidirect[]				= {0.0800,0.0800,0.0700};
		ambient[]				={{0.1200,0.1800,0.2400},11.0};
		groundReflection[]		={{0.1200,0.1800,0.2400}, 8.0};
		sky[]					={{0.7000,0.8400,1.0000},11.7};
		skyAroundSun[]			={{1.0000,1.0000,1.0000},12.5};
		
		desiredLuminanceCoefCloud 	=  0.620;
		diffuseCloud[]				={{1.0000,0.8700,0.8500},12.8};
		bidirectCloud[]				= {0.0800,0.0800,0.0700};
		ambientCloud[]				={{0.1200,0.1800,0.2400},11.0};
		groundReflectionCloud[]		={{0.1200,0.1800,0.2400}, 8.0};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.2;
		
		UNUSED_PARAMS
	};
	class C_Day60
	{
		sunAngle = 60;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.660;
		diffuse[]				={{1.0000,0.8700,0.8500},13.8};   
		bidirect[]				= {0.0800,0.0800,0.0700};
		ambient[]				={{0.1200,0.1800,0.2400},11.8};
		groundReflection[]		={{0.1200,0.1800,0.2400}, 7.8};
		sky[]					={{0.7000,0.8400,1.0000},12.6};
		skyAroundSun[]			={{1.0000,1.0000,1.0000},13.0};
		
		desiredLuminanceCoefCloud 	=  0.660;
		diffuseCloud[]				={{1.0000,0.8700,0.8500},13.8};
		bidirectCloud[]				= {0.0800,0.0800,0.0700};
		ambientCloud[]				={{0.1200,0.1800,0.2400},11.8};
		groundReflectionCloud[]		={{0.1200,0.1800,0.2400}, 7.8};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.2;
		
		UNUSED_PARAMS
	};
	class O_Night
	{
		sunAngle = -18;
		sunOrMoon = 0;
		filmGrainIntensity = 0.0100;
		
		desiredLuminanceCoef	= -0.125;
		diffuse[]				= {0.0000,0.0000,0.0000};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.0240,0.0240,0.0340};
		groundReflection[]		= {0.0100,0.0100,0.0150};
		sky[]					= {0.0000,0.0000,0.0000};
		skyAroundSun[]			= {0.0000,0.0000,0.0000};

		desiredLuminanceCoefCloud 	= -0.125;
		diffuseCloud[]				= {0.0000,0.0000,0.0000};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.0240,0.0240,0.0340};
		groundReflectionCloud[]		= {0.0100,0.0100,0.0150};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class O_Astro1
	{
		sunAngle = -17;
		sunOrMoon = 0.5;
		filmGrainIntensity = 0.0075;
		
		desiredLuminanceCoef	= -0.100;
		diffuse[]				= {0.0000,0.0000,0.0000};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.0360,0.0570,0.0850};
		groundReflection[]		= {0.0100,0.0100,0.0150};
		sky[]					= {0.0000,0.0000,0.0000};
		skyAroundSun[]			= {0.0000,0.0000,0.0000};
		
		desiredLuminanceCoefCloud 	= -0.100;
		diffuseCloud[]				= {0.0000,0.0000,0.0000};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.0360,0.0570,0.0850};
		groundReflectionCloud[]		= {0.0100,0.0100,0.0150};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class O_Nautical1
	{
		sunAngle = -12;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0050;
		
		desiredLuminanceCoef	=  0.000;
		diffuse[]				= {0.0360,0.0570,0.0850};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.0360,0.0570,0.0850};
		groundReflection[]		= {0.0100,0.0100,0.0150};
		sky[]					= {0.0360,0.0560,0.0870};
		skyAroundSun[]			= {0.1011,0.1063,0.0926};
		
		desiredLuminanceCoefCloud 	=  0.000;
		diffuseCloud[]				= {0.0360,0.0570,0.0850};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.0360,0.0570,0.0850};
		groundReflectionCloud[]		= {0.0100,0.0100,0.0150};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class O_Civil1
	{
		sunAngle = -6;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0025;
		
		desiredLuminanceCoef	=  0.100;
		diffuse[]				= {0.0180,0.0180,0.0180};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.1000,0.1800,0.2900};
		groundReflection[]		= {0.0100,0.0100,0.0150};
		sky[]					= {0.1000,0.1400,0.2200};
		skyAroundSun[]			= {0.1000,0.1400,0.2200};
		
		desiredLuminanceCoefCloud 	=  0.100;
		diffuseCloud[]				= {0.0180,0.0180,0.0180};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.1000,0.1800,0.2900};
		groundReflectionCloud[]		= {0.0100,0.0100,0.0150};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class O_Civil2
	{
		sunAngle = -2;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0025;
		
		desiredLuminanceCoef	=  0.200;
		diffuse[]				= {0.0180,0.0180,0.0180};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.1450,0.2270,0.3490};
		groundReflection[]		= {0.0100,0.0100,0.0150};
		sky[]					= {0.1000,0.1400,0.2200};
		skyAroundSun[]			= {0.1000,0.1400,0.2200};
		
		desiredLuminanceCoefCloud 	=  0.200;
		diffuseCloud[]				= {0.0180,0.0180,0.0180};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.1450,0.2270,0.3490};
		groundReflectionCloud[]		= {0.0100,0.0100,0.0150};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class O_Day0
	{
		sunAngle = 0;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.300;
		diffuse[]				= {0.2700,0.2700,0.2700};
		bidirect[]				= {0.0000,0.0000,0.0000};
		ambient[]				= {0.1450,0.2270,0.3490};
		groundReflection[]		= {0.0200,0.0200,0.0300};
		sky[]					= {0.1000,0.1400,0.1600};
		skyAroundSun[]			= {0.1000,0.1400,0.1600};
		
		desiredLuminanceCoefCloud 	=  0.300;
		diffuseCloud[]				= {0.2700,0.2700,0.2700};
		bidirectCloud[]				= {0.0000,0.0000,0.0000};
		ambientCloud[]				= {0.1450,0.2270,0.3490};
		groundReflectionCloud[]		= {0.0200,0.0200,0.0300};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class O_Day4
	{
		sunAngle = 4;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.320;
		diffuse[]				={{0.2700,0.2700,0.2900}, 4.4};
		bidirect[]				= {0.1300,0.1300,0.1300};
		ambient[]				={{0.1450,0.2270,0.3490}, 5.4};
		groundReflection[]		={{0.1450,0.2270,0.3490}, 2.4};
		sky[]					={{1.0000,1.0000,1.0000}, 4.415};
		skyAroundSun[]			={{1.0000,1.0000,1.0000}, 4.8};
		
		desiredLuminanceCoefCloud 	=  0.320;
		diffuseCloud[]				={{0.2700,0.2700,0.2900}, 4.4};
		bidirectCloud[]				= {0.1300,0.1300,0.1300};
		ambientCloud[]				={{0.1450,0.2270,0.3490}, 5.4};
		groundReflectionCloud[]		={{0.1450,0.2270,0.3490}, 2.4};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class O_Day8
	{
		sunAngle = 8;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.350;
		diffuse[]				={{0.2700,0.2700,0.3000}, 7.4};
		bidirect[]				= {0.1300,0.1300,0.1300};
		ambient[]				={{0.1450,0.2270,0.3490}, 8.1};
		groundReflection[]		={{0.1450,0.2270,0.3490}, 6.1};
		sky[]					={{1.0000,1.0000,1.0000}, 8.0};
		skyAroundSun[]			={{1.0000,1.0000,1.0000}, 8.8};
		
		desiredLuminanceCoefCloud 	=  0.350;
		diffuseCloud[]				={{0.2700,0.2700,0.3000}, 7.4};
		bidirectCloud[]				= {0.1300,0.1300,0.1300};
		ambientCloud[]				={{0.1450,0.2270,0.3490}, 8.1};
		groundReflectionCloud[]		={{0.1450,0.2270,0.3490}, 6.1};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class O_Day12
	{
		sunAngle = 12;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.370;
		diffuse[]				={{0.2700,0.2700,0.3000}, 8.2};
		bidirect[]				= {0.1300,0.1300,0.1300};
		ambient[]				={{0.1450,0.2270,0.3490},10.1};
		groundReflection[]		={{0.1450,0.2270,0.3490}, 7.1};
		sky[]					={{1.0000,1.0000,1.0000}, 9.0};
		skyAroundSun[]			={{1.0000,1.0000,1.0000}, 9.8};
		
		desiredLuminanceCoefCloud 	=  0.370;
		diffuseCloud[]				={{0.2700,0.2700,0.3000}, 8.2};
		bidirectCloud[]				= {0.1300,0.1300,0.1300};
		ambientCloud[]				={{0.1450,0.2270,0.3490},10.1};
		groundReflectionCloud[]		={{0.1450,0.2270,0.3490}, 7.1};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class O_Day35
	{
		sunAngle = 35;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.400;
		diffuse[]				={{0.2700,0.2700,0.3000}, 9.4};
		bidirect[]				= {0.2300,0.2300,0.2300};
		ambient[]				={{0.1500,0.2000,0.2500},11.1};
		groundReflection[]		={{0.1500,0.2000,0.2500}, 8.1};
		sky[]					={{1.0000,1.0000,1.0000},11};
		skyAroundSun[]			={{1.0000,1.0000,1.0000},11.8};
		
		desiredLuminanceCoefCloud 	=  0.400;
		diffuseCloud[]				={{0.2700,0.2700,0.3000}, 9.4};
		bidirectCloud[]				= {0.2300,0.2300,0.2300};
		ambientCloud[]				={{0.1500,0.2000,0.2500},11.1};
		groundReflectionCloud[]		={{0.1500,0.2000,0.2500}, 8.1};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
	class O_Day60
	{
		sunAngle = 60;
		sunOrMoon = 1;
		filmGrainIntensity = 0.0;
		
		desiredLuminanceCoef	=  0.450;
		diffuse[]				={{0.2700,0.2700,0.3000},10.4};
		bidirect[]				= {0.3300,0.3300,0.3300};
		ambient[]				={{0.2000,0.2400,0.2900},12.4};
		groundReflection[]		={{0.2000,0.2400,0.2900}, 8.4};
		sky[]					={{1.0000,1.0000,1.0000},12};
		skyAroundSun[]			={{1.0000,1.0000,1.0000},12.8};
		
		desiredLuminanceCoefCloud 	=  0.450;
		diffuseCloud[]				={{0.2700,0.2700,0.3000},10.4};
		bidirectCloud[]				= {0.3300,0.3300,0.3300};
		ambientCloud[]				={{0.2000,0.2400,0.2900},12.4};
		groundReflectionCloud[]		={{0.2000,0.2400,0.2900}, 8.4};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
		
		UNUSED_PARAMS
	};
};
