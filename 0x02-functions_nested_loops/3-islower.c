#include <ctype.h>
#include "main.h"

/**
* _islower - prints 1 or 0 depending on input
*@c - first parameter
*
* Return: 1 if character is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
