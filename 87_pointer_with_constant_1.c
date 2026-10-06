#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int *pptr = &iNo;

    ++iNo;       // iNo is non-constant
    ++*pptr;     // pointing to non-constant
    ++pptr;      // pptr is non-constant

    printf("iNo = %d\n", iNo);
    printf("*pptr = %d\n", *pptr);
    printf("pptr = %p\n", (void *)pptr);

    return 0;
}