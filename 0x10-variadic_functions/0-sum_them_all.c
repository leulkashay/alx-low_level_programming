#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all -  a function that returns the sum of all its parameter
* @n: input parameter
* Return: If n == 0, return 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	int sum = 0;
	unsigned int y;

	va_start(x, n);

	if (n != 0)
	{
		for (y = 0; y < n; y++)
		{
			sum += va_arg(x, int);
		}
	}
	va_end(x);
	return (sum);
}
