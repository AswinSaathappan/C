#include<stdio.h>
int main()
{
	int n, a[100],i,l=0,sum=0;
    printf("\nEnter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			a[i-1]=i;
			l++;
		}
	} 
	printf("\nDivisors of %d:",n);
	for(i=0;i<l;i++)
	{
		printf("%d  ",a[i]);
		sum=sum+a[i];
	}
	printf("\n\nSum of divisors=%d",sum);
	if(sum==n)
    {
    	printf("\n\n%d is a perfect number",n);
	}
	else
	{
		printf("\n\n%d is not a perfect number",n);
	}
}
