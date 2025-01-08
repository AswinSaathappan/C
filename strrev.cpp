#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[20],revname[20];		
	printf("Enter the name:");
	gets (name);
	int i;
	int n=strlen(name);
	for(i=0;i< n;i++)
	{
		revname[i]=name[n-i-1];
	}
	revname[i]='\0';
	printf("The reversed string is %s",revname);
}
