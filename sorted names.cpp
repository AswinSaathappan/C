#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,position,res;
	char a[60][100],temp[60];
	printf("Enter number of names:");
	scanf("%d",&n);
	printf("\nGiven array of names:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
		
	}
	for(i=0;i<n-1;i++)
	{
		position=i;
	
			for(j=i+1;j<n;j++)
			{
				res=strcmp(a[position],a[j]);
				if(res>0)
				position=j;
			}
	if(position!=i)
	{
		strcpy(temp,a[i]);
		strcpy(a[i],a[position]);
		strcpy(a[position],temp);
	}
	}
	printf("Sorted array of names:");
	for(i=0;i<n;i++)
	{
		printf("\n%s",a[i]);
	}
}
