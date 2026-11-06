#include <stdio.h>

int main(void)
{
    char chChar1;
    char chChar2;

    printf("Enter character 1:\t");
    scanf("%c", &chChar1);

    fflush(stdin);
    // OR
    // flushall();

    printf("Enter character 2:\t");
    scanf("%c", &chChar2);

    printf("Character 1 is %c\n", chChar1);
    printf("Character 2 is %c\n", chChar2);

    return 0;
}