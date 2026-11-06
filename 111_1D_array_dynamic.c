#include <stdio.h>
#include <malloc.h>

int main(void)
{
    int iElementCount;
    int iCounter;
    int *pptr = NULL;

    printf("How many elements you want to enter\n");
    scanf("%d", &iElementCount);

    pptr = (int *)malloc(iElementCount * sizeof(int));

    if (NULL == pptr)
    {
        printf("Memory allocation Failed");
        return -1;
    }

    // use of memory

    if (pptr != NULL)
    {
        free(pptr);
        pptr = NULL;
    }

    return 0;
}