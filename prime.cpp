#include <stdio.h>

// Function to check prime number
 void checkPrime(int N)
 {
     // initially, flag is set to true or 1
    int flag = 1;

    // loop 
     for (int i = 2; i < N ; i++) 
	 {
	 // if N is perfectly divisible by i
     // flag is set to 0 i.e false
    if (N % i == 0) {
    flag = 0;
    break;
   }
   }
    if(flag==1) 
	{
	printf("The number %d is a Prime Number\n", N);
    }
    else 
	{
    printf("The number %d is not a Prime Number\n", N);
    } return;
    }



   // driver code

   int main()

   {

    int N = 7,M=20;
    checkPrime(N);
    checkPrime(M);
    return 0;
   }
 
