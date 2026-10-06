#include <stdio.h>

int main(void)
{
    const int iNo = 10;
    const int *pptr = &iNo;

 //  ++iNo;       // iNo is constant
 //  ++*pptr;     // pointing to constant
    ++pptr;      // pptr is non-constant

 //   printf("iNo = %d\n", iNo);
 //   printf("*pptr = %d\n", *pptr);
    printf("pptr = %p\n", (void *)pptr);

    return 0;
}