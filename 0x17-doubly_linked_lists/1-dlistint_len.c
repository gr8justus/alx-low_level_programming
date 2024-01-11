#include <stdlib.h>
#include "lists.h"

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
