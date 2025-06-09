#include "e.h"

int GetNumberOfDigits(int number)
{
	if (number < 10)
	{
		return 1;
	}
	else if (number < 100)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}

void PrintNumberOfDigits(int number)
{
	int digits = GetNumberOfDigits(number);

	printf("Number of digits of %d is %d.\n", number, digits);
}