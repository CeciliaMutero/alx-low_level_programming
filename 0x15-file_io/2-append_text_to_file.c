#include "main.h"
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * append_text_to_file - function that appends
 * text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: Always 0 (success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byteswritten;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	byteswritten = write(fd, text_content, strlen(text_content));
	if (byteswritten == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}


