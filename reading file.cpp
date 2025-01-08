#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
	int main()
	{
		char ch;
		char str[40];
		FILE *fp;
		fp=fopen("abc.txt","r");
	if(fp==NULL)
	
	{
	 printf("Error");
	 exit(1);
	}

   else
   {
   	while(!feof(fp))
   	{
   		ch=fgetc(fp);
   		printf("%c",ch);
	}
	printf("\n\n");
	fseek(fp, 0, SEEK_SET);
	while(!feof(fp))
	{
   fgets(str,40,fp);
   printf("%s",str);
    }
   fclose(fp);
}
}

