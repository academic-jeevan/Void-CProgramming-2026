#include <stdio.h>

void Fun(char szStr[]);

int main(void)
{
    Fun("Hello");

    return 0;
}

void Fun(char szStr[])
{
    szStr[3] = 'Z';     // Crash 

    szStr = "Bye";      // Allowed
}