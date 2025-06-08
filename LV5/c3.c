#include "c.h"

double** CreateSquareRealMatrix(double size)
{
	double** array = (double**)malloc(size * sizeof(double*));
	if (array == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	for (int i = 0; i < size; i++)
	{
		array[i] = (double*)malloc(size * sizeof(double));
		if (array[i] == NULL)
		{
			printf("Memory allocation failed\n");
			exit(1);
		}
	}
	return array;
}

void InputElementsInSquareRealMatrix(double** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int cols = 0; cols < size; cols++)
		{
			scanf_s("%lf", &matrix[i][cols]);
		}
	}
	return;
}

void PrintSquareRealMatrix(double** matrix, int size)
{
	printf("\nMatrix:\n");
	for (int rows = 0; rows < size; rows++)
	{
		for (int cols = 0; cols < size; cols++)
		{
			printf("%-5.2lf ", *(*(matrix + rows) + cols));
		}
		printf("\n");
	}
	return;
}

void FreeSquareRealMatrix(double** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	return;
}

void PrintProductOfPositiveNumbersOnMainDiagonal()
{
	int size = InputInRange(3, 4);
	double** matrix = CreateSquareRealMatrix(size);
	InputElementsInSquareRealMatrix(matrix, size);

	double product = 1;

	for (int rows = 0; rows < size; rows++)
	{
		if (*(*(matrix + rows) + rows) > 0)
		{
			product *= *(*(matrix + rows) + rows);
		}
	}
	printf("Matrix:\n");
	PrintSquareRealMatrix(matrix, size);
	printf("Product of positive numbers on main diagonal is %.2lf.\n", product);
}