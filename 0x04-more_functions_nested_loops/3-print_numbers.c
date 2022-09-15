#include "main.h"

/**
* print_numbers - Prints numbers from zero to 9.
*
* Return: nothing
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
