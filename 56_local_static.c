#include <stdio.h>

void Fun1(void);
void Fun2(void);

int main(void)
{
    int iCounter;

    for(iCounter = 1; iCounter <= 3; iCounter++)
    {
        Fun1();
        Fun2();
    }

    return 0;
}

void Fun1(void)
{
    int iNo = 10;

    ++iNo;

    printf("%d\n", iNo);
}

/*
Output of Fun1:
11
11
11
*/

void Fun2(void)
{
    static int iNo = 10;

    ++iNo;

    printf("%d\n", iNo);
}

/*
Output of Fun2:
11
12
13
*/