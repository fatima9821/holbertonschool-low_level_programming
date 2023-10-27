#include "main.h"
#include <string.h>
/**
 *puts_half - prints half of a string
 *@str: string
 */
void puts_half(char *str)
{
	int len = strlen(str);

	for (len /= 2; str[len] != '\0'; len++)
	{
	putchar(str[len]);
	}
	putchar('\n');

}
