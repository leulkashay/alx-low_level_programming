#include "main.h"

/**
* _memcpy -  function copies n bytes from
*	     memory area src to memory area dest
* @dest: pointer to copied memory area
* @src: memory area to copy
* @n: number of bytes
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{

		dest[n - 1] = src[n - 1];

		n--;

	}
	return (dest);

}
