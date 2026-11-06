#include<stdio.h>
#include<string.h>
int main()
{
    char source[20],destination[40];
    int n;
    printf("\n\nEnter Destination String:\t");
    gets(destination);
    printf("\n\nEnter Source String:\t");
    gets(source);
    printf("\n\nEnter Value Of n:\t");
    scanf("%d",&n);
    strncat(destination,source,n);
    printf("\n\nConcatenated String Is:\t");
    puts(destination);
    return 0;
}
