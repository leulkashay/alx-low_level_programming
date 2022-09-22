#include "main.h"

/**
* _strncat - write a function that concatenate two string.
* @dest: pointer parameter
* @src: pointer parameter
* @n: integer parameter
* Return: dest pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
