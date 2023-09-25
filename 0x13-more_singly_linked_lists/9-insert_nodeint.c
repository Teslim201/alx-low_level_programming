#include "lists.h"

/**
 * insert_nodeint_at_index - this inserts a new node
 * at any given position.
 * @head: this is the head of a list.
 * @idx: this is the index of the list where the new node is
 * added to.
 * @t: this is the integer element.
 *
 * Return: this is the address of the new node, or NULL if it
 * fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int t)
{
	unsigned int t;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->t = t;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
