#include <stdio.h>

void Fun(char *pszStr);

int main(void)
{
    Fun("Hello");

    return 0;
}

void Fun(char *pszStr)
{
 //   pszStr[3] = 'Z';    // Crash 

    pszStr = "Bye";     // Allowed
}