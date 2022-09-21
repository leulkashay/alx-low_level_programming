#include "main.h"

/**
* reverse_array - A function reverse a content of array
* @a: pointer array content
* @n: integer parameter
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

