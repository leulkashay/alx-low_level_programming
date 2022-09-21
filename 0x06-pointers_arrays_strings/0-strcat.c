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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];

		i++;
	}
	return (dest);
}




