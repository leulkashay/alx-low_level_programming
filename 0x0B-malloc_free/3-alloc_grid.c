#include "main.h"

/**
* alloc_grid - return a pointer
* @width: width of array
* @height: height of an array
* Return: pointer to array
*/

int **alloc_grid(int width, int height)
{
	int *arr;
	int i, j;

	i = 0;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);

	if (arr != NULL)
	{
		for (; i < height; i++)
		{
			arr[i] = (int *) malloc(sizeof(int) * width);
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					arr[i][j] = 0;
				}

			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (arr);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
