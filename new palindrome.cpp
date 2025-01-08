#include<stdio.h>
#include<string.h>
int main()
{
	int k,i;
	char name[50];
	char name1[50];
	printf("Enter the string:");
	scanf("%s",name);
	k=strlen(name);
	for(i=0;i<k;i++)
	{
		name1[i]=name[k-i-1];
	}
	name1[i]='\0';
	printf("The reversed string :%s",name1);
	if(strcmp(name,name1)==0)
	{
		printf("\nThe given word is palindrome");
	}
	else
	{
		printf("\nThe word is not a palindrome");
	}
}
