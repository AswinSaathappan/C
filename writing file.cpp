#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char ch='a';
	int b=10;
	char a[10]="ASWIN";
	char c[10];
 FILE *fp;
 fp=fopen("abc.txt","w");
 if(fp==NULL)
 {
 	printf("Error");
 }
 printf("File opened successfully");
 printf("Enter a string:");
 scanf("%s",c);
 fprintf(fp,"%d",b);
 fprintf(fp,"\n");
 fputc(ch,fp);
 fprintf(fp,"\n");
 fputs(a,fp);
 fprintf(fp,"\n");
 fprintf(fp,"%d %c %s\n",b,ch,a);
 for(int i=0;i!=strlen(a);i++)
 {
 	fputc(a[i],fp);
 }
 fprintf(fp,"\n");
 fputs(c,fp);
 fclose(fp);
 }
