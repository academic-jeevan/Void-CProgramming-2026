#include <stdio.h>

void Fun(int *pPtr);

int main(void)
{
    int iNo = 10;

    printf("Before call - %d\n", iNo);          // 10

    Fun(&iNo);                                 // Call by address

    printf("After call - %d\n", iNo);           // 11 (changes reflected)

    return 0;
}

void Fun(int *pPtr)
{
    printf("In Fun - %d\n", *pPtr);              // 10

    ++*pPtr;

    printf("Leaving Fun-  %d\n", *pPtr);         // 11
}