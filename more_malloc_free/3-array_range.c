#include "main.h"
#include <stdlib.h>
/**
 *array_range - function that creates an array
 *@min: the lower
 *@max: the upper
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int *array, x, i;

	if (min > max)
		return (NULL);

	x = max - min + 1;
	array = malloc(x * sizeof(int));

	if (array == 0)
		return (NULL);
			for (i = 0; i < x ; i++)
				array[i] = min + i;
	return (array);
}
