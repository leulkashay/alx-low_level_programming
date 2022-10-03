#include "main.h"

/**
* str_concat - concante two strings
* @s1: string pointer parameter
* @s2: string pointer parameter
* Return: pointer should point to a newly allocated space in memory
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int ndx, con_ndx = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (ndx = 0; s1[ndx] || s2[ndx]; ndx++)
		len++;
	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
	{
		return (NULL);
	}
	for (ndx = 0; s1[ndx]; ndx++)
		concat[con_ndx++] = s1[ndx];
	for (ndx = 0; s2[ndx]; ndx++)
		concat[con_ndx++] = s2[ndx];
	return (concat);
}
