#include <stdio.h>

struct demo
{
    char chchar;
    double dNo;
};

#pragma pack(1)

struct demo obj;

int main()
{
    printf("Size of obj = %d\n", (int)sizeof(obj));
    printf("Size of obj.chchar = %d\n",
           (int)sizeof(obj.chchar));
    printf("Size of obj.dNo = %d\n",
           (int)sizeof(obj.dNo));

    return 0;
}
/*
Size of obj = 16
Size of obj.chchar = 1
Size of obj.dNo = 8
*/