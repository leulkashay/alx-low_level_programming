#include "main.h"

/**
* _strlen - Computes the length of  string
* @s: pointer variable
*
* Return: the length of string
*/

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}

	return n;
}
