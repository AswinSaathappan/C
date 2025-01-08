#include<stdio.h>
#include<stdlib.h>
int main()
{
  /*	int a=5,b=10
	;
	if(++a || ++b)
	{
		printf("%d  %d",a,b);
	}
	else
	{
		printf("\n Oxford");
		printf("\n Pearson");
	}
	
	//next question
	
/*	for(;;)
	{
		printf("%d",10);
	}
	return 0; */
	
	//next question
	
	/*int i=0;
	for(++i;++i;++i)
	{
		printf("%d",i);
		if(i==4)
		{
			break;
		}
	}*/
	switch(5||2|1)
	{
		case 3&2:
			printf("Windows");
			break;
			
		case -~11:
			printf("MAC");
			break;
			
		case 6-3:
			printf("UNIX");
			break;
			
		case 5>=5:
			printf("APPLE");
			break;
	}
	printf("\n");
	int x=8;
	do{
		do{
			printf("%o",x);
		}while(!-2);
	}while(0);
	printf("\n");
	char *p;
	p="Hello";
	printf("%c\n",*&*p);
	int arr[][2]={1,2,3,4,5,6,7,8,9};
	printf("%d",sizeof(arr));
}
	
