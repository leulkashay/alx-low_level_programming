#include "main.h"

/**
* print_line -  Write a function that draws a straight line in the terminal
*
* @n: this is the entry
*
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
