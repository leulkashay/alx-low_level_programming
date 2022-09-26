#include "main.h"

/**
* *_memcpy - A function that copies a memory area
* @dest: pointer parameter
* @src: pointer parameter
* @n: size of bytes to copy
*
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
