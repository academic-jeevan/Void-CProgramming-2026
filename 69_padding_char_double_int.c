#include <stdio.h>

struct demo
{
    char chchar;  // Size = 1
    double dNO;   // Size = 8
    int iNO;      // Size = 4
} obj1;

int main()
{
    printf("Size of obj1 = %d\n", (int)sizeof(obj1));
    printf("Size of obj1.chchar = %d\n", (int)sizeof(obj1.chchar));
    printf("Size of obj1.dNO = %d\n", (int)sizeof(obj1.dNO));
    printf("Size of obj1.iNO = %d\n", (int)sizeof(obj1.iNO));

    return 0;
}
/*
Size of obj1 = 24
Size of obj1.chchar = 1
Size of obj1.dNO = 8
Size of obj1.iNO = 4
*/