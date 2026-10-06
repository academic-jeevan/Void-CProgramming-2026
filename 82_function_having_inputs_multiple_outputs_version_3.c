#include <stdio.h>

void AddSub(int *piSum, int *piDiff);

int main(void)
{
    int iNo1;
    int iNo2;

    // accept two numbers from user
    scanf("%d", &iNo1);
    scanf("%d", &iNo2);

    AddSub(&iNo1, &iNo2);

    printf("Addition is : %d\n", iNo1);
    printf("Subtraction is : %d\n", iNo2);

    return 0;
}

void AddSub(int *piSum, int *piDiff)
{
    int iTemp = *piSum;

    *piSum = *piSum + *piDiff;
    *piDiff = iTemp - *piDiff;
}
