#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("\n\nEnter The String:\t");
    gets(str);
    strlwr(str);
    printf("\nString In Lower Case Is:\t");
    puts(str);
    return 0;
}
