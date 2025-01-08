#include<stdio.h>
int main()
{
	char name[60];
	FILE *fp;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("File error");
	}
	else
	{
		while(fscanf(fp,"%[^\t]",name)!=EOF)
		{
			printf("%s",name);
		}
	}
	fclose(fp);
}
