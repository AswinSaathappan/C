#include<stdio.h>
#include<string.h>
int main()
{
	int N,p,l;
	char str[50];
	printf("Enter the number:");
	scanf("%d",&N);
	printf("\nEnter the position:");
	scanf("%d",&p);
	sprintf(str,"%d",N);
	printf("\n%s",str);
	l=strlen(str);
	printf("\nLength of str:%d",l);
	for(int i=0;i<l;i++)
	{
		if(i==p)
		{
			str[i]='0';
		}
	}
	printf("\n");
	for(int i=0;i<l;i++)
	{
		printf("%c",str[i]);
	}
	
}
