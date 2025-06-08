#include "a.h"
#include <string.h>
#include <ctype.h>

void InputString(char* inputString, int size);

int CountOfCharacterInString(char* inputString, char targetChar);

int StringLength(char* inputString);

void PrintPercentageOfCharacterInString(char targetChar);

void GetFrequencyOfLetterCase(const char* inputString, char targetLetter, int* lowerCount, int* upperCount);

void PrintMoreFrequentLetterCase(char targetLetter);

int GetNumberOfVowel(char* inputString, char targetVowel);

void PrintNumberOfVowel(char targetVowel);