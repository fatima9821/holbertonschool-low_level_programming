#include "main.h"void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
#include <stdlib.h>
/**
 *create_array -  a function that creates an array of chars
 *@size: size of array
 *@c:charactere
 *Return: pointer to array
 */
char *create_array(unsigned int size, char c)

{
	char *array;
	unsigned int i;

		if (size == 0)
			return (NULL);

	array = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
}
