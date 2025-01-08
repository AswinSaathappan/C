#include<stdio.h>
#include<math.h>
int main()
{
	float P,N,R,SI,CI,x;
	printf("Enter amount:");
	scanf("%f",&P);
	printf("Enter number of years:");
	scanf("%f",&N);
	printf("Enter the rate of interest:");
	scanf("%f",&R);
	SI=(P*N*R)/100;
	x=P*pow((1+R/100),N);
	CI=x-P;
	printf("Simple interest: %f",SI);
	printf("Compund Interest: %f",CI);
	
}
