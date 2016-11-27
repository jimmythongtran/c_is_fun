#include <stdio.h>
int factorial (int n)
{
	int product, i;

	product = 1;
	for (i = 1; i <= n; i++);
	{
		product *= i;
	}
	return (product);
}
