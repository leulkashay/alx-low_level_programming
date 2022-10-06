#include "main.h"

/**
* _calloc - a function that allocates memory for an array, using malloc
* @nmemb: element of an array
* @size: size of an array
* Return: memory is set to zero
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			arr[i] = 0;
		return (arr);
	}
	else
	{
		return (NULL);
	}
}

