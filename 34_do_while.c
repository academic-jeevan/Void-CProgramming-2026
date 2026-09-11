#include <stdio.h>

int main(void)
{
    int iCounter;

    iCounter = 0;

    do
    {
        printf("%d", iCounter);
        iCounter++;
    } while (iCounter < 3);

    iCounter = 3;

    do
    {
        printf("%d", iCounter);
        iCounter++;
    } while (iCounter < 3);

    return 0;
}

/*
OUTPUT:

0123
*/