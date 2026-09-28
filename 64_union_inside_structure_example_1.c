#include <stdio.h>

struct outer
{
    int iNO;       // Size = 4
    double dNO;    // Size = 8

    union inner
    {
        int iNO;   // Size = 4
        double dNO;// Size = 8
    } iObj1, iObj2;

} oObj;

int main()
{
    printf("Size of iNO = %d\n", (int)sizeof(oObj.iNO));
    printf("Size of dNO = %d\n", (int)sizeof(oObj.dNO));

    printf("Size of iObj1 = %d\n", (int)sizeof(oObj.iObj1));
    printf("Size of iObj2 = %d\n", (int)sizeof(oObj.iObj2));

    printf("Size of oObj = %d\n", (int)sizeof(oObj));

    return 0;
}
/*
Size of iNO = 4
Size of dNO = 8
Size of iObj1 = 8
Size of iObj2 = 8
Size of oObj = 32
*/