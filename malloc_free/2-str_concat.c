#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two string
 *@s1: the first string to concatenate
 *@s2: the second string to concatenate
 *Return: the two strings concatenatedstr_concat
 */
char *str_concat(char *s1, char *s2)
{
	char *r;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	r = malloc(strlen(s1) + strlen(s2) + 1);
	if (r == NULL)
		return (NULL);
	strcpy(r, s1);
	strcat(r, s2);
	return (r);
}
