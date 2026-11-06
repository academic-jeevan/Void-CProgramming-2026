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
    static int arr[3];          // static array => auto initialized to 0
    int iCnt = 0;

    for (iCnt = 0; iCnt < 3; iCnt++)
    {
        arr[iCnt]++;
        printf("%d ", arr[iCnt]);
    }
    printf("\n");
}

/*
Output:
1 1 1
2 2 2
*/
