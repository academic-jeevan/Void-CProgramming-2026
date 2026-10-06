#include <stdio.h>

int Add(int iNo1, int iNo2, int *piDiff);

int main(void)
{
    int iNo1 = 10;
    int iNo2 = 20;
    int iSum;
    int iDiff;

    iSum = Add(iNo1, iNo2, &iDiff);

    printf("Addition is : %d\n", iSum);
    printf("Subtraction is : %d\n", iDiff);

    return 0;
}

int Add(int iNo1, int iNo2, int *piDiff)
{
    *piDiff = iNo1 - iNo2;

    return iNo1 + iNo2;
}