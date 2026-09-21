#include <stdio.h>

struct demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    struct demo obj;

    printf("%d\n %d\n %d\n", obj.iNo1, obj.iNo2, obj.iNo3);

    obj.iNo1 = 10;
    printf("%d\n %d\n %d\n", obj.iNo1, obj.iNo2, obj.iNo3);

    obj.iNo2 = 20;
    printf("%d\n %d\n %d\n", obj.iNo1, obj.iNo2, obj.iNo3);

    obj.iNo3 = 30;
    printf("%d\n %d\n %d\n", obj.iNo1, obj.iNo2, obj.iNo3);

    return 0;
}
/*
    G1
    G2
    G3

    10
    G2
    G3

    10
    20
    G3

    10
    20
    30
*/