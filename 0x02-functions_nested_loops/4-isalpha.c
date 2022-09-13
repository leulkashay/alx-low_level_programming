#include "main.h"

/**
* _isalpha - Checks if character is alphabetic.
* @c: The character to be checked.
*
* Return: 1 if the character is letter, lowercase or uppercase, other 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
