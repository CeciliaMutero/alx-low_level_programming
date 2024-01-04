#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to the file
 * @letters: number of letters it should read and print
 * Return: Always 0 (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesread;
	ssize_t byteswritten;
	char *space;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	space = (char *)malloc(letters);
	if (space == NULL)
	{
		close(fd);
		return (0);
	}
	bytesread = read(fd, space, letters);
	if (bytesread == -1)
	{
		free(space);
		close(fd);
		return (0);
	}
	byteswritten = write(STDOUT_FILENO, space, bytesread);
	if (byteswritten == -1)
	{
		free(space);
		close(fd);
		return (0);
	}
	free(space);
	close(fd);
	return (bytesread);
}
