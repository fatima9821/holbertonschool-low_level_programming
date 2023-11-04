#include <stdio.h>
/**
 *main - program that prints all arguments it receive
 *@argc: arguments count
 *@argv: arguments vector
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i<argc)
		printf("%s\n", argv[i++]);
	(void)argv;
	return (0);
}
