#include "main.h"

/**
* _strncat - a function that concatenates two strings.
* @dest: the variable holds output
* @src: the variable holds input
*
* Return: dest output
*/

char *_strncat(char *dest, char *src, int n)
{
	int ndx, num;

	for (ndx = 0; dest[ndx] != '\0'; ndx++);

	for (num = 0; num < n && src[num] != '\0'; num++)
	{
		dest[ndx] = src[num];

		ndx++;
	}

	if (num < n)
	{
		dest[ndx] = '\0';
	}

	return (dest);
}
