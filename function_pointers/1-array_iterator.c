#include "function_pointers.h"
/**
 *array_iterator - executes a function on each element to int array
 *@array: a pointer to int array
 *@size: size of array
 *@action: pointer to the function to use
 *Return: Always (0)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array == NULL || action == NULL)
		return;
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
