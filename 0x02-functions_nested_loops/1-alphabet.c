#include <stdio.h>
#include "main.h"

/**
* print_alphabet - prints alphabet in lowercase, followed by new line.
*
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
