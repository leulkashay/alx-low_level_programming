#include "lists.h"

/**
* sum_listint - sum of all the data (n) of a listint_t
* @head: head of the list
* Return: returns the sum of all the data (n) of a listint_t
*/

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
