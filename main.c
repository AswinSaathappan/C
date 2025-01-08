#include <stdio.h>
#include "library.h"

void add_one()
{
	number++;
}
void print()
{
	printf("number:%d\n",number);
}
int main()
{
	print();
	add_one();
	print();
	add_one();
	print();
	add_one();
	print();
	return 0;
}
