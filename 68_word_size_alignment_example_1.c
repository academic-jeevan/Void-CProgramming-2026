#include <stdio.h>

struct demo1
{
    char chchar;       // Size = 1 byte
    double dNO;    // Size = 8 bytes

} obj1;

int main()
{
    printf("Size of obj1 = %d\n", (int)sizeof(obj1));
    printf("Size of obj1.chchar = %d\n", (int)sizeof(obj1.chchar));
    printf("Size of obj1.dNO = %d\n", (int)sizeof(obj1.dNO));

    return 0;
}
/*
Size of obj1 = 16
Size of obj1.chchar = 1
Size of obj1.dNO = 8
*/