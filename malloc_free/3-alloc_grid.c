#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: widht of array
 * @height: height of array
 * Return: pointer to a 2 dimensional array of strings
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(s[j]);
			}
			free(s);

			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
