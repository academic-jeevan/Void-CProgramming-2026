#include <stdio.h>

	int main(void)
	{
	    int iNO1 = 0;
	    int iNO2 = 1;
	    int iNO3 = 2;
	    int iAns;

	    iAns = (iNO1 && (++iNO2)) && (iNO3++);

	    printf("\t%d\n \t%d\n \t%d\n", iNO1, iNO2, iNO3, iAns);
	    return 0;
	}

		/*
		iNO1 = 0;
		iNO2 = 1;
		iNO3 = 2;
		iAns = 0;

		iAns = ((iNO1 && (++iNO2)) && (iNO3++))
	     = 0 && iNO3++
	     = 0;
		*/