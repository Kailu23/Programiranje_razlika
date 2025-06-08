#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

// Zadatak 1. fje

int CalculateFactorial(int number)
{
    if (number >= 1)
    {
        return number * (CalculateFactorial(number - 1));
    }
    return 1;
}

// Zadatak 2. fje

int Input(int lowerBound)
{
    int number;
    do
    {
        printf("Enter a positive integer greater than %d.\n", lowerBound);
        scanf("%d", &number);
    } while (number <= lowerBound);
    return number;
}

bool IsPrime(int number)
{
    if (number > 1)
    {
        for (int i = 2; i < round(number / 2); i++)
        {
            if (number % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

// Zadatak 3. fje

typedef struct Date
{
    int day;
    int month;
    int year;
} Date;

typedef struct Student
{
    char name[50];
    char surname[50];
    Date birthday;
    char studentID[11];
    double passedSubjectsAverage;
}Student;


int InputInRange(int lowerBound, int upperBound)
{
    int number;
    do
    {
        printf("Please enter a number between %2d and %2d: ", lowerBound, upperBound);
        scanf("%d", &number);
    } while (number < lowerBound || number > upperBound);
    return number;
}

float GetMaxStudentAverage(Student** students, int count)
{
    float currentMax = 0;
    for (int i = 0; i < count; i++)
    {
        if ((*students + i)->passedSubjectsAverage > currentMax) currentMax = (*students + i)->passedSubjectsAverage;
    }
    return currentMax;
}
// Zadatak 4. fje

typedef struct Complex
{
    int real;
    int imaginary;
} Complex;

Complex* InputComplexNumber()
{
    Complex *number = (Complex*)malloc(sizeof(Complex));
    printf("Enter the real and imaginary part.\n");
    scanf("%d", &(number->real));
    scanf("%d", &(number->imaginary));
    return number;
}

Complex AddTwoComplexNumbers(Complex number1, Complex number2)
{
    number1.real += number2.real;
    number1.imaginary += number2.imaginary;
    return number1;
}

Complex SubtractTwoComplexNumbers(Complex number1, Complex number2)
{
    number1.real -= number2.real;
    number1.imaginary -= number2.imaginary;
    return number1;
}

Complex MultiplyTwoComplexNumbers(Complex number1, Complex number2)
{
    number1.real *= number2.real;
    number1.imaginary *= number2.imaginary;
    return number1;
}

int main()
{
    int number;
    //Zadatak 1.
    
    //number = Input(0);
    //int factorial = CalculateFactorial(number);

    //Zadatak 2.

    /*number = Input(1);
    if (IsPrime(number))
    {
        printf("%d is a prime number.\n", number);
    }*/

    //Zadatak 3.

    /*number = InputInRange(2, 100);
    Student *students = (Student*)malloc(number*sizeof(Student));

    int size = sizeof(students) / sizeof(Student);
    printf("%d\n", size); //Explain

    for (int i = 0; i < number; i++)
    {
        sprintf((students + i)->name, "Student%d", i);
        sprintf((students + i)->surname, "Surname%d", i);
        (students + i)->birthday.day = i;
        (students + i)->birthday.month = (i * i) % (12 - 1 + 1) + 1; //Between 1 & 12
        (students + i)->birthday.year = i*i*i;
        (students + i)->passedSubjectsAverage = (float)rand() / (float)RAND_MAX * (5 - 1) + 1; //Random number between 1 & 5
        printf("Name:%s\nSurname:%s\nAverage:%lf\n", (students + i)->name, (students + i)->surname, (students + i)->passedSubjectsAverage);
    }

    printf("Highest average is: %lf\n", GetMaxStudentAverage(&students, number));*/

    //Zadatak 4.

    Complex* number1 = InputComplexNumber();
    Complex* number2 = InputComplexNumber();

    *number1 = AddTwoComplexNumbers(*number1, *number2);
    printf("%d\n%d\n", number1->real, number1->imaginary);

    *number1 = SubtractTwoComplexNumbers(*number1, *number2);
    printf("%d\n%d\n", number1->real, number1->imaginary);

    *number1 = MultiplyTwoComplexNumbers(*number1, *number2);
    printf("%d\n%d\n", number1->real, number1->imaginary);


	return 1;
}