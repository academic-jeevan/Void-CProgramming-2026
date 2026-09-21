#include <stdio.h>

union demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    union demo obj;

    printf("%d\n %d\n %d\n\n", obj.iNo1, obj.iNo2, obj.iNo3);

    obj.iNo1 = 10;
    printf("%d\n %d\n %d\n\n", obj.iNo1, obj.iNo2, obj.iNo3);

    obj.iNo2 = 20;
    printf("%d\n %d\n %d\n\n", obj.iNo1, obj.iNo2, obj.iNo3);

    obj.iNo3 = 30;
    printf("%d\n %d\n %d\n\n", obj.iNo1, obj.iNo2, obj.iNo3);

    return 0;
}

/*
Output:

G1 
G1 
G1

10 
10 
10

20 
20 
20

30 
30 
30
*/