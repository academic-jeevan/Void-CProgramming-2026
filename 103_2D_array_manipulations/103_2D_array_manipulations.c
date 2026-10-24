#include <stdio.h>

int main(void)
{
    int arr[3][4] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    printf("%d\n", &arr);                   // 100 (100-148)
    // &(2D nav) => 2D addr

    printf("%d\n", arr);                    // 100 (100-116)
    // 2D nav (1D addr)

    printf("%d\n", *arr);                   // 100 (100-104)
    // 2D -> * 1D nav (ele addr)

    printf("%d\n", **arr);                  // 10
    // 2D -> * 1D -> * ele nav (value)

    printf("%d\n", arr[0]);                 // 100 (100-104)
    // 2D -> 0th 1D nav (ele addr)

    printf("%d\n", arr[0][0]);              // 10
    // 2D -> 0th 1D -> 0th ele nav (value)

    printf("%d\n", arr + 1);                // 116
    // 1D size ne pudhe

    printf("%d\n", *arr + 1);               // 104
    // element size ne pudhe

    printf("%d\n", **arr + 1);              // 11
    // value + 1

    printf("%d\n", arr[0] + 1);             // 104
    // ele size ne pudhe

    printf("%d\n", arr[0][0] + 1);          // 11
    // value + 1

    printf("%d\n", &(*arr));                // 100 (100-116)
    // &(2D -> * 1D nav) => 1D addr

    printf("%d\n", &(**arr));               // 100 (100-104)
    // &(2D -> * 1D -> * ele nav) => ele addr

    printf("%d\n", &(arr[0]));              // 100 (100-116)
    // &(2D -> * 0th 1D nav) => 1D addr

    printf("%d\n", &(arr[0][0]));           // 100 (100-104)
    // &(2D -> * 0th 1D -> * 0th ele nav) => ele addr

    printf("%d\n", &(*arr) + 1);            // 116
    // 1D size ne pudhe

    printf("%d\n", &(**arr) + 1);           // 104
    // element size ne pudhe

    printf("%d\n", &(arr[0]) + 1);          // 116
    // 1D size ne pudhe

    printf("%d\n", &(arr[0][0]) + 1);       // 104
    // ele size ne pudhe

    printf("%d\n", arr + 2);                // 132
    // 1D size ne 2da pudhe

    printf("%d\n", *(arr + 2));             // 132 (132-136)
    // Solving

    printf("%d\n", *(arr + 2) + 3);         // 144
    // Solving

    printf("%d\n", *(*(arr + 2) + 3));      // 0
    // Solving

    printf("%d\n", arr[2]);                 // 132 (132-136)
    // 2D -> * 2nd 1D nav (ele addr)

    printf("%d\n", arr[2] + 3);             // 144
    // element size 3da pudhe

    printf("%d\n", *(arr[2]));              // 90
    // *(2D -> * 2nd 1D nav) => ele nav (value)

    printf("%d\n", *(arr[2] + 3));          // 0
    // *(2D -> * 2nd 1D nav (elem addr me 3 nda pudhe)) => *(144) => 0

    printf("%d\n", &(arr[2]));              // 132 (132-148)
    // &(2D -> * 2nd 1D nav) => 1D addr

    // printf("%d\n", &(arr[2] + 3));       // error
    // &(1D addr + 3) => &(180)
    // here we are trying to get address's address

    return 0;
}