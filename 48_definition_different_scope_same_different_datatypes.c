#include <stdio.h>

int No = 10;

void fun(void);

int main(void)
{
    int No = 20;    // Allowed

    printf("%d\n", No);

    {
        char No = 'A';    // Allowed

        printf("%d\n", No);
    }

    printf("%d\n", No);

    fun();

    return 0;
}

void fun(void)
{
    printf("%d\n", No);    // Allowed
}