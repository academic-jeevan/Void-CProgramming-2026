#include <stdio.h>

int main(void)
{
    int iNo1 = 10;

    printf("%d\n", iNo1);

    {
        int iNo2 = 20;
        printf("%d", iNo2);            
    }

    return 0;
}

/*
    10
    20
*/
