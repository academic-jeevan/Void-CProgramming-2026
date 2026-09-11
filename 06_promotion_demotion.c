#include<stdio.h>

	int main(void)

	{
		int iAns;
		iAns = 2 * 3.75 + (7/2);
		printf("%d",iAns);

		return 0;      

	}

	/*
	iAns	= ((2 * 3.75) + (7/2));     // Promotion of 2 to 2.00
			= (7.50 + (7/2));           
			= (7.50 + 3);               // Promotion of 3 to 3.00
			= 10.50                     // Demotion of  10.50 to 10
	*/ 
