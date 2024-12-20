#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 * file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	/**
	 * Check file's name
	 */

	if (filename == NULL)
		return (0);

	/**
	 * opening the file.
	 * O_CREAT : if the file doesn't exist
	 * O_WRONLY : open the file with write only permission.
	 * O_TRUNC : If the file exist, set its size to 0 bytes.
	 * S_IRUSR | S_IWUSR : the user will have read and write permissions
	 */

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
