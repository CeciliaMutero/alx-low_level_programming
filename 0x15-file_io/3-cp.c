#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * error_exit - function to exit code
 * @code: error code
 * @format: format used
 * @argc: error message
 *
 * Return: always 0 (success)
 */
void error_exit(int code, const char *format, const char *argc)
{
	dprintf(STDERR_FILENO, format, argc);
	exit(code);
}
/**
 * main -  main
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	ssize_t byteswritten, bytesread;
	int fd1, fd2;
	char *file_from = argv[1];
	char *file_to = argv[2];
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	while ((bytesread = read(fd1, buffer, BUFFER_SIZE)) > 0)
	{
		byteswritten = write(fd2, buffer, bytesread);
		if (byteswritten == -1)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (bytesread == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	if (close(fd1) == -1)
		error_exit(100, "Error: Can't close %d\n", file_from);
	if (close(fd2) == -1)
		error_exit(100, "Error: Can't close %d\n", file_to);
return (0);
}
