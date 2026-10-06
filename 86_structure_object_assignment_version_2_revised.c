#include <stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

void ObjectAssign(const struct demo *pObj1, struct demo *pObj2, struct demo *pObj3);

int main(void)
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    printf("Enter obj1 values\n");

    printf("Enter integer : \t");
    scanf("%d", &obj1.iNo);

    printf("Enter float : \t");
    scanf("%f", &obj1.fNo);

    obj2 = obj1;

    obj3.iNo = obj2.iNo;
    obj3.fNo = obj2.fNo;

    printf("\nobj1 values are\n");
    printf("Integer is : %d\n", obj1.iNo);
    printf("Float is : %f\n", obj1.fNo);

    printf("\nobj2 values are\n");
    printf("Integer is : %d\n", obj2.iNo);
    printf("Float is : %f\n", obj2.fNo);

    printf("\nobj3 values are\n");
    printf("Integer is : %d\n", obj3.iNo);
    printf("Float is : %f\n", obj3.fNo);

    ObjectAssign(&obj1, &obj2, &obj3);

    return 0;
}

void ObjectAssign(const struct demo *pObj1, struct demo *pObj2, struct demo *pObj3)
{
    pObj2->iNo = pObj1->iNo;
    pObj2->fNo = pObj1->fNo;

    *pObj3 = *pObj1;
}