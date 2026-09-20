#include <stdio.h>

int main(void)
{
    int No = 10;
    float No = 10.00f;    // Error: conflicting types / redefinition of 'No'

    printf("%d", No);

    return 0;
}