#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node
 * @head: head node of dlistint_t
 * @n: integer value
 *
 * Description: adds a new node at the begining
 * of dlistint_t list
 *
 * Return: address to the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t)); /* allocate memory */

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;

		if (*head != NULL)
			(*head)->prev = new_node;

		*head = new_node;
	}
	return (new_node);
}
