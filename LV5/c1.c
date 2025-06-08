#include "c.h"

int** CreateSquareMatrix(int size)
{
	int** array = (int**)malloc(size * sizeof(int*));
	if (array == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	for (int i = 0; i < size; i++)
	{
		array[i] = (int*)malloc(size * sizeof(int));
		if (array[i] == NULL)
		{
			printf("Memory allocation failed\n");
			exit(1);
		}
	}
	return array;
}

void InputElementsInSquareMatrix(int** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int cols = 0; cols < size; cols++)
		{
			scanf_s("%d", &matrix[i][cols]);
		}
	}
	return;
}

void PrintSquareMatrix(int** matrix, int size)
{
	printf("\nMatrix:\n");
	for (int rows = 0; rows < size; rows++)
	{
		for (int cols = 0; cols < size; cols++)
		{
			printf("%-3d ", *(*(matrix + rows) + cols));
		}
		printf("\n");
	}
	return;
}

void FreeSquareMatrix(int** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	return;
}

void PrintSumOfTwoDigitNumbers()
{
	int sizeOfArray = InputInRange(2, 3);
	int** matrix = CreateSquareMatrix(sizeOfArray);
	InputElementsInSquareMatrix(matrix, sizeOfArray);

	int sum = 0;
	for (int rows = 0; rows < sizeOfArray; rows++)
	{
		for (int cols = 0; cols < sizeOfArray; cols++)
		{
			if (*(*(matrix + rows) + cols) > 9 && *(*(matrix + rows) + cols) < 100)
			{
				sum += *(*(matrix + rows) + cols);
			}
		}
	}
	printf("The sum of matrix:\n");
	PrintSquareMatrix(matrix, sizeOfArray);
	printf("\nis %d.\n", sum);

	FreeSquareMatrix(matrix, sizeOfArray);
}