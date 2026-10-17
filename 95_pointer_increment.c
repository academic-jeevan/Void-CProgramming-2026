#include <stdio.h>

int main(void)
{
    int Arr[5] = {10, 20, 30, 40, 50};
    int *pPtr = &Arr[0];    // &Arr

    printf("%d\n", &pPtr);      // 200
    printf("%d\n", pPtr);       // 100
    printf("%d\n", *pPtr);      // 10

    ++pPtr;     // pPtr = pPtr + 1 = 100 + 1 * sizeof(int) = 100 + 4 = 104

    printf("%d\n", &pPtr);      // 200
    printf("%d\n", pPtr);       // 104
    printf("%d\n", *pPtr);      // 20

    return 0;
}