#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the number of rows:");
	scanf("%d",&m);
	printf("Enter the number of  columns:");
	scanf("%d",&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d      ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<m;i++)
	{
		a[i][i]=0;
	}
	/*for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d      ",a[i][j]);
		}
		printf("\n");
	}*/
	for(i=0;i<m;i++)
	{
		for(j=3;j<n;j-2-i)
		{
			a[i][j]=0;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d      ",a[i][j]);
		}
		printf("\n");
	}
}
