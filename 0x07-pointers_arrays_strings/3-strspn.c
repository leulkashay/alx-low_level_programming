#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring.
* @s: number of bytes in the initial segment
* @accept: consist only of bytes
* Return: the number of bytes in the initial segment of s.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					count++;
				}
			}
		}
		else
		{
			return (count);
		}
	}
	return (count);
}
