#include <stdio.h>

#define MAX 10
#define EQUAL 1
#define NOT_EQUAL 0

int CompareArrays(int [], int [], int);

int main(void)
{
    int iResult;
    int iCounter;
    int iElementCount1;
    int iElementCount2;

    int arr1[MAX];
    int arr2[MAX];

    printf("How many elements you want to enter in arr1? (< %d):\t", MAX);
    scanf("%d", &iElementCount1);

    printf("How many elements you want to enter in arr2? (< %d):\t", MAX);
    scanf("%d", &iElementCount2);

    if(iElementCount1 != iElementCount2)
    {
        printf("Array values will not be equal\n");
        return 0;
    }

    printf("Enter arr1 values:\n");

    for(iCounter = 0; iCounter < iElementCount1; iCounter++)
    {
        printf("Enter arr1[%d] value:\t", iCounter);
        scanf("%d", &arr1[iCounter]);
    }

    printf("Enter arr2 values:\n");

    for(iCounter = 0; iCounter < iElementCount2; iCounter++)
    {
        printf("Enter arr2[%d] value:\t", iCounter);
        scanf("%d", &arr2[iCounter]);
    }

    printf("arr1 values are,\n");

    for(iCounter = 0; iCounter < iElementCount1; iCounter++)
        printf("arr1[%d] = %d\n", iCounter, arr1[iCounter]);

    printf("arr2 values are,\n");

    for(iCounter = 0; iCounter < iElementCount2; iCounter++)
        printf("arr2[%d] = %d\n", iCounter, arr2[iCounter]);

    iResult = CompareArrays(arr1, arr2, iElementCount1);

    if(EQUAL == iResult)
        printf("Arrays are equal\n");
    else
        printf("Arrays are not equal\n");

    return 0;
}

int CompareArrays(int arr1[], int arr2[], int iElementCount)
{
    int iCounter;

    for(iCounter = 0; iCounter < iElementCount; iCounter++)
    {
        if(arr1[iCounter] != arr2[iCounter])
            return NOT_EQUAL;
    }

    return EQUAL;
}