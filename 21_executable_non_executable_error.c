#include <stdio.h>

int main(void)
{
    int iNo1 = 10;

    printf("%d", iNo1);

    int iNo2 = 20;

    printf("%d", iNo2);                 // error in old standard | if works the program is not portable

    return 0;
}       