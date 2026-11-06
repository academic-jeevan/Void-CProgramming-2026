#include <stdio.h>

int Addition(int, int);
int Multiplication(int, int);

int main(void)
{
    int iAns;
    int (*fpPtr)(int, int) = NULL;

    fpPtr = Addition;
    iAns = fpPtr(10, 20);
    printf("Addition = %d\n", iAns);

    fpPtr = Multiplication;
    iAns = fpPtr(10, 20);
    printf("Multiplication = %d\n", iAns);

    return 0;
}

int Addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}

int Multiplication(int iNo1, int iNo2)
{
    return iNo1 * iNo2;
}