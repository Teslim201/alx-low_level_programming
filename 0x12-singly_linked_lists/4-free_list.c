#include "lists.h"

/**
 * free_list - This Frees a list_t list.
 * @head: This is Pointer to the first node of the list.
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
