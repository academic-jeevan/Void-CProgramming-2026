#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int *pPtr = &iNo;

    printf("%d\n", iNo);                 // 10

    printf("%p\n", (void *)&iNo);        // Address of iNo

    printf("%p\n", (void *)pPtr);        // Address stored in pPtr

    printf("%p\n", (void *)&pPtr);       // Address of pPtr

    printf("%d\n", *pPtr);               // 10

    *pPtr = 20;                          // Change value of iNo through pointer

    printf("%d\n", *pPtr);               // 20

    return 0;
}