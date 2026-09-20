#include <stdio.h>

int main(void)
{
    extern int No;
    extern float No;    // Error: conflicting types for 'No'

    printf("%d", No);

    return 0;
}
int No=10;