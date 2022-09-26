#include "main.h"
#include <stdlib.h>

/**
* *_strpbrk -  a function that searches a string for any of a set of bytes
* @s: input string
* @accept: pointer parameter
* Return:  a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
