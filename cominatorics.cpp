

#include <stdio.h>

int fact(int num);

int main()
{
    int n, r, ncr_var;

    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\nEnter the value of r:");
    scanf("%d", &r);
    ncr_var = fact(n) / (fact(r) * fact(n - r));
    printf("\nThe value of C(%d,%d) is: %d",n,r,ncr_var);
}

int fact(int num)
{
    int k = 1, i;
     //factorial of 0 is 1
    if (num == 0)
    {
     return k;
    }
	else
    {
       for (i = 1; i <= num; i++)
	   {
         k = k * i;
       }
	return k;
    }                                                                       
}
/*int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}*/
