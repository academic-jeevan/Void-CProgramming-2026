#include <stdio.h>

int g_iNo = 20;    // Error: multiple definition of 'g_iNo'

void Fun(void)
{
    printf("In fun, %d\n", g_iNo);
}


												/*
													LIBCMT.lib(crt0.obj) : error LNK2019: unresolved external symbol _main referenced in function ___tmainCRTStartup
												50_external_linkage_fun.exe : fatal error LNK1120: 1 unresolved externals
												*/