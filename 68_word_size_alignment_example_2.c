#include <stdio.h>

struct demo
{
    char chchar;  // Size = 1
    int iNO;      // Size = 4
} obj2;

int main()
{
    printf("Size of obj2 = %d\n", (int)sizeof(obj2));
    printf("Size of obj2.chchar = %d\n", (int)sizeof(obj2.chchar));
    printf("Size of obj2.iNO = %d\n", (int)sizeof(obj2.iNO));

    return 0;
}
/*
Size of obj1 = 16
Size of obj1.chchar = 1
Size of obj1.dNO = 8
*/