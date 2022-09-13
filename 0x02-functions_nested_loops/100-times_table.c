#include "main.h"

/**
* print_times_table - Prints the n times table, starting with zero.
*
* @n: the value of the table to be printed.
*/
void print_times_table(int n)
{
	int num, mul, prod;

	if (n >= 15 && n <= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mul;

				if (prod <= 99)
				{
					_putchar(' ');
				}
				if (prod <= 9)
				{
					_putchar(' ');
				}
				if (prod <= 100)
				{
					_putchar((prod / 10) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}

				_putchar((prod % 10) + '0');
			}

			_putchar('\n');

		}
	}
}

