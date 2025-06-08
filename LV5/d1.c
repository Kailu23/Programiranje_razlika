#include "d.h"

void InputString(char* inputString, int size)
{
	printf("Enter a string (up to 100 characters): ");
	fgets(inputString, size, stdin);
}

int CountOfCharacterInString(char* inputString, char targetChar)
{
	int targetCount = 0;
	for (int i = 0; *(inputString + i) != '\0'; i++)
	{
		if (tolower(*(inputString + i)) == tolower(targetChar))
		{
			targetCount++;
		}
	}
	return targetCount;
}

int StringLength(char* inputString)
{
	int length = strlen(inputString);
	if (inputString[length - 1] == '\n') {
		inputString[length - 1] = '\0';
		length--;
	}
	return length;
}
void PrintPercentageOfCharacterInString(char targetChar)
{
	char inputString[101];
	InputString(inputString, sizeof(inputString));

	int length = StringLength(inputString);
	int targetCount = CountOfCharacterInString(inputString, targetChar);

	if (length == 0)
		printf("Empty string.");

	double percentage = ((double)targetCount / (double)length) * 100;
	printf("Percent of %c in %s is %.2lf%%", targetChar, inputString, percentage);
}