#include <stdio.h>

int main(void)
{
    extern int iNo;
    extern int iNo;    // Allowed

    printf("%d", iNo);

    return 0;
}

int iNo = 10;