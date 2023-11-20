#include "lists.h"

/**
 * print_listint - print the elements of a list
 * @h: singly linked list
 *
 * Description: prints all the elements of linked
 * list h to stdout
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
