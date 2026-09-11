#include <stdio.h>
#include "Calculation.h"

int main()
{
    int no1;
    int no2;
    int ans;

    printf("\n Give two numbers for addition :\t");
    scanf("%d %d", &no1, &no2);

    ans = add(no1, no2);

    printf("Addition of %d and %d is : %d\n", no1, no2, ans);

    printf("\n Give two numbers for subtraction :\t");
    scanf("%d %d", &no1, &no2);

    ans = sub(no1, no2);

    printf("Subtraction of %d and %d is : %d\n", no1, no2, ans);

    multiplication();

    division();

    printf("\n Give Numerator & Denominator :\t");
    scanf("%d %d", &no1, &no2);

    modulus(no1, no2);

    return 0;
}

void division()
{
    int num;
    int den;

    printf("\n Give Numerator & Denominator :\t");
    scanf("%d %d", &num, &den);

    printf("Quotient of %d and %d is : %d\n", num, den, num / den);
}

int multiplication()
{
    int no1;
    int no2;
    int ans;

    printf("\n Give two numbers for multiplication :\t");
    scanf("%d %d", &no1, &no2);

    ans = no1 * no2;

    printf("Multiplication of %d and %d is : %d\n", no1, no2, ans);

    return ans;
}

void modulus(int Numerator, int Denominator)
{
    int remainder;

    remainder = Numerator % Denominator;

    printf("\n Remainder of %d and %d is : %d\n",
           Numerator, Denominator, remainder);
}

int sub(int int1, int int2)
{
    return int1 - int2;
}

int add(int int1, int int2)
{
    return int1 + int2;
}
