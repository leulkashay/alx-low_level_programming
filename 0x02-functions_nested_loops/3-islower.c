#include <ctype.h>
#include "main.h"

/**
* _islower - a function that checks for a lowercase character
*
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
