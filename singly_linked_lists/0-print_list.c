#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of list
 * @h: A linked list
 * Description : here is a simple description of the function
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count_node++;
		h = h->next;
	}
	return (count_node);
}
