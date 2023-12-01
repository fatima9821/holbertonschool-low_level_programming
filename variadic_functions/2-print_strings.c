#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *string;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			string = va_arg(args, char *);

			if (string == NULL)
				printf("(nil)");
			else
				printf("%s", string);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
