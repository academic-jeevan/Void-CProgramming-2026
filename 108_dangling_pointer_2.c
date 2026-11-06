#include <stdio.h>

void Fun(int **ppPtr);

int main(void)
{
    int *pPtr = NULL;

    Fun(&pPtr);

    printf("%d\n", *pPtr);
    return 0;
}

void Fun(int **ppPtr)
{
    int iNo = 10;

    *ppPtr = &iNo;

    printf("\n%d\n", ppPtr);   // 100
    printf("%d\n", *ppPtr);  // 300
    printf("%d\n", **ppPtr); // 10
}