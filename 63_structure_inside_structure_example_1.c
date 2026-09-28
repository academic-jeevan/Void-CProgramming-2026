#include <stdio.h>

struct outer
{
    int iNO1;       // Size = 4
    float fNO1;     // Size = 4

    struct inner
    {
        int iNO2;   // Size = 4
        float fNO2; // Size = 4
    };
} oObj;

int main()
{
    printf("Size of iNO1 = %d\n", sizeof(oObj.iNO1));
    printf("Size of fNO1 = %d\n", sizeof(oObj.fNO1));

    printf("Size of oObj = %d\n", sizeof(oObj));

    return 0;
}

/*
    Size of iNO1 = 4
    Size of fNO1 = 4
    Size of oObj = 16
*/