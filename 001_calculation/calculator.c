#include<stdio.h>
#include"calculator.h"

//function declaration 

int main(void)
{
	int no1;
	int no2;
	int ans;

//function calls
	
	printf("Enter the first value -\t");
	scanf("%d",&no1);
	printf("Enter the second value -\t");
	scanf("%d",&no2);

	ans=addition(no1,no2);
	printf("Addition of your given values is -  %d\n",ans);
	printf("\nSubtraction of your given value is - %d\n",subtraction(no1,no2));
	ans=multiplication();
	printf("multiplication of your given values is - %d\n",ans);
	division();
	modulus(no1,no2);
	return 0;
}

	int addition(int no1,int no2)
	{
		int ans;
		ans=no1+no2;
		return ans;
	}

	void division(void)
	{
		int num;
		int den;
		printf("\nGive numerator & denomirator - \t");
		scanf("%d%d",&num,&den);
		printf("Quotient of %d & %d is %d\n",num,den,num/den);
	}

	int multiplication(void)
	{
		int no1,no2,ans;
		printf("\nEnter two numbers for multiplication - \t");
		scanf("%d%d",&no1,&no2);
		ans=no1*no2;
		return ans;
	}

	void modulus(int numerator,int denominator)
	{
		int remainder;
		remainder=numerator%denominator;
		printf("Remainder of %d%d is %d\n",numerator,denominator,reaminder);
	}

	int subtraction(int int1,int int2)
	{
		return int1-int2;
	}