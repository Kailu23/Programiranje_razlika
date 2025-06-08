#include "a.h"

int InputInRange(int lowerBound, int upperBound)
{
    int number = 0;
    do
    {
        printf("Please enter a number between %2d and %2d: ", lowerBound, upperBound);
        scanf("%d", &number);
    } while (number < lowerBound || number > upperBound);
    return number;
}

void PrintMaxDigitAndProductOfOthers()
{
    int number = InputInRange(100, 999);
    int digits[3], maxDigit = 0;
    int maxDigitIndex;
    for (int i = 0; i < 3; i++)
    {
        digits[i] = number % 10;
        number /= 10;
    }
    for (int i = 0; i < 3; i++)
    {
        if (digits[i] > maxDigit)
        {
            maxDigit = digits[i];
            maxDigitIndex = i;
        }
    }
    int product = 1;
    for (int i = 0; i < 3; i++)
    {
        if (i != maxDigitIndex)
        {
            product *= digits[i];
        }
    }
    printf("Max digit is %d.\n", maxDigit);
    printf("Product: %d\n", product);
}
