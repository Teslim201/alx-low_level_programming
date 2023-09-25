#include "lists.h"

/**
 * listint_len - This returns all the number of elements in
 * linked list.
 * @h: this is the head of a list.
 *
 * Return:  the numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
