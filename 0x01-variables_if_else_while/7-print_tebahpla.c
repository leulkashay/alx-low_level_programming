#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return : Always 0(success)
 */
int main(void)
{
	char alpha;

	for(alpha = 'Z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	
	putchar("\n");

	return (0);
}
