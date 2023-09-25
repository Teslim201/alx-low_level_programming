#include "lists.h"

/**
 * print_listint - This prints all  elements of a list.
 * @h: this is this head of a list.
 *
 * Return: the numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
