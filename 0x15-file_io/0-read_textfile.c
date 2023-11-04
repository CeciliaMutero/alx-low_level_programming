#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: sting to be printed
 * @letters: number of letters in the string
 *
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *content;
	ssize_t bytesread, byteswritten;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	content = malloc(sizeof(char) * letters);
	if (content == NULL)
	{
		close(fd);
		return (0);
	}
	bytesread = read(fd, content, letters);
	if (bytesread == -1)
	{
		close(fd);
		free(content);
		return (0);
	}
	byteswritten = write(STDOUT_FILENO, content, bytesread);
	if (byteswritten == -1 || byteswritten != bytesread)
	{
		close(fd);
		free(content);
		return (0);
	}
	close(fd);
	free(content);
	return (byteswritten);
	}
