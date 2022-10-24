#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t
* @head: head of thelist
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		h = h->next;
		num_node++;
	}
	return (num_node);
}
