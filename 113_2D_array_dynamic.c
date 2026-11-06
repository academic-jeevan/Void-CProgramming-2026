#include <stdio.h>
#include <malloc.h>

int main(void)
{
    int iRows;
    int iColumns;
    int iCounter1;
    int iCounter2;
    int **ppPtr = NULL;

    printf("How many rows you want to enter\n");
    scanf("%d", &iRows);

    printf("How many columns you want to enter\n");
    scanf("%d", &iColumns);

    ppPtr = (int **)malloc(iRows * sizeof(int *));

    if (NULL == ppPtr)      //NULL Checking
    {
        printf("Memory allocation Failed");
        return -1;
    }

    // accept rows and column count

    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        ppPtr[iCounter1] = (int *)malloc(iColumns * sizeof(int));

        // NULL checking
        if (NULL == ppPtr[iCounter1])
        {
            printf("Memory allocation Failed");

            for (iCounter2 = 0; iCounter2 < iCounter1; iCounter2++)
            {
                free(ppPtr[iCounter2]);
                ppPtr[iCounter2] = NULL;
            }

            free(ppPtr);
            ppPtr = NULL;

            return -1;
        }
    }

    // scan values from user

    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            scanf("%d", &ppPtr[iCounter1][iCounter2]);
        }
    }

    // print values from user

    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            printf("%d ", ppPtr[iCounter1][iCounter2]);
        }
        printf("\n");
    }

    // use of memory / accept values from user

    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        free(ppPtr[iCounter1]);
        ppPtr[iCounter1] = NULL;
    }

    free(ppPtr);
    ppPtr = NULL;

    return 0;
}