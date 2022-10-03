#include "main.h"

/**
* _strdup -  function returns a pointer to a new string
* which is a duplicate of the string str
* @str: pointer string
* Return: pointer allocated
*/

char *_strdup(char *str)
{
	char *new;
	int ndx, len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (ndx = 0; str[ndx]; ndx++)
		len++;

	new = malloc(sizeof(char) * (len + 1));

	if (new == NULL)
	{
		return (NULL);
	}

	for (ndx = 0; str[ndx]; ndx++)
	{
		new[ndx] = str[ndx];
	}
	new[len] = '\0';

	return (new);
}
