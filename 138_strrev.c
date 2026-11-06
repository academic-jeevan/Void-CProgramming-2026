#include<stdio.h>
int main()
{
    char string[20];
    printf("\n\nEnter The String:\t");
    gets(string);
    strrev(string);
    printf("\n\nReverse String Is:\t");
    puts(string);
    return 0;
}
