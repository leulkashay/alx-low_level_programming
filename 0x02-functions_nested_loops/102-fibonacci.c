#include <stdio.h>

/**
* main - Prints the first 50 fibonacci number, starting wit 1 and 2.
*
* Return: Always 0.
*/
int main(void)
{
	int len;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (len = 0; len < 50; len++)
	{
		sum = fib1 + fib2;
		printf("%ul", sum);

		fib1 = fib2;
		fib2 = sum;

		if (len == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
