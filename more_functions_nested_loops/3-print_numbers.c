#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers
 *
 * Return: the numbers since 0 up to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	       putchar(i + '0');
	}
	putchar('\n');
}

