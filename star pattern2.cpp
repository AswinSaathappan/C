#include<stdio.h>
int main()
{
  int i,j,m;
  printf("\nEnter rows and columns:");
  scanf("%d",&m);
  printf("\n");
  for(i=1;i<=m;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  		printf("*");
	}
	printf("\n");
  }
}
