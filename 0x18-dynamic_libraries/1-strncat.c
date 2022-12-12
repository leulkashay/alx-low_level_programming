#include "main.h"

/**
 * _strncat - This function appends the src string to the dest string,
 *		overwriting the terminating null byte (\0) at the end of dest
 *		and then adds a terminating null byte.
 * @dest: Appended string from srcc
 * @src: String source
 * @n: The number of bytes from src to be appended to dest
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	while (dest[length] != '\0')
	{
		++length;
	}

	for (i = 0; src[i] != '\0' && i < n; ++i, ++length)
	{

		dest[length] = src[i];

	}

	dest[length] = '\0';

	return (dest);

}
