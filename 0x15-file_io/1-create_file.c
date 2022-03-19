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
	int ft;
	int len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);


	if (fd == -1)
		return (-1);

	len = _strlen(text_content);

	ft = write(fd, text_content, len);

	if (fd == -1 || ft == -1)
		return (-1);



	close(fd);
	return (1);

}
