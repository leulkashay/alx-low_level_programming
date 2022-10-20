#include "lists.h"

/**
* free_list - a function that frees a list_t list
* @head: the first  ele
* Return: nothing
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}

}
