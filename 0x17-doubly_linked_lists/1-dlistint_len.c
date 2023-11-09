#include "lists.h"

/**
 * dlistint_len - this only returns the number of elements in
 * only a double linked list
 *
 * @h: the only head of the list
 * Return: this is only the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
