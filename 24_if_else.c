#include <stdio.h>

int main(void)
{
    int iNO;

    iNO = 5;

    if(iNO < 10)
        printf("one\n");          //one
    else
        printf("Two\n");


    iNO = 15;

    if(iNO < 10)
        printf("one\n");
    else
        printf("Two\n");          //Two


    /*iNO = 5;

    if(iNO < 10)
        printf("one\n");
        printf("Two\n");          // Two statements
                                // So error
    else
        printf("Three\n");
    */

    iNO = 15;

    if(iNO < 10)
    {
        printf("one\n");
        printf("Two\n");
    }
    else
        printf("Three\n");        //Three

    return 0;
}