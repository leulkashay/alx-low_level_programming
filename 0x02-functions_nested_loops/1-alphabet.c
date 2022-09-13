#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0)Success)
*/
int main(void)
{
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		print_alphabet(alphabet);
	}
	
	return (0);
}
