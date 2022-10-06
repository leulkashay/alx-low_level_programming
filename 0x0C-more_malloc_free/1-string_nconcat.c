#include "main.h"

/**
* string_nconcat - concatnate two string
* @s1: first string parameter
* @s2: second string parameter
* @n: size of string
* Return:  returned pointer point to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int length, ndx;

	length = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ndx = 0; s1[ndx]; ndx++)
		length++;
	cat = malloc(sizeof(char) * (length + 1));

	if (cat == NULL)
		return (NULL);
	length = 0;

	for (ndx = 0; s1[ndx]; ndx++)
		cat[length++] = s1[ndx];
	for (ndx = 0; s2[ndx] && ndx < n; ndx++)
		cat[length++] = s2[ndx];
	cat[length] = '\0';
	return (cat);
}
