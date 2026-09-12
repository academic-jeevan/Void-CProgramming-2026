#include <stdio.h>

int FactRecursive(int iNo);
int FactRecursiveVer1(int iNo);
int FactRecursiveVer2(int iNo);

int main(void)
{
    int iNo;
    int iAns;

    printf("Enter number: ");
    scanf("%d", &iNo);

    iAns = FactRecursive(iNo);
    printf("Factorial is %d\n", iAns);

    iAns = FactRecursiveVer1(iNo);
    printf("Factorial is %d\n", iAns);

    iAns = FactRecursiveVer2(iNo);
    printf("Factorial is %d\n", iAns);

    return 0;
}

int FactRecursive(int iNo)
{
    if (iNo == 1)
    {
        return 1;
    }

    return iNo * FactRecursive(iNo - 1);
}

int FactRecursiveVer1(int iNo)
{
    int iAns;
    int iCounter;

    iAns = iNo;

    for (iCounter = iNo - 1; iCounter > 1; iCounter--)
    {
        iAns = iAns * iCounter;
    }

    return iAns;
}

int FactRecursiveVer2(int iNo)
{
    int iAns;
    int iCounter;

    iAns = 1;

    for (iCounter = 2; iCounter <= iNo; iCounter++)
    {
        iAns = iAns * iCounter;
    }

    return iAns;
}

/*
Output:

Enter number: 6
Factorial is 720
Factorial is 720
Factorial is 720
*/