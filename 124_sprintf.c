#include <stdio.h>

int main(void)
{
    char szStr[] = "Hello";
    char *pszStr = "Good";
    char szTemp[50];

    sprintf(szTemp, "%s%s%s", szStr, pszStr, "Night");

    printf("%s", szTemp);

    return 0;
}