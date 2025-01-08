#include <stdio.h>
int recSum(int n)
{
	if (n <= 1)
		return n;
    else
	return n + recSum(n - 1);
}
int main()
{
	int n = 100;
	printf("Sum = %d ", recSum(n));
	return 0;
}

