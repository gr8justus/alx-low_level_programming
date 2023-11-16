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

	n_members += print_member(h);
	n_members += print_member(h->next);
	return (n_members);
}

/**
 * print_member - prints a member of a list
 * @member: List
 *
 * Return: 1 if member is valid else 0.
 */
size_t print_member(const list_t *member)
{
	size_t member_status = 0;

	if ((member) != NULL)
	{
		member_status = 1;

		if ((member)->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", member->len, (member)->str);
	}
	return (member_status);
}
