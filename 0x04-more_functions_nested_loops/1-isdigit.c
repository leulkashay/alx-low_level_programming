#include "main.h"

/**
* _isdigit -Checks for digit(through 0 to 9).
* @c: is parameter
*
* Return: 1 if uppercase, otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

