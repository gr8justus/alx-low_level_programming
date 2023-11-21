#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node
 * @head: pointer to pointer to head node
 * @idx: position to insert new node
 * @n: integer value
 *
 * Description: inserts a new node at index in a
 * linked list
 *
 * Return: pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *pre_node = NULL, *temp = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(listint_t));

			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = temp;

			if (temp == *head)
				*head = new_node;
			else
				pre_node->next = new_node;

			return (new_node);
		}

		pre_node = temp;
		temp = temp->next;
		i++;
	}

	return (NULL);
}
