#include "function_pointers.h"

/**
* array_iterator - Write a function that executes a function given as a parameter 
* @size: size of an array
* @action: function to iterate array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size --> 0)
	{
		action(*array);
		array++;
	}
}
