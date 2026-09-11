#include <stdio.h>

	int main(void)
	{
		printf("%d\n", 1 && 0);				//0
		printf("%d\n", 1 && 1);				//1
		printf("%d\n", 1 || 1);				//1
		printf("%d\n", 0 || 0);				//0				
		printf("%d\n",    ! 1);				//0
		printf("%d\n",    ! 0);				//1

		printf("%d\n",  10 && -10);			//1
		printf("%d\n",  10 || -10);			//1
		printf("%d\n", -10 || -10);			//1
		printf("%d\n", -10 && -10);			//1
		printf("%d\n", -10 &&  -0);			//0

		return 0;

	}