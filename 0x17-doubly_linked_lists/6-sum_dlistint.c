#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum all the data in dlistint_t
 * @head: head node of dlistint_t
 *
 * Return: data sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
