#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    int n;
    printf("\n\nEnter The String:\t");
    gets(str);
    printf("\n\nEnter The Character To Set:\t");
    scanf("%c",&ch);
    printf("\n\nEnter The Value Of n:\t");
    scanf("%d",&n);
    strnset(str,ch,n);
    printf("\n\nNow String Is:\t");
    puts(str);
    return 0;
}
