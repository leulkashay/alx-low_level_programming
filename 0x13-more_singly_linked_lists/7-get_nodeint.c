#include "lists.h"

/**
* get_nodeint_at_index - the nth node of a listint_t
* @head: head of the list
* @index: integer parameter
* Return:  returns the nth node of a listint_t linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int unk;

	for (unk = 0; unk < index && head != NULL; unk++)
	{
		head = head->next;
	}
	return (head);
}
