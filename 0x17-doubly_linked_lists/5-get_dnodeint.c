#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of node list
 * @index: node index in list
 *
 * Return: address of node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int iterator = 1, list_size;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	list_size = dlistint_len(head); /* determine list size */

	if (index > list_size)
		return (NULL);

	while (iterator <= index)
	{
		iterator++;
		temp = temp->next;
	}
	return (temp);
}

/**
 * dlistint_len - get the number of elements
 * @h: head node of dlistint_t
 *
 * Description: gets the number of elements in
 * linked list dlistint_t
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_node = 0;

	while (h != NULL)
	{
		n_node++;
		h = h->next;
	}
	return (n_node);
}
