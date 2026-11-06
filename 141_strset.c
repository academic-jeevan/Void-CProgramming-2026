#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    printf("\n\nEnter The String:\t");
    gets(str);
    printf("\n\nEnter The Character To Set:\t");
    scanf("%c",&ch);
    strset(str,ch);
    printf("\n\nNow String Is:\t");
    puts(str);
    return 0;
}
