#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads the text file and prints it to the POSIX output
 * @filename: The filename to open it
 * @letters: The number of bytes that are read
 * Return: bytes to read and write to the output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int Readx;
	int writex;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	Readx = read(fd, buffer, letters);

	writex = write(STDOUT_FILENO, buffer, Read);
	if (writex != Readx && writex == -1)
		return (0);
	free(buffer);
	close(fd);
	return (Readx);
}
