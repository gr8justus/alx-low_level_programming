#include "lists.h"

/**
 * free_listint2 - frees listint_t
 * @head: pointer to pointer to start of linked list
 *
 * Description: removes memory allocated to
 * linked list and sets head to null
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node = NULL, *next_node = NULL;

	if (head == NULL)
		return;

	current_node = *head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = NULL;
		current_node = next_node;
	}

	*head = NULL;
}
