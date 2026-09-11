#include <stdio.h>

int main(void)
{
    switch(2)   // It's just the example of course don't pass literal here.
    {
        case 1:
            printf("one\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
    }
                                     // Output: Two Three


    switch(3)
    {
        case 1:
            printf("one\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
    }
                                     // Output: Three


    switch(3)
    {
        case 1:
            printf("one\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
        default:
            printf("Default\n");
    }   
                                     // Output: Default


    switch(5)
    {
        case 1:
            printf("one\n");
        default:
            printf("Default\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
    }
                                    // Output: Default + Two Three


    switch(5)
    {
        case 1:
            printf("one\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
    }
                                    // Output: Out of switch -

    return 0;
}