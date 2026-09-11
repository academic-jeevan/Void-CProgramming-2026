#include <stdio.h>

// Function having inputs, no output
void Addition(int, int);

int main(void)
{
    int iNo1;
    int iNo2;

    printf("Enter two numbers: ");
    scanf("%d %d", &iNo1, &iNo2);

    Addition(iNo1, iNo2);

    return 0;
}

void Addition(int iNo1, int iNo2)
{
    int iAns;

    iAns = iNo1 + iNo2;

    printf("Answer is %d", iAns);
}
