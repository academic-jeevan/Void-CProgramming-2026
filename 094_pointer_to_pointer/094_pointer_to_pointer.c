#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int *p = &iNo;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****x = &s;
    int ******y = &x;
    int *******z = &y;

    // Memory addresses: iNo=100, p=200, q=300, r=400, s=500, x=600, y=700, z=800

    printf("%d\n", iNo);            // Output: 10
    printf("%d\n", &iNo);           // Output: 100
    printf("%d\n", p);              // Output: 100
    printf("%d\n", &p);             // Output: 200
    printf("%d\n", *p);             // Output: 10/(*100)
    printf("%d\n", *q);             // Output: 100
    printf("%d\n", *z);             // Output: 600
    printf("%d\n", **q);            // Output: 10
    printf("%d\n", **z);            // Output: 500
    printf("%d\n", ***r);           // Output: 10
    // printf("%d\n", *****s);      // Output: error
    printf("%d\n", *****y);         // Output: 100
    printf("%d\n", &(***r));        // Output: 100
    printf("%d\n", &(**z));         // Output: 600
    printf("%d\n", &(*q));          // Output: 200
    printf("%d\n", *(&(**z)));      // Output: 500
    printf("%d\n", &(*p));          // Output: 100
    printf("%d\n", *(&(*p)));       // Output: 10
    printf("%d\n", *(&iNo));        // Output: 10/(*100)
    
    return 0;
}