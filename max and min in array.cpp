#include<stdio.h>
int main()
{
	int a[10],i,max,min;
		printf("\nArray:\n");
		for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
		min=a[0];
		max=a[0];
		for(i=0;i<10;i++)
		{
			if(min>a[i])
			{
				min=a[i];
			}
			if(max<a[i])
			{
				max=a[i];
			}
		}
	printf("\nMinimum of the array:%d",min);
	printf("\nMaximum of the array:%d",max);
}
