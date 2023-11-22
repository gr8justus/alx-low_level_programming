#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: pointer to pointer to head node of list
 *
 * Description: reverses the nodes of a singly
 * linked list -listint_t
 *
 * Return: pointer to the new head node or NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre_node = NULL, *next_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);


	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = pre_node;
		pre_node = *head;
		*head = next_node;
	}

	*head = pre_node;
	return (*head);
}
