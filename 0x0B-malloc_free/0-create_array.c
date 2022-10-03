#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - create an array of char
* @size: size of an array
* @c: character to fill the array
* Return: 0 if size = 0 or if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int ndx;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (ndx = 0; ndx < size; ndx++)
	{
		arr[ndx] = c;
	}

	return (arr);
}

