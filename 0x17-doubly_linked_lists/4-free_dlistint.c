#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head node of list
 *
 * Description: frees list dlistint_t
 *
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
