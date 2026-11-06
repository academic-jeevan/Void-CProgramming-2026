#include <stdio.h>

int main(void)
{
    int iNo = 10;
    float fNo = 57.33f;

    void *vpPtr = &iNo;         // allowed

    printf("%d\n", &iNo);       // 100
    printf("%d\n", vpPtr);      // 100

    // printf("%d\n", *vpPtr);      // Error: void pointer cannot be dereferenced directly

    printf("%d\n", *(int *)vpPtr);  // 10

    vpPtr = &fNo;  // allowed

    printf("%d\n", &fNo);        // 200
    printf("%d\n", vpPtr);       // 200

    // printf("%f\n", *vpPtr);   // Error: void pointer cannot be dereferenced directly

    printf("%f\n", *(float *)vpPtr);  // 57.330002

    return 0;
}