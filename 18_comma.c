#include <stdio.h>

   int main(void)
    
    {
        int iAns1, iAns2, iAns3;        // , separator

        iAns1 = 10,20,30;              // , operator 10
        iAns2 = (10,20,30);            // , operator 30

        printf("%d,%d", iAns1, iAns2); // , separator - 10,30

        iAns3 = Fun();

        printf("Function Returned %d", iAns3); // separator

        return 0;
    }

    int Fun(void)
    {
        return 1,-1,0;                 // operator 0 , return 3 times nahi hou shakat
        
    }