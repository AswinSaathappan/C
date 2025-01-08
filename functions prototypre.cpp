#include<stdio.h>
void sum(void);
void Sum(int,int);
int sUm(int,int);
int suM(void);
int main()
{
	sum();
	int a=7,b=8,s,S;
	Sum(a,b);
	s=sUm(a,b);
	printf("Sum=%d",s);
	printf("\n");
	S=suM();
	printf("Sum=%d",S);
}
void sum(void)
{
	int a=7,b=8;
	int c;
	c=a+b;
	printf("Sum=%d",c);
	printf("\n");
}
void Sum(int a,int b)
{
	int c;
	c=a+b;
	printf("Sum=%d",c);
	printf("\n");
}
int sUm(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int suM(void)
{
    int a=7,b=8;
	int c;
	c=a+b;
	return c;	
}
