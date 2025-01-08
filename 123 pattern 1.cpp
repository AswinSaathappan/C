#include<stdio.h>
int main()
{
	int i,j,m;
	printf("\nEnter rows and colums:");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
