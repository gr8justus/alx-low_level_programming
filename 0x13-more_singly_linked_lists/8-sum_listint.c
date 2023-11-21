#include "lists.h"

/**
 * sum_listint - sum listint-t data
 * @head: pointer to the head node
 *
 * Description: Sums all the data of linked list
 * - listint_t
 *
 * Return: data sum or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
