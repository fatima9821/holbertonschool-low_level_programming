#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: must return the index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 * else 0
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle;
	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);

			if (i < right)
				printf(", ");
		}
		printf("\n");

		middle = left + (right - left) / 2;

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
