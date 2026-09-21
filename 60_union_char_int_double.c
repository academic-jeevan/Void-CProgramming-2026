#include <stdio.h>

union demo
{
    char chchar;
    int iNo;
    double dno;
};

int main(void)
{
    union demo obj;

    printf("%c\t%d\t%.2lf\n", obj.chchar, obj.iNo, obj.dno);  //G1 G2 G3 

    obj.chchar = 'A';
    printf("%c\t%d\t%.2lf\n", obj.chchar, obj.iNo, obj.dno);  //A G2 G3

    obj.iNo = 10;
    printf("%c\t%d\t%.2lf\n", obj.chchar, obj.iNo, obj.dno);  //A G4 G5 

    obj.dno = 99.99;
    printf("%c\t%d\t%.2lf\n", obj.chchar, obj.iNo, obj.dno);  //G6 10 G7 G8 G9 99.99

    return 0;
}

/*
Output:

É       6370192         0.00
A       6370113         0.00

        10              0.00
Å       687194767       99.99
*/