#include<stdio.h>
int main()
{
  int i,j,m,space;
  printf("\nEnter rows and colums:");
  scanf("%d",&m);
  printf("\n");
  for(i=1;i<=m;i++)
  {
  	for(space=1;space<=m-i;space++)
  	{
  		printf(" ");
	  }
  	for(j=1;j<=i;j++)
  	{
  		printf("* ");
	}
	printf("\n");
  }
}
