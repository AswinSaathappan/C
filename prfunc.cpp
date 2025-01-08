#include<stdio.h>
int rev(int);
int palindrome(int,int);
	int main()
	{
		int num,REV;
		printf("Enter number:");
		scanf("%d",&num);
		REV=rev(num);
		printf("Reverse number:%d",REV);
	    palindrome(num,REV);
	}
int rev(int num)
{
	int s=0,r;
	while(num!=0)
	{
		r=num%10;
		s=(s*10)+r;
		num=num/10;
	}
	return s;
	 
}
int palindrome(int num,int REV)
{
	if(num==REV)
	{
		printf("\nThe number is palindrome");
	}
	else
	{
		printf("\nThe number is not palindrome");
	}
}

