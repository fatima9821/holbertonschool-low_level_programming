#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a linked lists
 * @head: the pointer to the first node of linked list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
