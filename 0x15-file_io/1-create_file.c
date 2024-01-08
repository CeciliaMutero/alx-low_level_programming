#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: pointer to the file
 * @text_content: string to be written
 *
 * Return: always 0 (success)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byteswritten;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
