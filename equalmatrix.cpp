#include<stdio.h>
int main()
{
int m,n,i,j,p,q,flag=1;
printf("Enter the matrix of order m:");
scanf("%d",&m);
printf("Enter the matrix of order n:");
scanf("%d",&n);
int a[m][n];
printf("Enter the array elements:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("Enter elements (%d,%d):",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("\nTHE MATRIX IS:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Enter the matrix of order p:");
scanf("%d",&p);printf("Enter the matrix of order q:");
scanf("%d",&q);
int b[p][q];
printf("Enter the array elements:\n");
for(i=0;i<p;i++)

{
for(j=0;j<q;j++)
{
printf("Enter elements (%d,%d):",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
printf("THE MATRIX IS:\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
if((m==p)&&(n==q))
{
printf("Matrices can be compared");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
if(a[i][j]!=b[i][j])  
{
flag=0;
break;
}
}
}
}
else
{
printf("The matrices cannot be compared\n");
}
for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
		if((m==q) && (n==p))
		{
		flag=0;
		break;
	   }
	}
}
if(flag==1)
printf("\nTwo matrices are equal");
else
printf("\nTwo matrices are not equal");
return 0;
}

