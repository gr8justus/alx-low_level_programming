#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print the elements of a list
 * @h: head node of dlistint
 *
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_node = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n_node++;
	}
	return (n_node);
}
