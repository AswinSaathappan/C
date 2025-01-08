#include<stdio.h>
	union job{
	int empno;
	char name[80];
	float salary;
    }u;
struct job1
{
	int empno;
	char name[80];
	float salary;
}s;
int main()
{
	printf("\n size of union %d",sizeof(u));
	printf("\n size of structure %d",sizeof(s));
}

