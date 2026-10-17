#include <stdio.h>

int main(void)
{
    double Arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double *pPtr = &Arr[4];

    printf("%d\n", pPtr);       // 132
    printf("%lf\n", *pPtr);     // 5.0

    --pPtr;     // pPtr = pPtr - 1 = 132 - 1 * sizeof(double) = 132 - 8 = 124

    printf("%d\n", pPtr);       // 124
    printf("%lf\n", *pPtr);     // 4.0

    return 0;
}