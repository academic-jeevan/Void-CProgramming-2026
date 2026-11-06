#include<stdio.h>
#include<string.h>
int main()
{
    char string1[20],string2[20],*ptr;
    printf("\n\nEnter The String:\t");
    gets(string1);
    printf("\n\nEnter String To Be Found:\t");
    gets(string2);
    ptr=strstr(string1,string2);
    if(ptr==NULL)
    {
        puts("\n\nString Not Found\n");
    }
    else
    {
        printf("\n\nString Is Found At %d Location\n",(ptr-string1)+1);
        printf("\n\nString Found In '%s'\n",ptr);
    }
    return 0;
}
