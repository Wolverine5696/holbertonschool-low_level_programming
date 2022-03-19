#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the filename
 * @text_content: string to append the text
 * Return: 1 if success -1 if its unsuccessful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		int leng_Text;
		int lwrite;

		for (leng_Text = 0; text_content[leng_Text] != '\0'; leng_Text++)
			;
		lwrite = write(fd, text_content, leng_Text);

		if (lwrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
