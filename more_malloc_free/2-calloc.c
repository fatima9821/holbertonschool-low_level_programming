#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_calloc - function allocates an array of nmemb elements of size bytes
 *@nmemb: nomber of array elements
 *@size: size of each element
 *Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	for (k = 0; k < (nmemb * size); k++)
		ptr[k] = 0;
	return (ptr);
}
