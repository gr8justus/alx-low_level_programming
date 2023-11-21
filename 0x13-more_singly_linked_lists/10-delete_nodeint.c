#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node
 * @head: pointer to pointer to the head node
 * @index: position of node to delete
 *
 * Description: deletes the node at index from
 * linked list -listint_t
 *
 * Return: 1 (success) or -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL, *pre_node = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	while (temp != NULL)
	{
		if (i == index)
		{
			if (index == 0)
			{
				*head = temp->next;
				free(temp);

				return (1);
			}

			pre_node->next = temp->next;
			free(temp);

			return (1);
		}

		pre_node = temp;
		temp = temp->next;
		i++;
	}

	return (-1);
}
