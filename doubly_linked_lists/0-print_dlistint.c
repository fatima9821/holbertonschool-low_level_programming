#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a dlistint list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
