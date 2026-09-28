#include <stdio.h>

struct outer
{
    int iNO;       // Size = 4
    float fNO;     // Size = 4

    struct inner
    {
        int iNO;   // Size = 4
        float fNO; // Size = 4
    } iObj1, iObj2, iObj3;

    double dNO;    // Size = 8

} oObj;

int main()
{
    printf("Size of iNO = %d\n", (int)sizeof(oObj.iNO));
    printf("Size of fNO = %d\n", (int)sizeof(oObj.fNO));

    printf("Size of iObj1 = %d\n", (int)sizeof(oObj.iObj1));
    printf("Size of iObj2 = %d\n", (int)sizeof(oObj.iObj2));
    printf("Size of iObj3 = %d\n", (int)sizeof(oObj.iObj3));

    printf("Size of dNO = %d\n", (int)sizeof(oObj.dNO));

    printf("Size of oObj = %d\n", (int)sizeof(oObj));

    return 0;
}
/*
    Size of iNO = 4
    Size of fNO = 4
    Size of iObj1 = 8
    Size of iObj2 = 8
    Size of iObj3 = 8
    Size of dNO = 8
    Size of oObj = 40
*/