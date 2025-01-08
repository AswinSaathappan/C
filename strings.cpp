#include<stdio.h>
#include<string.h>
int main()
{
	int k,len1;
	char name[]="Kalai";
	char NAME[]="Mani";
    char target[30];
	k=strcmp(name,NAME);
	printf("\nCompare string: %d",k);
	strcat(name,NAME);
	printf("\nConcatenated string: %s",name);
	char s[]="ASWIN";
	printf("\nUpper to lower:");
	puts(strlwr(s));
	char S[]="aswin";
	printf("Lower to upper:");
	puts(strupr(S));
	strcpy(target,name);
	printf("Copied string: %s",target);
	printf("\nThe reversed string is : %s",strrev(target));
	printf("\nThe reversed string is : %s",strrev(s));
    printf("\nThe reversed string is : %s",strrev(S));
	len1=strlen(s);
	printf("\nLength of string s is %d",len1);	
	
}
