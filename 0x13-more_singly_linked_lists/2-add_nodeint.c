#include "lists.h"

/**
 * add_nodeint - add new node
 * @head: pointer to pointer of head node
 * @n: integer value
 *
 * Description: adds a new node to the beginning
 * of a linked list
 *
 * Return: pointer to new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
