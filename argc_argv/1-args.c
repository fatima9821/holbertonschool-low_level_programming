#include <stdio.h>
/**
 *main - prints its name, followed by a new line
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
