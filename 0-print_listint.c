#include "lists.h"

/**
 * print_listint - Prints all the elements
 * @h: Linked list of type listint_t
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
