#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of list h.
 * @h: List to print
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n_members = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		n_members++;
		h = h->next;
	}
	return (n_members);
}
