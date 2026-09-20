#include <stdio.h>

void Fun(void);

int main(void)
{
    extern int g_iNo;

    printf("In main, %d\n", g_iNo);

    Fun();

    return 0;
}