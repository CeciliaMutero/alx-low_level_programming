#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdarg.h>

#define CONTENT_SIZE 1024

/**
 * error_exit - Print an error message and exit with the given exit code.
 * @code: The exit code.
 * @format: The format string for the error message.
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - Copy the content of one file to another file.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 * Return: 0 on success, 97, 98, 99, or 100 on error.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytesread, byteswritten;
	char content[CONTENT_SIZE];

	if (argc != 3)
	{
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}

	while ((bytesread = read(fd_from, content, CONTENT_SIZE)) > 0)
	{
		byteswritten = write(fd_to, content, bytesread);
		if (byteswritten == -1)
		{
			error_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}

	if (bytesread == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_to);

return (0);
}
