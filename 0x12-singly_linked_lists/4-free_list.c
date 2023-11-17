#include "lists.h"

/**
 * free_list - free memory allocated to a list.
 * @head: Pointer to the beginning of a list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current = NULL, *next = NULL;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		next = current->next;
		if (current->str != NULL)
			free(current->str);
		current->str = NULL;
		free(current);
		current = next;
	}
}
