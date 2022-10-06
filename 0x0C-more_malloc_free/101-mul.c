#include "main.h"

/**
* mul - a function to multiply an argument
* @argv: an array of argument
* @argc: number of argument
* Return: return
*/
int mul(int argc, unsigned int *argv)
{
	if (argc > 2)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[0] / 10 != 0 || argv[1] / 10 != 0)
	{
		printf("Error\n");
		exit(98);
	}

	int res = argv[0] * argv[1];

	printf(res);

	return (0);
}
