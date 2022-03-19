#include <stdio,h>
#include "main.h"

/**
 * create_file - creates new files
 * @filename: names of the files
 * @text_content: content of all the files
 * Return: Success if 1 failure if -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		int write;
		int text_len;

		for (text_len = 0; text_content[text_len] != '\0'; text_len++)
			;
		write = writex(fd, text_content, (text_len));
		if (write == -1)
		{
			close(fd);
			return (-1);
		}
	}
}
