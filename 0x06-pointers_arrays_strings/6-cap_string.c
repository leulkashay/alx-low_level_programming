#include "main.h"

/**
* cap_string - write a function that capitalze a first string 
* @s: string to captailze
* Return: capitalze first string
*/

char *cap_string(char *s)
{
	int i;

	i = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	while (s[i] != '\0')
	{
		if ((s[i - 1] == '' || s[i - 1] == '\t' 
				|| s[i - 1] == '\n' || s[i - 1] == ',' 
				|| s[i - 1] == ';' || s[i - 1] == '.' 
				|| s[i - 1] == '!' || s[i - 1] == '?' 
				|| s[i - 1] == '"' || s[i - 1] == '(' 
				|| s[i - 1] == ')' || s[i - 1] == '{' 
				|| s[i - 1] == '}') 
				&& (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
