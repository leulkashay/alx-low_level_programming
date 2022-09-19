#include "main.h"

/**
* rev_string - Print a string in reverse followed by new line
* @s: string pointer
*
* Return: Nothing
*/

void rev_string(char *s)
{
	int index, j, k, temp;

	index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	k = 0;
	j = index - 1;

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
