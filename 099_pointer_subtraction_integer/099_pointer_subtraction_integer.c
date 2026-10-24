#include <stdio.h>

int main(void)
{
    char Arr[5] = {'A', 'B', 'C', 'D', 'E'};
    char *pPtr = &Arr[4];

    printf("%d\n", pPtr);               // 104
    printf("%c\n", *pPtr);              // E

    printf("%d\n", pPtr - 3);           // 101
    printf("%c\n", *(pPtr - 3));        // B

    // printf("%d\n", 3 - pPtr);        // error
    // printf("%c\n", *(3 - pPtr));     // error

    printf("%d\n", pPtr);               // 104
    printf("%c\n", *pPtr);              // E

    return 0;
}