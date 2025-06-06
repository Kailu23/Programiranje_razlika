#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 10

//Zadatak 1. fje

float RectanglePerimeter(float width, float height)
{
    return 2 * (width + height);
}

float RectangleArea(float width, float height)
{
    return width * height;
}

//Zadatak 2. fje

int isDivisible(int* numbers, int i)
{
    if (*(numbers + i) % 3 == 0)
    {
        return 1;
    }
    return 0;
}

//Zadatak 3. fje

bool IsSmallerThan10(float* numbers, int i)
{
    return (*(numbers + i) < 10);
}
float CalculateMean(float sum, int n)
{
    return sum / n;
}

//Zadatak 4. fje

int CalculateFactorial(int number)
{
    if (number >= 1)
    {
        return number * (CalculateFactorial(number - 1));
    }
    return 1;
}

int main(void)
{
    //Zadatak 1.

    /*float rectangleWidth, rectangleHeight;

    printf("Input rectangle width:\n");
    scanf("%f", &rectangleWidth);

    printf("Input rectangle height:\n");
    scanf("%f", &rectangleHeight);

    printf("Rectangle perimeter: %.2f\n", RectanglePerimeter(rectangleWidth, rectangleHeight));
    printf("Rectangle area: %.2f\n", RectangleArea(rectangleWidth + 4, rectangleHeight + 2));*/

    //Zadatak 2.

    /*int numbers[N];
    int isDivisibleCounter = 0;

    printf("Input 10 numbers:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", numbers + i);
    }
    for (int i = 0; i < N; i++)
    {
        isDivisibleCounter += isDivisible(numbers, i);
    }
    printf("There are %d numbers divisible by 3.\n", isDivisibleCounter);*/

    //Zadatak 3.

    /*int n, countNumbersLessThan10 = 0;
    float sumNumbersLessThan10 = 0, average;
    float* numbers;
    printf("Input number of repeated entries: ");
    scanf("%d", &n);
    numbers = (float*)malloc(n * sizeof(float));
    if (numbers == NULL) {
        printf("Error! Memory not allocated.");
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%f", numbers + i);
    }
    for (int i = 0; i < n; i++)
    {
        if (IsSmallerThan10(numbers, i))
        {
            sumNumbersLessThan10 += *(numbers + i);
            countNumbersLessThan10++;
        }
    }
    average = CalculateMean(sumNumbersLessThan10, countNumbersLessThan10);
    printf("The sum of numbers smaller than 10 is: %.2f\n", sumNumbersLessThan10);
    printf("The arithmetic mean is: %.2f\n", average);
    free(numbers);
    */

    //Zadatak 4.

    unsigned int number;
    unsigned int factorial;
    printf("Input 1 even positive integer: ");
    do
    {
        scanf("%d", &number);
    } while ((number % 2) != 0 || number < 0 || number >= 10);
    factorial = CalculateFactorial(number);
    printf("Factorial of %d! is: %d", number, factorial);

    return 1;
}