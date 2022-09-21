#include "main.h"

/**
* _strcat - a function that concatenates two strings.
* @dest: the variable holds string
* @src: the variable source of string
*
* Return: dest 
*/

char *_strcat(char *dest, char *src)
{
	int ndx = 0;
	int dest_len = 0;

	while (ndx[ndx++])
	{
		dest_len++;
	}
	
	for (ndx = 0; src[ndx]; ndx++)
	{
		dest[dest_len++] = src[ndx];
	}

	return (dest);
}
