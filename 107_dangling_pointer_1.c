#include <stdio.h>

int main(void)
{
    int *pptr = NULL;
    {
        int iNo = 10;
        pptr = &iNo;
        printf("%d\n", *pptr);
    }

    printf("%d", *pptr);  // dangling pointer
    return 0;
}