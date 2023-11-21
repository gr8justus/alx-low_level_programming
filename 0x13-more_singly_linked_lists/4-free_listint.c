#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: pointer to start of linked list
 *
 * Description: removes memory allocated to
 * linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *next_node = NULL;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = NULL;
		head = next_node;
	}
}
