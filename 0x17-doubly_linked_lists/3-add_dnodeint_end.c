#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a new node
 * @head: head node of dlistint_t
 * @n: integer value
 *
 * Description: adds a new node at the end of
 * dlistint_t list
 *
 * Return: address to the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t)); /* allocate memory */

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			new_node->prev = NULL;
			*head = new_node;
		}
		else
		{
			temp = *head;

			while (temp->next != NULL)
				temp = temp->next;

			new_node->prev = temp;
			temp->next = new_node;
		}
	}
	return (new_node);
}
