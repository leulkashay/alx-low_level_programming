#include "main.h"

/**
* print_times_table - Prints the times of table,starting with 0.
* @n: parameter
*
* Returns: nothing
*/
void print_times_table(int n)
{
	int digit, res, mul;
	
	if (n <= 15 && n >= 0)
	{
		for (digit = 0; digit <= n; digit++)
		{
			_putchar('0');
			
			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');

				res = digit * mul;
				if (res <= 99)
				{
					_putchar(' ');
				}
				if (res <= 9)
				{
					_putchar(' ');
				}
				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

