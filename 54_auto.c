#include <stdio.h>

int main(void)
{
    int iNo1;                           //} both have auto storage class   
    auto int iNo2;                      //} both have auto storage class  

    printf("%d\n%d\n", iNo1, iNo2);

    return 0;
}
/*
    Garbage
    Garbage
*/