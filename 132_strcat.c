#include<stdio.h>
#include<string.h>
int main()
{
    char source[20],destination[40];
    printf("\n\nEnter Destination String:\t");
    gets(destination);
    printf("\n\nEnter Source String:\t");
    gets(source);
    strcat(destination,source);
    printf("\n\nConcatenated String Is:\t");
    puts(destination);
    return 0;
}
