#include<stdio.h>
int main()
{
	int n,a[10];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("\n Enter the array elements:");
    for(int i=0;i<n;i++)
    {
    	scanf("%d",a+i);
    	printf("\n Element a[%d]=%d\n",i,*(a+i));
	}
	return 0;
}
