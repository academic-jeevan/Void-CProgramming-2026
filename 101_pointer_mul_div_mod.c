#include <stdio.h>

int main(void)
{
    int Arr[5] = {10, 20, 30, 40, 50};
    int *pPtr1 = &Arr[0];
    int *pPtr2 = &Arr[4];

    // Multiplication, Division, Modulus operators on pointer

    // Multiplication
    // printf("%d\n", pPtr1 * 2);        // error
    // printf("%d\n", pPtr1 * pPtr2);    // error

    // Division
    // printf("%d\n", pPtr1 / 2);        // error
    // printf("%d\n", pPtr1 / pPtr2);    // error

    // Modulus
    // printf("%d\n", pPtr1 % 2);        // error
    // printf("%d\n", pPtr1 % pPtr2);    // error

    return 0;
}