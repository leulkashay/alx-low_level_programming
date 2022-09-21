#include "main.h"

/**
* *_strncat - A function concatenate two string
* @dest: pointer parameter
* @src: pointer parameter
* @n: pointer integer
*
* Return: dest pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int len, j;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++,len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
