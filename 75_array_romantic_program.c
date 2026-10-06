#include <stdio.h>

int main(void)
{
    int Arr[5] = {10, 20, 30, 40, 50};

    printf("%d\n", &Arr);
    // &Arr (1D array) -> address of 1D
    // 100-120 (base address)

    printf("%d\n", Arr);
    // 1D name -> element address
    // 100-104

    printf("%d\n", &Arr + 1);
    // 1D size ne pudhe
    // 120

    printf("%d\n", Arr + 1);
    // element size ne pudhe
    // 104

    printf("%d\n", Arr[2]);
    // 1D -> 2nd element (nav) -> (value)
    // 30

    printf("%d\n", Arr[2] + 1);
    // value + 1
    // 31

    printf("%d\n", &Arr[2]);
    // 1D -> 2nd element nav -> element address
    // 108-112

    printf("%d\n", &Arr[2] + 1);  //integer chya size ne pudhe gela
    // element size ne pudhe
    // 112

    printf("%d\n", &Arr[3]);
    // element size ne pudhe
    // 112

    printf("%d\n", Arr[2] + 2);
    // 32

    printf("%d\n", &Arr[2] + 2);
    //element size ne pudhe 
    //116

	/*
		printf("%d\n",Arr++);				//error    
		//arr = arr + 1 -> 100 = 100 + 1 -> 100 = 104(L-Value Required).

		printf("%d\n",++Arr);				//error    
		//arr = arr + 1 -> 100 = 100 + 1 -> 100 = 104(L-Value Required).
	*/

    return 0;
}