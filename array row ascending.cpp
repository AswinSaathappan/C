#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100][100],m,n,i,j,min,temp;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of columns:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		a[i][j]=rand() % 100;
	}
	}
	printf("\nGENERATED ARRAY:");
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
	}
	
	// Editing the array
	for(i=0;i<m;i++)
	{
		for (j = 0; j < n-1; j++){
			int k;
			for (k = j+1; k < n; k++){
				if (a[i][j] > a[i][k]){
					int temp = a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = temp;
				}
			}
		}
	}
    printf("\nREGENERATED ARRAY:");
    printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
	}	
}

