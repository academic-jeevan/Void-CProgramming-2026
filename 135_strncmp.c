#include<stdio.h>
#include<string.h>
int main()
{
    char string1[20],string2[20];
    int ch,n;
    printf("\n\nEnter String1:\t");
    gets(string1);
    printf("\n\nEnter String2:\t");
    gets(string2);
    printf("\n\nEnter n:\t");
    scanf("%d",&n);
    ch=strncmp(string1,string2,n);
    if(ch==0)
        printf("\n\nBoth Strings Are Same\n");
    else
        printf("\n\nBoth Strings Are Diffrent\n");
    getch();
    return 0;
}
