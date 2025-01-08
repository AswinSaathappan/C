#include<stdio.h>
int main()
{
  int i,j,m,n,space;
  printf("\nEnter rows:");
  scanf("%d",&m);
  printf("\nEnter columns:");
  scanf("%d",&n);
  printf("\n");
  for(i=m;i>=1;i--)
  {
  	for(space=1;space<=m-i;space++)
  	{
  		printf(" ");
	  }
  	for(j=1;j<=(2*i)-1;j++)
  	{
  		printf("*");
	}
	printf("\n");
  }
}
