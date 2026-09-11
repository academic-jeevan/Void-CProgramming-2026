#include <stdio.h>

int main(void)
{
    switch(2)
    {
        case 1:
            printf("one");

        case 2:
            printf("two");
            break;

        case 3:
            printf("three");
    }

    return 0;
}

/*
OUTPUT:

two
*/