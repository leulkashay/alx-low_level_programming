#include <unistd.h>

/**
 * _putchar - prints out _putchar and a new line \n
 * Return: 0 on success
 * Returns: a on success
 */

int _putchar(char a)
{

	return (write(1, &a, 1));
}
