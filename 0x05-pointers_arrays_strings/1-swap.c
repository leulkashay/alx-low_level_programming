#include "main.h"

/**
* swap_int - Swap the value of two integer
* @a: first parameter
* @b: second parameter
*
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
