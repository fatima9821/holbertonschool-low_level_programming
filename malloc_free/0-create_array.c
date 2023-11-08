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
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
}
