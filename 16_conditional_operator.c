#include <stdio.h>

    int main(void)
    {
        int iNo;

        printf("Enter number:\t");
        scanf("%d", &iNo);

        iNo < 10 ? printf("Less\n") : printf("Not less\n");

        return 0;
    }