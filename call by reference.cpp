#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:",&b);
	scanf("%d",&b);
	printf("\nValue of a and b before swapping:a=%d  ,  b=%d ",a,b);
	swap(&a,&b);
	printf("\nValue of a and b in main function after swapping:a=%d  ,  b=%d",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
    printf("\nValue of a and b after swapping:a=%d  ,  b=%d",*a,*b);
}
