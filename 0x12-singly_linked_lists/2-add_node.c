#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node.
 * @head: Pointer to the pointer of the head node.
 * @str: String to be added to the new node
 *
 * Description: Adds a new node to the beginning
 * of a list -list_t.
 *
 * Return: Pointer to the new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL; /* a new instance of list_t */

	if (head == NULL || str == NULL)
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
	node->next = *head; /* Head becomes the next element on the list */
	*head = node; /* Node is assigned the position of head on the list */
	return (node);
}
