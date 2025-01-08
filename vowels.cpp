#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int vowels(char str[])
{
	int i,j,c;
	char vow[]={'a','e','i','o','u','A','E','I','O','U'};
	while(str[i]!='\0')
	{
		for (int j = 0; j < 10; j++)
		{
		if(str[i]==vow[j])
	    {
	    	c++;
	    	break;
        }		
		}
		i++;
	}
	return c;
}
int main()
{
	char str[50];
	printf("\nEnter the string:");
	gets(str);
	printf("\nNo of vowels in the given string %d",vowels(str));
}
