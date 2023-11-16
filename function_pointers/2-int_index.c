#include "function_pointers.h"

/**
 *int_index - function that returns the index of the first element
 *@array: pointer to the array
 *@size: a pointer to the function to be used to compare values
 *@cmp: a pointer to the function to be used to compare values
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
