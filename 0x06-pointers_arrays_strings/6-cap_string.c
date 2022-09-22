#include "main.h"

/**
* cap_string - write a function that capitalze a first string 
* @s: string to captailze
* Return: capitalze first string
*/

char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[++i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			i++;
		}
		
		if (s[i - 1] == ' ' || s[i - 1] == '\t' ||
				s[i - 1] == '\n' || s[i - 1] == ',' ||
				s[i - 1] == ';' || s[i - 1] == '.' ||
				s[i - 1] == '!' || s[i - 1] == '?' ||
				s[i - 1] == '"' || s[i - 1] == '(' ||
				s[i - 1] == ')' || s[i - 1] == '{' ||
				s[i - 1] == '}')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
