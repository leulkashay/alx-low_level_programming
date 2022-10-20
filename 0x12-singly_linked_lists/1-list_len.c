#include "lists.h"

/**
* list_len -function that returns the number of elements in a linked list_t
* @h: points to list
* Return: returns the number of element
*/

size_t list_len(const list_t *h);
{
	size_t member = 0;

	while (h)
	{
		member++;
		h = h->next;
	}
	return (member);
}
