#include "main.h"

/**
* *_strchr - A function that locate a character in a string.
* @s: a string pointer
* @c: character to search
* Return: a pointer to the first occurrence of the character c in the string s.
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
