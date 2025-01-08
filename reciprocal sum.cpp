#include<stdio.h>
int main()
{
	int n;
	float i,sum=0;
	printf("Enter the number of terms:");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	printf("\nThe value of 1+ 1/2 + 1/3 + 1/4 +.....+ 1/n is %f",sum);
}
