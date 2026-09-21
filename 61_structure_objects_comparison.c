#include<stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

int CompareObjects(struct demo, struct demo);

int main(void)
{
    int iAns;
    struct demo obj1;
    struct demo obj2;

    printf("Enter obj1 values,\n");
    printf("Enter integer:\t");
    scanf("%d", &obj1.iNo);

    printf("Enter float:\t");
    scanf("%f", &obj1.fNo);

    printf("Enter obj2 values,\n");
    printf("Enter integer:\t");
    scanf("%d", &obj2.iNo);

    printf("Enter float:\t");
    scanf("%f", &obj2.fNo);

    printf("\nobj1 values are,\n");
    printf("Integer is %d\n", obj1.iNo);
    printf("Float is %f\n", obj1.fNo);

    printf("\nobj2 values are,\n");
    printf("Integer is %d\n", obj2.iNo);
    printf("Float is %f\n", obj2.fNo);

    iAns = CompareObjects(obj1, obj2);

    if(iAns == 1)
        printf("Objects are equal");
    else
        printf("Objects are not equal");

    return 0;
}

int CompareObjects(struct demo obj1, struct demo obj2)
{
    if(obj1.iNo == obj2.iNo && obj1.fNo == obj2.fNo)
        return 1;

    return 0;
}


/*
    Enter obj1 values,
Enter integer:  10
Enter float:    20
Enter obj2 values,
Enter integer:  10
Enter float:    20

obj1 values are,
Integer is 10
Float is 20.000000

obj2 values are,
Integer is 10
Float is 20.000000
Objects are equal
*/