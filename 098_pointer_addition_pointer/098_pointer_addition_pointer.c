#include <stdio.h>

int main(void)
{
    int Arr[50] = {10, 20, 30, 40, 50};
    int *pPtr1 = &Arr[0];
    int *pPtr2 = &Arr[4];

    printf("%d\n", pPtr1);              // 100
    printf("%d\n", pPtr2);              // 200

    // printf("%d\n", pPtr1 + pPtr2);   // error

    return 0;
}