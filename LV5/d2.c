#include "d.h"

void GetFrequencyOfLetterCase(const char* inputString, char targetLetter, int* lowerCount, int* upperCount)
{
	for (int i = 0; *(inputString + i) != '\0'; i++)
	{
		if (*(inputString + i) == targetLetter)
		{
			(*lowerCount)++;
		}
		else if (*(inputString + i) == toupper(targetLetter))
		{
			(*upperCount)++;
		}
	}
}

void PrintMoreFrequentLetterCase(char targetLetter)
{
	targetLetter = tolower(targetLetter);
	char inputString[101];
	InputString(inputString, sizeof(inputString));
	int lowerCount = 0;
	int upperCount = 0;

	GetFrequencyOfLetterCase(inputString, targetLetter, &lowerCount, &upperCount);
	if (upperCount > lowerCount)
	{
		targetLetter = toupper(targetLetter);
	}

	int length = StringLength(inputString);
	printf("More frequent letter case in %s is % c.\n", inputString, targetLetter);
}
