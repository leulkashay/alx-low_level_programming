#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all -  a function that returns the sum of all its parameter
* @n: input parameter
* Return: If n == 0, return 0
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list xi;
	int sum = 0;
	unsigned int y;

	va_start(xi, n);

	if (n != 0)
	{
		for (y = 0; y < n; y++)
		{
			sum += va_arg(xi, int);
		}
	}
	va_end(xi);
	return (sum);
}
