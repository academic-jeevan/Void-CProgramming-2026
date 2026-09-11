#include <stdio.h>

	int main(void)
	{
		int iNo = 10;
		int iAns;

		printf("%d\n",iNo );			//10

		iAns = iNo--;
		printf("%d\n",iAns);			//10
		printf("%d\n",iNo);				//9

		iAns = --iNo;
		printf("%d\n",iAns);			//8
		printf("%d\n",iNo);				//8

		printf("%d\n",--iNo);			//7
		printf("%d\n",iNo);				//7

		printf("%d\n",iNo--);			//7
		printf("%d\n",iNo);				//6

		printf("%d\n",- -iNo);			//6

		//printf("%d\n",10--);

		return 0;

	}
