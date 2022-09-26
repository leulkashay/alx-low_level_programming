#include "main.h"

/**
* *_memset - A function that fills memory with constant bytes.
* @s: pointer to memory
* @b: constant bytes
* @n: size of bytes
*
* Return: a pointer with constant byte
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
