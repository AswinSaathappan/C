/*Create a file of structures with each structure having Product name, unit price.

Create another file of structures with each structure consists of Product name and quantity required.

Using both files, print a simple invoice with the following details.

SI No, Product name, quantity required, unit price, amount item wise and total invoice value.*/
#include<stdio.h>
#include<stdlib.h>
struct product
{
	char name[50];
	int price;
	int quantity;
}p;
int main()
{
	int amt[50];
	char ch,CH,name1[50],name2[50];
	FILE *f1,*f2;
	f1=fopen("pro1.txt","w");
	f2=fopen("pro2.txt","w");
	if(f1==NULL || f2==NULL)
	{
		printf("\nError");
	}
	/*fprintf(f1,"NAME        QUANTITY\n");
	fprintf(f2,"NAME          PRICE\n");*/
	do
	{
		printf("\nEnter product name:");
		scanf("%s",p.name);
		
		printf("\nEnter quantity:");
		scanf("%d",&p.quantity);
		
		printf("\nEnter price:Rs");
		scanf("%d",&p.price);
		
		
		fprintf(f1,"%s         %d\n",p.name,p.quantity);
        fprintf(f2,"%s         %d\n",p.name,p.price);
        
		
		printf("\nWant to continue:(Y/N)");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	fclose(f1);
	fclose(f2);
	f1=fopen("pro1.txt","r");
	f2=fopen("pro2.txt","r");
	int j=0;

	// Read data from both files
    printf("\n\nSimple Invoice\n");
    printf("--------------------------------------------------\n");
    printf("SI No.  Product Name  Quantity  Unit Price  Amount\n");
    printf("--------------------------------------------------\n");

    int siNo = 1;
    while (fscanf(f1, "%s %d", p.name, &p.quantity) != EOF &&
           fscanf(f2, "%s %d", name2, &p.price) != EOF) {
        int amount = p.quantity * p.price;
        printf("%-7d %-13s %-9d %-11d %d\n", siNo++, p.name, p.quantity, p.price, amount);
    }

    fclose(f1);
    fclose(f2);
}
