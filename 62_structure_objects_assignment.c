#include<stdio.h>

struct demo
{
    int lNo;
    float fNo;
};

int main()
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    printf("Enter obj1 values \n");
    printf("Enter integer\t");
    scanf("%d",&obj1.lNo);
    printf("Enter float\t");
    scanf("%f",&obj1.fNo);

    obj2 = obj1;
    obj3.lNo = obj1.lNo;
    obj3.fNo = obj1.fNo;

    printf("\nobj1 values are:\n");
    printf("Integer is %d\n",obj1.lNo);
    printf("Float is %f\n",obj1.fNo);

    printf("\nobj2 values are:\n");
    printf("Integer is %d\n",obj2.lNo);
    printf("Float is %f\n",obj2.fNo);

    printf("\nobj3 values are:\n");
    printf("Integer is %d\n",obj3.lNo);
    printf("Float is %f\n",obj3.fNo);

    return 0;
}
/*
    Enter obj1 values
    Enter integer   10
    Enter float     20

    obj1 values are:
    Integer is 10
    Float is 20.000000

    obj2 values are:
    Integer is 10
    Float is 20.000000

    obj3 values are:
    Integer is 10
    Float is 20.000000
*/