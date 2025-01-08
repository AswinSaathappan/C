#include<stdio.h>
int main()
{
  int i,j,m,n;
  printf("\nEnter rows:");
  scanf("%d",&m);
  printf("\nEnter columns:");
  scanf("%d",&n);
  printf("\n");
  for(i=1;i<=m;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  		printf("*");
	  }
	  printf("\n");
}
  for(i=m-1;i>=1;i--)
  {
  	for(j=1;j<=i;j++)
  	{
  		printf("*");
	  }
	  printf("\n");
  }
}
