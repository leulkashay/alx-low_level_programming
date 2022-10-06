#include "main.h"

/**
* _realloc - a function that reallocates a memory block using malloc
* @ptr: string pointer
* @old_size: is the size, in bytes
* @new_size: is the new size, in bytes
* Return: The contents will be copied to the newly allocated space
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *blk;
	unsigned int i;

	if (ptr == NULL)
	{
		blk = malloc(new_size);
		return (blk);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		blk = malloc(new_size);
		if (blk != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
			{
				*((char *) blk + i) = *((char *) ptr + i);
			}
			free(ptr);
			return (blk);
		}
		else
		{
			return (NULL);
		}
	}
}
