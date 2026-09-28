#include <stdio.h>

struct outer
{
    int iNO;       // Size = 4
    double dNO;    // Size = 8

    union inner
    {
        int iNO;   // Size = 4
        float fNO; // Size = 4
    } iObj[3];     // Size = 12

} oObj;

int main()
{
    printf("Size of iNO = %d\n", (int)sizeof(oObj.iNO));
    printf("Size of dNO = %d\n", (int)sizeof(oObj.dNO));

    printf("Size of iObj = %d\n", (int)sizeof(oObj.iObj));

    printf("Size of oObj = %d\n", (int)sizeof(oObj));

    return 0;
}
/*
Size of iNO = 4
Size of dNO = 8
Size of iObj = 12
Size of oObj = 32
*/