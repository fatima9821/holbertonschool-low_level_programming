#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content:is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, write_b = 0, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		len = strlen(text_content);
		write_b = write(file, text_content, len);

		if (write_b == -1)
		{
		close(file);
		return (-1);
		}
	}
	close(file);
	return (1);
}
