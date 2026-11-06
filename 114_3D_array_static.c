#include <stdio.h>

void Fun(void);

int main(void)
{
    Fun();
    Fun();
    return 0;
}

void Fun(void)
{
    static int arr[3][3][3];   // static array => auto initialized to 0
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iCnt3 = 0;

    for (iCnt1 = 0; iCnt1 < 3; iCnt1++)
    {
        for (iCnt2 = 0; iCnt2 < 3; iCnt2++)
        {
            for (iCnt3 = 0; iCnt3 < 3; iCnt3++)
            {
                arr[iCnt1][iCnt2][iCnt3]++;
                printf("%d ", arr[iCnt1][iCnt2][iCnt3]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

/*
Output:

1 1 1
1 1 1
1 1 1

1 1 1
1 1 1
1 1 1

1 1 1
1 1 1
1 1 1

2 2 2
2 2 2
2 2 2

2 2 2
2 2 2
2 2 2

2 2 2
2 2 2
2 2 2
*/