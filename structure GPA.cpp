/* Create an array of structures with three values namely {regNo, 
creditsScored, GPA} and find the following using functions. 
a. Number of students with 25 credits and GPA above 8.5 
b. Number of students earned less than 25 credits 
c. Register number of the student who has earned 25 credits and 
highest GPA*/
#include<stdio.h>
struct student
{
	int regNo;
	int credit;
	float GPA;
	int marks[4];
}s[10];
int find(struct student s[], int n);
int reg(struct student s[],int n);
int main()
{
	int n,i,j;
	printf("\nEnter no of students:(upto 10)");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nDetail of student %d",i+1);
		printf("\n\nREG NO: 2023503");
		scanf("%d",&s[i].regNo);
		printf("\nCREDIT:");
		scanf("%d",&s[i].credit);
		printf("\nGPA:");
		scanf("%f",&s[i].GPA);
		printf("\n");
		printf("\nEnter marks:");
		for(j=0;j<4;j++)
		{
			printf("\nMark of subject %d:",j+1);
			scanf("%d",&s[i].marks[i]);
		}
	
	}
		printf("\n");
	for(i=0;i<n;i++)
	{
		printf("\nDetail of student %d",i+1);
		printf("\nREG NO: 2023503%d",s[i].regNo);
		printf("\nCREDIT: %d",s[i].credit);
		printf("\nGPA: %f",s[i].GPA);
			{
			printf("\nMark of subject %d is %d",j+1,s[i].marks[i]);
		}
	}
		printf("\n");
	find(s,n);
	reg(s,n);
}
	int find(struct student s[],int n)
	{
		int i,c=0,d=0,e=0;
        float max=s[0].GPA;
		for(i=0;i<n;i++)
		{
			if(s[i].GPA>=8.5 && s[i].credit==25)
			{
				c++;
			}
		}
		printf("\nNumber of students with 25 credits and GPA above 8.5:%d ",c);
		for(i=0;i<n;i++)
		{
			if(s[i].credit<25)
			{
				d++;
			}
		}
		printf("\nNumber of students earned less than 25 credits :%d ",d);
		for(i=0;i<n;i++)
		{
			if(max<s[i].GPA)
			{
				max=s[i].GPA;
			}
		}
		printf("\n Maximum GPA:%f",max);
		for(i=0;i<n;i++)
		{
			if(s[i].GPA==max && s[i].credit==25)
			{
				e++;
			}
			printf("\nstudents having highest GPA and credits equals to 25 and their regno: 2023503%d",s[i].regNo);
		}
		printf("\nNo of students having highest GPA and credits equals to 25:%d",e);
			printf("\n");
}
		int reg(struct student s[],int n)
		{
			int rno,i,j;
          printf("\nEnter the regno:2023503%d");			
          scanf("%d",&rno);
          for(i=0;i<n;i++)
          {
          	if(s[i].regNo==rno)
          	{   printf("\nCredit: %d",s[i].credit);
          	    printf("\nGPA: %d",s[i].GPA);
          		for(j=0;j<4;j++)
          		{
          			printf("\nMark of subject %d id %d",j+1,s[i].marks[i]);
				  }
			  }
		  }
		}

 
