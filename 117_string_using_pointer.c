#include <stdio.h>
#include <string.h>

int main(void)
{
    char *pszStr = "Hello";

    printf("%d\n", (int)sizeof(pszStr));  // 4

    printf("%d\n", (int)strlen(pszStr));  // 5

    // pszStr[3] = 'Z';                  // Crash / Undefined Behaviour

    pszStr = "Bye";                      // Allowed

    return 0;
}