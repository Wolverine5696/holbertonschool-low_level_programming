#include <stdio,h>
#include "main.h"
#include "_strlen.c"

/**
 * create_file - creates new files
 * @filename: names of the files
 * @text_content: content of all the files
 * Return: Success if 1 failure if -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int res;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	res = write(fd, text_content, strlen(text_content));
	if (res == -1)
	{
		return (-1);
	}

	return (1);
}
