#include "a.h"

void InputArray(int* numbers, int sizeofArray)
{
	for (int i = 0; i < sizeofArray; i++)
	{
		scanf("%d", numbers + i);
	}
}

void PrintNumbersDivisibleBy7AndOver15()
{
	int sizeOfArray = InputInRange(4, 20);
	int* numbers = (int*)malloc(sizeOfArray * sizeof(int));
	InputArray(numbers, sizeOfArray);

	int	count = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (*(numbers + i) % 7 == 0 && *(numbers + i) > 15)
		{
			++count;
		}
	}
	printf("There are %d numbers divisible by 7 and over 15.\n", count);
}