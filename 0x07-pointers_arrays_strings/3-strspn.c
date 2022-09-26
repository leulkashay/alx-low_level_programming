#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring.
* @s: number of bytes in the initial segment
* @accept: consist only of bytes
* Return: the number of bytes in the initial segment of s.
*/

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		S++;
		accept = start;
		if (flag == 0)
			break;
	}
	return count;
}
