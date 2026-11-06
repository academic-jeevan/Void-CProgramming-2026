#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char source[20];
    char destination[20];
    printf("\n\nEnter Source String:\t");
    gets(source);
    printf("\n\nEnter Value Of n:\t");
    scanf("%d",&n);
    printf("\n\nSource String Is:\t");
    puts(source);
    strncpy(destination,source,n);
    printf("\n\nDestination String Is:\t");
    puts(destination);
    return 0;
}
