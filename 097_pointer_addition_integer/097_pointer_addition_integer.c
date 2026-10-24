#include <stdio.h>

int main(void)
{
    float Arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float *pPtr = &Arr[0];

    printf("%d\n", pPtr);           // 100
    printf("%f\n", *pPtr);          // 1.0

    printf("%d\n", pPtr + 3);       // 112
    printf("%f\n", *(pPtr + 3));    // 3.0
    printf("%d\n", 3 + pPtr);       // 112
    printf("%f\n", *(3 + pPtr));    // 3.0

    printf("%d\n", pPtr);           // 100
    printf("%f\n", *pPtr);          // 1.0

    return 0;
}