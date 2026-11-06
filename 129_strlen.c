#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr="Hello";
    char str[]="Good";
    printf("\nThe Length Of Hello Is %d\n",strlen(ptr));
    printf("The Length Of Good Is %d\n",strlen(str));
    printf("The Length Of Morning Is %d\n",strlen("Morning"));
    return 0;
}
