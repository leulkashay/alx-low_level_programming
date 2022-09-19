#include "main.h"

/**
* print_rev - Print a string in reverse
* @s: string pointer
*
* Return: Nothing
*/

void print_rev(char *s)
{
	int index, i;

	index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
