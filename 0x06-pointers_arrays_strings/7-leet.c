#include "main.h"

/**
* leet - encoded a string
* @s: string
* Retrun: return encoded string
*/

char *leet(char *s)
{
	int i;
	int j;
	char s[] = "a4e3o0t7l1";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s[j] || s[i] == s[j] - 32)
			{
				s[i] = s[j + 1];
				break;
			}
		}
		i++;
	}
	return (s);
}
