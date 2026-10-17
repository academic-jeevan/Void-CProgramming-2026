#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    printf("%d\n", &arr);               // 100 (100-120)
    // &(1D nav) => 1D address

    printf("%d\n", arr);                // 100 (100-104)
    // 1D nav (ele addr)

    printf("%d\n", *arr);               // 10
    // 1D -> element nav (value)

    printf("%d\n", arr[0]);             // 10
    // 1D -> 0th element nav (value)

    printf("%d\n", &arr + 1);           // 120
    // 1D size ne pudhe

    printf("%d\n", arr + 1);            // 104
    // ele size ne pudhe

    printf("%d\n", *arr + 1);           // 11
    // value + 1

    printf("%d\n", arr[0] + 1);         // 11
    // value + 1

    printf("%d\n", &(*arr) + 1);        // 104
    // &(1D -> ele nav) => ele addr ne pudhe

    //printf("%d\n", &(arr[0] + 1));      // 104
    // &(1D -> 0th ele nav) => ele addr ne pudhe

    return 0;
}