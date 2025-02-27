#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file to be appended.
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
		length++;

		bytes_written = write(fd, text_content, length);
			if (bytes_written == -1 || bytes_written != length)
			{
				close(fd);
				return (-1);
			}
	}

	close(fd);
	return (1);
}
