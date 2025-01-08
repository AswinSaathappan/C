#include<stdio.h>
int main()
{
	int a[]={2,4,3,0,7};
	int *p;
	int *q;
	p=&a[0];
	q=&a[4];
	printf("p-q=%d",p-q);
	printf("\nq-p=%d",q-p);
}
