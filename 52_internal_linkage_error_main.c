#include <stdio.h>

void Fun(void);

int main(void)
{
    extern int g_iNo = 20;                          //52_internal_linkage_main.c(7) : error C2205: 'g_iNo' : cannot initialize extern variables with block scope

    printf("In main, %d\n", g_iNo);

    Fun();

    return 0;
}
