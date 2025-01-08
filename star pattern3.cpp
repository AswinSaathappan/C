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
  	for(j=n;j>=i;j--)
  	{
  		printf("*");
	}
	printf("\n");
  }
}
