#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 50

//Zadatak 1. fje

int BinarySearch(char targetValue, char* values, int lowerBound, int upperBound)
{
	while (1)
	{
		int s = (lowerBound + upperBound) / 2;
		if (targetValue == *(values + s)) return 1;
		else if (targetValue > *(values + s)) lowerBound = s + 1;
		else if (targetValue < *(values + s)) upperBound = s - 1;
		if (lowerBound > upperBound) return 0;
	}
	//return 0;
}

int VowelCounter(char* sentence)
{
	char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
	int vowelCounter = 0;

	for (int i = 0; *(sentence + i) != '\0'; i++)
	{
		if (BinarySearch(*(sentence + i), vowels, 0, sizeof(vowels) - 1)) vowelCounter++;
	}

	return vowelCounter;
}

//Zadatak 2. fje

char FindMaxValue(char* sentence)
{
	char currentMaxValue = *sentence;
	for (int i = 0; *(sentence + i) != '\0'; i++)
	{
		if (*(sentence + i) > currentMaxValue) currentMaxValue = *(sentence + i);
	}
	return currentMaxValue;
}

//Zadatak 4. fje

int InputSize(int lowerBound, int upperBound)
{
	int sizeOfArray;
	do
	{
		printf("Please enter a number between %2d and %2d: ", lowerBound, upperBound);
		scanf("%d", &sizeOfArray);
	} while (sizeOfArray < lowerBound || sizeOfArray > upperBound);
	return sizeOfArray;
}
int* CreateArray(int sizeofArray)
{
	int* numbers = (int*)malloc(sizeofArray * sizeof(int));
	if (numbers == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	return numbers;
}
void InputElementsInRange(int* numbers, int sizeofArray)
{
	for (int i = 0; i < sizeofArray; i++)
	{

		scanf("%d", numbers + i);

	}
	return;
}

void PrintEvenNumbers(int* numbers, int sizeofArray)
{
	printf("Even numbers and their index:\n");
	for (int i = 0; i < sizeofArray; i++)
	{
		if (*(numbers + i) % 2 == 0)
		{
			printf("%d , %d\n", *(numbers + i), i);
		}
	}
}

int main()
{
	
	//Zadatak 1.

	char inputString[size];

	fgets(inputString, size, stdin);

	int numberOfVowels = VowelCounter(inputString);

	printf("There are %d vowels in this string.", numberOfVowels);

	//Zadatak 2.

	if (inputString[strlen(inputString) - 1] == '\n') inputString[strlen(inputString) - 1] = '\0';
	char maxValue = FindMaxValue(inputString);
	printf("Max value in this string is %d of character %c\n", maxValue, maxValue);

	//Zadatak 3.

	int value = 68;

	int* pointerToValue = &value;

	printf("Value: %d\n", value);
	printf("Adress: %p\n", pointerToValue);

	*pointerToValue += 10;
	printf("Value increased by 10: % d\n", *pointerToValue);
	printf("Adress: %p\n", pointerToValue);

	//Zadatak 4.

	int n;

	n = InputSize(2, 10);

	int* numbers = CreateArray(n);

	InputElementsInRange(numbers, n);

	PrintEvenNumbers(numbers, n);

	free(numbers);

	return 1;
}