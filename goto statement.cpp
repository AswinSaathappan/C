#include<stdio.h>
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if(num%2==0)
	goto even;
	else
	goto odd;
	even:
		{
			printf("%d is even",num);
			goto end;
		}
	odd:
		{
			printf("%d is odd",num);
		}
	end:
			return 0;
}
