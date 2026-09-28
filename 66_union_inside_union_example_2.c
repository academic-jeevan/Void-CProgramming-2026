#include <stdio.h>

union outer
{
    int iNO;       // Size = 4
    float fNO;     // Size = 4

    union inner
    {
        int iNO;   // Size = 4
        float fNO; // Size = 4
    } iObj[2];     // Size = 8

    double dNO;    // Size = 8

} oObj;

int main()
{
    printf("Size of iNO = %d\n", (int)sizeof(oObj.iNO));
    printf("Size of fNO = %d\n", (int)sizeof(oObj.fNO));

    printf("Size of iObj = %d\n", (int)sizeof(oObj.iObj));
    printf("Size of dNO = %d\n", (int)sizeof(oObj.dNO));

    printf("Size of oObj = %d\n", (int)sizeof(oObj));

    return 0;
}
/*
Size of iNO = 4
Size of fNO = 4
Size of iObj = 8
Size of dNO = 8
Size of oObj = 8
*/