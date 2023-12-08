#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create -  creates a hash table
 * @size:the size of the array
 *
 * Return: a pointer to the newly created hash table, or NULL if it wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *h;

	if (size == 0)
		return (NULL);

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);

	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
	{
		free(h);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		h->array[i] = NULL;

	h->size = size;

	return (h);
}
