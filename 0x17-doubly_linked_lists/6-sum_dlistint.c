#include "lists.h"

/**
 * sum_dlistint - this only returns the sum of all the data (n)
 * the only of a doubly linked list
 *
 * @head: the only head of the list
 * Return: the only sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
