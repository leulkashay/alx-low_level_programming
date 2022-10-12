#include "function_pointers.h"

/**
* print_name -  function that prints a name
* @name: pointer parameter
* @f: function pointer w/c print name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);

}
