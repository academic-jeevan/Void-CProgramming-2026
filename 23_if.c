#include <stdio.h>

int main(void)
{
    int iNO;

    iNO = 5;
    if(iNO < 10)
        printf("one\n");          // one
    printf("Two\n");              // Two

    iNO = 15;
    if(iNO < 10)
        printf("one\n");          // it will Not print
    printf("two\n");              // two

    iNO = 5;
    if(iNO < 10)
    {
        printf("one\n");          // one
        printf("Two\n");          // Two
    }

    iNO = 15;
    if(iNO < 10)
    {
        printf("one\n");
        printf("Two\n");
    }

    iNO = 15;
    if(iNO < 10);               // ERROR: semicolon makes the if body empty
    {
        printf("one\n");          // This will still execute
        printf("Two\n");          // This will still execute
    }

    return 0;
}
