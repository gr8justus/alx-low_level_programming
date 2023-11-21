#include "lists.h"

/**
 * add_nodeint_end - add new node
 * @head: pointer to pointer of the head node
 * @n: integer value
 *
 * Description: adds a new node at the end of the
 * linked list
 *
 * Return: pointer to the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL, *current_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL; /* new_node is the last element of the list */

	if (*head == NULL)
		*head = new_node;
	else
	{
		current_node = *head;
		/* moves down the list to the last element */
		while (current_node->next != NULL)
			current_node = current_node->next;

		current_node->next = new_node;
	}

	return (new_node);
}
