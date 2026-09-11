#include<stdio.h>

int main(void)
{
	printf("Hello\n");           //Hello
	//printf(""Hello"\n");         //error
	printf("\"Hello\"\n");       //"Hello"
	printf("\'hello\'\n");       //'Hello'
	printf("Hello?\n");          //Hello?
	printf("Hello\?\n");         //Hello?
	printf("\temp\bit\new\n");   //No error but the \t,\b,\n these escape sequenses will taken.
	
	/*
		emin
	ew
	*/

	printf("\\temp\\bin\\new\n"); //\temp\bin\new
	printf("Hello\aWorld\n");     //HelloWorld
	printf("Hello\tWorld\n");     //Hello   World
	printf("Hello\fWorld\n");     // Form feed
	printf("Hello\rWorld\n");     // Carriage return
	printf("Hello\vWorld\n");     // Vertical tab
	printf("Hello\0World\n");     // Stops at \0
	return 0;

}
