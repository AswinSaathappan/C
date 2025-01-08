#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	a=3.31*pow(10,-8)*2.01*pow(0,-7);
	b=7.16*pow(10,-6)+(2.01*pow(10,-3));
	c=a/b;
	printf("Result is %e",c);
}
