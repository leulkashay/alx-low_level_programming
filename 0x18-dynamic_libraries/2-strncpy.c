#include "main.h"

/**
 * _strncpy - copies the string pointed to by src,
 *	     including the terminating null byte (\0),
 *	     to the buffer pointed to by dest.
 * @src: string to copy
 * @dest: pointer to buffer to copy to
 * @i: The maximum number of bytes to copied from src
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int i)
{
	int count = 0;
	int j;

	while (src[count])
	{
		count++;
	}

	for (j = 0; src[j] && j < i; j++)
	{
		dest[j] = src[j];
	}

	for (j = count; j < i; j++)
	{
		dest[j] = '\0';
	}
	return (dest);

}
