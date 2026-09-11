#include <stdio.h>

    int main(void)
    {
        char ch = 'A';
        int iNo = 10;
        float fNo = 73.80f;
        double dNo = 62.80;

        printf("%d\n", sizeof(char));           //1
        printf("%d\n", sizeof(int));            //4
        printf("%d\n", sizeof(float));          //4
        printf("%d\n", sizeof(double));         //8

        printf("%d\n", sizeof(ch));             //1  
        printf("%d\n", sizeof(iNo));            //4
        printf("%d\n", sizeof(fNo));            //4
        printf("%d\n", sizeof(dNo));            //8

        printf("%d\n", sizeof('A'));            //4
        printf("%d\n", sizeof(20));             //4
        printf("%d\n", sizeof(99.99));          //8
        printf("%d\n", sizeof(99.99f));         //4

        printf("%d\n", sizeof 10);              //4
        printf("%d\n", sizeof iNo);             //4
        //printf("%d\n", sizeof int);           //error

        printf("%d\n", iNo);                    //10
        printf("%d\n", sizeof(++iNo));          //4
        printf("%d\n", iNo);                    //10

        printf("%d\n", sizeof(void));           //0

        return 0;
    }