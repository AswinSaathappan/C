#include<stdio.h>
#define PI 3.1416
int main()
{
	float r,D,C,SA,V;
	printf("Enter radius:");
	scanf("%f",&r);
	D=2*r;
	C=2*PI*r;
	SA=4*PI*r*r;
	V=(4/3)*PI*r*r*r;
	printf("Diameter of sphere: %f",D);
	printf("\nCircumference of sphere: %f",C);
	printf("\nSurface area of sphere: %f",SA);
	printf("\nVolume of sphere: %f" ,V);
}
