#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: pointer to pointer to the head node
 *
 * Description: deletes the head node of a linked
 * list - listint_t
 *
 * Return: head node data or 0 (failure)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int popped;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	popped = temp->n; /* deleted data to return */
	*head = temp->next; /* assign the next element as head */

	free(temp);

	return (popped);
}
