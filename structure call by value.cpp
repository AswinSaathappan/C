// C program to pass structure as an argument to the
// functions using Call By Value Method
#include <stdio.h>
#include<string.h>

struct car {
	char name[30];
	int price;
};

void print_car_info(struct car c)
{
	printf("Name : %s", c.name);
	printf("\nPrice : %d\n", c.price);
}

int main()
{
	struct car c = { "Tata", 1021 };
	struct car a;
	strcpy(a.name,"audi");
	a.price=10000;
	print_car_info(c);
	print_car_info(a);
	return 0;
}

