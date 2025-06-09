#include "e.h"


double GetAverageOfEvenNumbersInRange(int lowerBound, int upperBound)
{
	double sum = 0;
	int evenNumberCounter = 0;
	for (int i = lowerBound + 1;i < upperBound; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
			evenNumberCounter++;
		}
	}
	return sum / (double)evenNumberCounter;
}
void PrintAverageOfEvenNumbersInRange(int lowerBound, int upperBound)
{
	double average = GetAverageOfEvenNumbersInRange(lowerBound, upperBound);

	printf("Average from %d to %d is %.2lf.\n", lowerBound, upperBound, average);
	
}