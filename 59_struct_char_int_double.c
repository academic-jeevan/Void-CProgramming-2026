#include <stdio.h>

struct demo
{
    char chchar;
    int iNo;
    double dno;
};

int main(void)
{
    struct demo obj;

    printf("%c\t%d\t%.2lf\n", obj.chchar, obj.iNo, obj.dno);  //G1 G2 G3 

    obj.chchar = 'A';
    printf("%c\t%d\t%.2lf\n", obj.chchar, obj.iNo, obj.dno);  //A G2 G3

    obj.iNo = 10;
    printf("%c\t%d\t%.2lf\n", obj.chchar, obj.iNo, obj.dno);  //A 10 G3

    obj.dno = 99.99;
    printf("%c\t%d\t%.2lf\n", obj.chchar, obj.iNo, obj.dno);  //A 10 99.99

    return 0;
}

/*
Output:

╟       16214747        0.00
A       16214747        0.00
A       10              0.00
A       10              99.99
*/