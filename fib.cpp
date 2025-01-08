#include<stdio.h>
void fibonacciSeries(int n)
{
   int a=0, b=1, c;
   c=a+b;
   printf("%d , %d , %d ",a,b,c);
   for(int i=4; i<=n; i++)
    {
    	printf(",");
    	a=b;
    	b=c;
    	c=a+b;
    	printf(" %d",c);
	  }  
}

int main()
{
   int term;

   printf("Enter the term: ");
   scanf("%d", &term);

   printf("The fibonacci series is: \n");

   fibonacciSeries(term);

   return 0;
}
