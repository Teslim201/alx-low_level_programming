#include "lists.h"

/**
 * sum_listint - this returns the sum of all the data (n) of
 * linked list.
 * @head: this is the head of a list.
 *
 * Return: this is the sum of all the data (n).
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
