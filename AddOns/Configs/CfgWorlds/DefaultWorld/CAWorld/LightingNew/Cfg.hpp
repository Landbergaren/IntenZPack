class LightingNew
{
	class C_Night
	{
		sunAngle = -18;
		sunOrMoon = 0;
		desiredLuminanceCoef = -0.050;
		filmGrainIntensity = 0.0100;
		
		diffuse[]			= {0.1000,0.1500,0.3000}; // facing global light (sun / moon)
		bidirect[]			= {0.0000,0.0000,0.0000}; // opposite of diffuse
		ambient[]			= {0.0160,0.0316,0.0480}; // shadows
		groundReflection[]	= {0.0040,0.0072,0.0120}; // illumination from ground
		sky[]				= {0.0180,0.0280,0.0430}; // also affects color of the fog
		skyAroundSun[]		= {0.0180,0.0280,0.0430}; // halo around sun / moon
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class C_Astro1
	{
		sunAngle = -17;
		sunOrMoon = 0.5;
		desiredLuminanceCoef = -0.025;
		filmGrainIntensity = 0.0075;
		
		diffuse[]			= {0.0000,0.0000,0.0000};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.0160,0.0316,0.0480};
		groundReflection[]	= {0.0040,0.0072,0.0120};
		sky[]				= {0.0360,0.0560,0.0870};
		skyAroundSun[]		= {0.0360,0.0560,0.0870};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
	};
	class C_Astro2
	{
		sunAngle = -16;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.000;
		filmGrainIntensity = 0.0075;
		
		diffuse[]			= {0.0000,0.0000,0.0000};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.0320,0.0632,0.0960};
		groundReflection[]	= {0.0080,0.0144,0.0240};
		sky[]				= {0.0360,0.0560,0.0870};
		skyAroundSun[]		= {0.1011,0.1063,0.0926};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
	};
	class C_Astro3
	{
		sunAngle = -14;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.025;
		filmGrainIntensity = 0.0075;
		
		diffuse[]			= {0.0000,0.0000,0.0000};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.0320,0.0632,0.0960};
		groundReflection[]	= {0.0080,0.0144,0.0240};
		sky[]				= {0.1000,0.1400,0.2200};
		skyAroundSun[]		= {0.3035,0.3190,0.2780};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
	};
	class C_Nautical1
	{
		sunAngle = -12;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.050;
		filmGrainIntensity = 0.0050;
		
		diffuse[]			= {0.0000,0.0000,0.0000};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.0640,0.1264,0.1920};
		groundReflection[]	= {0.0160,0.0288,0.0480};
		sky[]				= {0.1500,0.2100,0.3400};
		skyAroundSun[]		= {0.6039,0.5411,0.4509};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
	};
	class C_Nautical2
	{
		sunAngle = -10;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.075;
		filmGrainIntensity = 0.0050;
		
		diffuse[]			= {0.1011,0.1063,0.0926};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.1280,0.2528,0.3840};
		groundReflection[]	= {0.0160,0.0288,0.0480};
		sky[]				= {0.1500,0.2100,0.3400};
		skyAroundSun[]		= {0.8039,0.5411,0.4509};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
	};
	class C_Nautical3
	{
		sunAngle = -8;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.100;
		filmGrainIntensity = 0.0050;
		
		diffuse[]			= {0.2311,0.2112,0.1840};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.1280,0.2528,0.3840};
		groundReflection[]	= {0.0320,0.0572,0.0960};
		sky[]				= {0.1500,0.2100,0.3400};
		skyAroundSun[]		= {0.8039,0.5411,0.4509};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.5;
	};
	class C_Civil1
	{
		sunAngle = -6;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.175;
		filmGrainIntensity = 0.0025;
		
		diffuse[]			= {0.3460,0.1803,0.0836};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.1280,0.2528,0.3840};
		groundReflection[]	= {0.0320,0.0572,0.0960};
		sky[]				= {0.3000,0.2250,0.3270};
		skyAroundSun[]		= {0.9390,0.5411,0.2509};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.2;
	};
	class C_Civil2
	{
		sunAngle = -4;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.250;
		filmGrainIntensity = 0.0025;
		
		diffuse[]			={{0.4460,0.1803,0.0836}, 0.2};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			={{0.1280,0.2528,0.3840}, 0.1};
		groundReflection[]	= {0.0640,0.1144,0.1920};
		sky[]				={{0.6000,0.5490,0.7450}, 0.5};
		skyAroundSun[]		={{0.9390,0.5411,0.2509}, 1.5};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.2;
	};
	class C_Civil3
	{
		sunAngle = -2;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.325;
		filmGrainIntensity = 0.0025;
		
		diffuse[]			= {1.3000,0.4040,0.2940};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.2000,0.2300,0.4500};
		groundReflection[]	= {0.0032,0.0572,0.0960};
		sky[]				= {0.8000,0.6400,1.0000};
		skyAroundSun[]		= {1.2390,0.4411,0.2509};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.2;
	};
	class C_Day0
	{
		sunAngle = 0;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.40;
		filmGrainIntensity = 0.0;
		
		diffuse[]			= {1.3000,0.4040,0.2940};
		bidirect[]			= {0.0300,0.0300,0.0300};
		ambient[]			= {0.2000,0.2300,0.4500};
		groundReflection[]	= {0.0320,0.0572,0.0960};
		sky[]				= {1.2000,0.6400,1.0000};
		skyAroundSun[]		= {3.5000,1.6400,1.0000};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.1;
	};
	class C_Day4
	{
		sunAngle = 4;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.45;
		filmGrainIntensity = 0.0;
		
		diffuse[]			={{1.2000,0.4040,0.2940}, 7.4};
		bidirect[]			= {0.0300,0.0300,0.0300};
		ambient[]			={{0.2000,0.2300,0.4500}, 7.2};
		groundReflection[]	={{0.2000,0.2300,0.4500}, 3.4};
		sky[]				={{1.2000,0.6400,1.0000}, 7.0}; 
		skyAroundSun[]		={{2.2000,1.2400,1.0000}, 8.2};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.1;
	};
	class C_Day8
	{
		sunAngle = 8;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.50;
		filmGrainIntensity = 0.0;
		
		diffuse[]			={{1.0000,0.6040,0.2940},10.4};
		bidirect[]			= {0.0300,0.0300,0.0300};
		ambient[]			={{0.1200,0.1800,0.2800},10.2};
		groundReflection[]	={{0.1200,0.1800,0.2800}, 7.4};
		sky[]				={{0.5000,0.6400,1.0000},10.4};
		skyAroundSun[]		={{1.2000,0.6740,0.2940},11};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.1;
	};
	class C_Day12
	{
		sunAngle = 12;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.53;
		filmGrainIntensity = 0.0;
		
		diffuse[]			={{1.0000,0.6400,0.3100},11.4};
		bidirect[]			= {0.0300,0.0300,0.0300};
		ambient[]			={{0.1200,0.1800,0.2800},10.6};
		groundReflection[]	={{0.1200,0.1800,0.2800}, 8.1};
		sky[]				={{0.5000,0.6400,1.0000}, 10.8};
		skyAroundSun[]		={{1.0000,0.8740,0.4940}, 11.4};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.1;
	};
	class C_Day35
	{
		sunAngle = 35;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.62;
		filmGrainIntensity = 0.0;
		
		diffuse[]			={{1.0000,0.8700,0.8500},12.8};
		bidirect[]			= {0.0800,0.0800,0.0700};
		ambient[]			={{0.1200,0.1800,0.2400},11.0};
		groundReflection[]	={{0.1200,0.1800,0.2400}, 8.0};
		sky[]				={{0.7000,0.8400,1.0000},11.7};
		skyAroundSun[]		={{1.0000,1.0000,1.0000},12.5};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.2;
	};
	class C_Day60
	{
		sunAngle = 60;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.66;
		filmGrainIntensity = 0.0;
		
		diffuse[]			={{1.0000,0.8700,0.8500},13.8};   
		bidirect[]			= {0.0800,0.0800,0.0700};
		ambient[]			={{0.1200,0.1800,0.2400},11.8};
		groundReflection[]	={{0.1200,0.1800,0.2400}, 7.8};
		sky[]				={{0.7000,0.8400,1.0000},12.6};
		skyAroundSun[]		={{1.0000,1.0000,1.0000},13.0};
		
		overcast = 0.35;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.2;
	};
	class O_Night
	{
		sunAngle = -18;
		sunOrMoon = 0;
		desiredLuminanceCoef = -0.075;
		filmGrainIntensity = 0.0100;
		
		diffuse[]			= {0.0000,0.0000,0.0000};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.0240,0.0240,0.0340};
		groundReflection[]	= {0.0100,0.0100,0.0150};
		sky[]				= {0.0000,0.0000,0.0000};
		skyAroundSun[]		= {0.0000,0.0000,0.0000};

		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class O_Astro1
	{
		sunAngle = -17;
		sunOrMoon = 0.5;
		desiredLuminanceCoef = -0.050;
		filmGrainIntensity = 0.0075;
		
		diffuse[]			= {0.0000,0.0000,0.0000};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.0360,0.0570,0.0850};
		groundReflection[]	= {0.0100,0.0100,0.0150};
		sky[]				= {0.0000,0.0000,0.0000};
		skyAroundSun[]		= {0.0000,0.0000,0.0000};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class O_Nautical1
	{
		sunAngle = -12;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.025;
		filmGrainIntensity = 0.0050;
		
		diffuse[]			= {0.0360,0.0570,0.0850};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.0360,0.0570,0.0850};
		groundReflection[]	= {0.0100,0.0100,0.0150};
		sky[]				= {0.0360,0.0560,0.0870};
		skyAroundSun[]		= {0.1011,0.1063,0.0926};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class O_Civil1
	{
		sunAngle = -6;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.150;
		filmGrainIntensity = 0.0025;
		
		diffuse[]			= {0.0180,0.0180,0.0180};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.1000,0.1800,0.2900};
		groundReflection[]	= {0.0100,0.0100,0.0150};
		sky[]				= {0.1000,0.1400,0.2200};
		skyAroundSun[]		= {0.1000,0.1400,0.2200};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class O_Civil2
	{
		sunAngle = -2;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.225;
		filmGrainIntensity = 0.0025;
		
		diffuse[]			= {0.0180,0.0180,0.0180};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.1450,0.2270,0.3490};
		groundReflection[]	= {0.0100,0.0100,0.0150};
		sky[]				= {0.1000,0.1400,0.2200};
		skyAroundSun[]		= {0.1000,0.1400,0.2200};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class O_Day0
	{
		sunAngle = 0;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.30;
		filmGrainIntensity = 0.0;
		
		diffuse[]			= {0.2700,0.2700,0.2700};
		bidirect[]			= {0.0000,0.0000,0.0000};
		ambient[]			= {0.1450,0.2270,0.3490};
		groundReflection[]	= {0.0200,0.0200,0.0300};
		sky[]				= {0.1000,0.1400,0.1600};
		skyAroundSun[]		= {0.1000,0.1400,0.1600};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class O_Day4
	{
		sunAngle = 4;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.32;
		filmGrainIntensity = 0.0;
		
		diffuse[]			={{0.2700,0.2700,0.2900}, 4.4};
		bidirect[]			= {0.1300,0.1300,0.1300};
		ambient[]			={{0.1450,0.2270,0.3490}, 5.4};
		groundReflection[]	={{0.1450,0.2270,0.3490}, 2.4};
		sky[]				={{1.0000,1.0000,1.0000}, 4.415};
		skyAroundSun[]		={{1.0000,1.0000,1.0000}, 4.8};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class O_Day8
	{
		sunAngle = 8;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.35;
		filmGrainIntensity = 0.0;
		
		diffuse[]			={{0.2700,0.2700,0.3000}, 7.4};
		bidirect[]			= {0.1300,0.1300,0.1300};
		ambient[]			={{0.1450,0.2270,0.3490}, 8.1};
		groundReflection[]	={{0.1450,0.2270,0.3490}, 6.1};
		sky[]				={{1.0000,1.0000,1.0000}, 8.0};
		skyAroundSun[]		={{1.0000,1.0000,1.0000}, 8.8};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class O_Day12
	{
		sunAngle = 12;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.37;
		filmGrainIntensity = 0.0;
		
		diffuse[]			={{0.2700,0.2700,0.3000}, 8.2};
		bidirect[]			= {0.1300,0.1300,0.1300};
		ambient[]			={{0.1450,0.2270,0.3490},10.1};
		groundReflection[]	={{0.1450,0.2270,0.3490}, 7.1};
		sky[]				={{1.0000,1.0000,1.0000}, 9.0};
		skyAroundSun[]		={{1.0000,1.0000,1.0000}, 9.8};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class O_Day35
	{
		sunAngle = 35;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.40;
		filmGrainIntensity = 0.0;
		
		diffuse[]			={{0.2700,0.2700,0.3000}, 9.4};
		bidirect[]			= {0.2300,0.2300,0.2300};
		ambient[]			={{0.1500,0.2000,0.2500},11.1};
		groundReflection[]	={{0.1500,0.2000,0.2500}, 8.1};
		sky[]				={{1.0000,1.0000,1.0000},11};
		skyAroundSun[]		={{1.0000,1.0000,1.0000},11.8};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
	class O_Day60
	{
		sunAngle = 60;
		sunOrMoon = 1;
		desiredLuminanceCoef = 0.45;
		filmGrainIntensity = 0.0;
		
		diffuse[]			={{0.2700,0.2700,0.3000},10.4};
		bidirect[]			= {0.3300,0.3300,0.3300};
		ambient[]			={{0.2000,0.2400,0.2900},12.4};
		groundReflection[]	={{0.2000,0.2400,0.2900}, 8.4};
		sky[]				={{1.0000,1.0000,1.0000},12};
		skyAroundSun[]		={{1.0000,1.0000,1.0000},12.8};
		
		overcast = 0.65;
		height = 0;
		EVMin = -2.0;
		EVMax = 0.0;
	};
};
