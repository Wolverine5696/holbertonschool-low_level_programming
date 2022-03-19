#include <stdio.h>
#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: array
 * @argv: character vectors
 * Return: success or failure
 */
int main(int argc, char *argv[])
{
	int fd, fdx;
	char buffer[1024];
/*
 * char BUFFER_SIZE = atoi(argv[3]);
 */
	int z;

	if (argc != 3)
	{
		printf("Usage: %s <source file> <destination file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	fdx = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fdx == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	while ((z = read(fd, buffer, 1024)) > 0)
	{
		write(fdx, buffer, 1024);
	}
	if (z == -1)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}
	close(fd);
	close(fdx);
	exit(EXIT_SUCCESS);

	return (0);
}
