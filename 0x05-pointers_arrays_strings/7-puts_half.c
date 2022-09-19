#include "main.h"

/**
* puts_half - Prints half of a string.
* @str: string pointer
*
* Return: void
*/

void puts_half(char *str)
{
	int i, last;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (last = 0; str[i] != '\0'; last++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
