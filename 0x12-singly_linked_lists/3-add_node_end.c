#include "lists.h"

/**
 * add_node_end - This Adds a new node at the end of a list_t list.
 * @head: this is the Pointer to the pointer to the first node of the list.
 * @str: this is The string to be stored in the new node.
 * Return: this Address of the new node, or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (str == NULL)
		return (NULL);

	/* This Allocates memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* This Initialize the new node with the data */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* If the list is empty, make it the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* This Traverse to the end of the list */
		current = *head;
		while (current->next != NULL)
			current = current->next;

		/* This Append the new node to the end */
		current->next = new_node;
	}

	return (new_node);
}
