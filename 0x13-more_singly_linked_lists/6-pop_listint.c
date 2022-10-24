#include "lists.h"

/**
* pop_listint - unction that deletes the head node of a listint_t
* @head: head of the list
* Return:  the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	int y_node;
	listint_t *h;
	listint_t *unk;

	if (*head == NULL)
		return (0);
	unk = *head;
	y_node = unk->n;
	h = unk->next;

	free(unk);

	*head = h;

	return (y_node);
}
