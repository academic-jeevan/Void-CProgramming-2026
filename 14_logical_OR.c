#include <stdio.h>   
    int main(void)
    {
        int iNO1 = 0;
        int iNO2 = 1;
        int iNO3 = 2;
        int iAns;

        iAns = iNO1 && ++iNO2 || iNO3++;

        printf("\t%d\n \t%d\n \t%d\n", iNO1, iNO2, iNO3, iAns);
        
        return 0;
    }
        /*
        int iNO1 = 0;
        int iNO2 = 1;
        int iNO3 = 2;
        int iAns;

        iAns = ((iNo&&(++iNo2)||(iNo3++));
             = 0 || iNo3++ 
             = 0 || 2
             = 1
        */     