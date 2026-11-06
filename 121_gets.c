#include <stdio.h>
#include <string.h>

int main(void)
{
    char szName[50];

    printf("Enter your Name:\n");

    fgets(szName, sizeof(szName), stdin);

    szName[strcspn(szName, "\n")] = '\0';

    printf("%s", szName);

    return 0;
}