#include <stdio.h>

int main(void)
{
    printf("size of(int)=%d\n",sizeof(int));                                   // 4

    
    printf("size of(short int)%d\n",sizeof(short int));                        // 2

    printf("size of(long int)%d\n",sizeof(long int));                          // 4

    printf("size of(long long int)%d\n",sizeof(long long int));                // 8

 
    printf("size of(char)=%d\n",sizeof(char));                                 // 1
   
   
   // printf("size of(char)=%d\n",sizeof(short char));                           // error C2632: 'short' followed by 'char' is illegal
    
   // printf("size of(char)=%d\n",sizeof(long char));                            // error C2632: 'long' followed by 'char' is illegal

  //  printf("size of(char)=%d\n",sizeof(long long char));                       // error C2632: '__int64' followed by 'char' is illegal

   
    printf("size of(float)=%d\n",sizeof(float));                               // 4
   

   // printf("size of(float)=%d\n",sizeof(short float));                         // error C2632: 'short' followed by 'float' is illegal

   // printf("size of(float)=%d\n",sizeof(long float));                          // warning C4215: nonstandard extension used : long float

  //  printf("size of(float)=%d\n",sizeof(long long float));                     // error C2632: '__int64' followed by 'float' is illegal
 
   
     printf("size of(double)=%d\n",sizeof(double));                            // 8
     

    // printf("size of(double)=%d\n",sizeof(short double));                      // error C2632: 'short' followed by 'double' is illegal
     
     printf("size of(double)=%d\n",sizeof(long double));                       // 8
     
    // printf("size of(double)=%d\n",sizeof(long long double));                  // error C2632: '__int64' followed by 'double' is illegal
   
    return 0;

}
