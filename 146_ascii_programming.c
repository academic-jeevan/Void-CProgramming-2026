//ASCII Coding
#include<stdio.h>
#include<string.h>

int main(void)
{
    char chChar = 'A';
    char szStr[] = "Hello";
    char *pszStr = "Hello";

    printf("%d\n",sizeof(chChar));         // 1
    printf("%d\n",sizeof(szStr));          // 6
    printf("%d\n",sizeof(pszStr));         // 8   my 4

    strlen(szStr);          // 5
    strlen(pszStr);         // 5

    return 0;
}

/*
Diagram

chChar      | A |   =>   | 65 |   =>   | 0x41 |
            100  101     100  101       100   101

szStr       | H | e | l | l | o | \0 |   =>   | 0x48 | 0x65 | 0x6C | 0x6C | 0x6F | 0x00 |
            200                  206          200                                       206

pszStr      | 400 |   -->   | H | e | l | l | o | \0 |
            300  308        400                   406
*/
