#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: relative or absolute path of the file
 * @letters: number of letters to read and print
 *
 * Return: total number of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int readed;

	char *buff = malloc(sizeof(char) * letters);

	if (buff == NULL || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);
	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);
	free(buff);
	close(fd);
	return (readed);
}
