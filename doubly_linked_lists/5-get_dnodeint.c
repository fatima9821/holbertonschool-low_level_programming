#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get a node from a doubly linked list
 * @head: the head of the doubly linked list
 * @index: the index to find in the doubly linked list
 *
 * Return: the specific node of the linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
