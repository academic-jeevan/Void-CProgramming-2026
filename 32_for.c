#include <stdio.h>

int main(void)
{
    int iCounter;
    int iCounter1;
    int iCounter2;

    // Version 1
    for (iCounter = 0; iCounter < 3; iCounter++)
        printf("%d", iCounter);

    printf("\n");

    // Version 2
    iCounter = 0;

    for (; iCounter < 3; iCounter++)
        printf("%d\t", iCounter);

    printf("\n");

    // Version 3
    iCounter = 0;

    for (; iCounter < 3;)
    {
        if (iCounter == 3)
            break;

        printf("%d", iCounter);
        iCounter++;
    }

    printf("\n");

    // Version 4
    for (iCounter = 0; iCounter < 3;)
    {
        printf("%d", iCounter);
        iCounter++;
    }

    printf("\n");

    // Version 5
    iCounter = 0;

    for (;;)
    {
        if (iCounter == 3)
            break;

        printf("%d", iCounter);
        iCounter++;
    }

    printf("\n");

    // Version 6
    iCounter = 0;

    while (iCounter < 3)
    {
        printf("%d", iCounter);
        iCounter++;
    }

    printf("\n");

    // Additional for loop
    for (iCounter = 3; iCounter < 3; iCounter++)
        printf("%d", iCounter);

    // Two counter loop
    for (iCounter1 = 0, iCounter2 = 3;
         iCounter1 < iCounter2 && iCounter2 > 0;
         iCounter1++, iCounter2--)
    {
        printf("\n%d\t%d", iCounter1, iCounter2);
    }

    return 0;
}

/*
OUTPUT:

012
0	1	2
012
012
012
012

0	3
1	2
*/