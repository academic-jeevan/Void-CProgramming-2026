#include<wchar.h>
#include<string.h>

// typedef unsigned short wchar_t;

int main(void)
{
    wchar_t wchChar = 'A';
    wchar_t wszStr[] = L"Hello";
    wchar_t *pwszStr = L"Hello";

    printf("%d\n",sizeof(wchChar));        // 2
    printf("%d\n",sizeof(wszStr));         // 12
    printf("%d\n",sizeof(pwszStr));        // 8     my 4

    strlen(wszStr);         // 1
    strlen(pwszStr);        // 1

    wcslen(wszStr);         // 5
    wcslen(pwszStr);        // 5

    return 0;
}

/*
Diagrammatically

wchChar     | A |   =>   | 0x41 | 0x00 |
            100  102     100    101    102

wszStr      | H | e | l | l | o | \0 |   =>   | 0x48 | 0x00 | 0x65 | 0x00 |
            200                  212          200           202           204
                                              | 0x6C | 0x00 | 0x6C | 0x00 |
                                              206                         208
                                              | 0x6F | 0x00 | 0x00 | 0x00 |
                                              210                         212

pwszStr     | 400 |   -->   | H | e | l | l | o | \0 |
            300  308        400                   412
*/