#include <stdio.h>

#define MAX 3

int main(void)
{
    int arr[MAX];
    int icounter;

    for(icounter = 0; icounter < MAX; icounter++)
    {
        printf("Enter value %d : ", icounter + 1);
        scanf("%d", &arr[icounter]);
    }

    for(icounter = 0; icounter < MAX; icounter++)
    {
        printf("Value %d is %d\n", icounter + 1, arr[icounter]);
    }

    return 0;
}

/*
For scanf use & and scanf 3 vela
write karava lagla asta.

Code duplication
(Space complexity)
*/