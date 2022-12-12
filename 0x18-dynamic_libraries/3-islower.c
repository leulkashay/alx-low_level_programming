#include "main.h"

/**
 * _islower - Returns 1 if a letter is lowercase and 0 if it is not.
 * @a: char letter
 * Return: 1 if lowercase, 0 if not lowercase
 */

int _islower(int a)
{
	if (a > 96 && a < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
