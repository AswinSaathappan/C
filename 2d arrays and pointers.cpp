#include<stdio.h>
int main()
{
	int a[3][4]={ {11,22,22,44},
	             {55,66,77,88},
	             {99,11,22,33} };
    int i,j;
    int (*p)[4];
    p=a;
    for(i=0;i<3;i++)
    {
    	printf("\nAddress of %d th array %u",i,(a+i));
    	printf("\nAddress of %d th array %u",i,*(a+i));
    	printf("\nAddress of %d th array %u",i,p+i);
    	printf("\nAddress of %d th array %u",i,*(p+i));
		    	for(j=0;j<4;j++)
    	{
        printf("\na[%d][%d]=%d",i,j,*(*(a+i)+j));
        printf("\nAddress of a[%d][%d] is %u",i,j,(*(a+i)+j));
		printf("\nAddress of a[%d][%d] is %u",i,j,&a[i][j]);
		printf("\na[%d][%d] is %d",i,j,*(*(a+i)+j));
		printf("\na[%d][%d] is %d",i,j,*(*(p+i)+j));
		printf("\nAdress of a[%d][%d] is %u\n\n",i,j,(*(p+i)+j));
	    }
	}
		printf("\n\n");
	}
	

