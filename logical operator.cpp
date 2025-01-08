#include<stdio.h>
int main()
{
	printf(" CONDITION                RETURN VALUE\n");
	printf("(9>2) &&  (9<2)         %d\n",(9>2) &&  (9<2));
    printf("(9>2) &&  (1<2)         %d\n",(9>2) &&  (1<2));
	printf("(9>2) ||  (9<2)         %d\n",(9>2) ||  (9<2));
	printf("(9>2) ||  (1<2)         %d\n",(9>2) ||  (1<2));
	printf("!(9>2)                  %d\n",!(9>2));
    printf("!(9<2)                  %d",!(9<2));
}
