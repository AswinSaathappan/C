#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[20],revname[20];
	printf("Enter the name:");
	gets (name);
	int i=0,equal=1;
	int n=strlen(name);
	for(i=0;i< n;i++)
	{
		revname[i]=name[n-i-1];
	}
	revname[i]='\0';
	printf("The reversed string is %s",revname);
	while(name[i]!='\0'||revname[i]!=0)
	{
		if(name[i]!=revname[i])
		{
			equal=0;
			break;
		}
		i++;
	}
	if(equal=0)
	{
		printf("\nThe give string is not a palindrome");
	}
	else
	{
		printf("\nThe given string is not a palindrome");
	}
}
