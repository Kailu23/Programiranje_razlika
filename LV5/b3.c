#include "b.h"

double GetAverageReal(double* numbers, int sizeOfArray)
{
	double sum = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		sum += *(numbers + i);
	}
	return sum / (double)sizeOfArray;
}
void PrintSumOfElementsInRange(int lowerBound, int upperBound)
{
	int sizeOfArray = InputInRange(8, 76);
	double* numbers = (double*)malloc(sizeOfArray * sizeof(double));
	if (numbers == NULL)
	{
		printf("Memory allocation failed.\n");
	}
	InputRealArray(numbers, sizeOfArray);
	double sum = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (*(numbers + i) >= lowerBound && *(numbers + i) <= upperBound)
		{
			sum += *(numbers + i);
		}
	}
	if(sum != 0)
	{
		printf("Sum of elements from %d to %d is %.2lf.\n", lowerBound, upperBound, sum);
	}
	else
	{
		printf("There are no elements from %d to %d.\n", lowerBound, upperBound);
	}
	PrintAverageOfElementsInRange(numbers, sizeOfArray, 30, 40);

	free(numbers);
}

void PrintAverageOfElementsInRange(double* numbers, int sizeOfArray, int lowerBound, int upperBound)
{
	double sum = 0;
	double* numbersToAverage = (double*)malloc(sizeOfArray * sizeof(double));
	int j = 0;

	if (numbersToAverage == NULL)
	{
		printf("Memory allocation failed.\n");
	}
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (*(numbers + i) >= lowerBound && *(numbers + i) <= upperBound)
		{
			*(numbersToAverage + j) = *(numbers + i);
			printf("%.2lf\n", *(numbersToAverage + j));
			j++;
		}
	}
	if (j > 0)
	{
		double average = GetAverageReal(numbersToAverage, j);
		printf("Average of elements from %d to %d is %.2lf.\n", lowerBound, upperBound, average);
	}
	else
	{
		printf("There are no elements from %d to %d.\n", lowerBound, upperBound);
	}
	free(numbersToAverage);
}