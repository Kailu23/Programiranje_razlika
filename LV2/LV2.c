#include <stdio.h>
#include <stdlib.h>

// Zadatak 1. funkcije

int InputSize(int lowerBound, int upperBound)
{
	int size;
	do
	{
		printf("Please enter a number between %2d and %2d: ", lowerBound, upperBound);
		scanf_s("%d", &size);
	} while (size <= lowerBound || size > upperBound);
	return size;
}
int* CreateArray(int size)
{
	int* numbers = (int*)malloc(size * sizeof(int));
	if (numbers == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	return numbers;
}
void InputElementsInRange(int* numbers, int size)
{
	for (int i = 0; i < size; i++)
	{

		scanf_s("%d", &numbers[i]);

	}
	return;
}
float CalculateAverage(int* numbers, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += numbers[i];
	}
	return (float)sum / size;
}
void PrintEvenNumbersGreaterThanAverage(int* numbers, int size, float average)
{
	for (int i = 0; i < size; i++)
	{
		if ((numbers[i] % 2 == 0) && (numbers[i] > average))
		{
			printf("%d\n", numbers[i]);
		}

	}
	return;
}

// Zadatak 2. funkcije

int NumbersInRangeCounter(int* numbers, int size, int lowerBound, int upperBound)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] > lowerBound && numbers[i] < upperBound)
		{
			count++;
		}
	}
	return count;
}

// Zadatak 3. funkcije

int** Create2DMatrix(int rows, int cols)
{
	int** array = (int**)malloc(rows * sizeof(int*));
	if (array == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	for (int i = 0; i < rows; i++)
	{
		array[i] = (int*)malloc(cols * sizeof(int));
		if (array[i] == NULL)
		{
			printf("Memory allocation failed\n");
			exit(1);
		}
	}
	return array;
}

void Input2DElements(int** matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			scanf_s("%d", &matrix[i][j]);
		}
	}
	return;
}

void Print2DMatrix(int** matrix, int rows, int cols)
{
	printf("\nMatrix:\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	return;
}

float CalculateRowAverage(int** matrix, int row, int cols)
{
	int sum = 0;
	for (int j = 0; j < cols; j++)
	{
		sum += matrix[row][j];
	}
	return (float)sum / cols;
}

void Free2DMatrix(int** matrix, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	return;
}

void main()
{

	int size;
	int* numbers = NULL;

	// Zadatak 1.

	/*size = InputSize(2, 20);
	numbers = CreateArray(size);
	printf("Enter the numbers:\n");
	InputElementsInRange(numbers, size);
	float average = CalculateAverage(numbers, size);

	PrintEvenNumbersGreaterThanAverage(numbers, size, average);

	free(numbers);*/

	//Zadatak 2.

	/*size = InputSize(5, 25);
	numbers = CreateArray(size);
	printf("Enter the numbers:\n");
	InputElementsInRange(numbers, size);
	printf("There are %d numbers between 10 and 100.", NumbersInRangeCounter(numbers, size, 10, 100));*/

	// Zadatak 3.

	/*int rows = InputSize(2, 8);
	int cols = InputSize(1, 6);

	int** matrix = Create2DMatrix(rows, cols);

	Input2DElements(matrix, rows, cols);

	Print2DMatrix(matrix, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		float rowAverage = CalculateRowAverage(matrix, i, cols);

		printf("Average of row %d: %.2f\n", i + 1, rowAverage);
	}
	Free2DMatrix(matrix, rows);*/

	// Zadatak 4.

	size = InputSize(3, 10);

	int constant = 0;

	printf("Please enter a constant: ");

	scanf_s("%d", &constant);

	int** matrix = Create2DMatrix(size, size);

	Input2DElements(matrix, size, size);

	printf("Before multiplication:\n");

	Print2DMatrix(matrix, size, size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] *= constant;
		}
	}

	printf("After multiplication:\n");

	Print2DMatrix(matrix, size, size);

	return;
}