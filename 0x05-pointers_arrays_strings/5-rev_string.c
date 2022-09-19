#include "main.h"

/**
* rev_string - Print a string in reverse followed by new line
* @s: string pointer
*
* Return: Nothing
*/

void rev_string(char *s)
{
	int index, i, j, temp;

	index = 0;

	for (index = 0; s[index] != '\0'; index++);

	i = 0;
	j = index - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j++;
	}
}
