#include<stdio.h>
int fact(int);
int fact(int n)
{
	int k=1;
	if(n==0)
	{
		return k;
	}
	else
	{
		return n*fact(n-1);
	}
}
	int main()
	{
		int n,n1,i=0,s=0,originalnum;
		printf("\nEnter number:");
		scanf("%d",&n);
		originalnum=n;
		while(n!=0)
		{
			n1=n%10;
			i++;
			s=s+fact(n1);
			n=n/10;
		}
		n=originalnum;
		printf("The value of sum of factorial of each digit:%d",s);
		if(s==n)
		{
			printf("\nThe number and factorial sum are equal");
		}
		else
		{
			printf("\nThe number and factorial sum are not equal");
		}
	}

