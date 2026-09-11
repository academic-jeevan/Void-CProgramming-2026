#include<stdio.h>
	int main(void)
	{
		printf("%d%%d=%d\n",9,2,9%2);			//Wrong output 9%d=2
		printf("%d%%%d=%d\n",9,2,9%2);			//9%2=1
		printf("%d%%%d=%d\n",9,-2,9%-2);		//9%-2=1
		printf("%d%%%d=%d\n",-9,2,-9%2);		//-9%2=-1
		printf("%d%%%d=%d\n",-9,-2,-9%-2);		//-9%-2=-1

		return 0;
	}