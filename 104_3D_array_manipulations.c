#include <stdio.h>

int main(void)
{
    int arr[3][2][4] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    printf("%d\n", arr[0]);                     // 100 (100-116)
    // 3D -> 0th 2D nav (1D addr)

    printf("%d\n", arr[0][0]);                  // 100 (100-104)
    // 3D -> 0th 2D -> 0th 1D nav (ele addr)

    printf("%d\n", arr[0][0][0]);               // 10
    // 3D -> 0th 2D -> 0th 1D -> 0th ele nav (value)

    printf("%d\n", arr[1]);                     // 132 (132-148)
    // 3D -> 1st 2D nav (1D addr)

    printf("%d\n", arr[1][0]);                  // 132 (132-136)
    // 3D -> 1st 2D -> 0th 1D nav (ele addr)

    printf("%d\n", arr[1][0][0]);               // 90
    // 3D -> 1st 2D -> 0th 1D -> 0th ele nav (value)

    printf("%d\n", arr[2]);                     // 164 (164-180)
    // 3D -> 2nd 2D nav (1D addr)

    printf("%d\n", arr[2][0]);                  // 164 (164-168)
    // 3D -> 2nd 2D -> 0th 1D nav (ele addr)

    printf("%d\n", arr[2][0][0]);               // 0
    // 3D -> 2nd 2D -> 0th 1D -> 0th ele nav (value)

    printf("%d\n", arr[0] + 1);                 // 116
    // 1D size ne pudhe

    printf("%d\n", arr[0][0] + 1);              // 104
    // ele size ne pudhe

    printf("%d\n", arr[0][0][0] + 1);           // 11
    // value + 1

    printf("%d\n", arr[1] + 1);                 // 148
    // 1D size ne pudhe

    printf("%d\n", arr[1][0] + 1);              // 136
    // ele size ne pudhe

    printf("%d\n", arr[1][0][0] + 1);           // 91
    // value + 1

    printf("%d\n", arr[2] + 1);                 // 180
    // 1D size ne pudhe

    printf("%d\n", arr[2][0] + 1);              // 168
    // ele size ne pudhe

    printf("%d\n", arr[2][0][0] + 1);           // 1
    // value + 1

    printf("%d\n", &arr[2]);                    // 164 (164-196)
    // &(3D -> 2nd 2D nav) => 2D addr

    printf("%d\n", &arr[2][0]);                 // 164 (164-180)
    // &(3D -> 2nd 2D -> 0th 1D nav) => 1D addr

    printf("%d\n", &arr[2][0][0]);              // 164 (164-168)
    // &(3D -> 2nd 2D -> 0th 1D -> 0th ele nav) => ele addr

    printf("%d\n", &arr[2] + 1);                // 196
    // 2D size ne pudhe

    printf("%d\n", &arr[2][0] + 1);             // 180
    // 1D size ne pudhe

    printf("%d\n", &arr[2][0][0] + 1);          // 168
    // ele size ne pudhe

    printf("%d\n", &arr);                       // 100 (100-196)
    // &(3D nav) => 3D addr

    printf("%d\n", arr);                        // 100 (100-132)
    // 3D nav (2D addr)

    printf("%d\n", *arr);                       // 100 (100-116)
    // 3D -> * 2D nav (1D addr)

    printf("%d\n", **arr);                      // 100 (100-104)
    // 3D -> * 2D -> * 1D nav (ele addr)

    printf("%d\n", ***arr);                     // 10
    // 3D -> * 2D -> * 1D -> * ele nav (value)

    printf("%d\n", &arr + 1);                   // 196
    // 3D size ne pudhe

    printf("%d\n", arr + 1);                    // 132
    // 2D size ne pudhe

    printf("%d\n", *arr + 1);                   // 116
    // 1D size ne pudhe

    printf("%d\n", **arr + 1);                  // 104
    // ele size ne pudhe

    printf("%d\n", ***arr + 1);                 // 11
    // value + 1

    printf("%d\n", &(*arr));                    // 100 (100-132)
    // &(3D -> * 2D nav) => 2D addr

    printf("%d\n", &(**arr));                   // 100 (100-116)
    // &(3D -> * 2D -> * 1D nav) => 1D addr

    printf("%d\n", &(***arr));                  // 100 (100-104)
    // &(3D -> * 2D -> * 1D -> * ele nav) => ele addr

    printf("%d\n", &(*arr) + 1);                // 132
    // 2D size ne pudhe

    printf("%d\n", &(**arr) + 1);               // 116
    // 1D size ne pudhe

    printf("%d\n", &(***arr) + 1);              // 104
    // ele size ne pudhe

    printf("%d\n", arr + 2);                    // 164
    // 2D size ne 2da pudhe

    printf("%d\n", *(arr + 2));                 // 164 (164-180)
    // Solving

    printf("%d\n", *(arr + 2) + 1);             // 180
    // Solving

    printf("%d\n", *(*(arr + 2) + 1));          // 180 (180-184)
    // Solving

    printf("%d\n", *(*(arr + 2) + 1) + 3);      // 192
    // Solving

    printf("%d\n", *(*(*(arr + 2) + 1) + 3));   // 0
    // Solving

    return 0;
}