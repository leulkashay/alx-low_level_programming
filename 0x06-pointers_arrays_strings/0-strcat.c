#include "main.h"

/**
* *_strcat - A function that concantenate two string.
* @dest: pointer parameter
* @src: pointer parameter
*
* Return: pointer dest output
*/

char *_strcat(char *dest, char *src)
{
	int len, j;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
