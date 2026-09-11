#include <stdio.h>

	int main(void)
	
	{
	    int iNo1 = 0;
	    int iNo2 = 1;
	    int iNo3 = 2;
	    int iAns;

	    iAns = ++iNo1 || iNo2++ && ++iNo3;

	    printf("\t%d\n \t%d\n \t%d\n \t%d\n", iNo1, iNo2, iNo3, iAns);

	    return 0;
	}

	/*
	iNo1 = 0       0
	iNo2 = 1       1
	iNo3 = 2       2
	iAns = 1       1

	iAns = ((++iNo1) || (iNo2++ && ++iNo3))
	     = ++iNo1 ||
	     = 1
	*/