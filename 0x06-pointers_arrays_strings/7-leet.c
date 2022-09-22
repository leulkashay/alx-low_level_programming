#include "main.h"

/**
* leet - function that encode a string
* @s: a string to be encoded
* Return: encoded string s
*/

char *leet(char *s)
{
	int ndx1;
	int ndx2;

	ndx1 = 0;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?','T'};

	while (s[++ndx1])
	{
		for (ndx2 = 0; ndx2 <= 7; ndx2++)
		{
			if (s[ndx1] == leet[ndx2] || 
					s[ndx1] - 32 == leet[ndx2])
			{
				s[ndx1] = ndx2 + '0';
			}
		}
	}
	return (s);
}
