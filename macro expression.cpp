#include<stdio.h>
#define EXP(a,b,c,x) ((2*a*x)/(a+b))
int main()
{
    int a,b,c,x;
    printf("Enter the value of a b c and x:");
    scanf("%d %d %d %d",&a,&b,&c,&x);
    printf("The value of the expression is:%d",EXP(a,b,c,x));
    return 0;
}

