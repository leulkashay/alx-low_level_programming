#include <stdio.h>

/**
* main - Finds and print the first 98 fabianoacci, starting at 1 and 2.
*
* Return: Always 0.
*/

int main(void)
{
	int len;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (len = 0; len < 92; len++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}
	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;

	for (len = 93; len < 99; len++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;

		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (len != 98)
		{
			printf(", ");
			fib1_half1 = fib2_half1;
			fib1_half2 = fib2_half2;
			fib2_half1 = half1;
			fib2_half2 = half2;
		}
	}
	printf("\n");
	return (0);
}
