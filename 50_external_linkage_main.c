#include <stdio.h>

void Fun(void);

int main(void)
{
    extern int g_iNo;

    printf("In main, %d\n", g_iNo);

    Fun();

    return 0;
}
int g_iNo=20;
                                            /*
                                            50_external_linkage_main.obj : error LNK2019: unresolved external symbol _Fun referenced in function _main
                                            50_external_linkage_main.exe : fatal error LNK1120: 1 unresolved externals
                                            */