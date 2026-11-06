// Generic programming
#include<tchar.h>

int main(void)
{
    TCHAR chChar = 'A';
    TCHAR szStr[] = _TEXT("Hello");
    TCHAR *pszStr = _T("Hello");

    printf("%d\n",sizeof(chChar));         // 1 or 12   my 1
    printf("%d\n",sizeof(szStr));          // 6 or 12   my 6
    printf("%d\n",sizeof(pszStr));         // 8         my 4

    _tcslen(szStr);         // 5
    _tcslen(pszStr);        // 5

    return 0;
}