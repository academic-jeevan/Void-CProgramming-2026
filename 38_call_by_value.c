#include <stdio.h>

// Function declaration
void Fun(int iNo);

int main(void)
{
    int iNo = 10;

    printf("Before Call: %d\n", iNo);

    Fun(iNo);   // Call by value

    printf("After Call: %d\n", iNo);

    return 0;
}

// Function definition
void Fun(int iNo)
{
    printf("In Fun: %d\n", iNo);

    ++iNo;

    printf("Leaving Fun: %d\n", iNo);
}

/*   OUTPUT -
    Before Call: 10
In Fun: 10
Leaving Fun: 11
After Call: 10
*/
