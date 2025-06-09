#include "e.h"

double GetConeVolume(double radius, double height)
{
	if (radius <= 0 || height <= 0)
	{
		return 0;
	}
	return (1.0 / 3.0) * height * radius * radius * M_PI;
}

void PrintConeVolume(double radius, double height)
{
	double volume = GetConeVolume(radius, height);
	if (volume != 0)
	{
		printf("Cone volume is %.2lf\n", volume);
	}
	else
	{
		printf("Either the radius or height is 0.\n");
	}
}