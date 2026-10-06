#include <stdio.h>

#define MAX 10

void AssignArrays(int [], int [], int);

int main(void)
{
    int iCounter;
    int iElementCount;

    int arr1[MAX];
    int arr2[MAX];

    printf("How many elements you want to enter in arr1? (< %d):\t", MAX);
    scanf("%d", &iElementCount);

    printf("Enter arr1 values:\n");

    for(iCounter = 0; iCounter < iElementCount; iCounter++)
    {
        printf("Enter arr1[%d] value:\t", iCounter);
        scanf("%d", &arr1[iCounter]);
    }

    AssignArrays(arr1, arr2, iElementCount);

    printf("arr1 values are,\n");

    for(iCounter = 0; iCounter < iElementCount; iCounter++)
        printf("arr1[%d] = %d\n", iCounter, arr1[iCounter]);

    printf("arr2 values are,\n");

    for(iCounter = 0; iCounter < iElementCount; iCounter++)
        printf("arr2[%d] = %d\n", iCounter, arr2[iCounter]);

    return 0;
}

void AssignArrays(int arr1[], int arr2[], int iElementCount)
{
    int iCounter;

    for(iCounter = 0; iCounter < iElementCount; iCounter++)
        arr2[iCounter] = arr1[iCounter];
}