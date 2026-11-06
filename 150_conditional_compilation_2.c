#include<stdio.h>
#define MYSWITCH 2

#if MYSWITCH == 2
int Addition(int, int);
#elif MYSWITCH == 3
int Addition(int, int, int);
#else
int Addition(int, int, int, int);
#endif

int main(void)
{
    int iAns;

    #if MYSWITCH == 2
    iAns = Addition(10, 20);
    #elif MYSWITCH == 3
    iAns = Addition(10, 20, 30);
    #else MYSWITCH == 4
    iAns = Addition(10, 20, 30, 40);

    #endif

    printf("Answer is %d\n", iAns);
    return 0;
}

#if MYSWITCH == 2
int Addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}
#elif MYSWITCH == 3
int Addition(int iNo1, int iNo2, int iNo3)
{
    return iNo1 + iNo2 + iNo3;
}
#else
int Addition(int iNo1, int iNo2, int iNo3, int iNo4)
{
    return iNo1 + iNo2 + iNo3 + iNo4;
}
#endif
