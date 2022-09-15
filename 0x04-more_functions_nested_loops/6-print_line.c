#include "main.h"

/**
* print_line - Print line dependent on the integer n.
* @n : The number of '_' characters to use
* Return: Void.
*/

void print_line(int n)
{
	int c = 0;
	
	while ((c <  n) && (n > 0))
	{
		_putchar('_');
		
		c++;
	}

	_putchar('\n');

}
