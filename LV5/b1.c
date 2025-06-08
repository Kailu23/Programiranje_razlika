#include "b.h"

double GetAverage(int* numbers, int sizeOfArray)
{
	double sum = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		sum += *(numbers + i);
	}
	return sum / (double)sizeOfArray;
}

void PrintOddElementsSmallerAndGreaterThanAverage(int* numbers, int sizeOfArray, double average)
{
	int oddNumbersSmallerThanAverageCount = 0, oddNumbersGreaterThanAverageCount = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (*(numbers + i) > average && *(numbers + i) % 2 != 0) oddNumbersGreaterThanAverageCount++;
		else if (*(numbers + i) < average && *(numbers + i) % 2 != 0) oddNumbersSmallerThanAverageCount++;
	}
	printf("Number of odd numbers greater than average: %d\n", oddNumbersGreaterThanAverageCount);
	printf("Number of odd numbers smaller than average: %d\n", oddNumbersSmallerThanAverageCount);
}

void PrintElementsGreaterThanAverageAndEven()
{
	int sizeOfArray = InputInRange(2, 20);
	int* numbers = (int*)malloc(sizeOfArray * sizeof(int));

	InputArray(numbers, sizeOfArray);

	double average = GetAverage(numbers, sizeOfArray);
	printf("Numbers greater than %.2lf and even are:\n", average);
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (*(numbers + i) >= average && *(numbers + i) % 2 == 0)
		{
			printf("%-2d", *(numbers + i));
		}
	}
	printf("\n");
	
	PrintOddElementsSmallerAndGreaterThanAverage(numbers, sizeOfArray, average);
	
	free(numbers);
}
