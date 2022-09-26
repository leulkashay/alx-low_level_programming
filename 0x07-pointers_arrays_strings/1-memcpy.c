#include "main.h"

/**
* *_memcpy - A function that copies a memory 
* @dest: pointer parameter
* @src: pointer parameter
* @n: size of the byte to copy
*
* Return:  dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
