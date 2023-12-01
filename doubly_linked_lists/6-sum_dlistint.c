#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all data in the doubly linked list
 * @head: the head of the linked list
 *
 * Return: the sum of all data
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
