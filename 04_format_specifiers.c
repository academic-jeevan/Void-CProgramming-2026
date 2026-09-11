#include<stdio.h>

int main(void)

{
	int iNo1;

	printf("%d\n",-10);                      //-10
	printf("%u\n",-10);                      //4294967286

	printf("%d\n",77);                       //77
	printf("%o\n",77);                       //115
	printf("%x\n",77);           			 //4d
	printf("%X\n",77);            			 //4D

	printf("%d\n",115);           			 //115
	printf("%d\n",0115);          			 //77
	printf("%d\n",0x4d);          			 //77
	printf("%d\n",0X4D);          			 //77

	printf("%p\n",&iNo1);         			 //003FF7D8
	printf("%x\n",&iNo1);         			 //3ff7d8
	printf("%d\n",&iNo1);          			 //4192216
 
	printf("%c\n", 'A');                     // A

	printf("%d\n", 12345);           	     // 12345
	printf("%ld\n", 123456789L);     		 // 123456789
	printf("%hd\n", (short)123);      	  	 // 123
 
	printf("%u\n", 12345U);           	  	 // 12345
	printf("%lu\n", 123456789UL);        	 // 123456789
	printf("%hu\n", (unsigned short)123);    // 123

	return 0;
}
