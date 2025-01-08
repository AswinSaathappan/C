#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	float *ptr;
	printf("\nEnter no of elements:");
	scanf("%d",&n);
	ptr=(float*)malloc(n*sizeof(float));
	if(ptr==NULL)
	{
		printf("\nError");
		exit(1);
	}
	else
	{
		printf("\nMemory allocated succesfully");
	}
	printf("\nEnter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%f",ptr+i);
	}
	printf("Printing array ellemnts:");
	for(i=0;i<n;i++)
	{
		printf("%f\t",*(ptr+i));
	}
	free(ptr);
}
