#include "function_pointers.h"
/**
 *print_name - function that print the name
 *@f: pointer to the function
 *@name: name to print
 *Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
