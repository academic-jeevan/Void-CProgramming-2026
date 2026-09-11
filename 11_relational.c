#include <stdio.h>

	int main(void)
	{
		printf("%d\n", 20<10);				//0
		printf("%d\n", 20<20);				//0
		printf("%d\n", 10<20);				//1
		printf("%d\n", 10==20);				//0
		printf("%d\n", 10>=20);				//0
		printf("%d\n", 10>=10);				//1
		printf("%d\n", 20==20);				//1
		printf("%d\n", 20!=10);				//0
		//printf("%d\n", 10|=20);				//1 but, when Compiled (13) : error C2106: '|=' : left operand must be l-value

		printf("%d\n", 10<=20==1);			//1
		/*
		(10 < = 20 = = 1)
		1 = = 1
		1
		*/
		printf("%d\n", 10>20!=0);			//0
		/*
		(10 > 20) ! = 0	
		0 ! = 0
		0
		*/
		printf("%d\n", 10!=20<5);			//1
		/*
		10 ! = (20 < 5)
		10 ! = 0
		1
		*/

		return 0;

	}