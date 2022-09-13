#include <stdio.h>
#include "main.h"

/**
* print_alphabet - a function that prints the alphabet in lowercase, followed by new lines
*
* Return: Always 0)Success)
*/
void print_alphabet(void)
{
	int alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
	
	
}
