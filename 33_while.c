#include <stdio.h>

int main(void)
{
    int iCounter;

    iCounter = 0;

    while (iCounter < 3)
    {
        printf("%d", iCounter);
        iCounter++;
    }

    iCounter = 3;

    while (iCounter < 3)
    {
        printf("%d", iCounter);
        iCounter++;
    }

    return 0;
}

/*
OUTPUT:

012
*/