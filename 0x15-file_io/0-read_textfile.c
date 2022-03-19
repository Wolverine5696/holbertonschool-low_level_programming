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
	int lenRead;
	int lenWrite;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);

		if (fd == -1)
			return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	lenRead = read(fd, buffer, letters);

	lenWrite = write(STDOUT_FILENO, buffer, lenRead);


	if (lenRead == -1 || lenWrite == -1)
		return (0);
	
	free(buffer);
	close(fd);
	return (lenWrite);
}
