#include "main.h"
#include <stdio.h>

/**
* more_numbers - Print number from  0 to 14 ten times.
*
* Return: void
*/

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if ((y >= 10) && (y <= 14))
			{
				_putchar((y / 10) + '0');
			}
			
			_putchar((y % 10) + '0');
		}

		_putchar('\n');
	}
}


