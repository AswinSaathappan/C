#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter the name:");
	scanf("%s",name);
	int i=0;
	while(name[i]!='\0')
	{
		i=i+1;
	}
	printf("Length of the string: %d",i);
}
