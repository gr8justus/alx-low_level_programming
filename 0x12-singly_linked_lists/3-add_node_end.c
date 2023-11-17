#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end.
 * @head: Pointer to the pointer of the head node.
 * @str: String to be added to the new node
 *
 * Description: Adds a new node at the end
 * of a list -list_t.
 *
 * Return: Pointer to the new element or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL, *current = NULL; /* a new instance of list_t */

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));

	if (node == NULL) /* Memory allocation failure */
		return (NULL);
	node->str = strdup(str); /* Saves a copy of str to memory */

	if (node->str == NULL) /* str copy failure */
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = NULL; /* The last element of the list */

	if (*head == NULL)
		*head = node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
	return (node);
}
