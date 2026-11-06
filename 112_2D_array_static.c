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
    static int arr[3][3];   // static array => auto initialized to 0
    int iRow = 0;
    int iCol = 0;

    for (iRow = 0; iRow < 3; iRow++)
    {
        for (iCol = 0; iCol < 3; iCol++)
        {
            arr[iRow][iCol]++;
            printf("%d ", arr[iRow][iCol]);
        }
        printf("\n");
    }
}

/*
Output:

1 1 1
1 1 1
1 1 1

2 2 2
2 2 2
2 2 2
*/