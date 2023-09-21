#include "lists.h"

/**
 * add_node - this is a function that adds
 * a new node at the beginning of  lines
 * @head: this points to the first node
 * @str: this is the string
 * Return: this is the address of the new
 * element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	/* this Sets the new node's next pointer to the current head*/
	*head = new_node;
	/*this Updates the head to point to the new node*/

	return (new_node);

}
