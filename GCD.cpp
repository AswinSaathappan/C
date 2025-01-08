// C program to find GCD of two numbers 
#include <math.h> 
#include <stdio.h> 

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
	// Find Minimum of a and b 
	int min = ((a < b) ? a : b); 
	while (min > 0) { 
		// Check if both a and b are divisible by result 
		if (a % min == 0 && b % min == 0) { 
			break; 
		} 
		min--; 
	} 
	// return gcd of a nd b 
	return min; 
} 

// Driver program to test above function 
int main() 
{ 
	int a = 98, b = 56; 
	printf("GCD of %d and %d is %d ", a, b, gcd(a, b)); 
	return 0; 
} 


