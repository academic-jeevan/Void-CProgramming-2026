#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("\n\nEnter The String:\t");
    gets(str);
    strupr(str);
    printf("\nString In Upper Case Is:\t");
    puts(str);
    return 0;
}
