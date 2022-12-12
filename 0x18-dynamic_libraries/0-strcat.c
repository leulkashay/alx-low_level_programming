#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string,
 *		overwriting the terminating null byte (\0) at the end of dest
 *		and then adds a terminating null byte.
 * @dest: Appended string from srcc
 * @src: String source
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (dest[length] != '\0')
	{
		++length;
	}

	for (i = 0; src[i] != '\0'; ++i, ++length)
	{

		dest[length] = src[i];

	}

	dest[length] = '\0';

	return (dest);

}
