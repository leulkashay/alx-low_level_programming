#include "main.h"

/**
* *string_toupper -  A function changes lowercase to uppercase
* @s: pointer parameter
*
* Return: *s
*/

char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] -= 32;
		}
	}
	return (s);
}
