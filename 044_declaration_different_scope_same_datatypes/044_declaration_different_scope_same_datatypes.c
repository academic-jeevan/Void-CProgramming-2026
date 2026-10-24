#include <stdio.h>

int main(void)
{
    extern int No;    // Allowed

    printf("%d", No);

    return 0;
}

int No = 10;