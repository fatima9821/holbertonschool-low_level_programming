#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - a function returns to duplicated
 *@str: pointer to character
 *Return: string to duplicated
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(strlen(str) + 1);

	if (s == NULL)
		return (NULL);
	strcpy(s, str);
	return (s);
}
