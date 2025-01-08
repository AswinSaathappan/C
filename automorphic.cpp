#include<stdio.h>
#include<math.h>
int main()
{
	int n,n1,sqr,originalnum,sqrlast,lastnum=0,originalsqr,i,j;
    printf("\nEnter the number:");
	scanf("%d",&n);
	sqr=n*n;
	printf("Square of %d is %d",n,sqr);
	originalnum=n;
	while(n!=0)
	{
		n1=n%10;
	    n=n/10;
		i++;
	}
	printf("\nNo of digits in n: %d",i);
	n=originalnum;
	//originalsqr=sqr;
	for(j=0;j<i;j++)
	{
	sqrlast=sqr%10;	
	lastnum=lastnum+sqrlast*pow(10,j);
	sqr/=10;
    }
    printf("\nThe lastnum of sqr number is %02d",lastnum);
    //sqr=originalsqr;
    if(n==lastnum)
    {
    	printf("\nThe number is automorphic");
	}
	else
	{
		printf("\nThe number is not automorphic");
	}
}
