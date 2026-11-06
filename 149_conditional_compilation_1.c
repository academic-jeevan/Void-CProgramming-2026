#include<stdio.h>
#define MYSWITCH                    // tried by commenting this line. o/p is 60 

#ifdef MYSWITCH
int Addition(int, int);
#else
int Addition(int, int, int);
#endif

int main(void)
{
    int iAns;
    // #if MYSWITCH                 // gives C1017 error because MYSWITCH has no value, so #ifdef is used
    #ifdef MYSWITCH
    iAns = Addition(10, 20);
    #else
    iAns = Addition(10, 20, 30);
    #endif                          // this #endif was missing in the notebook

    printf("Answer is %d\n", iAns);
    return 0;
}

#ifdef MYSWITCH
int Addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}
#else
int Addition(int iNo1, int iNo2, int iNo3)
{
    return iNo1 + iNo2 + iNo3;
}
#endif