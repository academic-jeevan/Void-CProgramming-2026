#include <stdio.h>

int main(void)
{
    int iNO1 = 10;

    printf("%d\n", iNO1);
    {
        int iNO2 = 20;

        printf("%d\n", iNO1);
        printf("%d\n", iNO2);
    }

    printf("%d\n", iNO1);

    return 0;
}

/*
OUTPUT:

10
10
20
10
*/