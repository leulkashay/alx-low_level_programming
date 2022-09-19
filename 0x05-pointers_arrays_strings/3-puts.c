#include "main.h"

/**
* _puts - Prints string followed by new line.
* @str: pointer parameter
*
* Return: Nothing
*/

void _puts(char *str)
{
	int index;

	index = 0;

	while (*str != '\0')
	{
		_putchar(*str);

		index++;

		str++;
	}
	_putchar('\n');
}
