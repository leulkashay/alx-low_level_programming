#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times in lowercase
*
*/
void print_alphabet_x10(void)
{
	char low;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			_putchar(low);
		}
		_putchar('\n');
	}

}
