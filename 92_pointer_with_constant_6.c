#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int const * const pptr = &iNo;

    ++iNo;       // iNo is constant
    //++*pptr;     // pointing to constant
    //++pptr;      // pptr is constant

    printf("iNo = %d\n", iNo);
    //printf("*pptr = %d\n", *pptr);
    //printf("pptr = %p\n", (void *)pptr);

    return 0;
}