#include "main.h"

/**
* more_numbers - Print number from  0 to 14 ten times.
*
* Return: void
*/

void more_numbers(void)
{
	int x;
	int y;
	
	for (y = 0; y < 10; y++)
	{
		x = 0;
		
		while (x <= 14)
		{
			if (x >= 10)
			{
				_putchar(x / 10 + '0');
			}
			
				_putchar(x % 10 + '0');
			x++;
		}
		
		_putchar('\n');
	}
}


