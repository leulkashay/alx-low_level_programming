#include "main.h"

/**
* _puts - Prints string followed by new line.
* @str: pointer parameter
*
* Return: Nothing
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
