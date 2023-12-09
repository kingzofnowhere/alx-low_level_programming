#include "lists.h"
/**
 * free_dlistint - This frees a dlistint_t list.
 * @head: Pointer to head of the list
 * Return: NULL
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
