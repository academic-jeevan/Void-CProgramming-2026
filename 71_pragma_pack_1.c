#include <stdio.h>

struct demo1
{
    char chchar;
    double dno;
} obj1;

#pragma pack(4)
struct demo2
{
    char chchar;
    double dno;
} obj2;

#pragma pack(1)
struct demo3
{
    char chchar;
    double dno;
} obj3;

#pragma pack()
struct demo4
{
    char chchar;
    double dno;
} obj4;

int main()
{
    printf("Size of obj1 = %d\n", (int)sizeof(obj1));
    printf("Size of obj2 = %d\n", (int)sizeof(obj2));
    printf("Size of obj3 = %d\n", (int)sizeof(obj3));
    printf("Size of obj4 = %d\n", (int)sizeof(obj4));

    return 0;
}
/*
Size of obj1 = 16
Size of obj2 = 12
Size of obj3 = 9
Size of obj4 = 16
*/