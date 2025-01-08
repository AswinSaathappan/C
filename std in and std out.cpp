#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a;
  fprintf(stdout,"\nEnter the number:");
  fscanf(stdin,"%d",&a);
  fprintf(stdout,"The number is :%d",a);
  fprintf(stdout,"\nHello world");
}

