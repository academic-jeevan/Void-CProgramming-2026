#include <stdio.h>
#include <string.h>

int main(void)
{
    char szStr[] = "Hello";

    printf("%d\n", (int)sizeof(szStr));  // 6

    printf("%d\n", (int)strlen(szStr));  // 5

    szStr[3] = 'Z';                      // Allowed

    // szStr = "Bye";                   // Error

    return 0;
}