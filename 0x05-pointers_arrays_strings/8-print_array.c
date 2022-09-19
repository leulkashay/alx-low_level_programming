#include "main.h"

/**
* print_array - Prints n elements of an array integer.
* @a: string of pointer
* @n: element of an array
*
* Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}
	printf("\n");
}

