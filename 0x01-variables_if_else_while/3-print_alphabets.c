#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : Always 0(succes)
 */
int main(void)
{
	char alpha;

	for( alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

 		putchar("\n");

	for( alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
}
