#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - reads the text file and prints it to the POSIX output
 * @filename: The filename to open it
 * @letters: The number of bytes that are read
 * Return: bytes to read and write to the output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, length, printedChars;
	char *buffer;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	length = read(fd, buffer, letters);

	printedChars = write(STDOUT_FILENO, buffer, length);


	if (length == -1 || printedChars == -1)
		return (0);

	free(buffer);
	close(fd);
	return (printedChars);
}
