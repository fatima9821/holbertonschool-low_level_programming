#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *@b: the number of bytes to be allocated
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b * sizeof(char));

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
