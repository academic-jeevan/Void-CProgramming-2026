#include <stdio.h>

entern int No;

int main(void)
{
   // extern float No;    // Error: conflicting types for 'No'

    printf("%d", No);

    return 0;
}