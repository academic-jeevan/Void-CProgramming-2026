#include <stdio.h>

	int main(void)
	{
		int iNo = 10;
		int iAns1;
		int iAns2;

		printf("%d\n",iNo);				//10

		iAns1 = ++iNo;					
		printf("%d\n",iAns1);			//11
		printf("%d\n",iNo);				//11	

		iAns2 = iNo++;					//11

		printf("%d\n",iAns2);			//11
		printf("%d\n",iNo);				//12

		printf("%d\n",iNo++);			//12
		printf("%d\n",iNo);				//13

		printf("%d\n",++iNo);			//14
		printf("%d\n",iNo);				//14

		++iNo;
		printf("%d\n",iNo);				//15

		iNo++;
		printf("%d\n",iNo);				//16

		printf("%d\n",iNo+1);			//17
		printf("%d\n",iNo);				//16

		printf("%d\n",+ +iNo);			//16
		printf("%d\n",iNo);				//16			

		/*
		printf("%d\n",10 ++);			//
		printf("%d\n",++ 10);			//
		*/

		return 0;
	}