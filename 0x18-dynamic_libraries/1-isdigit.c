#include "main.h"

/**
 * _isdigit - A function that checks for a number between 0-9
 * @c: An input character
 * Return: 1 if c is 0-9 or 0 otherwise
 */

int _isdigit(int c)

{

	if (c > 47 && c < 58)

		return (1);

	return (0);

}
