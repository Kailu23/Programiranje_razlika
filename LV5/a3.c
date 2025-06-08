#include "a.h"

void PrintAllCharsBetweenTwoChars()
{
	char characters[2];
	printf("Input two characters with a space between them.\n");
	scanf("%c %c", characters, &characters[1]);
	char min, max;
	min = characters[0];
	max = characters[1];
	if (max < min)
	{
		max = min;
		min = characters[1];
		
	}
	printf("Characters between %c and %c:\n", min, max);
	for (char i = min + 1; i < max; i++)
	{
		printf("%-2c", i);
	}
}