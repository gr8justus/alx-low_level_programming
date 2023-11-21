#include "lists.h"

/**
 * listint_len - get the number of elements
 * @h: singly linked list
 *
 * Description: counts the number of elements in a
 * linked list h
 *
 * Return: length of list h
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
