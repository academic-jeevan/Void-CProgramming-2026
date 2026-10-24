#include <stdio.h>

// Function declaration
void Fun(int iNo);

int main(void)
    {
       int iNo1 = 10;
       printf("Before call,%d",iNo);            //10
       fun(&iNo);                               //call by address
       Printf("After call,%d",iNo);             //Changes reflected 
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
        Before Call: 
    In Fun: 
    Leaving Fun: 
    After Call: 
    */
