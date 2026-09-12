#include <stdio.h>

/* Function declaration */

int Addition(int, int);
int Subtraction(int, int);
int Multiplication(int, int);
int Division(int, int);
int Modulus(int, int);

int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;
    int iChoice;

    while (1)
    {
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &iChoice);

        if (iChoice == 6)
        {
            break;
        }

        if (iChoice <= 0 || iChoice >= 7)
        {
            printf("Wrong choice\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%d%d", &iNo1, &iNo2);

        switch (iChoice)
        {
            case 1:
                iAns = Addition(iNo1, iNo2);
                break;

            case 2:
                iAns = Subtraction(iNo1, iNo2);
                break;

            case 3:
                iAns = Multiplication(iNo1, iNo2);
                break;

            case 4:
                iAns = Division(iNo1, iNo2);
                break;

            case 5:
                iAns = Modulus(iNo1, iNo2);
                break;
        }

        printf("Answer is: %d\n", iAns);
    }

    return 0;
}

/* Function definitions */

int Addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}

int Subtraction(int iNo1, int iNo2)
{
    return iNo1 - iNo2;
}

int Multiplication(int iNo1, int iNo2)
{
    return iNo1 * iNo2;
}

int Division(int iNo1, int iNo2)
{
    return iNo1 / iNo2;
}

int Modulus(int iNo1, int iNo2)
{
    return iNo1 % iNo2;
}

/*
Output:

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 1
Enter two numbers: 10 5
Answer is: 15

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 6
*/