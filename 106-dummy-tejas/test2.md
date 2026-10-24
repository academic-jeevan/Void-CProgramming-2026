# Heading level 1 
## Heading level 1 
### Heading level 1 
 Heading level 1 
 =====
 I love ***India***


 ```c
 #include <stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

void Scan(struct demo *pPtr);
void Print(struct demo Obj);

int main(void)
{
    struct demo Obj;

    Scan(&Obj);
    Print(Obj);

    return 0;
}

void Scan(struct demo *pPtr)
{
    printf("Enter integer : ");
    scanf("%d", &pPtr->iNo);

    printf("Enter Float : ");
    scanf("%f", &pPtr->fNo);
}

void Print(const struct demo *pPtr)
{
    printf("Integer is : %d\n", pPtr->iNo);
    printf("Float is : %f\n", pPtr->fNo);
}

 ```