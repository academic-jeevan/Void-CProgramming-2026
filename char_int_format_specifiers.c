#include<stdio.h>

int main(void)

{
	int iNo1 = 66;
	int iNo2 = 'B';
	char chChar1 = 'A';
	char chChar2 = 65;

	printf("iNo1(int)=%d\n",iNo1);             //iNo1(int) = 66
	printf("iNo1(char)=%c\n",iNo1);            //iNo1(Char) = B

	printf("%d\n",iNo2);                       //66 
	printf("%c\n",iNo2);                       //B

	printf("%d\n",chChar1);                    //65
	printf("%c\n",chChar1);                    //A
	
	printf("%d\n",chChar2);                    //65
	printf("%c\n",chChar2);                    //A

	return 0;
}