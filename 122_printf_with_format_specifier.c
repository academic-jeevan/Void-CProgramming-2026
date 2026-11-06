#include <stdio.h>

int main(void)
{
    char szStr[] = "Hello";
    char *pszStr = "Good";

    printf("%s", szStr);
    printf("%s", pszStr);
    printf("%s", "Night");

    // printf("%s%s%s", szStr, pszStr, "Night");

    return 0;
}