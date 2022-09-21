#include "main.h"

/**
* _strcmp - A function that compares two string
* @s1: pointer parameter
* @s2: pointer parameter
*
* Return: result
*/

int _strcmp(char *s1, char *s2)
{
	int i, Res;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}

	Res = s1[i] - s2[i];
	
	return (Res);
}
