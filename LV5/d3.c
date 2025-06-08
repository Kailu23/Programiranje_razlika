#include "d.h"

int GetNumberOfVowel(char* inputString, char targetVowel)
{
	int targetVowelCount = 0;
	for (int i = 0; *(inputString + i) != '\0'; i++)
	{
		if (*(inputString + i) == targetVowel)
		{
			targetVowelCount++;
		}
	}
	return targetVowelCount;
}

void PrintNumberOfVowel(char targetVowel)
{
	char vowels[] = { 'a', 'e', 'i', 'o', 'u', '\0' };
	bool containsVowel = false;
	for (int i = 0; vowels[i] != '\0'; i++)
	{
		if (targetVowel == *(vowels + i))
		{
			containsVowel = true;
			break;
		}
	}
	if (!containsVowel)
	{
		printf("Character %c isn't a vowel.\n", targetVowel);
		return;
	}

	char inputString[50];
	InputString(inputString, sizeof(inputString));

	int count = GetNumberOfVowel(inputString, targetVowel);

	int length = StringLength(inputString);

	printf("Number of %c in %s is %d.\n", targetVowel, inputString, count);
}