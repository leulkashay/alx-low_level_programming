#include "main.h"

/**
* *_strncpy - A function that copies astring
* @dest: pointer parameter
* @src: pointer parameter
* @n: pointer to integer
*
* Return: dest pointer output
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
