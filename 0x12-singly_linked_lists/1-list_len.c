#include <stdio.h>
#include "lists.h"

/**
 * list_len - gets the number of elements in a linked list.
 * @h: List head
 *
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t n_members = 0;

	while (h != NULL)
	{
		n_members++;
		h = h->next;
	}
	return (n_members);
}
