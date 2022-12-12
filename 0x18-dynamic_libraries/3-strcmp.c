
#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: pointer to first string
 * @s2: pointer to the second string
 * Return: if s1 < s2 or s1 > s2 (-)/(+)difference
 *         of the first unmatched characters respectively
 *         if s1 == s2 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
