#include "c.h"

double FindMaxElement(double** matrix, int size)
{
	double currentMax = -DBL_MAX;
	for (int rows = 0; rows < size; rows++)
	{
		for (int cols = 0; cols < size; cols++)
		{
			if (*(*(matrix + rows) + cols) > currentMax)
			{
				currentMax = *(*(matrix + rows) + cols);
			}
		}
	}
	return currentMax;
}

double FindMinElement(double** matrix, int size)
{
	double currentMin = DBL_MAX;
	for (int rows = 0; rows < size; rows++)
	{
		for (int cols = 0; cols < size; cols++)
		{
			if (*(*(matrix + rows) + cols) < currentMin)
			{
				currentMin = *(*(matrix + rows) + cols);
			}
		}
	}
	return currentMin;
}

void PrintMaxAndMinDifference()
{
	int size = InputInRange(2, 4);
	double** matrix = CreateSquareRealMatrix(size);
	InputElementsInSquareRealMatrix(matrix, size);

	double max = FindMaxElement(matrix, size), min = FindMinElement(matrix, size);

	double difference = fabs(fabs(max) - fabs(min));
	
	PrintSquareRealMatrix(matrix, size);

	printf("\nDifference is %.2lf.\n", difference);
}