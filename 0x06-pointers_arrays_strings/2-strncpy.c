#include "main.h"

/**
* _strncpy - a function that copies a string.
* @dest: the variable holds output
* @src: the variable holds input
* @n: size of the string
*
* Return: dest output string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int ndx;

	for (ndx = 0; ndx < n && src[ndx] != '\0'; ndx++)
	{
		dest[ndx] = src[ndx]'
	}
	for (;ndx < n; ndx++)
	{
		dest[ndx] = '\0';
	}
	return (dest);
}
