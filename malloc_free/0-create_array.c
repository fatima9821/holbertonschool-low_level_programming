#include "main.h"
#include <stdlib.h>

/**
 *create_array -  a function that creates an array of chars
 *@size: size of array
 *@c:charactere
 *Return: pointer to array
 */
char *create_array(unsigned int size, char c)

{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
