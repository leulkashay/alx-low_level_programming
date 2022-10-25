#include "lists.h"

/**
* free_listp - frees a linked list
* @head: head of list
* Return: nothing
*/
void free_listp(listp_t **head)
{
	listp_t *tmp;
	listp_t *unk;

	if (head != NULL)
	{
		unk = *head;
		while ((tmp = unk) != NULL)
		{
			unk = unk->next;
			free(tmp);
		}
		*head = NULL;
	}
}
/**
* print_listint_safe - prints a listint_t linked list
* @head: head of the list
* Return: number of node in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t num_node = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (num_node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_node++;
	}
	free_listp(&hptr);
	return (num_node);
}
