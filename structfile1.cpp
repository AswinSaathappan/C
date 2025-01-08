#include<stdio.h>
#include<stdlib.h>
struct employee
{
	char name[50];
	char gender;
	int empId;
}emp;
int main()
{
	FILE *m,*f;
	m=fopen("m.txt","w");
	f=fopen("f.txt","w");
	if(m==NULL || f==NULL)
	{
		printf("\nError opening file");
	}   fprintf(m,"EmpId                Empname");
	    fprintf(f,"EmpId                Empname");
	while(1)
	{
		printf("\nEnter employee Id:");
		scanf("%d",&emp.empId);
		if(emp.empId==0)
		{
			break;
		}
		printf("\nEnter employee name:");
		scanf("%s",emp.name);
		printf("\nEnter employee gender:");
		scanf(" %c",&emp.gender);
		if(emp.gender=='M'||emp.gender=='m')
		{
			fprintf(m,"%d           %s",emp.empId,emp.name);
		}
		else if(emp.gender='F'||emp.gender=='f')
		{
			fprintf(f,"%d           %s",emp.empId,emp.name);
		}
		else
		{
			printf("Invalid gender!");
		}
}
	fclose(m);
	fclose(f);
}
