#include <stdio.h>

void AddSub(int iNo1, int iNo2, int *piSum, int *piDiff);

int main(void)
{
    int iNo1 = 10;
    int iNo2 = 20;
    int iSum;
    int iDiff;

    AddSub(iNo1, iNo2, &iSum, &iDiff);

    printf("Addition is : %d\n", iSum);
    printf("Subtraction is : %d\n", iDiff);

    return 0;
}

void AddSub(int iNo1, int iNo2, int *piSum, int *piDiff)
{
    *piSum = iNo1 + iNo2;
    *piDiff = iNo1 - iNo2;
}
