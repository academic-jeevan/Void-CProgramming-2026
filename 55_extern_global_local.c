#include <stdio.h>

int g_iNo1;                    // Definition  - SC - Extern
int g_iNo2 = 10;               // Definition  - SC - Extern
extern int g_iNo3;             // Declaration - SC - No Storage Class
extern int g_iNo4 = 20;        // Definition  - SC - Extern

int main(void)
{
    int iNo1;                  // Definition  - SC - Auto
    int iNo2 = 30;             // Definition  - Auto
    extern int iNo3;           // Declaration - No Storage Class

    // extern int iNo4 = 40;   // Error

    printf("%d\n", g_iNo1);
    printf("%d\n", g_iNo2);
    // printf("%d\n", g_iNo3);         // Error: undefined reference to g_iNo3
    printf("%d\n", g_iNo4);

    // printf("%d\n", iNo1);           // Error: iNo1 has indeterminate value
    printf("%d\n", iNo2);
    // printf("%d\n", iNo3);           // Error: undefined reference to g_iNo3
    // printf("%d\n", iNo4);           // Error: declaration of iNo4 with initializer

    return 0;
}

/*
    0
    10
    20
    30
*/