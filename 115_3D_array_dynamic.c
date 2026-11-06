#include <stdio.h>
#include <malloc.h>

int main(void)
{
    int iPlains = 3;
    int iRows = 2;
    int iColumns = 4;

    int ***pppPtr = NULL;

    int iCounter1 = 0;
    int iCounter2 = 0;
    int iCounter3 = 0;

    /* Allocate memory for plains */
    pppPtr = (int ***)malloc(iPlains * sizeof(int **));

    if (pppPtr == NULL)
    {
        printf("Memory allocation failed");
        return -1;
    }

    /* Allocate memory for rows */
    for (iCounter1 = 0; iCounter1 < iPlains; iCounter1++)
    {
        pppPtr[iCounter1] =
            (int **)malloc(iRows * sizeof(int *));

        if (pppPtr[iCounter1] == NULL)
        {
            printf("Memory allocation failed");
            return -1;
        }

        /* Allocate memory for columns */
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            pppPtr[iCounter1][iCounter2] =
                (int *)malloc(iColumns * sizeof(int));

            if (pppPtr[iCounter1][iCounter2] == NULL)
            {
                printf("Memory allocation failed");
                return -1;
            }
        }
    }

    /* Accept elements */
    printf("Enter elements:\n");

    for (iCounter1 = 0; iCounter1 < iPlains; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for (iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                scanf("%d",
                    &pppPtr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    /* Display elements */
    printf("Elements are:\n");

    for (iCounter1 = 0; iCounter1 < iPlains; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for (iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("%d ",
                    pppPtr[iCounter1][iCounter2][iCounter3]);
            }

            printf("\n");
        }

        printf("\n");
    }

    /* Free allocated memory */
    for (iCounter1 = 0; iCounter1 < iPlains; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            free(pppPtr[iCounter1][iCounter2]);
        }

        free(pppPtr[iCounter1]);
    }

    free(pppPtr);

    return 0;
}