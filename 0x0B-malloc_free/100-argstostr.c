#include "main.h"

/**
* argstostr - a function that concatenates all the arguments
* @ac: int parameter
* @av: pointer parameter
* Return: pointer to new string
*/

char *argstostr(int ac, char **av)
{
	char *new_str = NULL;
	int k, i, j, sum, temp;

	k = 0;
	i = ac;
	sum = 0;
	temp = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	while (ac--)
		sum += (len(av[ac]) + 1);
	new_str = (char *) malloc(sum + 1);

	if (new_str != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				new_str[j + temp] = av[k][j];
			new_str[temp + j] = '\n';
			temp += (j + 1);
			k++;
		}
		new_str[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_str);
}

/**
* len - return length of string
* @str: string parameter
* Return: return length
*/

int len(char *str)
{
	int len = 0;

	if (str != NULL)
		while (str[len])
			len++;
	return (len);
}
