#include "b.h"

void InputRealArray(double* numbers, int sizeofArray)
{
	for (int i = 0; i < sizeofArray; i++)
	{
		scanf("%lf", numbers + i);
	}
}

void PrintReverseArrayAndDoubleEvenNumbers() //Mod operacija nije validna za realne brojeve
{
	int sizeOfArray = InputInRange(5, 49);
	int* numbers = (int*)malloc(sizeOfArray * sizeof(int));
	InputArray(numbers, sizeOfArray);
	
	printf("Array in reverse order:\n");
	for (int i = sizeOfArray - 1; i  >= 0; i--)
	{
		if (*(numbers + i) % 2 == 0)
		{
			printf("%-2d", (*(numbers + i)) * 2);
		}
		else
		{
			printf("%-2d", *(numbers + i));
		}
	}
}