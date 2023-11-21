#include "lists.h"

/**
 * get_nodeint_at_index - get a node
 * @head: pointer to the head node
 * @index: position of the node in the list
 *
 * Description: gets the node at the index from
 * a linked list
 *
 * Return: node at index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
